/*
 * XREFs of ?UIAHitTestResponse@BamoUIAHitTestStubImpl@BamoImpl@@QEAAJAEBU_GUID@@@Z @ 0x1801B75E0
 * Callers:
 *     ?CallUIAHitTestResponseOnStub@BamoUIAHitTestPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@AEBU_GUID@@@Z @ 0x1801B7038 (-CallUIAHitTestResponseOnStub@BamoUIAHitTestPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microso.c)
 *     ?UIAHitTestResponse@BamoUIAHitTestStub@@UEAAJAEBU_GUID@@@Z @ 0x1801B7590 (-UIAHitTestResponse@BamoUIAHitTestStub@@UEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180059E30 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendUIAHitTestResponse@BamoUIAHitTestStubImpl@BamoImpl@@AEAAXAEBU_GUID@@@Z @ 0x1801B7124 (-LogSendUIAHitTestResponse@BamoUIAHitTestStubImpl@BamoImpl@@AEAAXAEBU_GUID@@@Z.c)
 */

__int64 __fastcall BamoImpl::BamoUIAHitTestStubImpl::UIAHitTestResponse(
        BamoImpl::BamoUIAHitTestStubImpl *this,
        const struct _GUID *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // rcx
  int v8; // eax
  unsigned int v9; // edi
  struct _GUID v10; // xmm0
  _QWORD v11[2]; // [rsp+40h] [rbp-20h] BYREF
  struct _GUID v12; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  unsigned int v14; // [rsp+90h] [rbp+30h] BYREF
  unsigned int v15; // [rsp+A0h] [rbp+40h] BYREF
  struct IMessageCallSendHost *v16; // [rsp+A8h] [rbp+48h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 4) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xA815,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( *((_BYTE *)this + 56) )
  {
    v16 = 0LL;
    v14 = 0;
    v15 = 0;
    v8 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v16, &v14, &v15);
    v9 = v8;
    if ( v8 >= 0 )
    {
      BamoImpl::BamoUIAHitTestStubImpl::LogSendUIAHitTestResponse(this, a2);
      v10 = *a2;
      v11[0] = v14;
      v11[1] = v15;
      v12 = v10;
      return CoreUICallSend(v16, v11, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA825,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
  else
  {
    v6 = *((_QWORD *)this + 3);
    if ( v6 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v6 + 16) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA81E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
