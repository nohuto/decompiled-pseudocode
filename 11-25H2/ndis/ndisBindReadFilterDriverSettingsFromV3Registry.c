/*
 * XREFs of ndisBindReadFilterDriverSettingsFromV3Registry @ 0x14014E76C
 * Callers:
 *     ndisBindReadFilterDriverFromV3Registry @ 0x14014E4E0 (ndisBindReadFilterDriverFromV3Registry.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x14006CDB0 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1401695A0 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1401696A0 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 */

bool __fastcall ndisBindReadFilterDriverSettingsFromV3Registry(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  int v5; // eax
  bool v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  *(_DWORD *)(a1 + 40) = 0;
  v2 = (__int64 *)&unk_140106BB0;
  v7 = a2;
  while ( v2 != &NETSETUPPKEY_ProtocolDriver_NoStartAtBootHint )
  {
    v6 = 0;
    if ( (unsigned int)NetSetupPropertyBag::ReadBoolean(
                         (NetSetupPropertyBag *)&v7,
                         (const struct _NETSETUPPROPKEY *)v2,
                         &v6) )
      return 0;
    if ( v6 )
      *(_DWORD *)(a1 + 40) |= *((_DWORD *)v2 + 5);
    v2 += 3;
  }
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)(a1 + 48), 0LL);
  v5 = NetSetupPropertyBag::ReadString(&v7, &NETSETUPPKEY_FilterDriver_Class, a1 + 48);
  return !v5 || v5 == -1073741772;
}
