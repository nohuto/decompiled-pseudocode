/*
 * XREFs of RIMDeleteAllAsyncWorkNotificationItems @ 0x1401EC410
 * Callers:
 *     RIMUnregisterForInput @ 0x14017BA20 (RIMUnregisterForInput.c)
 *     RawInputManagerObjectDelete @ 0x1401E35C8 (RawInputManagerObjectDelete.c)
 * Callees:
 *     RIMFreeAsyncWorkItem @ 0x140197D7C (RIMFreeAsyncWorkItem.c)
 */

void __fastcall RIMDeleteAllAsyncWorkNotificationItems(__int64 a1)
{
  const struct RawInputManagerObject *v1; // rdi
  const struct RawInputManagerObject *v2; // rbx
  const struct RawInputManagerObject **v3; // rcx

  v1 = (const struct RawInputManagerObject *)(a1 + 376);
  v2 = *(const struct RawInputManagerObject **)(a1 + 376);
  while ( v2 != v1 )
  {
    v3 = (const struct RawInputManagerObject **)v2;
    v2 = *(const struct RawInputManagerObject **)v2;
    RIMFreeAsyncWorkItem(v3);
  }
}
