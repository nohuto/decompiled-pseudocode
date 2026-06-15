/*
 * XREFs of ?RegisterForNotifications@CMuteHardware@@UEAAJXZ @ 0x180086DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x1800C480C (WPP_SF_q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMuteHardware::RegisterForNotifications(CMuteHardware *this)
{
  int v2; // eax
  unsigned int v3; // edi

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_e846c6bb50ec3cebd8d62736219e1480_Traceguids, this);
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, GUID *, CMuteHardware *))(**((_QWORD **)this + 6) + 112LL))(
         *((_QWORD *)this + 6),
         &GUID_df45aeea_b74a_4b6b_afad_2366b6aa012e,
         this);
  v3 = v2;
  if ( v2 < 0 )
    AudSrvTraceLoggingErrorHelper("CMuteHardware::RegisterForNotifications", 502, v2);
  else
    *((_DWORD *)this + 16) = 1;
  return v3;
}
