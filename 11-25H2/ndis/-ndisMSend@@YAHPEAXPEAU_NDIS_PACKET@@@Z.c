/*
 * XREFs of ?ndisMSend@@YAHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1400DF640
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMSendPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400DF710 (-ndisMSendPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 */

__int64 __fastcall ndisMSend(void *a1, struct _NDIS_PACKET *a2)
{
  struct _NDIS_PACKET *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  ndisMSendPackets(a1, &v3, 1u);
  return 259LL;
}
