/*
 * XREFs of ?RemoteReplace@BamoList_ActivatableEntityPrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIPEAVBamoActivatableEntityPrincipal@@@Z @ 0x1800ADD60
 * Callers:
 *     ?CallRemoteReplaceOnStub@BamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@IPEAVBamoActivatableEntityPrincipal@@@Z @ 0x1800ACDB8 (-CallRemoteReplaceOnStub@BamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@Ba.c)
 *     ?RemoteReplace@BamoList_ActivatableEntityPrincipal_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIPEAVBamoActivatableEntityPrincipal@@@Z @ 0x1800ADD00 (-RemoteReplace@BamoList_ActivatableEntityPrincipal_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@U.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180059E30 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?PrepareForRemoteReference@BamoStubImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180059F58 (-PrepareForRemoteReference@BamoStubImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendRemoteReplace@BamoList_ActivatableEntityPrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@AEAAXII@Z @ 0x1800AD6B0 (-LogSendRemoteReplace@BamoList_ActivatableEntityPrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@L.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_StubImpl::RemoteReplace(
        Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_StubImpl *this,
        __int64 a2,
        struct BamoActivatableEntityPrincipal *a3,
        const char *a4)
{
  __int64 v5; // rcx
  int v7; // eax
  unsigned int v8; // edi
  struct IMessageCallSendHost *v9; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v10[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  unsigned int v12; // [rsp+80h] [rbp+20h] BYREF
  unsigned int v13; // [rsp+98h] [rbp+38h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 4) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xB4CC,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( *((_BYTE *)this + 56) )
  {
    if ( a3 )
      Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteReference(
        (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this,
        a3);
    v9 = 0LL;
    v12 = 0;
    v13 = 0;
    v7 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v9, &v12, &v13);
    v8 = v7;
    if ( v7 >= 0 )
    {
      Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_StubImpl::LogSendRemoteReplace(this);
      v10[0] = v12;
      v10[1] = v13;
      return CoreUICallSend(v9, v10, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB4DD,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7);
      return v8;
    }
  }
  else
  {
    v5 = *((_QWORD *)this + 3);
    if ( v5 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v5 + 16) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB4D5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
