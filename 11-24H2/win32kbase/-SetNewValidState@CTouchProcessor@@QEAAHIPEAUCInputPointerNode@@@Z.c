/*
 * XREFs of ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x140205ADC
 * Callers:
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAH@Z @ 0x1401F71B0 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAH@Z.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1401F906C (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x140208FBC (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCIn.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8564 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_L @ 0x1400D900C (WPP_RECORDER_AND_TRACE_SF_L.c)
 *     WPP_RECORDER_AND_TRACE_SF_HLL @ 0x1400FF35C (WPP_RECORDER_AND_TRACE_SF_HLL.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_LL @ 0x14019C8E0 (WPP_RECORDER_AND_TRACE_SF_LL.c)
 */

_BOOL8 __fastcall CTouchProcessor::SetNewValidState(PERESOURCE *this, unsigned int a2, struct CInputPointerNode *a3)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rdx
  int v6; // r8d
  char v7; // bp
  char v8; // bl
  char v9; // di
  __int64 UserSessionState; // rax
  BOOL v11; // esi
  int v12; // r14d
  bool v13; // zf
  char v14; // di
  char v15; // r14
  __int64 v16; // rax
  void *v17; // r8
  char v19; // r12
  char v20; // r13
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rcx
  int v24; // [rsp+20h] [rbp-78h]
  int v25; // [rsp+28h] [rbp-70h]
  int v26; // [rsp+30h] [rbp-68h]
  int v27; // [rsp+38h] [rbp-60h]

  v4 = a2;
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1674);
  v7 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v5) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v5) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v6) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v6) = 0;
  }
  if ( (_BYTE)v5 || (_BYTE)v6 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)v5,
      v6,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      57,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  if ( (v4 & 0x70006) == 0x10006 )
  {
    v11 = *((_DWORD *)a3 + 14) <= 1u;
  }
  else
  {
    if ( (v4 & 0x70006) == 0x20000 )
    {
      v13 = *((_DWORD *)a3 + 14) == 1;
      v12 = 3;
LABEL_29:
      v11 = v13;
      goto LABEL_36;
    }
    if ( (v4 & 0x70006) == 0x20002 )
    {
      v12 = 1;
      v11 = *((_DWORD *)a3 + 14) <= 1u;
      goto LABEL_36;
    }
    if ( (v4 & 0x70006) != 0x20006 )
    {
      if ( (v4 & 0x70006) == 0x40000 )
      {
        v12 = 3;
      }
      else
      {
        if ( (v4 & 0x70006) != 0x40002 )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
            || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
          {
            v8 = 0;
          }
          v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
            WPP_RECORDER_AND_TRACE_SF_L(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v8,
              v9,
              *(_QWORD *)(UserSessionState + 69400),
              2u,
              v25,
              0x3Au,
              (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
          }
          v11 = 0;
          goto LABEL_40;
        }
        v12 = 1;
      }
      v13 = *((_DWORD *)a3 + 14) == 2;
      goto LABEL_29;
    }
    v11 = *((_DWORD *)a3 + 14) == 2;
  }
  v12 = 2;
LABEL_36:
  if ( !v11 )
    goto LABEL_40;
  if ( (v4 & 4) != 0 )
  {
    if ( (v4 & 0x1F0) == 0 )
    {
      v11 = 0;
      goto LABEL_40;
    }
    v11 = 1;
  }
  if ( (*((_DWORD *)a3 + 75) & 8) != 0 )
  {
    v11 = (v4 & 0x8000) != 0;
    if ( (v4 & 0x8000) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1796);
LABEL_40:
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
        WPP_RECORDER_AND_TRACE_SF_LL(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v14,
          v15,
          *(_QWORD *)(v16 + 69400),
          2u,
          v25,
          0x3Bu,
          v27);
      }
      goto LABEL_47;
    }
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v19 = 0;
  }
  v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = W32GetUserSessionState(WPP_GLOBAL_Control);
    WPP_RECORDER_AND_TRACE_SF_HLL(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v19,
      v20,
      *(_QWORD *)(v21 + 69400),
      v24,
      v25,
      v26,
      v27);
    v4 = a2;
  }
  *((_DWORD *)a3 + 14) = v12;
  if ( v12 == 3 )
  {
    v22 = (_QWORD *)((char *)a3 + 16);
    v23 = *((_QWORD *)a3 + 2);
    if ( (struct CInputPointerNode *)v23 != (struct CInputPointerNode *)((char *)a3 + 16) )
    {
      if ( *(_QWORD **)(v23 + 8) != v22 || (v5 = (_QWORD *)*((_QWORD *)a3 + 3), (_QWORD *)*v5 != v22) )
        __fastfail(3u);
      *v5 = v23;
      *(_QWORD *)(v23 + 8) = v5;
      *((_QWORD *)a3 + 3) = (char *)a3 + 16;
      *v22 = v22;
    }
  }
  *((_DWORD *)a3 + 75) = *((_DWORD *)a3 + 75) & 0xFFFFFFF3 | ((v4 & 0x2000 | (v4 >> 1) & 0x4000) >> 11);
LABEL_47:
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v5) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v5) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v7 = 0;
  if ( (_BYTE)v5 || v7 )
  {
    v17 = &WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids;
    LOBYTE(v17) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)v5,
      (_DWORD)v17,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      61,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  }
  return v11;
}
