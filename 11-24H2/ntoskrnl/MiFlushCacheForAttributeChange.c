/*
 * XREFs of MiFlushCacheForAttributeChange @ 0x14039CF08
 * Callers:
 *     MiFlushCacheRange @ 0x14068FD90 (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x140C5C468 (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14039D0A4 (MiFlushEntireTbDueToAttributeChange.c)
 *     KeInvalidateAllCaches @ 0x14039D290 (KeInvalidateAllCaches.c)
 */

void __fastcall MiFlushCacheForAttributeChange(
        _QWORD *MmInternal,
        LONGLONG CFlushSize,
        unsigned __int64 a3,
        _QWORD *a4)
{
  int v5; // r14d
  LONGLONG v6; // r15
  __int64 v7; // r12
  LARGE_INTEGER v8; // rdi
  int v9; // ebx
  unsigned int v10; // ebx
  unsigned __int64 v11; // rsi
  LARGE_INTEGER v13; // rax
  __int128 v14; // rtt
  LARGE_INTEGER v15; // rcx
  signed __int32 v16[8]; // [rsp+0h] [rbp-68h] BYREF
  LARGE_INTEGER v17; // [rsp+20h] [rbp-48h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+78h] [rbp+10h] BYREF
  signed __int32 v19; // [rsp+80h] [rbp+18h] BYREF

  v5 = a3;
  v6 = CFlushSize;
  v7 = (__int64)MmInternal;
  v8.QuadPart = 0LL;
  v9 = 2;
  if ( (_DWORD)a3 != 2 )
    v9 = 0;
  if ( CFlushSize )
  {
    v10 = v9 | 0xC0000000;
    do
    {
      v11 = MiMapPageInHyperSpaceWorker(v7, 0LL, v10);
      if ( a4 )
      {
        PerformanceFrequency.QuadPart = 0LL;
        v8 = KeQueryPerformanceCounter(&PerformanceFrequency);
        if ( PerformanceFrequency.QuadPart != 10000000 )
          v8.QuadPart = 10000000 * v8.QuadPart / PerformanceFrequency.QuadPart;
        _InterlockedOr(v16, 0);
      }
      if ( (unsigned int)KiLargestCacheSize > 0x1000 )
      {
        a3 = v11 + 4096;
        CFlushSize = KeGetCurrentPrcb()->CFlushSize;
        _RCX = (char *)(v11 & ~(CFlushSize - 1));
        if ( _bittest64(&KeFeatureBits, 0x23u) )
        {
          do
          {
            __asm { clflushopt byte ptr [rcx] }
            _RCX += CFlushSize;
          }
          while ( (unsigned __int64)_RCX < a3 );
          _InterlockedOr(&v19, 0);
        }
        else
        {
          do
          {
            _mm_clflush(_RCX);
            _RCX += CFlushSize;
          }
          while ( (unsigned __int64)_RCX < a3 );
        }
      }
      else
      {
        KeInvalidateAllCaches();
      }
      if ( a4 )
      {
        _InterlockedOr(v16, 0);
        v17.QuadPart = 0LL;
        v13 = KeQueryPerformanceCounter(&v17);
        if ( v17.QuadPart != 10000000 )
        {
          v14 = 10000000 * v13.QuadPart;
          v13.QuadPart = 10000000 * v13.QuadPart / v17.QuadPart;
          CFlushSize = v14 % v17.QuadPart;
        }
        v15 = v8;
        if ( v13.QuadPart >= (unsigned __int64)v8.QuadPart )
          v15 = v13;
        *a4 += v15.QuadPart - v8.QuadPart;
      }
      ++v7;
      MmInternal = KeGetCurrentPrcb()->MmInternal;
      *MmInternal = 0LL;
      *(_QWORD *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
      --v6;
    }
    while ( v6 );
  }
  if ( v5 == 3 )
    MiFlushEntireTbDueToAttributeChange(MmInternal, CFlushSize, a3, a4);
}
