/*
 * XREFs of ?UpdateUniqueIdRemoteCache@BamoDataProviderPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18009A56C
 * Callers:
 *     ?SendMaterializeProxy@BamoDataProviderPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800782F0 (-SendMaterializeProxy@BamoDataProviderPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEA.c)
 *     ?PushStateToProxyOnOutboundMessagesResumed@BamoDataProviderPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x180103400 (-PushStateToProxyOnOutboundMessagesResumed@BamoDataProviderPrincipalImpl@BamoImpl@@UEAAXPEAUIMes.c)
 *     ?UpdateUniqueIdRemoteCacheStatic@BamoDataProviderPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180105F44 (-UpdateUniqueIdRemoteCacheStatic@BamoDataProviderPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Mi.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180059E30 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::BamoDataProviderPrincipalImpl::UpdateUniqueIdRemoteCache(
        BamoImpl::BamoDataProviderPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  int v2; // eax
  int v3; // [rsp+20h] [rbp-40h]
  _QWORD v4[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  unsigned int v6; // [rsp+70h] [rbp+10h] BYREF
  unsigned int v7; // [rsp+80h] [rbp+20h] BYREF
  struct IMessageCallSendHost *v8; // [rsp+88h] [rbp+28h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v8 = 0LL;
    v6 = 0;
    v7 = 0;
    v2 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(a2, &v8, &v6, &v7);
    if ( v2 < 0 || (v4[0] = v6, v4[1] = v7, LOWORD(v3) = 2, v2 = CoreUICallSend(v8, v4, 2LL), v2 < 0) )
    {
      if ( v2 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2978,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
          (const char *)(unsigned int)v2,
          v3);
    }
  }
}
