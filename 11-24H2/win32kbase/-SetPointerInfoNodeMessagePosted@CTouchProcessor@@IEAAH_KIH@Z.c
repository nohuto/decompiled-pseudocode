/*
 * XREFs of ?SetPointerInfoNodeMessagePosted@CTouchProcessor@@IEAAH_KIH@Z @ 0x1402074CC
 * Callers:
 *     ?MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z @ 0x140201B80 (-MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsPointerInputMessageWithState @ 0x1400F2588 (IsPointerInputMessageWithState.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1401FB650 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1401FEFCC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x140201AC0 (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerInfoNodeMessagePosted(
        CTouchProcessor *this,
        __int64 a2,
        __int64 a3,
        int a4)
{
  unsigned int v5; // ebp
  __int64 v6; // rbx
  char v8; // di
  void *v9; // r9
  CTouchProcessor *v10; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  int v12; // edx
  int v13; // r8d
  struct CPointerMsgData *v14; // rsi
  CTouchProcessor *v15; // rcx
  const struct CPointerInputFrame *FrameById; // rax
  CTouchProcessor *v17; // rcx
  const struct CPointerInputFrame *v18; // r14
  int v20; // edx
  struct CPointerInfoNode *v21; // rbx
  int v22; // r8d
  int v23; // eax
  int v24; // ebp
  int v25; // esi
  int v26; // ecx
  unsigned int v27; // eax
  unsigned int v28; // eax
  int v29; // ecx
  int v30; // eax
  int v31; // eax
  unsigned int v32; // eax
  int v33; // eax
  int v34; // eax
  __int16 v35; // [rsp+30h] [rbp-38h]

  v5 = a3;
  v6 = a2;
  v8 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(a3) = 0;
  }
  v9 = &WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      a2,
      a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      229,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  if ( !(unsigned int)IsPointerInputMessageWithState(v5, a2, a3, (__int64)v9) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7659);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v10, v6);
  v14 = NonConstMsgData;
  if ( !NonConstMsgData )
  {
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v12) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v12) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v8 = 0;
    if ( !(_BYTE)v12 && !v8 )
      return 0LL;
    v35 = 230;
LABEL_35:
    LOBYTE(v13) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)v15 + 3),
      v12,
      v13,
      *((_QWORD *)v15 + 8),
      5,
      4,
      v35,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
    return 0LL;
  }
  FrameById = (const struct CPointerInputFrame *)CTouchProcessor::FindFrameById(
                                                   (__int64)this,
                                                   *((_DWORD *)NonConstMsgData + 7),
                                                   4);
  v18 = FrameById;
  if ( !FrameById )
  {
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v12) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v12) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v8 = 0;
    if ( !(_BYTE)v12 && !v8 )
      return 0LL;
    v35 = 231;
    goto LABEL_35;
  }
  v21 = CTouchProcessor::LookupNode(v17, FrameById, *((_DWORD *)v14 + 8));
  if ( *((_WORD *)v21 + 86) != *((_WORD *)v14 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7676);
  if ( *((_DWORD *)v21 + 2) >= *((_DWORD *)v18 + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7677);
  switch ( v5 )
  {
    case 0x249u:
      if ( (*(_DWORD *)v21 & 8) == 0 && (*(_DWORD *)v21 & 0x40) == 0 && (*((_DWORD *)v21 + 45) & 1) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7689);
      v23 = *(_DWORD *)v21;
      v24 = 0x800000;
      v25 = 0x1000000;
      if ( (*(_DWORD *)v21 & 0x800000) != 0
        || (v23 & 0x1000000) != 0
        || (v23 & 0x4000000) != 0
        || (v23 & 0x2000000) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7694);
      }
      v26 = a4 << 24;
      v27 = *(_DWORD *)v21 & 0xFEFFFFFF;
LABEL_52:
      v28 = v24 | v27;
      v29 = v25 & v26;
LABEL_82:
      *(_DWORD *)v21 = v29 ^ v28;
      goto LABEL_83;
    case 0x24Au:
      v30 = *(_DWORD *)v21;
      v24 = 0x8000000;
      v25 = 0x10000000;
      if ( (*(_DWORD *)v21 & 0x8000000) != 0
        || (v30 & 0x10000000) != 0
        || (v30 & 0x40000000) != 0
        || (v30 & 0x20000000) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7707);
      }
      v26 = a4 << 28;
      v27 = *(_DWORD *)v21 & 0xEFFFFFFF;
      goto LABEL_52;
    case 0x251u:
      if ( (*(_DWORD *)v21 & 0x40) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7714);
      if ( *(int *)v21 < 0 || (v31 = *((_DWORD *)v21 + 1), (v31 & 1) != 0) || (v31 & 4) != 0 || (v31 & 2) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7719);
      *(_DWORD *)v21 |= 0x80000000;
      v32 = a4 ^ (*((_DWORD *)v21 + 1) ^ a4) & 0xFFFFFFFE;
      break;
    case 0x252u:
      v33 = *((_DWORD *)v21 + 1);
      if ( (v33 & 8) != 0 || (v33 & 0x10) != 0 || (v33 & 0x40) != 0 || (v33 & 0x20) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7731);
      v32 = (16 * (_BYTE)a4) & 0x10 ^ (*((_DWORD *)v21 + 1) & 0xFFFFFFE7 | 8);
      break;
    default:
      v34 = *(_DWORD *)v21;
      if ( (*(_DWORD *)v21 & 0x80000) != 0 || (v34 & 0x400000) != 0 || (v34 & 0x200000) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7740);
      v28 = *(_DWORD *)v21 & 0xFFE7FFFF | 0x80000;
      v29 = (a4 << 20) & 0x100000;
      goto LABEL_82;
  }
  *((_DWORD *)v21 + 1) = v32;
LABEL_83:
  if ( a4 )
    *(_DWORD *)(160LL * *((unsigned int *)v21 + 2) + *((_QWORD *)v18 + 31) + 140) |= 8u;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v20) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v20) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v22) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v22) = 0;
  }
  if ( (_BYTE)v20 || (_BYTE)v22 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v20,
      v22,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      232,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  return 1LL;
}
