/*
 * XREFs of ?ComputeCoalescingStrategy@CMouseProcessor@@AEBA?AW4CoalescingStrategy@1@PEBVMouseInputDataEx@1@AEBUtagINPUT_MESSAGE_SOURCE@@W4RawMouseProcessingOptions@@PEBUMouseInputProcessingState@@@Z @ 0x14018BDEC
 * Callers:
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUMouseInputProcessingState@@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x14018F1A8 (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUMouseInputProcessingState@@PEB.c)
 * Callees:
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x140051ED8 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsEqualInputSource @ 0x1400FF470 (IsEqualInputSource.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::ComputeCoalescingStrategy(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int16 a4,
        __int64 a5)
{
  __int64 v5; // rcx
  __int64 v9; // rdi
  __int16 v10; // r14
  int v11; // ebp
  char v12; // bl
  int v13; // r10d
  int v14; // r9d
  int v15; // r8d
  int v16; // edx
  bool v17; // cf
  char v18; // r8
  int v20; // eax
  char v21; // bl
  int v22; // eax
  int v23; // r8d
  char v24; // di
  bool v25; // si
  __int64 UserSessionState; // rax
  int v27; // r8d
  int v28; // edx
  bool v29; // di
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx

  v5 = a1 + 56;
  if ( !*(_WORD *)(v5 + 2946) )
    return 0LL;
  v9 = v5 + 184LL * *(unsigned __int16 *)(v5 + 2944);
  if ( !v9 )
    return 0LL;
  if ( *(_QWORD *)(v9 + 164) != *(_QWORD *)(a2 + 80) )
    return 0LL;
  v10 = *(_WORD *)(a2 + 2);
  if ( (v10 & 8) != 0 )
    return 0LL;
  v11 = *(_DWORD *)(v9 + 120);
  if ( (v11 & 4) != 0 )
    return 0LL;
  if ( !*(_WORD *)(v9 + 28) && !*(_WORD *)(a2 + 4) && IsEqualInputSource((_DWORD *)(v9 + 112), a3) )
  {
    if ( (a4 & 0x10) != 0 )
      return 3LL;
    if ( (v11 & 0x10) != 0 )
      return 3LL;
    v12 = 1;
    if ( (v10 & 1) != 0 || (*(_BYTE *)(v9 + 36) & 1) != 0 || (a4 & 0x2000) != 0 || (v11 & 0x2000) != 0 )
      return 3LL;
    v13 = *(_DWORD *)(a5 + 8) + *(_DWORD *)(a2 + 12);
    v14 = *(_DWORD *)(a5 + 12) + *(_DWORD *)(a2 + 16);
    v15 = *(_DWORD *)(v9 + 44) + *(_DWORD *)(v9 + 76);
    v16 = *(_DWORD *)(v9 + 48) + *(_DWORD *)(v9 + 80);
    if ( v13 <= 0 == v15 <= 0 || (v17 = (~v13 ^ ~v15) < 0, v18 = 0, !v17) )
      v18 = 1;
    if ( v14 <= 0 != v16 <= 0 && (~v14 ^ ~v16) < 0 )
      v12 = 0;
    if ( v18 && v12 )
      return 3LL;
    return 0LL;
  }
  if ( (v11 & 0x8000) != 0 )
    return 0LL;
  v20 = *(_DWORD *)(v9 + 116);
  v21 = 1;
  if ( v20 != 1 && v20 != 4 && (v11 & 1) == 0 )
    return 0LL;
  v22 = a3[1];
  if ( v22 != 1 && v22 != 4 && !CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 32) )
    return 0LL;
  v23 = *(_DWORD *)(a2 + 88);
  if ( ((*(_DWORD *)(v9 + 120) & 0x800) != 0) == (v23 == 4) || *(_WORD *)(a2 + 4) || *(_WORD *)(v9 + 28) )
    return 0LL;
  if ( v23 == 4 )
  {
    if ( (*(_DWORD *)(v9 + 120) & 0x800) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3613LL);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v24 = 0;
    }
    v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v27) = v25;
      LOBYTE(v28) = v24;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v28,
        v27,
        *(_QWORD *)(UserSessionState + 69400),
        4,
        6,
        25,
        (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
    }
    return 1LL;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v21 = 0;
    }
    v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v30 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v31) = v29;
      LOBYTE(v32) = v21;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v32,
        v31,
        *(_QWORD *)(v30 + 69400),
        4,
        6,
        26,
        (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
    }
    return 2LL;
  }
}
