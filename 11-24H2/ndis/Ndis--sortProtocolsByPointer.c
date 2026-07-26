/*
 * XREFs of Ndis::sortProtocolsByPointer @ 0x14014442C
 * Callers:
 *     ?insertSorted@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@P6A_NAEBV34@1@Z@Z @ 0x1401443C4 (-insertSorted@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROT.c)
 *     ?AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z @ 0x14015D340 (-AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Ndis::sortProtocolsByPointer(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(*(_QWORD *)a1 + 80LL) < *(_QWORD *)(*(_QWORD *)a2 + 80LL);
}
