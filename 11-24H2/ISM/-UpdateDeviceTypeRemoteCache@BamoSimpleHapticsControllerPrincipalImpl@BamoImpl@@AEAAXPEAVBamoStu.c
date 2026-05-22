/*
 * XREFs of ?UpdateDeviceTypeRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18018760C
 * Callers:
 *     ?PushStateToProxy@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801861D8 (-PushStateToProxy@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Micr.c)
 *     ?UpdateDeviceTypeRemoteCacheStatic@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1801876CC (-UpdateDeviceTypeRemoteCacheStatic@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@CAJPEAVBam.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180059E30 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180074A18 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::UpdateDeviceTypeRemoteCache(
        BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  signed int v2; // eax
  unsigned int v3; // eax
  int v4; // [rsp+20h] [rbp-30h]
  _QWORD v5[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  unsigned int v7; // [rsp+70h] [rbp+20h] BYREF
  unsigned int v8; // [rsp+80h] [rbp+30h] BYREF
  struct IMessageCallSendHost *v9; // [rsp+88h] [rbp+38h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v9 = 0LL;
    v7 = 0;
    v8 = 0;
    v2 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(a2, &v9, &v7, &v8);
    if ( v2 < 0 || (v5[0] = v7, v5[1] = v8, LOWORD(v4) = 0, v2 = CoreUICallSend(v9, v5, 2LL), v2 < 0) )
    {
      if ( v2 != -2018375675 )
      {
        v3 = wil::verify_hresult<long>(v2);
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x8B22,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v3,
          v4);
      }
    }
  }
}
