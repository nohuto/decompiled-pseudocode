/*
 * XREFs of ?GetChannelVolume@CAudioSession@@UEAAJIPEAM@Z @ 0x180066D10
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qdg @ 0x1800736B8 (WPP_SF_qdg.c)
 */

__int64 __fastcall CAudioSession::GetChannelVolume(CAudioSession *this, unsigned int a2, float *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 v4; // rbp
  unsigned int v7; // ebx

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 736);
  v4 = a2;
  v7 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  if ( (unsigned int)v4 >= *((_DWORD *)this + 222) )
  {
    v7 = -2147024809;
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetChannelVolume", 1045, -2147024809);
  }
  else
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qdg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        22LL,
        &WPP_ea93f1868512325b454513e390c361b8_Traceguids,
        this,
        v4,
        *(float *)(*((_QWORD *)this + 112) + 4 * v4));
    }
    *a3 = *(float *)(*((_QWORD *)this + 112) + 4 * v4);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return v7;
}
