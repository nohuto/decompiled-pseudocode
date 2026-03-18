/*
 * XREFs of ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x1401367C8
 * Callers:
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x14006041C (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ReadSettingsFromRegKey@DelayZonePalmRejection@@AEAAXXZ @ 0x14013693C (-ReadSettingsFromRegKey@DelayZonePalmRejection@@AEAAXXZ.c)
 *     ?Initialize@DelayZoneTelemetry@@QEAAXKK@Z @ 0x14019B0C8 (-Initialize@DelayZoneTelemetry@@QEAAXKK@Z.c)
 *     ?Initialize@CEResourceLock@@QEAA_NXZ @ 0x1401F3E0C (-Initialize@CEResourceLock@@QEAA_NXZ.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall DelayZonePalmRejection::Initialize(DelayZonePalmRejection *this)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  char v5; // si
  DelayZoneTelemetry *v6; // rcx
  DelayZoneTelemetry *v7; // rax
  DelayZoneTelemetry *v8; // rdi
  bool v9; // bl
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  _OWORD v13[5]; // [rsp+40h] [rbp-58h] BYREF

  DelayZonePalmRejection::ReadSettingsFromRegKey(this);
  memset(v13, 0, 0x48uLL);
  v2 = v13[1];
  *(_OWORD *)this = v13[0];
  v3 = v13[2];
  *((_OWORD *)this + 1) = v2;
  v4 = v13[3];
  *((_OWORD *)this + 2) = v3;
  *(_QWORD *)&v3 = *(_QWORD *)&v13[4];
  *((_OWORD *)this + 3) = v4;
  *((_QWORD *)this + 8) = v3;
  *((_QWORD *)this + 3) = 0LL;
  CEResourceLock::Initialize((DelayZonePalmRejection *)((char *)this + 112));
  v5 = 1;
  *((_QWORD *)this + 10) = (char *)this + 72;
  *((_QWORD *)this + 9) = (char *)this + 72;
  *((_DWORD *)this + 23) = 0;
  v6 = (DelayZoneTelemetry *)*((_QWORD *)this + 15);
  *((_DWORD *)this + 22) = 1;
  if ( v6 )
  {
    DelayZoneTelemetry::Initialize(v6, *((_DWORD *)this + 26), *((_DWORD *)this + 25));
  }
  else
  {
    v7 = (DelayZoneTelemetry *)Win32AllocPoolZInitImpl(256LL, 0x3010uLL, 0x7A647355u);
    v8 = v7;
    if ( v7 )
    {
      DelayZoneTelemetry::Initialize(v7, *((_DWORD *)this + 26), *((_DWORD *)this + 25));
      *((_QWORD *)this + 15) = v8;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v5 = 0;
      }
      v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v11) = v9;
        LOBYTE(v12) = v5;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v12,
          v11,
          *(_QWORD *)(UserSessionState + 69400),
          4,
          4,
          22,
          (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids);
      }
    }
  }
}
