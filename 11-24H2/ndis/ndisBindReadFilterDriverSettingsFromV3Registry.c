/*
 * XREFs of ndisBindReadFilterDriverSettingsFromV3Registry @ 0x140143AAC
 * Callers:
 *     ndisBindReadFilterDriverFromV3Registry @ 0x140143820 (ndisBindReadFilterDriverFromV3Registry.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140051410 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x14015C650 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x14015C750 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 */

bool __fastcall ndisBindReadFilterDriverSettingsFromV3Registry(__int64 a1, __int64 a2)
{
  const struct _NETSETUPPROPKEY *v2; // rbx
  int v5; // eax
  bool v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  *(_DWORD *)(a1 + 40) = 0;
  v2 = (const struct _NETSETUPPROPKEY *)&unk_1400FDAF0;
  v7 = a2;
  while ( v2 != (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_ProtocolDriver_NoStartAtBootHint )
  {
    v6 = 0;
    if ( (unsigned int)NetSetupPropertyBag::ReadBoolean((NetSetupPropertyBag *)&v7, v2, &v6) )
      return 0;
    if ( v6 )
      *(_DWORD *)(a1 + 40) |= *((_DWORD *)v2 + 5);
    v2 = (const struct _NETSETUPPROPKEY *)((char *)v2 + 24);
  }
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)(a1 + 48), 0LL);
  v5 = NetSetupPropertyBag::ReadString(&v7, &NETSETUPPKEY_FilterDriver_Class, a1 + 48);
  return !v5 || v5 == -1073741772;
}
