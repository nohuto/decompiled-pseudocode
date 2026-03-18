/*
 * XREFs of ?CreateCoreMessagingSession@CGlobalComposition@@EEAAJPEAPEAUIMessageSession@@@Z @ 0x18026F6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGlobalComposition::CreateCoreMessagingSession(
        CGlobalComposition *this,
        struct IMessageSession **a2)
{
  return CoreUICreateEx(1LL, a2);
}
