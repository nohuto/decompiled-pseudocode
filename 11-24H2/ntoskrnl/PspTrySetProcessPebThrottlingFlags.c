/*
 * XREFs of PspTrySetProcessPebThrottlingFlags @ 0x140775400
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall PspTrySetProcessPebThrottlingFlags(_KPROCESS *a1, char a2)
{
  struct _LIST_ENTRY *Blink; // r8
  __int64 v5; // rax
  __int64 *ReadyTime; // rcx
  _OWORD v8[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v8, 0, sizeof(v8));
  KiStackAttachProcess(a1, 0, (__int64)v8);
  Blink = a1[1].ProcessListEntry.Blink;
  if ( Blink )
  {
    v5 = 0LL;
    ReadyTime = (__int64 *)a1[1].ReadyTime;
    if ( ReadyTime )
      v5 = *ReadyTime;
    if ( a2 )
    {
      _InterlockedOr((volatile signed __int32 *)&Blink[5], 0x60u);
      if ( v5 )
        _InterlockedOr((volatile signed __int32 *)(v5 + 40), 0x60u);
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)&Blink[5], 0xFFFFFFBF);
      if ( v5 )
        _InterlockedAnd((volatile signed __int32 *)(v5 + 40), 0xFFFFFFBF);
    }
  }
  return KiUnstackDetachProcess((__int64)v8, 0);
}
