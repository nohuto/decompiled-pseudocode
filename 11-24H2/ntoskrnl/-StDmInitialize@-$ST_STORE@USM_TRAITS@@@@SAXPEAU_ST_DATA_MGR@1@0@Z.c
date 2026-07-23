/*
 * XREFs of ?StDmInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z @ 0x14045455C
 * Callers:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140454400 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     SmHpChunkHeapInitialize @ 0x140454824 (SmHpChunkHeapInitialize.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

unsigned __int64 __fastcall ST_STORE<SM_TRAITS>::StDmInitialize(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  _DWORD *v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned __int64 result; // rax
  int v10; // [rsp+50h] [rbp+8h] BYREF
  int v11; // [rsp+54h] [rbp+Ch]
  LARGE_INTEGER PerformanceFrequency; // [rsp+58h] [rbp+10h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  memset_0((void *)(a1 + 192), 0, 0x860uLL);
  v10 = 12;
  *(_OWORD *)a1 = 0LL;
  v11 = 4;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_OWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_OWORD *)(a1 + 88) = 0LL;
  *(_OWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_OWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_OWORD *)(a1 + 152) = 0LL;
  *(_OWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  SmHpChunkHeapInitialize(a1 + 192, &v10);
  memset_0((void *)(a1 + 1760), 0, 0x60uLL);
  *(_QWORD *)(a1 + 1832) = a1 + 1824;
  *(_QWORD *)(a1 + 1824) = 0LL;
  *(_DWORD *)(a1 + 1812) = (__int64)(KeMaximumIncrement
                                   * (unsigned __int64)(unsigned int)((__int64)MEMORY[0xFFFFF78000000320] >> 12)) >> 17;
  *(_DWORD *)(a1 + 1856) = 0;
  *(_QWORD *)(a1 + 1888) = a2;
  memset_0((void *)(a1 + 1896), 0, 0x60uLL);
  *(_QWORD *)(a1 + 1968) = a1 + 1960;
  *(_QWORD *)(a1 + 1960) = 0LL;
  *(_DWORD *)(a1 + 1948) = (__int64)(KeMaximumIncrement
                                   * (unsigned __int64)(unsigned int)((__int64)MEMORY[0xFFFFF78000000320] >> 12)) >> 17;
  *(_DWORD *)(a1 + 1992) = 1;
  *(_QWORD *)(a1 + 2024) = a2;
  memset_0((void *)(a1 + 2032), 0, 0x60uLL);
  *(_QWORD *)(a1 + 2104) = a1 + 2096;
  *(_QWORD *)(a1 + 2096) = 0LL;
  *(_DWORD *)(a1 + 2084) = (__int64)(KeMaximumIncrement
                                   * (unsigned __int64)(unsigned int)((__int64)MEMORY[0xFFFFF78000000320] >> 12)) >> 17;
  *(_DWORD *)(a1 + 1992) = 2;
  *(_QWORD *)(a1 + 2144) = 0LL;
  *(_QWORD *)(a1 + 2152) = 0LL;
  v4 = 6LL;
  *(_QWORD *)(a1 + 2136) = 0LL;
  *(_QWORD *)(a1 + 2008) = 0x20000000LL;
  *(_QWORD *)(a1 + 2000) = 0x20000000LL;
  v5 = a1 + 1488;
  *(_QWORD *)(a1 + 2024) = a2;
  *(_QWORD *)(a1 + 1872) = 1LL;
  *(_QWORD *)(a1 + 1880) = 0x1FFFFFFFLL;
  *(_QWORD *)(a1 + 1864) = 1LL;
  *(_QWORD *)(a1 + 2016) = 0x3FFFFFFFLL;
  *(_QWORD *)(a1 + 16) = a1 + 1760;
  *(_QWORD *)(a1 + 80) = a1 + 1896;
  *(_QWORD *)(a1 + 144) = a1 + 2032;
  do
  {
    *(_OWORD *)v5 = 0LL;
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_DWORD *)v5 = -1;
    v5 += 24LL;
    --v4;
  }
  while ( v4 );
  v6 = (_DWORD *)(a1 + 1632);
  v7 = 8LL;
  do
  {
    *v6 = -1;
    v6 += 4;
    --v7;
  }
  while ( v7 );
  v8 = *(_DWORD *)(a1 + 864) & 0xFFFFFFFE;
  *(_DWORD *)(a1 + 872) = 4;
  *(_BYTE *)(a1 + 776) = 2;
  *(_DWORD *)(a1 + 864) = v8 | 6;
  *(_DWORD *)(a1 + 1408) = -10001;
  KeQueryPerformanceCounter(&PerformanceFrequency);
  result = (unsigned __int64)((unsigned __int128)(10000 * PerformanceFrequency.QuadPart * (__int128)0x431BDE82D7B634DBLL) >> 64) >> 63;
  *(_DWORD *)(a1 + 1392) = 10000 * PerformanceFrequency.QuadPart / 1000000;
  return result;
}
