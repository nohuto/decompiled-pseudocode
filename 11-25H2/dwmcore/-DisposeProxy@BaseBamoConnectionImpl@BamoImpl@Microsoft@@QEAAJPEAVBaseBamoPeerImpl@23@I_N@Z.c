/*
 * XREFs of ?DisposeProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I_N@Z @ 0x180278D30
 * Callers:
 *     ?Thunk_DisposeProxy_17@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18027A580 (-Thunk_DisposeProxy_17@-$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_Aut.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1801D0F24 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180248848 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180249850 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x180278980 (-Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x18027A9D0 (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::DisposeProxy(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        unsigned int a3,
        char a4)
{
  int *Proxy; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  int v12; // eax
  const char *v13; // r9
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Proxy = (int *)Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(this, *((_DWORD *)a2 + 9), a3);
  if ( Proxy )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 8) + 40LL))(
            *((_QWORD *)this + 8),
            *((unsigned int *)a2 + 9),
            a3,
            0LL);
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x6A4,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v12,
        v14);
    if ( !a4 && Proxy[2] > 0 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x6AC,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v13);
    Microsoft::BamoImpl::BamoProxyImpl::Disconnect((Microsoft::BamoImpl::BamoProxyImpl *)Proxy, 0);
    if ( a4 && !*((_BYTE *)a2 + 49) )
      (*(void (__fastcall **)(struct Microsoft::BamoImpl::BaseBamoPeerImpl *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, a3);
    return 0LL;
  }
  else
  {
    v9 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
           (struct Microsoft::BamoImpl::ConnectionIndirector **)this,
           0x87B2080C,
           0);
    v10 = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6A1,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v9);
    return v10;
  }
}
