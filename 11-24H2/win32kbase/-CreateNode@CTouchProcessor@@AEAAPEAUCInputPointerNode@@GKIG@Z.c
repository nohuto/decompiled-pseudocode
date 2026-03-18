/*
 * XREFs of ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1401F906C
 * Callers:
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x140208FBC (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCIn.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     isRootPartition @ 0x14004FB7C (isRootPartition.c)
 *     isChildPartition @ 0x1400525E0 (isChildPartition.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8564 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetNextChildPointerId@CTouchProcessor@@AEAAGG@Z @ 0x1401FED70 (-GetNextChildPointerId@CTouchProcessor@@AEAAGG@Z.c)
 *     ?GetNextPointerId@CTouchProcessor@@AEAAGXZ @ 0x1401FEE84 (-GetNextPointerId@CTouchProcessor@@AEAAGXZ.c)
 *     ?GetNextRootPointerId@CTouchProcessor@@AEAAGXZ @ 0x1401FEF20 (-GetNextRootPointerId@CTouchProcessor@@AEAAGXZ.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x140205ADC (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 */

struct CInputPointerNode *__fastcall CTouchProcessor::CreateNode(
        PERESOURCE *this,
        __int16 a2,
        int a3,
        unsigned int a4,
        unsigned __int16 a5)
{
  int v6; // ebp
  __int16 v7; // r14
  char v9; // bl
  __int16 v10; // dx
  void *v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdi
  char v14; // di
  bool v15; // si
  __int64 v16; // rax
  int v17; // r8d
  __int16 v18; // dx
  CTouchProcessor *v19; // rcx
  __int64 v20; // rcx
  unsigned __int16 NextRootPointerId; // ax
  _QWORD *v22; // r14
  unsigned int v23; // eax
  __int16 v24; // dx
  char v25; // si
  bool v26; // bp
  __int64 v27; // rax
  int v28; // r8d
  __int16 v29; // dx
  __int64 *v30; // rax
  PERESOURCE v31; // rcx
  char *v32; // rsi
  __int64 v33; // rax
  void *v34; // r8
  char v36; // di
  char v37; // si
  __int64 UserSessionState; // rax
  __int16 v39; // [rsp+30h] [rbp-48h]

  v6 = a3;
  v7 = a2;
  v9 = 1;
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
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      a2,
      a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      233,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8673);
  if ( v6 == 1 || v6 != 2 && v6 != 3 && v6 != 5 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v36 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v36 = 0;
    }
    v37 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v36,
        v37,
        *(_QWORD *)(UserSessionState + 69400),
        2u,
        4u,
        0xEAu,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids,
        v6);
    }
    v19 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v10 && !v9 )
      return 0LL;
    v39 = 235;
    goto LABEL_91;
  }
  v13 = Win32AllocPoolZInitImpl(256LL, 0x130uLL, 0x70697355u);
  if ( !v13 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v14 = 0;
    }
    v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v17) = v15;
      LOBYTE(v18) = v14;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v17,
        *(_QWORD *)(v16 + 69400),
        2,
        4,
        236,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
    }
    v19 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v10 && !v9 )
      return 0LL;
    v39 = 237;
LABEL_91:
    LOBYTE(v11) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)v19 + 3),
      v10,
      (_DWORD)v11,
      *((_QWORD *)v19 + 8),
      5,
      4,
      v39,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
    return 0LL;
  }
  if ( isRootPartition(v12) )
  {
    NextRootPointerId = CTouchProcessor::GetNextRootPointerId((CTouchProcessor *)this);
  }
  else if ( isChildPartition(v20) )
  {
    NextRootPointerId = CTouchProcessor::GetNextChildPointerId((CTouchProcessor *)this, a5);
  }
  else
  {
    NextRootPointerId = CTouchProcessor::GetNextPointerId((CTouchProcessor *)this);
  }
  *(_WORD *)(v13 + 32) = NextRootPointerId;
  *(_WORD *)(v13 + 34) = v7;
  *(_QWORD *)(v13 + 264) = v13 + 256;
  v22 = (_QWORD *)(v13 + 16);
  *(_QWORD *)(v13 + 256) = v13 + 256;
  *(_QWORD *)(v13 + 8) = v13;
  *(_QWORD *)(v13 + 248) = v13 + 240;
  *(_QWORD *)(v13 + 240) = v13 + 240;
  *(_QWORD *)(v13 + 288) = v13 + 280;
  *(_QWORD *)(v13 + 280) = v13 + 280;
  v23 = *(_DWORD *)(v13 + 300) & 0xFFFFE97F;
  *(_QWORD *)v13 = v13;
  *(_QWORD *)(v13 + 24) = v13 + 16;
  *(_QWORD *)(v13 + 16) = v13 + 16;
  *(_DWORD *)(v13 + 300) = v23 | 0x900;
  *(_DWORD *)(v13 + 60) = v6;
  *(_WORD *)(v13 + 272) = 0;
  *(_DWORD *)(v13 + 56) = 0;
  if ( !(unsigned int)CTouchProcessor::SetNewValidState((CTouchProcessor *)this, a4, (struct CInputPointerNode *)v13) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8733);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v25 = 0;
    }
    v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v27 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v28) = v26;
      LOBYTE(v29) = v25;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v29,
        v28,
        *(_QWORD *)(v27 + 69400),
        2,
        4,
        238,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
    }
    GreDeleteFastMutex((char *)v13);
    v19 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v10 && !v9 )
      return 0LL;
    v11 = &WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids;
    v39 = 239;
    goto LABEL_91;
  }
  if ( *(_DWORD *)(v13 + 56) == 3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8742);
  v30 = (__int64 *)(this + 8);
  v31 = this[8];
  if ( (PERESOURCE *)v31->SystemResourcesList.Blink != this + 8
    || (*(_QWORD *)v13 = v31,
        v32 = (char *)(this + 10),
        *(_QWORD *)(v13 + 8) = v30,
        v31->SystemResourcesList.Blink = (struct _LIST_ENTRY *)v13,
        *v30 = v13,
        v33 = *(_QWORD *)v32,
        *(char **)(*(_QWORD *)v32 + 8LL) != v32) )
  {
    __fastfail(3u);
  }
  *v22 = v33;
  *(_QWORD *)(v13 + 24) = v32;
  *(_QWORD *)(v33 + 8) = v22;
  *(_QWORD *)v32 = v22;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v24) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v24) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v9 = 0;
  if ( (_BYTE)v24 || v9 )
  {
    v34 = &WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids;
    LOBYTE(v34) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v24,
      (_DWORD)v34,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      240,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  }
  return (struct CInputPointerNode *)v13;
}
