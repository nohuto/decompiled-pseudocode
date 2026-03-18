/*
 * XREFs of ?UpdateNumberOfReadersRemoteCache@BamoDataProviderProxyImpl@BamoImpl@@AEAAXXZ @ 0x18027E134
 * Callers:
 *     ?SetNumberOfReaders@BamoDataProviderProxy@@UEAAXI@Z @ 0x18027E0E0 (-SetNumberOfReaders@BamoDataProviderProxy@@UEAAXI@Z.c)
 *     ?PushStateToPrincipal@BamoDataProviderProxyImpl@BamoImpl@@UEAAXXZ @ 0x1802883D0 (-PushStateToPrincipal@BamoDataProviderProxyImpl@BamoImpl@@UEAAXXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180248848 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x1802790B0 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x18027C40C (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 */

void __fastcall BamoImpl::BamoDataProviderProxyImpl::UpdateNumberOfReadersRemoteCache(
        BamoImpl::BamoDataProviderProxyImpl *this)
{
  Microsoft::BamoImpl::BaseBamoPeerImpl **v2; // rbx
  struct IMessageCallSendHost *SendHost; // rax
  __int64 v4; // rcx
  Microsoft::BamoImpl::BaseBamoPeerImpl *v5; // rcx
  int v6; // esi
  __int64 v7; // rdi
  int v8; // ebx
  struct IMessageCallSendHost *v9; // rax
  unsigned int v10; // eax
  int v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+38h] [rbp-20h]
  _QWORD v13[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    v2 = (Microsoft::BamoImpl::BaseBamoPeerImpl **)((char *)this + 16);
    if ( *((_BYTE *)this + 31) )
    {
      SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(*v2);
      v4 = (__int64)SendHost + 56;
      if ( !SendHost )
        v4 = 72LL;
      *(_BYTE *)v4 = 1;
    }
    v5 = *v2;
    v6 = *((_DWORD *)this + 10);
    v7 = *((unsigned int *)this + 6);
    v8 = *((_DWORD *)*v2 + 9);
    v9 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(v5);
    v13[1] = v7;
    v10 = CoreUICallSend(v9, v13, 2LL, 0LL, 6, &unk_18038ED05, v6, v12, v8);
    if ( (int)(v10 + 0x80000000) >= 0 && v10 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2CD5,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)v10,
        v11);
  }
}
