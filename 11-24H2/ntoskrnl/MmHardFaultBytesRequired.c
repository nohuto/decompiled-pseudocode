/*
 * XREFs of MmHardFaultBytesRequired @ 0x1409891F0
 * Callers:
 *     CcFetchDataForRead @ 0x140237680 (CcFetchDataForRead.c)
 * Callees:
 *     MiGetSystemCacheReverseMap @ 0x1403559C0 (MiGetSystemCacheReverseMap.c)
 */

__int64 __fastcall MmHardFaultBytesRequired(__int64 a1)
{
  __int64 SystemCacheReverseMap; // rax
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rdx
  unsigned __int64 i; // rax
  __int64 v8; // rdx
  _QWORD *v9; // r8
  _QWORD *v10; // r9

  SystemCacheReverseMap = MiGetSystemCacheReverseMap(a1 & 0xFFFFFFFFFFFC0000uLL);
  v4 = *(_QWORD *)(SystemCacheReverseMap + 24) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (*(_QWORD *)(SystemCacheReverseMap + 24) & 1) == 0 )
    v4 = *(_QWORD *)(SystemCacheReverseMap + 24);
  v5 = (v2 + (unsigned __int64)(v3 & 0xFFF) + 4095) >> 12;
  v6 = *(unsigned int *)(v4 + 44);
  for ( i = v3 / 4096 - (*(unsigned int *)(v4 + 36) | ((unsigned __int64)(*(_DWORD *)(v4 + 32) & 0xFFC0) << 26));
        i >= v6;
        v6 = *(unsigned int *)(v4 + 44) )
  {
    v4 = *(_QWORD *)(v4 + 16);
    i -= v6;
  }
  v8 = *(_QWORD *)(v4 + 8);
  v9 = (_QWORD *)(v8 + 8 * i);
  v10 = (_QWORD *)(v8 + 8LL * *(unsigned int *)(v4 + 44));
  while ( v5 )
  {
    if ( v9 >= v10 )
    {
      v4 = *(_QWORD *)(v4 + 16);
      v9 = *(_QWORD **)(v4 + 8);
      v10 = &v9[*(unsigned int *)(v4 + 44)];
    }
    if ( (*v9 & 0x401LL) == 0x400 )
      return 1LL;
    ++v9;
    --v5;
  }
  return 0LL;
}
