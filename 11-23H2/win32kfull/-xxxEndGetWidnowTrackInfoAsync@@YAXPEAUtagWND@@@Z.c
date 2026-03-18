/*
 * XREFs of ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1C0093210
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0125980 (xxxProcessEventMessage.c)
 * Callees:
 *     ?TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z @ 0x1C0093274 (-TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00EA700 (xxxInitSendValidateMinMaxInfoEx.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

void __fastcall xxxEndGetWidnowTrackInfoAsync(struct tagWND *a1)
{
  const struct tagMINMAXINFO *v2; // r8
  _OWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+40h] [rbp-18h]

  v4 = 0LL;
  memset(v3, 0, sizeof(v3));
  xxxInitSendValidateMinMaxInfoEx(a1);
  NotifyShell::TrackedWindowTrackingInfo(a1, (struct tagWND *)v3, v2);
}
