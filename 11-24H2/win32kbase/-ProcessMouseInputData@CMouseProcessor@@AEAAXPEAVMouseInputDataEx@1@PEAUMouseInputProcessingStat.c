/*
 * XREFs of ?ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x14005081C
 * Callers:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x140050448 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x14018D338 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x140051ED8 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     ?ConvertExplicitCoordinatesToAbsolute@MouseInputDataEx@CMouseProcessor@@QEAAXXZ @ 0x1400537C8 (-ConvertExplicitCoordinatesToAbsolute@MouseInputDataEx@CMouseProcessor@@QEAAXXZ.c)
 *     ?GetUnionRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x140053C20 (-GetUnionRegion@Mouse@InputConfig@@SA-AUCInputSpaceRegion@@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140060B94 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140062674 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?CollectMousePacketPerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePacketPerf@@@Z @ 0x1400BDB18 (-CollectMousePacketPerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePacketPerf@@@Z.c)
 *     EvaluateMouseEventForCompositionFrameRateBoost @ 0x1400DCE08 (EvaluateMouseEventForCompositionFrameRateBoost.c)
 *     ?ContainsMotionData@MouseInputDataEx@CMouseProcessor@@QEBA_NXZ @ 0x1400E8C48 (-ContainsMotionData@MouseInputDataEx@CMouseProcessor@@QEBA_NXZ.c)
 *     ?GetPublicExtraInfo@MouseInputDataEx@CMouseProcessor@@QEBAKXZ @ 0x1400ECE24 (-GetPublicExtraInfo@MouseInputDataEx@CMouseProcessor@@QEBAKXZ.c)
 *     ?CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z @ 0x140121784 (-CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z.c)
 *     ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@@Z @ 0x14018BA34 (-CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessi.c)
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x14018CABC (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUMouseInputProcessingState@@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x14018F1A8 (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUMouseInputProcessingState@@PEB.c)
 *     ?ShouldCoalesceMouseInputData@CMouseProcessor@@AEBA_NPEBVMouseInputDataEx@1@PEBU_MOUSE_INPUT_DATA@@PEBUMouseInputProcessingState@@@Z @ 0x14018FA74 (-ShouldCoalesceMouseInputData@CMouseProcessor@@AEBA_NPEBVMouseInputDataEx@1@PEBU_MOUSE_INPUT_DAT.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CMouseProcessor::ProcessMouseInputData(
        CMouseProcessor *this,
        struct CMouseProcessor::MouseInputDataEx *a2,
        struct tagPOINT *a3,
        struct _MousePacketPerf *a4,
        const struct _MOUSE_INPUT_DATA *a5,
        const struct tagUIPI_INFO_INT *a6)
{
  bool v10; // zf
  __int64 v11; // rcx
  __m128i *UnionRegion; // rax
  __int64 v13; // rcx
  __m128i v14; // xmm6
  int v15; // edi
  __int64 UserSessionState; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // edi
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 PublicExtraInfo; // rdi
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  CMouseProcessor *v33; // rcx
  __int64 v34; // rcx
  _BYTE v35[736]; // [rsp+30h] [rbp-318h] BYREF
  __int64 v36; // [rsp+358h] [rbp+10h] BYREF
  char v37; // [rsp+368h] [rbp+20h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v37,
    "ProcessMouseInputData",
    0LL);
  *(LARGE_INTEGER *)a4 = KeQueryPerformanceCounter(0LL);
  v10 = (*((_BYTE *)a2 + 2) & 0x50) == 0;
  v36 = *(_QWORD *)((char *)this + 3676);
  if ( v10 )
  {
    LOBYTE(v11) = CMouseProcessor::MouseInputDataEx::ContainsMotionData(a2);
    EvaluateMouseEventForCompositionFrameRateBoost(v11, *((unsigned __int16 *)a2 + 2));
  }
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 8LL) )
  {
    CMouseProcessor::QueueMouseEvent(
      this,
      a2,
      (struct MouseInputProcessingState *)a3,
      (const struct _SUBPIXELS *)&v36,
      a6,
      0LL);
    goto LABEL_14;
  }
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 4LL) )
  {
    *a3 = *(struct tagPOINT *)((char *)a2 + 12);
    v36 = 0LL;
    UnionRegion = (__m128i *)InputConfig::Mouse::GetUnionRegion(v35);
    v13 = UnionRegion->m128i_u32[2];
    v14 = *UnionRegion;
    LOWORD(v13) = v13 - _mm_cvtsi128_si32(*UnionRegion) - 1;
    v15 = LOWORD(a3->x) | ((unsigned __int16)v13 << 16);
    UserSessionState = W32GetUserSessionState(v13);
    v18 = W32GetUserSessionState(v17);
    v19 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v14, 12));
    *(_DWORD *)(UserSessionState + 24LL * *(unsigned int *)(v18 + 14724) + 14728) = v15;
    LOWORD(v19) = v19 - _mm_cvtsi128_si32(_mm_srli_si128(v14, 4)) - 1;
    v20 = LOWORD(a3->y) | ((unsigned __int16)v19 << 16);
    v21 = W32GetUserSessionState(v19);
    v23 = *(unsigned int *)(W32GetUserSessionState(v22) + 14724);
    *(_DWORD *)(v21 + 24 * v23 + 14732) = v20;
    v24 = *((_DWORD *)a2 + 12);
    v25 = W32GetUserSessionState(v23);
    *(_DWORD *)(v25 + 24 * (*(unsigned int *)(W32GetUserSessionState(v26) + 14724) + 614LL)) = v24;
    PublicExtraInfo = CMouseProcessor::MouseInputDataEx::GetPublicExtraInfo(a2);
    v29 = W32GetUserSessionState(v28);
    v31 = *(unsigned int *)(W32GetUserSessionState(v30) + 14724);
    *(_QWORD *)(v29 + 24 * v31 + 14744) = PublicExtraInfo;
    LODWORD(v29) = ((unsigned __int8)*(_DWORD *)(W32GetUserSessionState(v31) + 14724) + 1) & 0x3F;
    *(_DWORD *)(W32GetUserSessionState(v32) + 14724) = v29;
    CMouseProcessor::MouseInputDataEx::ConvertExplicitCoordinatesToAbsolute(a2);
  }
  else
  {
    CMouseProcessor::GetMouseCoord(this, a2, a3, (struct _SUBPIXELS *)&v36);
  }
  if ( !CMouseProcessor::ShouldCoalesceMouseInputData(v33, a2, a5, (const struct MouseInputProcessingState *)a3) )
  {
    CMouseProcessor::CommitMousePosAndMoveCursor(this, a2, (struct MouseInputProcessingState *)a3, a4);
    CMouseProcessor::QueueMouseEvent(
      this,
      a2,
      (struct MouseInputProcessingState *)a3,
      (const struct _SUBPIXELS *)&v36,
      a6,
      a3);
    *a3 = *(struct tagPOINT *)(W32GetUserSessionState(v34) + 19240);
LABEL_14:
    *((LARGE_INTEGER *)a4 + 1) = KeQueryPerformanceCounter(0LL);
    W32AcquirePushLockExclusiveEx((CMouseProcessor *)((char *)this + 3648), 0);
    MousePerfSummary::CollectMousePacketPerfTelemetry((CMouseProcessor *)((char *)this + 3024), a4);
    W32ReleasePushLockExclusiveEx((CMouseProcessor *)((char *)this + 3648), 0);
    goto LABEL_15;
  }
  InputTraceLogging::Mouse::CoalesceInput(*((_QWORD *)a2 + 7));
  if ( (*((_BYTE *)a2 + 2) & 1) == 0 )
  {
    if ( *((_WORD *)a2 + 2) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2734LL);
    a3[1].x += *((_DWORD *)a2 + 3);
    a3[1].y += *((_DWORD *)a2 + 4);
  }
LABEL_15:
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v37);
}
