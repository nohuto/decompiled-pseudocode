/*
 * XREFs of ?Start@CPipeInstance@@QEAAJXZ @ 0x140014904
 * Callers:
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x140013EB0 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 * Callees:
 *     ?Stop@CPipeInstance@@QEAAJXZ @ 0x140014D40 (-Stop@CPipeInstance@@QEAAJXZ.c)
 *     WPP_SF_D @ 0x1400659FC (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065CDC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPipeInstance::Start(CPipeInstance *this)
{
  int v2; // ebx
  __int64 v3; // rcx
  _QWORD *v4; // rsi
  __int64 v5; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( !*((_DWORD *)this + 31) )
  {
    v3 = 0LL;
    v7 = 0LL;
    v4 = (_QWORD *)*((_QWORD *)this + 2);
    while ( v4 )
    {
      v5 = v4[2];
      v4 = (_QWORD *)*v4;
      if ( *(_DWORD *)(v5 + 40) == 1 )
      {
        v2 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(v5 + 32))(
               **(_QWORD **)(v5 + 32),
               &GUID_c684b72a_6df4_4774_bdf9_76b77509b653,
               &v7);
        if ( v2 < 0 )
        {
          if ( v7 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
LABEL_8:
          CPipeInstance::Stop(this);
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 51LL, &WPP_ece7ed133f5c32246e9f73031954d020_Traceguids);
          }
          AudDGTraceLoggingErrorHelper("CPipeInstance::Start", 0x1016u, v2);
          return (unsigned int)v2;
        }
        v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
        if ( v2 < 0 )
        {
          if ( v7 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
          goto LABEL_8;
        }
        v3 = v7;
        if ( v7 )
        {
          v7 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
          v3 = v7;
        }
      }
    }
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return (unsigned int)v2;
}
