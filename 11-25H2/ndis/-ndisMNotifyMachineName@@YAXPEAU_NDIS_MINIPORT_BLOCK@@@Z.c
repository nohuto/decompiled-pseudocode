/*
 * XREFs of ?ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401736E0
 * Callers:
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401846F0 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x140186B80 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x14006CDB0 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x140168E70 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEB_WAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x140173E10 (-QueryValueString@KRegKey@@QEAAJPEB_WAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@R.c)
 *     ?ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z @ 0x140174760 (-ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z.c)
 */

void __fastcall ndisMNotifyMachineName(struct _NDIS_MINIPORT_BLOCK *a1)
{
  HANDLE v2; // rcx
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF
  void **v4; // [rsp+58h] [rbp+10h] BYREF

  if ( a1->MediaType == NdisMedium802_3
    && (a1->Flags & 0x80u) == 0
    && a1->MajorNdisVersion <= 6u
    && (a1->MajorNdisVersion != 6 || a1->MinorNdisVersion < 0x51u)
    && !RtlIsStateSeparationEnabled() )
  {
    Handle = 0LL;
    if ( !KRegKey::Open(
            (KRegKey *)&Handle,
            1u,
            L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\Tcpip\\Parameters",
            0LL) )
    {
      v4 = 0LL;
      if ( !(unsigned int)KRegKey::QueryValueString(&Handle, L"HostName", &v4) )
      {
        ndisMDoMiniportOp(a1, 0, 0x1021Au, v4[1], *(unsigned __int16 *)v4, 1, 0);
        wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&v4, 0LL);
        v2 = Handle;
        if ( !Handle )
          return;
        goto LABEL_13;
      }
      wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&v4, 0LL);
    }
    v2 = Handle;
    if ( !Handle )
      return;
LABEL_13:
    ZwClose(v2);
  }
}
