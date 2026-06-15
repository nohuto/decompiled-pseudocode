/*
 * XREFs of ?CreateBridgeStreamPipeInstanceToTargetApo@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14006BD54
 * Callers:
 *     ?CreateBridgeStreamToTargetStreamGroup@CStreamInstance@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140049140 (-CreateBridgeStreamToTargetStreamGroup@CStreamInstance@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUI.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14000E320 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCSubmixImpl@@V?$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAXXZ @ 0x14000EC54 (-RemoveAll@-$CAtlList@PEAVCSubmixImpl@@V-$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x1400252EC (-AddHeadList@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXP.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x140025DE0 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x140025FD8 (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x140026760 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ??4?$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z @ 0x140026C00 (--4-$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x1400277DC (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x140038FA4 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?Create@CBridgeToAPOProcessNode@@SAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14004E138 (-Create@CBridgeToAPOProcessNode@@SAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PE.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x14005A0F0 (_CxxThrowException_0.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065CDC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPipeInstance::CreateBridgeStreamPipeInstanceToTargetApo(
        struct IDeviceGraphObjectCache *a1,
        struct BRIDGE_STREAM_DESCRIPTOR *a2,
        struct IAudioProcessingObject *a3,
        struct CPipeInstance *a4,
        struct tWAVEFORMATEX *a5,
        struct SYSTEM_AUDIO_STREAM *a6,
        struct CPipeInstance **a7)
{
  BOOL v8; // r15d
  float v9; // xmm6_4
  struct CPipeInstance **v10; // r12
  struct tWAVEFORMATEX *v11; // r13
  int v12; // eax
  int v13; // eax
  int v14; // eax
  CPipeInstance *v15; // rax
  __int64 v16; // rdx
  size_t v17; // rcx
  CPipeInstance *v18; // rdi
  int v19; // eax
  unsigned int v20; // esi
  unsigned int v21; // edx
  int v22; // eax
  int v23; // eax
  int pExceptionObject; // [rsp+20h] [rbp-A8h] BYREF
  int v26; // [rsp+24h] [rbp-A4h] BYREF
  int v27; // [rsp+28h] [rbp-A0h] BYREF
  int v28; // [rsp+2Ch] [rbp-9Ch] BYREF
  int v29; // [rsp+30h] [rbp-98h] BYREF
  __int128 v30; // [rsp+38h] [rbp-90h] BYREF
  __int64 v31; // [rsp+48h] [rbp-80h]
  __int128 v32; // [rsp+50h] [rbp-78h]
  int v33; // [rsp+60h] [rbp-68h]
  long *v34; // [rsp+68h] [rbp-60h] BYREF
  ATL::CAtlException *v35; // [rsp+70h] [rbp-58h] BYREF
  CPipeInstance *v37; // [rsp+D8h] [rbp+10h] BYREF
  CPipeInstance *v38; // [rsp+E8h] [rbp+20h] BYREF

  v38 = a4;
  v8 = *(_DWORD *)a2 != 0;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 10;
  if ( *((_DWORD *)a2 + 2) == 1 )
    v9 = FLOAT_1_0;
  else
    v9 = FLOAT_1_1;
  try
  {
    v10 = a7;
    *a7 = 0LL;
    a7 = 0LL;
    v11 = a5;
    v12 = CBridgeToAPOProcessNode::Create(a2, a3, a5, (struct CBridgeToAPOProcessNode **)&a7);
    if ( v12 < 0 )
    {
      pExceptionObject = v12;
      throw (long *)&pExceptionObject;
    }
    v38 = (CPipeInstance *)a7;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64)&v30, &v38);
    a7 = 0LL;
    v38 = 0LL;
    v13 = CProcessNode::CreateDummyProcessNode(v8, v11, &v38);
    if ( v13 < 0 )
    {
      v26 = v13;
      throw (long *)&v26;
    }
    v37 = v38;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64)&v30, &v37);
    v38 = 0LL;
    v14 = CProcessNode::CreateDummyProcessNode(v8, v11, &v38);
    if ( v14 < 0 )
    {
      v27 = v14;
      throw (long *)&v27;
    }
    v37 = v38;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64)&v30, &v37);
    v38 = 0LL;
    v15 = (CPipeInstance *)operator new(0x158uLL, (const struct std::nothrow_t *)&std::nothrow);
    v37 = v15;
    if ( v15 )
      v18 = CPipeInstance::CPipeInstance(v15, (enum PIPE_TYPE)5);
    else
      v18 = 0LL;
    v37 = v18;
    if ( !v18 )
    {
      v28 = -2147024882;
      throw (long *)&v28;
    }
    v19 = _AllocString<CTCoAllocPolicy>(v17, v16, *((const wchar_t **)a2 + 7), (const wchar_t **)v18 + 24);
    v20 = v19;
    if ( v19 < 0 )
    {
      v29 = v19;
      throw (long *)&v29;
    }
    *((_DWORD *)v18 + 30) = (unsigned int)(*(_DWORD *)a2 - 2) <= 1;
    *((_DWORD *)v18 + 33) = *(_DWORD *)a2;
    *((_DWORD *)v18 + 3) = v8;
    *((_DWORD *)v18 + 34) = 0;
    *((_DWORD *)v18 + 31) = 0;
    if ( *((_QWORD *)v18 + 19) )
      ATL::AtlComPtrAssign((struct IUnknown **)v18 + 19, 0LL);
    ATL::CComPtr<IDeviceGraphObjectCache>::operator=((_QWORD *)v18 + 30, (__int64)a1);
    *(_QWORD *)v18 = 0LL;
    *((_DWORD *)v18 + 2) = 1;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList((__int64)v18 + 16, (__int64)&v30);
    ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::RemoveAll((__int64)&v30);
    if ( *((_DWORD *)a2 + 16) )
    {
      v22 = *((_DWORD *)a2 + 16);
    }
    else
    {
      v21 = v11->nAvgBytesPerSec % v11->nBlockAlign;
      v22 = (int)(float)((float)(int)((double)(int)(v11->nAvgBytesPerSec / v11->nBlockAlign)
                                    * (double)(int)*((_QWORD *)a2 + 6)
                                    / 10000000.0
                                    + 0.5)
                       * v9);
    }
    *((_DWORD *)v18 + 37) = v22;
    v23 = 1;
    if ( *((_DWORD *)a2 + 1) )
      v23 = 7;
    *((_DWORD *)v18 + 35) = v23;
    *((_QWORD *)v18 + 26) = 1LL;
    v37 = 0LL;
    *v10 = v18;
    ATL::CAutoPtr<CPipeInstance>::Free(&v37, v21);
  }
  catch ( long *v34 )
  {
    LODWORD(v38) = *(_DWORD *)v34;
    goto LABEL_25;
  }
  catch ( ATL::CAtlException *v35 )
  {
    LODWORD(v38) = *(_DWORD *)v35;
LABEL_25:
    v20 = (unsigned int)v38;
    if ( (int)v38 < 0 )
      AudDGTraceLoggingErrorHelper("CPipeInstance::CreateBridgeStreamPipeInstanceToTargetApo", 995, (int)v38);
  }
  ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::RemoveAll((__int64)&v30);
  return v20;
}
