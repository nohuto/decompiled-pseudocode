/*
 * XREFs of ?RemoteRemove@BamoList_uint_StubImpl@dataprovider_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJI@Z @ 0x180102160
 * Callers:
 *     ?CallRemoteRemoveOnStub@BamoList_uint_PrincipalImpl@dataprovider_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@I@Z @ 0x180100330 (-CallRemoteRemoveOnStub@BamoList_uint_PrincipalImpl@dataprovider_AutoBamos@BamoImpl@Lib@Bamo@Mic.c)
 *     ?RemoteRemove@BamoList_uint_Stub@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@UEAAJI@Z @ 0x180102110 (-RemoteRemove@BamoList_uint_Stub@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@UEAAJI@Z.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18005A020 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::BamoImpl::dataprovider_AutoBamos::BamoList_uint_StubImpl::RemoteRemove(
        Microsoft::Bamo::Lib::BamoImpl::dataprovider_AutoBamos::BamoList_uint_StubImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  _QWORD v8[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  unsigned int v10; // [rsp+70h] [rbp+20h] BYREF
  unsigned int v11; // [rsp+80h] [rbp+30h] BYREF
  struct IMessageCallSendHost *v12; // [rsp+88h] [rbp+38h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 4) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x3A2E,
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
    v6 = 14903LL;
    goto LABEL_7;
  }
  v12 = 0LL;
  v10 = 0;
  v11 = 0;
  v5 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v12, &v10, &v11);
  if ( v5 < 0 )
  {
    v6 = 14910LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v8[0] = v10;
  v8[1] = v11;
  return CoreUICallSend(v12, v8, 2LL);
}
