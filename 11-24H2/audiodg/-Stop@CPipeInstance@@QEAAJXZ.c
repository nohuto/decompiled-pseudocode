/*
 * XREFs of ?Stop@CPipeInstance@@QEAAJXZ @ 0x140014D40
 * Callers:
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x140014340 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Start@CPipeInstance@@QEAAJXZ @ 0x140014904 (-Start@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x1400659FC (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065CDC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPipeInstance::Stop(CPipeInstance *this)
{
  int v1; // ebx
  __int64 v2; // rdx
  _QWORD *v3; // rdi
  __int64 v4; // rax
  int v6; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v2 = 0LL;
  v7 = 0LL;
  v3 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    do
    {
      v4 = v3[2];
      v3 = (_QWORD *)*v3;
      if ( *(_DWORD *)(v4 + 40) == 1 )
      {
        v6 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(v4 + 32))(
               **(_QWORD **)(v4 + 32),
               &GUID_c684b72a_6df4_4774_bdf9_76b77509b653,
               &v7);
        if ( v6 < 0 || (v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7), v6 < 0) )
          v1 = v6;
        v2 = v7;
        if ( v7 )
        {
          v7 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
          v2 = v7;
        }
      }
    }
    while ( v3 );
    if ( v1 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 52LL, &WPP_ece7ed133f5c32246e9f73031954d020_Traceguids);
      }
      AudDGTraceLoggingErrorHelper("CPipeInstance::Stop", 0x1056u, v1);
      v2 = v7;
    }
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return (unsigned int)v1;
}
