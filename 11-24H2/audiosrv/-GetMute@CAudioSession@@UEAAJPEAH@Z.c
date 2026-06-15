/*
 * XREFs of ?GetMute@CAudioSession@@UEAAJPEAH@Z @ 0x180060490
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Sd @ 0x1800C30FC (WPP_SF_Sd.c)
 */

__int64 __fastcall CAudioSession::GetMute(CAudioSession *this, int *a2)
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
      18,
      (unsigned int)&WPP_ea93f1868512325b454513e390c361b8_Traceguids,
      *((_QWORD *)this + 82),
      *((_DWORD *)this + 195));
  }
  *a2 = *((_DWORD *)this + 195);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
