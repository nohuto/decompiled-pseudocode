/*
 * XREFs of ?UpdateHWND@BamoActivationListenerInputObjectProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x1800985A4
 * Callers:
 *     ?Thunk_UpdateHWND_0@?$IActivationListenerInputObjectProxy_Receive@VBamoActivationListenerInputObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180090680 (-Thunk_UpdateHWND_0@-$IActivationListenerInputObjectProxy_Receive@VBamoActivationListenerInputOb.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoActivationListenerInputObjectProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180129FC0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoActivationListenerInputObjectProxyImpl@BamoImpl@.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180042E18 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoPenEventsClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoPenEventsClientProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18006F82C (--0-$CalloutWrapper@VBamoPenEventsClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE_ea_18006F82C.c)
 *     ??1?$CalloutWrapper@VBamoActivationListenerInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18006FDDC (--1-$CalloutWrapper@VBamoActivationListenerInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogOnHWNDChanging@BamoActivationListenerInputObjectProxy@@AEAAX_K@Z @ 0x180094BC4 (-LogOnHWNDChanging@BamoActivationListenerInputObjectProxy@@AEAAX_K@Z.c)
 *     ?LogOnHWNDChanged@BamoActivationListenerInputObjectProxy@@AEAAXXZ @ 0x180116904 (-LogOnHWNDChanged@BamoActivationListenerInputObjectProxy@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoActivationListenerInputObjectProxyImpl::UpdateHWND(
        BamoImpl::BamoActivationListenerInputObjectProxyImpl *this,
        __int64 a2,
        __int64 a3)
{
  char v4; // bp
  BamoActivationListenerInputObjectProxy *v6; // rdi
  int v7; // eax
  int v8; // eax
  int v10[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a2;
  v6 = (BamoImpl::BamoActivationListenerInputObjectProxyImpl *)((char *)this - 16);
  if ( *((_BYTE *)this + 28) )
  {
    BamoActivationListenerInputObjectProxy::LogOnHWNDChanging((BamoImpl::BamoActivationListenerInputObjectProxyImpl *)((char *)this - 16));
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenEventsClientProxyImpl>::CalloutWrapper<BamoImpl::BamoPenEventsClientProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v7 = (*(__int64 (__fastcall **)(BamoActivationListenerInputObjectProxy *, __int64))(*(_QWORD *)v6 + 104LL))(v6, a3);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x6C01,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationListenerInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoActivationListenerInputObjectProxyImpl>((__int64)v10);
  }
  *((_QWORD *)this + 4) = a3;
  if ( *((_BYTE *)this + 28) )
  {
    BamoActivationListenerInputObjectProxy::LogOnHWNDChanged(v6);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenEventsClientProxyImpl>::CalloutWrapper<BamoImpl::BamoPenEventsClientProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v8 = (*(__int64 (__fastcall **)(BamoActivationListenerInputObjectProxy *))(*(_QWORD *)v6 + 112LL))(v6);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x6C0F,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationListenerInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoActivationListenerInputObjectProxyImpl>((__int64)v10);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, a3);
  return 0LL;
}
