/*
 * XREFs of ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x140186C30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsSamePointerFrame@CTouchProcessor@@AEAAH_K0@Z @ 0x1400C0654 (-IsSamePointerFrame@CTouchProcessor@@AEAAH_K0@Z.c)
 *     ApiSetEditionFindThreadPointerData @ 0x1400C4208 (ApiSetEditionFindThreadPointerData.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400C47E4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ApiSetEditionUnlinkAndFreeThreadPointerData @ 0x140193500 (ApiSetEditionUnlinkAndFreeThreadPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F6318 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?IsCoalescedMsgData@CTouchProcessor@@AEAAH_K@Z @ 0x14020122C (-IsCoalescedMsgData@CTouchProcessor@@AEAAH_K@Z.c)
 *     ?IsLastMsgData@CTouchProcessor@@AEAAH_K@Z @ 0x140201360 (-IsLastMsgData@CTouchProcessor@@AEAAH_K@Z.c)
 */

void __fastcall CTouchProcessor::UpdateThreadPointerList(
        CTouchProcessor *this,
        struct tagTHREADINPUTPOINTERLIST *a2,
        unsigned __int16 a3)
{
  unsigned __int16 v3; // si
  struct tagTHREADINPUTPOINTERLIST *v4; // rdi
  char v6; // bl
  unsigned __int64 v7; // rdx
  int v8; // r14d
  CTouchProcessor *v9; // rcx
  void *v10; // r8
  unsigned __int64 v11; // r15
  __int64 ThreadPointerData; // rsi
  struct tagTHREADINPUTPOINTERLIST *v13; // rsi
  struct tagTHREADINPUTPOINTERLIST *v14; // rcx
  int v15; // r12d
  struct tagTHREADINPUTPOINTERLIST *v16; // rbp
  int v17; // eax
  __int16 v18; // [rsp+30h] [rbp-68h]
  PERESOURCE *v19[6]; // [rsp+40h] [rbp-58h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = 1;
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
      111,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v19,
    (CTouchProcessor *)((char *)this + 32),
    0LL);
  v8 = 0;
  if ( v3 == 1 )
  {
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v7) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v7) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v6 = 0;
    if ( (_BYTE)v7 || v6 )
    {
      v10 = &WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids;
      v18 = 112;
LABEL_58:
      LOBYTE(v10) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)v9 + 3),
        v7,
        (_WORD)v10,
        *((_QWORD *)v9 + 8),
        5,
        4,
        v18,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
    }
  }
  else if ( *(struct tagTHREADINPUTPOINTERLIST **)v4 == v4 )
  {
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v7) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v7) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v6 = 0;
    if ( (_BYTE)v7 || v6 )
    {
      v10 = &WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids;
      v18 = 113;
      goto LABEL_58;
    }
  }
  else
  {
    v11 = 0LL;
    if ( v3 )
    {
      ThreadPointerData = ApiSetEditionFindThreadPointerData((__int64)v4, v3);
      if ( !ThreadPointerData )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4892LL);
      v11 = *(_QWORD *)(ThreadPointerData + 24);
    }
    v13 = *(struct tagTHREADINPUTPOINTERLIST **)v4;
    while ( v13 != v4 )
    {
      v14 = v13;
      v15 = v8++;
      v16 = v13;
      v13 = *(struct tagTHREADINPUTPOINTERLIST **)v13;
      v7 = *((_QWORD *)v14 + 3);
      v17 = *((_DWORD *)v14 + 12);
      if ( v11 == v7 )
      {
        *((_DWORD *)v14 + 12) = v17 | 2;
      }
      else if ( (v17 & 2) != 0
             && !(unsigned int)CTouchProcessor::IsSamePointerFrame(v14, v7, v11)
             && ((unsigned int)CTouchProcessor::IsLastMsgData(this, *((_QWORD *)v16 + 3))
              || (unsigned int)CTouchProcessor::IsCoalescedMsgData(this, *((_QWORD *)v16 + 3))) )
      {
        ApiSetEditionUnlinkAndFreeThreadPointerData(v4, v16);
        v8 = v15;
      }
    }
    if ( v8 != *((_DWORD *)v4 + 4) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4970LL);
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v7) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v7) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v6 = 0;
    if ( (_BYTE)v7 || v6 )
    {
      v10 = &WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids;
      v18 = 114;
      goto LABEL_58;
    }
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v19);
}
