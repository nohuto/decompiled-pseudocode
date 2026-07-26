/*
 * XREFs of ??_G?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1400634F0
 * Callers:
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x140074B10 (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_.c)
 *     ?moveElements@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAAXKKK@Z @ 0x14015EB40 (-moveElements@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROT.c)
 *     ??1BindStack@Ndis@@QEAA@XZ @ 0x1401657E0 (--1BindStack@Ndis@@QEAA@XZ.c)
 * Callees:
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x14015E250 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x14015E2C0 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 */

NDIS_BIND_LINK_BASE **__fastcall wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>::`scalar deleting destructor'(
        NDIS_BIND_LINK_BASE **a1,
        __int64 a2,
        __int64 a3)
{
  NDIS_BIND_LINK_BASE *v3; // rbx

  v3 = *a1;
  *a1 = 0LL;
  if ( v3 )
  {
    KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(&v3[1], a2, a3);
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v3);
    ExFreePoolWithTag(v3, 0x4C745042u);
  }
  return a1;
}
