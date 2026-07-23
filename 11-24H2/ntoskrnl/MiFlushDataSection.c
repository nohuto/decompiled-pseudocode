/*
 * XREFs of MiFlushDataSection @ 0x14047F468
 * Callers:
 *     MiCreateImageFileMap @ 0x14098DFC0 (MiCreateImageFileMap.c)
 * Callees:
 *     MmFlushSection @ 0x140208E14 (MmFlushSection.c)
 *     CcFlushCachePriv @ 0x1402771F0 (CcFlushCachePriv.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     MiLockSectionControlArea @ 0x1402BED40 (MiLockSectionControlArea.c)
 */

__int64 __fastcall MiFlushDataSection(__int64 a1, _DWORD *a2)
{
  _QWORD *v4; // rcx
  __int64 result; // rax
  int v6; // ebx
  const void *v7; // rcx
  __int128 v8; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int8 v9; // [rsp+60h] [rbp+8h] BYREF

  *a2 = 0;
  v9 = 0;
  v4 = *(_QWORD **)(a1 + 40);
  v8 = 0LL;
  result = MiLockSectionControlArea(v4, 1, &v9);
  if ( result )
  {
    if ( *(_DWORD *)(result + 92) || *(_QWORD *)(result + 112) > 1uLL )
      *a2 = 1;
    v6 = *(_DWORD *)(result + 88);
    MiReleaseSpinLockExclusive((_DWORD *)(result + 72), v9);
    v7 = *(const void **)(a1 + 40);
    if ( v6 )
    {
      CcFlushCachePriv(v7, (__int64)&CcFlushForImageSection, 0, 0LL, 0, &v8, 0LL);
      return (unsigned int)v8;
    }
    else
    {
      return MmFlushSection((int)v7, 0LL, 0LL, 0LL, &v8, 1);
    }
  }
  return result;
}
