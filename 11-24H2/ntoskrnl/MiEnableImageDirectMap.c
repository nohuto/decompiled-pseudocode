/*
 * XREFs of MiEnableImageDirectMap @ 0x14067BB08
 * Callers:
 *     MiCreateImageFileMap @ 0x14098DFC0 (MiCreateImageFileMap.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ObFastReplaceObject @ 0x14044674C (ObFastReplaceObject.c)
 *     MiAllocateEntireImageFileExtents @ 0x1407F021C (MiAllocateEntireImageFileExtents.c)
 *     MiDeleteFileExtentList @ 0x1407F08AC (MiDeleteFileExtentList.c)
 *     MiInitializeImageExtents @ 0x1407F0928 (MiInitializeImageExtents.c)
 */

__int64 __fastcall MiEnableImageDirectMap(__int64 a1, __int64 *a2, __int64 a3, void *a4, int a5, int a6, int a7)
{
  unsigned __int64 v8; // r15
  KIRQL v11; // r8
  __int64 v12; // rdx
  int v13; // esi
  __int64 result; // rax
  __int64 v15; // rax
  void *v16; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2[12] & 0xFFFFFFFFFFFFFFF8uLL;
  if ( !a7 && (MiFlags & 0x1000) == 0 )
  {
    if ( a5 )
    {
      if ( (*(_DWORD *)(a3 + 8) & 0xFFF) == 0 )
      {
        v11 = ExAcquireSpinLockExclusive(&dword_140E2CD40);
        v12 = **(_QWORD **)(a1 + 40);
        if ( !v12 || (*(_DWORD *)(v12 + 56) & 3) == 0 && (*(_BYTE *)(v12 + 62) & 0xC) != 4 )
          *((_BYTE *)a2 + 62) = *((_BYTE *)a2 + 62) & 0xF3 | 4;
        MiReleaseSpinLockExclusive(&dword_140E2CD40, v11);
      }
    }
    else
    {
      *((_BYTE *)a2 + 62) = *((_BYTE *)a2 + 62) & 0xF3 | 4;
    }
  }
  if ( a6 )
    *(_DWORD *)(v8 + 56) |= 0x1000u;
  if ( (*((_BYTE *)a2 + 62) & 0xC) == 4 )
  {
    a2[8] = a1;
    v13 = MiInitializeImageExtents(a2);
    ObFastReplaceObject(a2 + 8, 0LL);
    if ( v13 >= 0 )
    {
      MiDeleteFileExtentList(a4);
      return (unsigned int)v13;
    }
    if ( v13 != -1073741800 )
      return (unsigned int)v13;
    *((_BYTE *)a2 + 62) &= 0xF3u;
  }
  if ( a6 )
  {
    v15 = *a2;
    v16 = 0LL;
    result = MiAllocateEntireImageFileExtents(a1, (unsigned int)(*(_DWORD *)(v15 + 8) << 12), a4, &v16);
    if ( (int)result < 0 )
      return result;
    a4 = v16;
  }
  *(_QWORD *)(v8 + 48) = a4;
  *((_BYTE *)a2 + 62) = *((_BYTE *)a2 + 62) & 0xF3 | 8;
  return 0LL;
}
