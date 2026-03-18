/*
 * XREFs of KiTpWriteMemory @ 0x1405C506C
 * Callers:
 *     KiTpWriteBreakpoint @ 0x1405C4FF0 (KiTpWriteBreakpoint.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     KiTpWriteUmMemory @ 0x1405C5190 (KiTpWriteUmMemory.c)
 *     MmDbgCopyMemory @ 0x140674458 (MmDbgCopyMemory.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     KdExitDebugger @ 0x140B65008 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140B6A96C (KdEnterDebugger.c)
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
    KiUnstackDetachProcess((__int64)v12, 0LL);
  return (unsigned int)v8;
}
