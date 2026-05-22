/*
 * XREFs of ?OnVoiceEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJAEBUMPCTraceInfo@@AEBW4PhrasePriv@Internal@Spatial@Input@UI@Windows@@AEBUPoseDataMsg@56789@AEBUHitObjectMsg@56789@@Z @ 0x18011F048
 * Callers:
 *     ?OnVoiceEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@AEBW4PhrasePriv@Internal@Spatial@Input@UI@Windows@@AEBUPoseDataMsg@45678@AEBUHitObjectMsg@45678@@Z @ 0x18011EFD0 (-OnVoiceEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@AEBW4PhrasePriv@Internal@Spatial@I.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180048104 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180048284 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendOnVoiceEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@AEAAXAEBUMPCTraceInfo@@AEBW4PhrasePriv@Internal@Spatial@Input@UI@Windows@@AEBUPoseDataMsg@56789@AEBUHitObjectMsg@56789@@Z @ 0x180119458 (-LogSendOnVoiceEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@AEAAXAEBUMPCTraceInfo@@AEBW4PhrasePri.c)
 */

__int64 __fastcall BamoImpl::BamoMPCInputObjectProxyImpl::OnVoiceEvent(
        BamoImpl::BamoMPCInputObjectProxyImpl *this,
        const struct MPCTraceInfo *a2,
        const enum Windows::UI::Input::Spatial::Internal::PhrasePriv *a3,
        const struct Windows::UI::Input::Spatial::Internal::PoseDataMsg *a4,
        const struct Windows::UI::Input::Spatial::Internal::HitObjectMsg *a5)
{
  char *v6; // rbx
  __int64 v7; // r9
  __int64 v11; // r9
  int v13; // eax
  const enum Windows::UI::Input::Spatial::Internal::PhrasePriv *v14; // r8
  const struct Windows::UI::Input::Spatial::Internal::PoseDataMsg *v15; // r9
  unsigned int v16; // r14d
  struct IMessageCallSendHost *v17; // r14
  __int64 v18; // rcx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  char *v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  const struct Windows::UI::Input::Spatial::Internal::HitObjectMsg *v35; // [rsp+28h] [rbp-E0h]
  unsigned int v36[2]; // [rsp+58h] [rbp-B0h] BYREF
  struct IMessageCallSendHost *v37; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+68h] [rbp-A0h]
  _QWORD v39[3]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v40; // [rsp+88h] [rbp-80h]
  __int128 v41; // [rsp+98h] [rbp-70h]
  __int128 v42; // [rsp+A8h] [rbp-60h]
  char v43; // [rsp+B8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+250h] [rbp+148h]
  unsigned int v45; // [rsp+258h] [rbp+150h] BYREF

  v6 = 0LL;
  v7 = *((_QWORD *)this + 2);
  if ( *(_DWORD *)(v7 + 44) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x4290,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)v7);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    if ( v11 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v11 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4299,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v37 = 0LL;
    v45 = 0;
    v36[0] = 0;
    v13 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v37, &v45, v36);
    v16 = v13;
    if ( v13 >= 0 )
    {
      v17 = v37;
      if ( *((_BYTE *)this + 31) )
      {
        if ( v37 )
          v6 = (char *)v37 - 16;
        v6[72] = 1;
      }
      BamoImpl::BamoMPCInputObjectProxyImpl::LogSendOnVoiceEvent(this, a2, v14, v15, v35);
      v18 = 2LL;
      v19 = *((_OWORD *)a5 + 1);
      v40 = *(_OWORD *)a5;
      v20 = *((_OWORD *)a5 + 2);
      v21 = &v43;
      v41 = v19;
      v42 = v20;
      do
      {
        v22 = *((_OWORD *)a4 + 1);
        *(_OWORD *)v21 = *(_OWORD *)a4;
        v23 = *((_OWORD *)a4 + 2);
        *((_OWORD *)v21 + 1) = v22;
        v24 = *((_OWORD *)a4 + 3);
        *((_OWORD *)v21 + 2) = v23;
        v25 = *((_OWORD *)a4 + 4);
        *((_OWORD *)v21 + 3) = v24;
        v26 = *((_OWORD *)a4 + 5);
        *((_OWORD *)v21 + 4) = v25;
        v27 = *((_OWORD *)a4 + 6);
        *((_OWORD *)v21 + 5) = v26;
        v28 = *((_OWORD *)a4 + 7);
        a4 = (const struct Windows::UI::Input::Spatial::Internal::PoseDataMsg *)((char *)a4 + 128);
        *((_OWORD *)v21 + 6) = v27;
        v21 += 128;
        *((_OWORD *)v21 - 1) = v28;
        --v18;
      }
      while ( v18 );
      v29 = *((_OWORD *)a4 + 1);
      *(_OWORD *)v21 = *(_OWORD *)a4;
      v30 = *((_OWORD *)a4 + 2);
      *((_OWORD *)v21 + 1) = v29;
      v31 = *((_OWORD *)a4 + 3);
      *((_OWORD *)v21 + 2) = v30;
      v32 = *((_OWORD *)a4 + 4);
      *((_OWORD *)v21 + 3) = v31;
      v33 = *((_OWORD *)a4 + 5);
      *((_OWORD *)v21 + 4) = v32;
      v34 = *((_OWORD *)a4 + 6);
      *((_OWORD *)v21 + 5) = v33;
      *((_OWORD *)v21 + 6) = v34;
      LODWORD(v38) = *(_DWORD *)a3;
      LODWORD(v37) = *(_DWORD *)a2;
      v39[0] = v45;
      v39[1] = v36[0];
      return CoreUICallSend(v17, v39, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x42A0,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v13);
      return v16;
    }
  }
}
