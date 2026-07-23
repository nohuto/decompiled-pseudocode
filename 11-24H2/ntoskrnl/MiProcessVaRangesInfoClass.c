/*
 * XREFs of MiProcessVaRangesInfoClass @ 0x1409E48D4
 * Callers:
 *     MmSetPriorityVaRanges @ 0x1409E3F44 (MmSetPriorityVaRanges.c)
 *     NtSetInformationVirtualMemory @ 0x1409E3F70 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     MiWalkVaRange @ 0x14029A340 (MiWalkVaRange.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiVadSupportsPrivateCommit @ 0x1403455B0 (MiVadSupportsPrivateCommit.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     MiIsVadLarge @ 0x1404100C0 (MiIsVadLarge.c)
 *     MiMoveDirtyBitsToPfns @ 0x1404F0C98 (MiMoveDirtyBitsToPfns.c)
 */

__int64 __fastcall MiProcessVaRangesInfoClass(unsigned __int64 a1, __int128 *a2, int a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // esi
  __int64 v7; // r12
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  _DWORD *v11; // rdi
  unsigned __int64 v12; // rcx
  int v13; // r13d
  unsigned __int64 v14; // r10
  __int64 v16; // r10
  int v17; // eax
  unsigned int v18; // [rsp+30h] [rbp-58h] BYREF
  __int128 v19; // [rsp+38h] [rbp-50h]
  unsigned __int64 v20; // [rsp+90h] [rbp+8h]
  unsigned int v22; // [rsp+A8h] [rbp+20h]

  v22 = a4;
  v20 = a1;
  v18 = 0;
  v4 = 0;
  v5 = 0;
LABEL_2:
  if ( v5 < a1 )
  {
    v19 = *a2;
    v7 = *((_QWORD *)&v19 + 1);
    v8 = v19;
    while ( 1 )
    {
      v9 = v8;
      v10 = MiObtainReferencedVadEx(v8, 0LL, (int *)&v18, a4);
      v11 = (_DWORD *)v10;
      if ( !v10 )
        return v18;
      v12 = *(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32);
      v13 = 0;
      if ( ((v8 + v7 - 1) | 0xFFF) >> 12 > v12 )
      {
        v16 = (v12 << 12) | 0xFFF;
        v13 = 1;
        v7 = v8 - v16 + v7 - 1;
        v8 = v16 + 1;
      }
      if ( !(unsigned int)MiVadSupportsPrivateCommit(v10) || MiIsVadLarge((__int64)v11) )
      {
        v4 = 1073741849;
      }
      else if ( a3 == 1 )
      {
        MiWalkVaRange(v9, v14, (__int64)v11, 2LL, v22);
      }
      else
      {
        v17 = v11[12];
        if ( (v17 & 0x200000) != 0 && (v17 & 0x14000000) == 0x10000000 )
          v4 = -1073741637;
        else
          MiMoveDirtyBitsToPfns(v9, v14, 0LL, 2u);
      }
      MiUnlockAndDereferenceVad(v11);
      if ( !v13 )
      {
        a1 = v20;
        ++v5;
        ++a2;
        goto LABEL_2;
      }
    }
  }
  return v4;
}
