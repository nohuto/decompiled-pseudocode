/*
 * XREFs of ?Thunk_MarkProxyReadyOnPropertiesRefreshed_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18027A650
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1801D0F24 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x18027A9D0 (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall IBamoPeer_dataprovider_AutoBamos_Receive<BamoImpl::dataprovider_AutoBamos::BamoPeerImpl>::Thunk_MarkProxyReadyOnPropertiesRefreshed_5(
        __int64 a1,
        unsigned int **a2)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v2; // rbx
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(a1 + 24) + 32LL);
  Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(v2, *(_DWORD *)(a1 + 36), **a2);
  if ( Proxy )
  {
    *((_BYTE *)Proxy + 28) = 1;
    v6 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)Proxy + 56LL))(Proxy);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 80LL))(v6);
    return 0;
  }
  else
  {
    v4 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
           (struct Microsoft::BamoImpl::ConnectionIndirector **)v2,
           0x87B2080C,
           0);
    v5 = v4;
    if ( v4 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5CE,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v4);
  }
  return v5;
}
