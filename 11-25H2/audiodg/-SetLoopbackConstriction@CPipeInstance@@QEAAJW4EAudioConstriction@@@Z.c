/*
 * XREFs of ?SetLoopbackConstriction@CPipeInstance@@QEAAJW4EAudioConstriction@@@Z @ 0x14006C2C4
 * Callers:
 *     ?UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z @ 0x140064FA8 (-UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x140065A6C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065D4C (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPipeInstance::SetLoopbackConstriction(CPipeInstance *this, __int64 a2)
{
  int v2; // ebx

  v2 = 0;
  if ( *((_DWORD *)this + 30) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 22) + 24LL))(*((_QWORD *)this + 22), a2);
    if ( v2 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x35u,
          (__int64)&WPP_ece7ed133f5c32246e9f73031954d020_Traceguids,
          v2);
      }
      AudDGTraceLoggingErrorHelper("CPipeInstance::SetLoopbackConstriction", 4285, v2);
    }
  }
  return (unsigned int)v2;
}
