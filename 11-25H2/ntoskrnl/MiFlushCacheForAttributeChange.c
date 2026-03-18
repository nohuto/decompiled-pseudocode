/*
 * XREFs of MiFlushCacheForAttributeChange @ 0x14026F3B4
 * Callers:
 *     MiFlushCacheRange @ 0x1406833D0 (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x140C48FA8 (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14026F550 (MiFlushEntireTbDueToAttributeChange.c)
 *     KeInvalidateAllCaches @ 0x14026F5F0 (KeInvalidateAllCaches.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 */

void __fastcall MiFlushCacheForAttributeChange(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v6; // r15
  LARGE_INTEGER v8; // rdi
  int v9; // ebx
  unsigned int v10; // ebx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r8
  __int64 CFlushSize; // rdx
  LARGE_INTEGER v15; // rax
  LARGE_INTEGER v16; // rcx
  signed __int32 v17[8]; // [rsp+0h] [rbp-68h] BYREF
  LARGE_INTEGER v18; // [rsp+20h] [rbp-48h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+78h] [rbp+10h] BYREF
  signed __int32 v20; // [rsp+80h] [rbp+18h] BYREF

  v6 = a2;
  v8.QuadPart = 0LL;
  v9 = 2;
  if ( a3 != 2 )
    v9 = 0;
  if ( a2 )
  {
    v10 = v9 | 0xC0000000;
    do
    {
      v11 = MiMapPageInHyperSpaceWorker(a1, 0LL, v10);
      if ( a4 )
      {
        PerformanceFrequency.QuadPart = 0LL;
        v8 = KeQueryPerformanceCounter(&PerformanceFrequency);
        if ( PerformanceFrequency.QuadPart != 10000000 )
          v8.QuadPart = 10000000 * v8.QuadPart / PerformanceFrequency.QuadPart;
        _InterlockedOr(v17, 0);
      }
      if ( (unsigned int)KiLargestCacheSize > 0x1000 )
      {
        v12 = v11 + 4096;
        CFlushSize = KeGetCurrentPrcb()->CFlushSize;
        _RCX = (char *)(v11 & ~(CFlushSize - 1));
        if ( _bittest64(&KeFeatureBits, 0x23u) )
        {
          do
          {
            __asm { clflushopt byte ptr [rcx] }
            _RCX += CFlushSize;
          }
          while ( (unsigned __int64)_RCX < v12 );
          _InterlockedOr(&v20, 0);
        }
        else
        {
          do
          {
            _mm_clflush(_RCX);
            _RCX += CFlushSize;
          }
          while ( (unsigned __int64)_RCX < v12 );
        }
      }
      else
      {
        KeInvalidateAllCaches();
      }
      if ( a4 )
      {
        _InterlockedOr(v17, 0);
        v18.QuadPart = 0LL;
        v15 = KeQueryPerformanceCounter(&v18);
        if ( v18.QuadPart != 10000000 )
          v15.QuadPart = 10000000 * v15.QuadPart / v18.QuadPart;
        v16 = v8;
        if ( v15.QuadPart >= (unsigned __int64)v8.QuadPart )
          v16 = v15;
        *a4 += v16.QuadPart - v8.QuadPart;
      }
      ++a1;
      *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
      *(_QWORD *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
      --v6;
    }
    while ( v6 );
  }
  if ( a3 == 3 )
    MiFlushEntireTbDueToAttributeChange();
}
