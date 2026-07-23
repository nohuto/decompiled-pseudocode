/*
 * XREFs of GetShipAssertBuffer @ 0x1800DF8C4
 * Callers:
 *     ShipAssert @ 0x1800DF6D0 (ShipAssert.c)
 * Callees:
 *     SetAssertBufferPtrinPeb @ 0x1800E07B8 (SetAssertBufferPtrinPeb.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1801635E0 (ZwFreeVirtualMemory.c)
 *     ZwDelayExecution @ 0x1801638A0 (ZwDelayExecution.c)
 */

PVOID GetShipAssertBuffer()
{
  signed __int64 v0; // rax
  __int64 v1; // rbx
  int v2; // edi
  PVOID BaseAddress; // [rsp+50h] [rbp+20h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp+28h] BYREF
  LARGE_INTEGER DelayInterval; // [rsp+60h] [rbp+30h] BYREF

  BaseAddress = 0LL;
  RegionSize = 0LL;
  v0 = _InterlockedCompareExchange64(&qword_1801D0230, 255LL, 0LL);
  v1 = v0;
  if ( v0 )
  {
    if ( v0 == 255 )
    {
      DelayInterval.QuadPart = -1000000LL;
      v2 = 0;
      while ( 1 )
      {
        ZwDelayExecution(0, &DelayInterval);
        v1 = qword_1801D0230;
        if ( qword_1801D0230 != 255 )
          break;
        if ( ++v2 >= 5 )
        {
          if ( v2 == 5 )
          {
            v1 = 238LL;
            _InterlockedCompareExchange64(&qword_1801D0230, 238LL, 255LL);
          }
          break;
        }
      }
    }
  }
  else
  {
    RegionSize = 0x2000LL;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) >= 0
      && RegionSize >= 0x2000
      && (int)SetAssertBufferPtrinPeb(BaseAddress) >= 0 )
    {
      _InterlockedExchange64(&qword_1801D0230, (__int64)BaseAddress);
      return BaseAddress;
    }
  }
  if ( BaseAddress )
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  return (PVOID)v1;
}
