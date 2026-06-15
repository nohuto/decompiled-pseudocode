/*
 * XREFs of ?ProviderId@DummyBroadcastProvider@@UEAA?AU_GUID@@XZ @ 0x1800F7DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall DummyBroadcastProvider::ProviderId(
        DummyBroadcastProvider *this,
        struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = DUMMY_MULTICAST_PROVIDER;
  return result;
}
