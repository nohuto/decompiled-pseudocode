/*
 * XREFs of ?UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D3570
 * Callers:
 *     DestroyBaseWindow @ 0x1401BE600 (DestroyBaseWindow.c)
 *     ?UnReferenceOnThreadTermination@CRefUnRefPointerMsgId@@SAXPEAX@Z @ 0x140208B20 (-UnReferenceOnThreadTermination@CRefUnRefPointerMsgId@@SAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1400D3998 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D39CC (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F6360 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 */

void __fastcall CTouchProcessor::UnreferenceMsgDataExternal(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // esi
  __int64 v4; // rbp
  char v6; // bl
  int v7; // edx
  int v8; // r8d
  _BYTE v9[64]; // [rsp+40h] [rbp-58h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36);
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      a2,
      a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      297,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v9,
    (struct CEResourceLock *)(a1 + 32),
    0LL);
  CTouchProcessor::UnreferenceMsgData(a1, v4, v3);
  LOBYTE(v7) = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v6 = 0;
  if ( (_BYTE)v7 || v6 )
  {
    LOBYTE(v8) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v8,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      298,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v9);
}
