/*
 * XREFs of ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1401FD700
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1401FCB24 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8564 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1400DE554 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x140184868 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_LL @ 0x14019C8E0 (WPP_RECORDER_AND_TRACE_SF_LL.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall CTouchProcessor::GeneratePointerInputMessages(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  int v8; // edi
  unsigned int v9; // ebp
  const struct CPointerInputFrame *v10; // r13
  CTouchProcessor *v11; // rbx
  char v12; // si
  int v13; // edx
  __int64 v14; // rax
  unsigned int v15; // r12d
  unsigned __int64 i; // r14
  CTouchProcessor *v17; // rcx
  char v18; // bp
  char v19; // r15
  __int64 UserSessionState; // rax
  void *v21; // r8
  int v22; // [rsp+28h] [rbp-F0h]
  int v23; // [rsp+38h] [rbp-E0h]
  _BYTE v24[113]; // [rsp+58h] [rbp-C0h] BYREF
  int v25; // [rsp+C9h] [rbp-4Fh]
  __int16 v26; // [rsp+CDh] [rbp-4Bh]
  char v27; // [rsp+CFh] [rbp-49h]
  unsigned int v29; // [rsp+130h] [rbp+18h]

  v29 = a3;
  v8 = a4;
  v9 = a3;
  v10 = a2;
  v11 = this;
  v12 = 1;
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
      (_DWORD)a2,
      a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      210,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  if ( !tagDomLock::IsLockedShared((PERESOURCE *)v11 + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7304);
  v14 = *((unsigned int *)v10 + 12);
  v15 = 0;
  for ( i = *((_QWORD *)v10 + 30); v15 < (unsigned int)v14; ++v15 )
  {
    v17 = (CTouchProcessor *)(*((_QWORD *)v10 + 30) + 480 * v14);
    if ( i >= (unsigned __int64)v17 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7311);
    if ( (unsigned int)CTouchProcessor::ShouldGenerateMessagesForNode(v17, v10, (const struct CPointerInfoNode *)i, a8) )
    {
      v13 = *(_DWORD *)i;
      if ( (*(_DWORD *)i & 0x1000) == 0 && (a6 & *(_DWORD *)(i + 180)) == a6 && (*(_DWORD *)(i + 180) & a7) == 0 )
      {
        if ( (v13 & 0x80000) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7321);
        if ( (*(_DWORD *)i & 0x80000) == 0 )
        {
          v25 = 0;
          v26 = 0;
          v27 = 0;
          memset(v24, 0, sizeof(v24));
          if ( !(unsigned int)CTouchProcessor::GenerateMessage(
                                (__int64)v11,
                                i,
                                *(_QWORD *)(i + 16),
                                v10,
                                0,
                                v9,
                                v8,
                                a5,
                                (CInputDest *)v24) )
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
              || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
            {
              v18 = 0;
            }
            v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
              WPP_RECORDER_AND_TRACE_SF_LL(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v18,
                v19,
                *(_QWORD *)(UserSessionState + 69400),
                2u,
                v22,
                0xD3u,
                v23);
              v11 = this;
              v8 = a4;
            }
            v9 = v29;
          }
        }
      }
    }
    v14 = *((unsigned int *)v10 + 12);
    i += 480LL;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v13) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v13) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v12 = 0;
  if ( (_BYTE)v13 || v12 )
  {
    v21 = &WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids;
    LOBYTE(v21) = v12;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      (_DWORD)v21,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      212,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  }
}
