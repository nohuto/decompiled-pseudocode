/*
 * XREFs of ?QuerySecureDeviceToken@FxCompanionTarget@@UEAAJPEA_K@Z @ 0x14008F5C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?QueryForInterface@FxDeviceBase@@QEAAJPEBU_GUID@@PEAU_INTERFACE@@GGPEAXPEAU_DEVICE_OBJECT@@@Z @ 0x140041174 (-QueryForInterface@FxDeviceBase@@QEAAJPEBU_GUID@@PEAU_INTERFACE@@GGPEAXPEAU_DEVICE_OBJECT@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxCompanionTarget::QuerySecureDeviceToken(FxCompanionTarget *this, unsigned __int64 *SecureToken)
{
  _LIST_ENTRY *Flink; // r10
  int v5; // edi
  unsigned __int64 v6; // rax
  void *Context; // rcx
  _LIST_ENTRY *v8; // rcx
  const void *_a1; // rdx
  bool v10; // zf
  _FX_DRIVER_GLOBALS *v11; // rcx
  const void *v13; // rcx
  _SDEV_IDENTIFIER_INTERFACE Interface; // [rsp+40h] [rbp-38h] BYREF

  *SecureToken = -1LL;
  Flink = this->m_ChildListHead.Flink;
  memset(&Interface, 0, sizeof(Interface));
  if ( LOWORD(Flink[40].Blink->Blink) == 4353 )
  {
    v5 = FxDeviceBase::QueryForInterface(
           (FxDeviceBase *)Flink,
           &GUID_SDEV_IDENTIFIER_INTERFACE,
           &Interface.InterfaceHeader,
           0x28u,
           1u,
           0LL,
           0LL);
    if ( v5 < 0 )
    {
      v8 = this->m_ChildListHead.Flink;
      _a1 = (const void *)((unsigned __int64)v8 ^ 0xFFFFFFFFFFFFFFF8uLL);
      v10 = WORD1(v8->Blink) == 0;
      v11 = (_FX_DRIVER_GLOBALS *)v8[1].Flink;
      if ( v10 )
        _a1 = 0LL;
      WPP_IFR_SF_q(v11, 2u, 0xCu, 0xDu, WPP_FxCompanionTarget_cpp_Traceguids, _a1);
    }
    else
    {
      v6 = Interface.GetIdentifier(Interface.InterfaceHeader.Context);
      Context = Interface.InterfaceHeader.Context;
      *SecureToken = v6;
      Interface.InterfaceHeader.InterfaceDereference(Context);
    }
    return (unsigned int)v5;
  }
  else
  {
    v13 = (const void *)((unsigned __int64)Flink ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !WORD1(Flink->Blink) )
      v13 = 0LL;
    WPP_IFR_SF_q((_FX_DRIVER_GLOBALS *)Flink[1].Flink, 2u, 0xCu, 0xCu, WPP_FxCompanionTarget_cpp_Traceguids, v13);
    return 3221225659LL;
  }
}
