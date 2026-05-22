/*
 * XREFs of ?UpdateInputSiteIdNamespace@BamoInputSiteElementProxyImpl@BamoImpl@@QEAAJ_NW4InputSiteIdNamespace@@@Z @ 0x180070AB4
 * Callers:
 *     ?Thunk_UpdateInputSiteIdNamespace_16@?$IInputSiteElementProxy_Receive@VBamoInputSiteElementProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800733C0 (-Thunk_UpdateInputSiteIdNamespace_16@-$IInputSiteElementProxy_Receive@VBamoInputSiteElementProxy.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSiteElementProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18012E5D0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSiteElementProxyImpl@BamoImpl@@UEAAXPEAVBam.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180042E18 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoShellGesturesClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoShellGesturesClientProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x180045184 (--0-$CalloutWrapper@VBamoShellGesturesClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBa.c)
 *     ??1?$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180045CF8 (--1-$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogOnInputSiteIdNamespaceChanged@BamoInputSiteElementProxy@@AEAAXXZ @ 0x18012E420 (-LogOnInputSiteIdNamespaceChanged@BamoInputSiteElementProxy@@AEAAXXZ.c)
 *     ?LogOnInputSiteIdNamespaceChanging@BamoInputSiteElementProxy@@AEAAXW4InputSiteIdNamespace@@@Z @ 0x18012E470 (-LogOnInputSiteIdNamespaceChanging@BamoInputSiteElementProxy@@AEAAXW4InputSiteIdNamespace@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoInputSiteElementProxyImpl::UpdateInputSiteIdNamespace(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // esi
  char v4; // bp
  BamoInputSiteElementProxy *v6; // rdi
  int v8; // eax
  int v9; // eax
  __int64 v10[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  v6 = (BamoInputSiteElementProxy *)(a1 - 16);
  if ( *(_BYTE *)(a1 + 28) )
  {
    BamoInputSiteElementProxy::LogOnInputSiteIdNamespaceChanging(a1 - 16, (unsigned int)a3);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>(
      (__int64)v10,
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))a1,
      1);
    v8 = (*(__int64 (__fastcall **)(BamoInputSiteElementProxy *, _QWORD))(*(_QWORD *)v6 + 104LL))(v6, v3);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1B34,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(v10);
  }
  *(_DWORD *)(a1 + 32) = v3;
  if ( *(_BYTE *)(a1 + 28) )
  {
    BamoInputSiteElementProxy::LogOnInputSiteIdNamespaceChanged(v6);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>(
      (__int64)v10,
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))a1,
      2);
    v9 = (*(__int64 (__fastcall **)(BamoInputSiteElementProxy *))(*(_QWORD *)v6 + 112LL))(v6);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1B42,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v9,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(v10);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference((Microsoft::BamoImpl::BamoProxyImpl *)a1, a2, a3);
  return 0LL;
}
