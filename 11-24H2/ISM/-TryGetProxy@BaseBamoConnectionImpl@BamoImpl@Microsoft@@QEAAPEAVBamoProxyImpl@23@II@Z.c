/*
 * XREFs of ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x180024FE4
 * Callers:
 *     ??$TryGetProxy@VBamoActivationControllerProxy@@@BaseBamoConnection@Bamo@Microsoft@@QEAAXIIPEAPEAVBamoActivationControllerProxy@@@Z @ 0x180024F48 (--$TryGetProxy@VBamoActivationControllerProxy@@@BaseBamoConnection@Bamo@Microsoft@@QEAAXIIPEAPEA.c)
 *     ?ClearProxyReady@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI@Z @ 0x1800B6434 (-ClearProxyReady@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI@Z.c)
 *     ?MarkProxyReadyOnPropertiesRefreshed@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI@Z @ 0x1800B711C (-MarkProxyReadyOnPropertiesRefreshed@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI@Z.c)
 *     ?SetBootstrapProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z @ 0x1800B8940 (-SetBootstrapProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct Microsoft::BamoImpl::BamoProxyImpl *__fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0LL;
  v9 = 0LL;
  if ( (_DWORD)a3 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)this + 8) + 56LL))(
           *((_QWORD *)this + 8),
           a2,
           a3,
           &v9);
    if ( (int)(v5 + 0x80000000) >= 0 && v5 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x492,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)v5,
        v7);
    v4 = v9;
  }
  if ( v4 )
    return (struct Microsoft::BamoImpl::BamoProxyImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
  else
    return 0LL;
}
