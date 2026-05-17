/*
 * XREFs of GetShipAssertBuffer @ 0x1800E2C14
 * Callers:
 *     ShipAssert @ 0x1800E2A20 (ShipAssert.c)
 * Callees:
 *     SetAssertBufferPtrinPeb @ 0x1800E3B08 (SetAssertBufferPtrinPeb.c)
 *     ZwAllocateVirtualMemory @ 0x180161F90 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x180162050 (ZwFreeVirtualMemory.c)
 *     ZwDelayExecution @ 0x180162310 (ZwDelayExecution.c)
 */

__int64 GetShipAssertBuffer()
{
  signed __int64 v0; // rax
  __int64 v1; // rbx
  int v2; // edi
  __int64 v4; // [rsp+50h] [rbp+20h] BYREF
  unsigned __int64 v5; // [rsp+58h] [rbp+28h] BYREF
  __int64 v6; // [rsp+60h] [rbp+30h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v0 = _InterlockedCompareExchange64(&qword_1801CE230, 255LL, 0LL);
  v1 = v0;
  if ( v0 )
  {
    if ( v0 == 255 )
    {
      v6 = -1000000LL;
      v2 = 0;
      while ( 1 )
      {
        ZwDelayExecution(0LL, &v6);
        v1 = qword_1801CE230;
        if ( qword_1801CE230 != 255 )
          break;
        if ( ++v2 >= 5 )
        {
          if ( v2 == 5 )
          {
            v1 = 238LL;
            _InterlockedCompareExchange64(&qword_1801CE230, 238LL, 255LL);
          }
          break;
        }
      }
    }
  }
  else
  {
    v5 = 0x2000LL;
    if ( (int)ZwAllocateVirtualMemory(-1LL, &v4, 0LL, &v5, 4096, 4) >= 0
      && v5 >= 0x2000
      && (int)SetAssertBufferPtrinPeb(v4) >= 0 )
    {
      _InterlockedExchange64(&qword_1801CE230, v4);
      return v4;
    }
  }
  if ( v4 )
    ZwFreeVirtualMemory(-1LL, &v4, &v5, 0x8000LL);
  return v1;
}
