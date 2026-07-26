/*
 * XREFs of ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x14015C650
 * Callers:
 *     ndisBindReadFilterDriverSettingsFromV3Registry @ 0x140143AAC (ndisBindReadFilterDriverSettingsFromV3Registry.c)
 *     ?ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z @ 0x140146018 (-ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z.c)
 *     ?ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x140146924 (-ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x1401479DC (ndisIfUpdateIfBlockFromPersistedState.c)
 *     ?Open@InterfaceProfileKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x14015AC50 (-Open@InterfaceProfileKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x14015B800 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140051410 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     RtlUnicodeStringInitWorker @ 0x140096778 (RtlUnicodeStringInitWorker.c)
 *     KRegKey::QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___ @ 0x140142D18 (KRegKey--QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___.c)
 *     ?OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z @ 0x14015C830 (-OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z.c)
 *     netsetupIsImpliedProperty @ 0x14015C9A0 (netsetupIsImpliedProperty.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z @ 0x1401659F0 (-Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z.c)
 */

__int64 __fastcall NetSetupPropertyBag::ReadString(
        NetSetupPropertyBag *a1,
        const struct _NETSETUPPROPKEY *a2,
        void **a3)
{
  int v5; // eax
  size_t v6; // r8
  ULONG v7; // r9d
  unsigned int inited; // ebx
  HANDLE v9; // rcx
  struct Rtl::KString *v11; // rax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+20h] BYREF

  Handle = 0LL;
  v5 = NetSetupPropertyBag::OpenPropertyKey(a1, a2, (struct KRegKey *)&Handle);
  inited = v5;
  if ( v5 != -1073741772 )
  {
    if ( !v5 )
    {
      DestinationString = 0LL;
      inited = RtlUnicodeStringInitWorker(&DestinationString, 0LL, v6, v7);
      if ( (inited & 0x80000000) == 0 )
        inited = KRegKey::QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___(&Handle, &DestinationString, a3);
      v9 = Handle;
      if ( !Handle )
        return inited;
LABEL_6:
      ZwClose(v9);
      return inited;
    }
LABEL_8:
    v9 = Handle;
    if ( !Handle )
      return inited;
    goto LABEL_6;
  }
  if ( !(unsigned __int8)netsetupIsImpliedProperty(a2) )
    goto LABEL_8;
  v11 = Rtl::KString::Initialize(&word_1400F5D40);
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(a3, v11);
  if ( *a3 )
  {
    if ( Handle )
      ZwClose(Handle);
    return 0LL;
  }
  else
  {
    if ( Handle )
      ZwClose(Handle);
    return 3221225626LL;
  }
}
