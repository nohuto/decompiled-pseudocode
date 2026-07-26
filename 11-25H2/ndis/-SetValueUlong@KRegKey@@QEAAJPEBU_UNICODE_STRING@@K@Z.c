/*
 * XREFs of ?SetValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@K@Z @ 0x14014D388
 * Callers:
 *     ?SetValueUlong@KRegKey@@QEAAJPEB_WK@Z @ 0x140140FE0 (-SetValueUlong@KRegKey@@QEAAJPEB_WK@Z.c)
 *     ?ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140149814 (-ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x140167390 (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall KRegKey::SetValueUlong(KRegKey *this, struct _UNICODE_STRING *a2, int a3)
{
  int v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return ZwSetValueKey(this->m_ptr, a2, 0, 4u, &v4, 4u);
}
