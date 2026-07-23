/*
 * XREFs of PspTrySetProcessPebThrottlingFlags @ 0x140775620
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall PspTrySetProcessPebThrottlingFlags(_KPROCESS *a1, char a2)
{
  __int64 v4; // r9
  __int64 Blink; // r8
  __int64 v6; // rax
  __int64 *ReadyTime; // rcx
  _OWORD v9[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v9, 0, sizeof(v9));
  KiStackAttachProcess(a1, 0, (__int64)v9);
  Blink = (__int64)a1[1].ProcessListEntry.Blink;
  if ( Blink )
  {
    v6 = 0LL;
    ReadyTime = (__int64 *)a1[1].ReadyTime;
    if ( ReadyTime )
      v6 = *ReadyTime;
    if ( a2 )
    {
      _InterlockedOr((volatile signed __int32 *)(Blink + 80), 0x60u);
      if ( v6 )
        _InterlockedOr((volatile signed __int32 *)(v6 + 40), 0x60u);
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)(Blink + 80), 0xFFFFFFBF);
      if ( v6 )
        _InterlockedAnd((volatile signed __int32 *)(v6 + 40), 0xFFFFFFBF);
    }
  }
  return KiUnstackDetachProcess((__int64)v9, 0, Blink, v4);
}
