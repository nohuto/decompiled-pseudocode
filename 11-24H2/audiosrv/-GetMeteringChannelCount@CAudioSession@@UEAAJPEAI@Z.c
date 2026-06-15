/*
 * XREFs of ?GetMeteringChannelCount@CAudioSession@@UEAAJPEAI@Z @ 0x18006B120
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x1800C033C (WPP_SF_S.c)
 *     WPP_SF_D @ 0x1800C03A4 (WPP_SF_D.c)
 */

__int64 __fastcall CAudioSession::GetMeteringChannelCount(CAudioSession *this, unsigned int *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  __int64 i; // rcx
  unsigned int v7; // edx

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_ea93f1868512325b454513e390c361b8_Traceguids, 0LL);
  }
  v4 = 0;
  v5 = 0;
  if ( a2 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
    for ( i = *((_QWORD *)this + 14); i != *((_QWORD *)this + 15); i += 8LL )
    {
      v7 = *(_DWORD *)(*(_QWORD *)i + 100LL);
      if ( v7 <= v5 )
        v7 = v5;
      v5 = v7;
    }
    if ( this != (CAudioSession *)-64LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_ea93f1868512325b454513e390c361b8_Traceguids, v5);
    }
    *a2 = v5;
  }
  else
  {
    v4 = -2147467261;
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetMeteringChannelCount", 1357, -2147467261);
  }
  return v4;
}
