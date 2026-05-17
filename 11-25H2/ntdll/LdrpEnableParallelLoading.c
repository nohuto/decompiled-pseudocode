/*
 * XREFs of LdrpEnableParallelLoading @ 0x18003A1C4
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlGetSuiteMask @ 0x180039850 (RtlGetSuiteMask.c)
 *     LdrpDetectDetour @ 0x18003A320 (LdrpDetectDetour.c)
 *     TpAllocPoolInternal @ 0x18003A970 (TpAllocPoolInternal.c)
 *     TpAllocWork @ 0x180046F70 (TpAllocWork.c)
 *     TpSetPoolMaxThreads @ 0x1800FA0A0 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x18010C7B0 (TpSetPoolWorkerThreadIdleTimeout.c)
 */

__int64 __fastcall LdrpEnableParallelLoading(unsigned int a1)
{
  unsigned int v2; // ebx
  int v3; // edi
  __int64 v4; // rdx
  _DWORD v6[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v7; // [rsp+28h] [rbp-48h]
  __int64 v8; // [rsp+30h] [rbp-40h]
  __int64 v9; // [rsp+38h] [rbp-38h]
  __int128 v10; // [rsp+40h] [rbp-30h]
  __int64 v11; // [rsp+50h] [rbp-20h]
  int v12; // [rsp+58h] [rbp-18h]
  int v13; // [rsp+5Ch] [rbp-14h]
  int v14; // [rsp+60h] [rbp-10h]

  v6[1] = 0;
  LdrpDetectDetour();
  if ( a1 )
  {
    v2 = a1;
    if ( a1 > 0x10 )
      v2 = 16;
  }
  else
  {
    v2 = 4;
    if ( (RtlGetSuiteMask() & 0x10000) != 0 )
      v2 = 0;
  }
  v3 = TpAllocPoolInternal(&LdrpThreadPool, 1LL);
  if ( v3 >= 0 )
  {
    TpSetPoolWorkerThreadIdleTimeout(LdrpThreadPool, -300000000LL);
    v4 = 1LL;
    if ( v2 > 1 )
      v4 = v2 - 1;
    TpSetPoolMaxThreads(LdrpThreadPool, v4);
    if ( !LdrpDetourExist && v2 > 1 )
    {
      v8 = 0LL;
      v9 = 0LL;
      v11 = 0LL;
      v12 = 0;
      v10 = 0LL;
      v7 = LdrpThreadPool;
      v6[0] = 3;
      v13 = 1;
      v14 = 72;
      return (unsigned int)TpAllocWork(&LdrpMapAndSnapWork, LdrpWorkCallback, 0LL, v6);
    }
  }
  return (unsigned int)v3;
}
