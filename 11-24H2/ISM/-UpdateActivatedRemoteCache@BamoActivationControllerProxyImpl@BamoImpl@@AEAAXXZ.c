/*
 * XREFs of ?UpdateActivatedRemoteCache@BamoActivationControllerProxyImpl@BamoImpl@@AEAAXXZ @ 0x1800B06EC
 * Callers:
 *     ?PushStateToPrincipal@BamoActivationControllerProxyImpl@BamoImpl@@UEAAXXZ @ 0x1800B0480 (-PushStateToPrincipal@BamoActivationControllerProxyImpl@BamoImpl@@UEAAXXZ.c)
 *     ?SetActivated@BamoActivationControllerProxy@@UEAAX_N@Z @ 0x1800B0610 (-SetActivated@BamoActivationControllerProxy@@UEAAX_N@Z.c)
 * Callees:
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x180044C6C (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180044D14 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::BamoActivationControllerProxyImpl::UpdateActivatedRemoteCache(
        BamoImpl::BamoActivationControllerProxyImpl *this)
{
  Microsoft::BamoImpl::BaseBamoPeerImpl **v2; // rbx
  struct IMessageCallSendHost *SendHost; // rax
  __int64 v4; // rcx
  Microsoft::BamoImpl::BaseBamoPeerImpl *v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rbx
  struct IMessageCallSendHost *v8; // rax
  unsigned int v9; // eax
  int v10; // [rsp+20h] [rbp-38h]
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF
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
    v6 = *((unsigned int *)this + 6);
    v7 = *((unsigned int *)*v2 + 9);
    v8 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(v5);
    v11[0] = v7;
    v11[1] = v6;
    LOWORD(v10) = 0;
    v9 = CoreUICallSend(v8, v11, 2LL);
    if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x730A,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)v9,
        v10);
  }
}
