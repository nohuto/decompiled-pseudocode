/*
 * XREFs of LdrpInitializeInternal @ 0x180066800
 * Callers:
 *     LdrpInitialize @ 0x1800973E8 (LdrpInitialize.c)
 * Callees:
 *     LdrpInitializeHotPatching @ 0x1800663E8 (LdrpInitializeHotPatching.c)
 *     LdrpLoadPatchedNtdll @ 0x180066450 (LdrpLoadPatchedNtdll.c)
 *     LdrpInitializationComplete @ 0x180066678 (LdrpInitializationComplete.c)
 *     LdrpWaitForInitializationComplete @ 0x180066750 (LdrpWaitForInitializationComplete.c)
 *     _LdrpInitialize @ 0x180066904 (_LdrpInitialize.c)
 *     ZwCreateEvent @ 0x180162590 (ZwCreateEvent.c)
 */

struct _TEB *__fastcall LdrpInitializeInternal(__int64 a1, __int64 a2)
{
  struct _TEB *result; // rax
  signed __int32 v5; // eax
  signed __int32 v6; // ebx
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  v7 = 0LL;
  result = NtCurrentTeb();
  if ( (result->SameTebFlags & 0x4000) == 0 )
  {
    v5 = _InterlockedCompareExchange(&LdrpHotPatchInitialized, 1, 0);
    v6 = v5;
    if ( v5 )
    {
      if ( v5 == 1 )
        LdrpWaitForInitializationComplete(&LdrpHotPatchInitialized, &LdrpHotPatchInitCompleteEvent);
    }
    else
    {
      ZwCreateEvent(&LdrpHotPatchInitCompleteEvent, 2031619LL, 0LL, 0LL, 0);
      LdrpInitializeHotPatching();
      LdrpNtdllHotPatchContext = (__int64)&v7;
      v7 = 0LL;
      if ( LdrpIsHotPatchingEnabled )
        DWORD2(v7) = LdrpLoadPatchedNtdll(a2, (__int64 *)&v7);
      LdrpInitializationComplete(&LdrpHotPatchInitialized, &LdrpHotPatchInitCompleteEvent, 0x1488u);
    }
    result = (struct _TEB *)LdrpInitialize(a1, a2);
    if ( !v6 )
      LdrpNtdllHotPatchContext = 0LL;
  }
  return result;
}
