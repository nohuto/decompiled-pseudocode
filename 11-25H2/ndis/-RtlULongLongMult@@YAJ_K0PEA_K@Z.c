/*
 * XREFs of ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x140079E30
 * Callers:
 *     ?reserve@?$KArray@UEtwProtocolBind@@$00@Rtl@@QEAA_N_K@Z @ 0x1400016DC (-reserve@-$KArray@UEtwProtocolBind@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ?reserve@?$KArray@UEtwMiniportEvent@@$00@Rtl@@QEAA_N_K@Z @ 0x140001794 (-reserve@-$KArray@UEtwMiniportEvent@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ?reserve@?$KArray@_W$00@Rtl@@QEAA_N_K@Z @ 0x140001850 (-reserve@-$KArray@_W$00@Rtl@@QEAA_N_K@Z.c)
 *     ?reserve@?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x140002D24 (-reserve@-$KArray@V-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@$0.c)
 *     ?reserve@?$KArray@V?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@QEAA_N_K@Z @ 0x140002EB8 (-reserve@-$KArray@V-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ?reserve@?$KArray@V?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@$00@Rtl@@QEAA_N_K@Z @ 0x140002FB4 (-reserve@-$KArray@V-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ?reserve@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z @ 0x1400030B0 (-reserve@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ?reserve@?$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N_K@Z @ 0x14000316C (-reserve@-$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ?reserve@?$KArray@UProtocolBindProperties@@$00@Rtl@@QEAA_N_K@Z @ 0x1400032DC (-reserve@-$KArray@UProtocolBindProperties@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x140089090 (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK.c)
 *     ?reserve@?$KArray@UKnobDescriptor@@$00@Rtl@@QEAA_N_K@Z @ 0x14008E8F0 (-reserve@-$KArray@UKnobDescriptor@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x140090830 (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_.c)
 *     ?Create@KHistogram@@SAPEAV1@_K0K@Z @ 0x1401437F0 (-Create@KHistogram@@SAPEAV1@_K0K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlULongLongMult(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  if ( is_mul_ok(a1, a2) )
  {
    *a3 = a1 * a2;
    return 0LL;
  }
  else
  {
    *a3 = -1LL;
    return 3221225621LL;
  }
}
