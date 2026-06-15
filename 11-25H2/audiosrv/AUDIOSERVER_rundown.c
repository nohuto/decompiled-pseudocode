/*
 * XREFs of AUDIOSERVER_rundown @ 0x180047B80
 * Callers:
 *     <none>
 * Callees:
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x18000CB20 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D6A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Detail.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x180047C8C (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1800C480C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1800C49A0 (WPP_SF_qD.c)
 */

__int64 __fastcall AUDIOSERVER_rundown(void *a1)
{
  int v2; // eax
  LPCRITICAL_SECTION v3; // rbx
  _BYTE v6[16]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v7[16]; // [rsp+40h] [rbp-28h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v6, a1);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_8bc7b28d8efe3d7b840b96e094d2bf56_Traceguids, a1);
  }
  v2 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IUnknown>::Release((volatile signed __int64 *)a1);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 2), 22LL, &WPP_8bc7b28d8efe3d7b840b96e094d2bf56_Traceguids, a1, v2);
  }
  v3 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  if ( LODWORD(v3[1].DebugInfo)-- == 1 )
    CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v3);
  LeaveCriticalSection(v3);
  return EtwEventActivityIdControl(4LL, v7);
}
