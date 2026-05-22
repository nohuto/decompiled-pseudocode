/*
 * XREFs of ?GripStatusForPanelReceived@BamoHeatGripServiceStubImpl@BamoImpl@@QEAAJAEBUHeatGripReport@@@Z @ 0x180182A50
 * Callers:
 *     ?CallGripStatusForPanelReceivedOnStub@BamoHeatGripServicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@AEBUHeatGripReport@@@Z @ 0x1801829A8 (-CallGripStatusForPanelReceivedOnStub@BamoHeatGripServicePrincipalImpl@BamoImpl@@CAJPEAVBamoStub.c)
 *     ?GripStatusForPanelReceived@BamoHeatGripServiceStub@@UEAAJAEBUHeatGripReport@@@Z @ 0x180182A00 (-GripStatusForPanelReceived@BamoHeatGripServiceStub@@UEAAJAEBUHeatGripReport@@@Z.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18005A020 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendGripStatusForPanelReceived@BamoHeatGripServiceStubImpl@BamoImpl@@AEAAXAEBUHeatGripReport@@@Z @ 0x180182C00 (-LogSendGripStatusForPanelReceived@BamoHeatGripServiceStubImpl@BamoImpl@@AEAAXAEBUHeatGripReport.c)
 */

__int64 __fastcall BamoImpl::BamoHeatGripServiceStubImpl::GripStatusForPanelReceived(
        BamoImpl::BamoHeatGripServiceStubImpl *this,
        const struct HeatGripReport *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // rcx
  int v8; // eax
  const struct HeatGripReport *v9; // rdx
  unsigned int v10; // edi
  __int128 v11; // xmm0
  __int64 v12; // xmm1_8
  _QWORD v13[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v14; // [rsp+50h] [rbp-20h]
  __int64 v15; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  unsigned int v17; // [rsp+A0h] [rbp+30h] BYREF
  unsigned int v18; // [rsp+B0h] [rbp+40h] BYREF
  struct IMessageCallSendHost *v19; // [rsp+B8h] [rbp+48h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 4) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xE758,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( *((_BYTE *)this + 56) )
  {
    v19 = 0LL;
    v17 = 0;
    v18 = 0;
    v8 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v19, &v17, &v18);
    v10 = v8;
    if ( v8 >= 0 )
    {
      BamoImpl::BamoHeatGripServiceStubImpl::LogSendGripStatusForPanelReceived(this, v9);
      v11 = *(_OWORD *)a2;
      v12 = *((_QWORD *)a2 + 2);
      v13[0] = v17;
      v13[1] = v18;
      v14 = v11;
      v15 = v12;
      return CoreUICallSend(v19, v13, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE768,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8);
      return v10;
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
      (void *)0xE761,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
