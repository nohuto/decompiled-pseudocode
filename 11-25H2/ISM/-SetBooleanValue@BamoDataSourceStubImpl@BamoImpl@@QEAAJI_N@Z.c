/*
 * XREFs of ?SetBooleanValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJI_N@Z @ 0x180059B50
 * Callers:
 *     ?SetBooleanValue@BamoDataSourceStub@@UEAAJI_N@Z @ 0x180059AF0 (-SetBooleanValue@BamoDataSourceStub@@UEAAJI_N@Z.c)
 *     ?CallSetBooleanValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@I_N@Z @ 0x180100420 (-CallSetBooleanValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18005A020 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceStubImpl::SetBooleanValue(
        BamoImpl::BamoDataSourceStubImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  int v8; // [rsp+20h] [rbp-40h]
  struct IMessageCallSendHost *v9; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v10[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  unsigned int v12; // [rsp+80h] [rbp+20h] BYREF
  unsigned int v13; // [rsp+98h] [rbp+38h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 4) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x3436,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
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
    v6 = 13375LL;
    goto LABEL_7;
  }
  v9 = 0LL;
  v12 = 0;
  v13 = 0;
  v5 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v9, &v12, &v13);
  if ( v5 < 0 )
  {
    v6 = 13382LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v5,
      v8);
    return (unsigned int)v5;
  }
  v10[0] = v12;
  v10[1] = v13;
  return CoreUICallSend(v9, v10, 2LL);
}
