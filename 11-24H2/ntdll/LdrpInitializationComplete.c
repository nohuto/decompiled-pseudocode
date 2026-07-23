/*
 * XREFs of LdrpInitializationComplete @ 0x1800AE858
 * Callers:
 *     LdrpInitializeInternal @ 0x1800AE9E0 (LdrpInitializeInternal.c)
 *     _LdrpInitialize @ 0x1800AEAE4 (_LdrpInitialize.c)
 *     LdrpProcessInitializationComplete @ 0x180108090 (LdrpProcessInitializationComplete.c)
 * Callees:
 *     LdrpLogEtwEvent @ 0x180030140 (LdrpLogEtwEvent.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     ZwSetEvent @ 0x180160210 (ZwSetEvent.c)
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
