/*
 * XREFs of ?RemoteReplace@BamoList_uint_StubImpl@dataprovider_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJII@Z @ 0x1801022B0
 * Callers:
 *     ?CallRemoteReplaceOnStub@BamoList_uint_PrincipalImpl@dataprovider_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@II@Z @ 0x180100380 (-CallRemoteReplaceOnStub@BamoList_uint_PrincipalImpl@dataprovider_AutoBamos@BamoImpl@Lib@Bamo@Mi.c)
 *     ?RemoteReplace@BamoList_uint_Stub@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@UEAAJII@Z @ 0x180102250 (-RemoteReplace@BamoList_uint_Stub@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@UEAAJII@Z.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18005A020 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::BamoImpl::dataprovider_AutoBamos::BamoList_uint_StubImpl::RemoteReplace(
        Microsoft::Bamo::Lib::BamoImpl::dataprovider_AutoBamos::BamoList_uint_StubImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  struct IMessageCallSendHost *v8; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v9[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  unsigned int v11; // [rsp+80h] [rbp+20h] BYREF
  unsigned int v12; // [rsp+98h] [rbp+38h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 4) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x3A52,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      a4);
  if ( !*((_BYTE *)this + 56) )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = -2018375660;
    if ( v4 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v4 + 16) + 32LL),
        0x87B20814,
        0);
    v6 = 14939LL;
    goto LABEL_7;
  }
  v8 = 0LL;
  v11 = 0;
  v12 = 0;
  v5 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v8, &v11, &v12);
  if ( v5 < 0 )
  {
    v6 = 14946LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v9[0] = v11;
  v9[1] = v12;
  return CoreUICallSend(v8, v9, 2LL);
}
