/*
 * XREFs of LdrpInitializationComplete @ 0x180066678
 * Callers:
 *     LdrpInitializeInternal @ 0x180066800 (LdrpInitializeInternal.c)
 *     _LdrpInitialize @ 0x180066904 (_LdrpInitialize.c)
 *     LdrpProcessInitializationComplete @ 0x18010D0D0 (LdrpProcessInitializationComplete.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x18009B2F0 (LdrpLogEtwEvent.c)
 *     ZwSetEvent @ 0x180161E50 (ZwSetEvent.c)
 */

unsigned int *__fastcall LdrpInitializationComplete(volatile signed __int32 *a1, _QWORD *a2, unsigned __int16 a3)
{
  unsigned int *result; // rax
  __int64 v7; // r9
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rcx

  result = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)result )
  {
    result = (unsigned int *)NtCurrentPeb();
    v7 = *((_QWORD *)result + 18) + 554LL;
  }
  else
  {
    v7 = 2147353476LL;
  }
  if ( *(_BYTE *)v7 )
  {
    result = (unsigned int *)NtCurrentPeb();
    if ( (result[222] & 4) != 0 )
    {
      result = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)result )
      {
        result = (unsigned int *)NtCurrentPeb();
        v10 = *((_QWORD *)result + 18) + 555LL;
      }
      else
      {
        v10 = 2147353477LL;
      }
      if ( (*(_BYTE *)v10 & 0x20) != 0 )
      {
        LOBYTE(v9) = -1;
        LOBYTE(v8) = -1;
        result = (unsigned int *)LdrpLogEtwEvent(a3, -1, v8, v9, 0LL, 0LL);
      }
    }
  }
  _InterlockedIncrement(a1);
  if ( *a2 )
    return (unsigned int *)ZwSetEvent(*a2, 0LL);
  return result;
}
