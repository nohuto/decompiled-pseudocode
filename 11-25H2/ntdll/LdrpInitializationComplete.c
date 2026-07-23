/*
 * XREFs of LdrpInitializationComplete @ 0x1800D22F8
 * Callers:
 *     LdrpInitializeInternal @ 0x1800D2480 (LdrpInitializeInternal.c)
 *     _LdrpInitialize @ 0x1800D2584 (_LdrpInitialize.c)
 *     LdrpProcessInitializationComplete @ 0x18010FB00 (LdrpProcessInitializationComplete.c)
 * Callees:
 *     LdrpLogEtwEvent @ 0x180006960 (LdrpLogEtwEvent.c)
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     ZwSetEvent @ 0x1801633E0 (ZwSetEvent.c)
 */

int __fastcall LdrpInitializationComplete(volatile signed __int32 *a1, HANDLE *a2, __int16 a3)
{
  struct _PEB *v6; // rax
  __int64 v7; // r9
  __int64 v8; // rcx

  LODWORD(v6) = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)v6 )
  {
    v6 = NtCurrentPeb();
    v7 = (__int64)v6->SharedData + 554;
  }
  else
  {
    v7 = 2147353476LL;
  }
  if ( *(_BYTE *)v7 )
  {
    v6 = NtCurrentPeb();
    if ( (v6->TracingFlags & 4) != 0 )
    {
      LODWORD(v6) = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)v6 )
      {
        v6 = NtCurrentPeb();
        v8 = (__int64)v6->SharedData + 555;
      }
      else
      {
        v8 = 2147353477LL;
      }
      if ( (*(_BYTE *)v8 & 0x20) != 0 )
        LODWORD(v6) = LdrpLogEtwEvent(a3, -1LL, 255, 255, 0LL, 0LL);
    }
  }
  _InterlockedIncrement(a1);
  if ( *a2 )
    LODWORD(v6) = ZwSetEvent(*a2, 0LL);
  return (int)v6;
}
