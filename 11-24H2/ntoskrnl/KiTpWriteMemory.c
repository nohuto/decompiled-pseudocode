/*
 * XREFs of KiTpWriteMemory @ 0x1405C6DC8
 * Callers:
 *     KiTpWriteBreakpoint @ 0x1405C6D4C (KiTpWriteBreakpoint.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KiTpWriteUmMemory @ 0x1405C6EEC (KiTpWriteUmMemory.c)
 *     MmDbgCopyMemory @ 0x140680E78 (MmDbgCopyMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KdExitDebugger @ 0x140B77008 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140B7C96C (KdEnterDebugger.c)
 */

__int64 __fastcall KiTpWriteMemory(_KPROCESS *a1, char a2, void *a3, __int64 a4)
{
  int v8; // ebx
  char v9; // r14
  __int64 v10; // rcx
  _OWORD v12[3]; // [rsp+30h] [rbp-68h] BYREF

  memset(v12, 0, sizeof(v12));
  if ( a1 )
    KiStackAttachProcess(a1, 0, (__int64)v12);
  if ( a2 == 1 )
  {
    v8 = KiTpWriteUmMemory(a1, a3, a4);
  }
  else if ( (KiDynamicTraceEnabled & 4) != 0 )
  {
    v8 = MmDbgCopyMemory(a3, 129);
    if ( v8 < 0 )
    {
      v9 = KdEnterDebugger(0LL, 0LL);
      v8 = MmDbgCopyMemory(a3, 133);
      if ( v8 < 0 )
        v8 = MmDbgCopyMemory(a3, 197);
      LOBYTE(v10) = v9;
      KdExitDebugger(v10);
    }
  }
  else
  {
    v8 = -1073741790;
  }
  if ( a1 )
    KiUnstackDetachProcess((__int64)v12, 0, (__int64)a3, a4);
  return (unsigned int)v8;
}
