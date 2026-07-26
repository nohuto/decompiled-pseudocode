/*
 * XREFs of ?InitializeBase@?$KWaitEventBase@U?$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@IEAAXXZ @ 0x140141030
 * Callers:
 *     ?ndisStackExpansionAddProcessor@@YAXK@Z @ 0x1400CBAE4 (-ndisStackExpansionAddProcessor@@YAXK@Z.c)
 *     DriverEntry @ 0x140196234 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall KWaitEventBase<wistd::integral_constant<enum _EVENT_TYPE,0>>::InitializeBase(struct _KEVENT *a1)
{
  KeInitializeEvent(a1, NotificationEvent, 0);
}
