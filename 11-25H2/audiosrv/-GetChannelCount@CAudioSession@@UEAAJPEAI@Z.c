/*
 * XREFs of ?GetChannelCount@CAudioSession@@UEAAJPEAI@Z @ 0x180087120
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Sd @ 0x1800C4424 (WPP_SF_Sd.c)
 */

__int64 __fastcall CAudioSession::GetChannelCount(CAudioSession *this, unsigned int *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 736);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      21,
      (unsigned int)&WPP_6681b08aa41435022487e8d1ae4eb6cc_Traceguids,
      *((_QWORD *)this + 82),
      *((_DWORD *)this + 222));
  }
  *a2 = *((_DWORD *)this + 222);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
