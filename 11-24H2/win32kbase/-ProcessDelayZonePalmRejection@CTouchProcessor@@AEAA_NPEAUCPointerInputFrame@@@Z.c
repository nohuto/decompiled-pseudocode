/*
 * XREFs of ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1400C2D48
 * Callers:
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1401853C0 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x14006041C (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1400C2FA8 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1400C38DC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     RIMAbIsDeviceArbitrationEnabled @ 0x1400C3910 (RIMAbIsDeviceArbitrationEnabled.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F63B8 (--0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 */

bool __fastcall CTouchProcessor::ProcessDelayZonePalmRejection(CTouchProcessor *this, struct CPointerInputFrame *a2)
{
  struct CPointerInputFrame *v2; // rsi
  CTouchProcessor *v4; // rcx
  char v5; // bl
  char v6; // r8
  bool v7; // bp
  struct DelayZonePalmRejection *Instance; // rax
  int v9; // edx
  DelayZonePalmRejection *v10; // rdi
  bool v11; // zf
  char v12; // al
  char v14; // di
  bool v15; // si
  __int64 UserSessionState; // rax
  int v17; // edx
  _BYTE v18[48]; // [rsp+40h] [rbp-48h] BYREF

  v2 = a2;
  v4 = WPP_GLOBAL_Control;
  v5 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v6 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v6 = 0;
  }
  if ( (_BYTE)a2 || v6 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)a2,
      v6,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      30,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  v7 = 1;
  Instance = DelayZonePalmRejection::GetInstance((__int64)v4);
  v10 = Instance;
  if ( Instance )
  {
    if ( !*((_DWORD *)Instance + 24) || (v11 = (unsigned int)RIMAbIsDeviceArbitrationEnabled() == 0, v12 = 1, v11) )
      v12 = 0;
    if ( v12 )
    {
      CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
        (CInpUnlockGuardExclusive *)v18,
        (CTouchProcessor *)((char *)this + 32),
        0LL);
      v7 = DelayZonePalmRejection::ProcessInput(v10, v2);
      CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive((CInpUnlockGuardExclusive *)v18);
    }
  }
  else
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
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v17) = v14;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v15,
        *(_QWORD *)(UserSessionState + 69400),
        2,
        4,
        31,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
    }
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v9) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v9) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v5 = 0;
  if ( (_BYTE)v9 || v5 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v5,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      32,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  return v7;
}
