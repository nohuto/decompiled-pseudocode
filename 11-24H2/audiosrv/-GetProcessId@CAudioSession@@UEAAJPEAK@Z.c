/*
 * XREFs of ?GetProcessId@CAudioSession@@UEAAJPEAK@Z @ 0x180061DB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x1800C033C (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::GetProcessId(CAudioSession *this, unsigned int *a2)
{
  int v4; // eax
  unsigned int v5; // ecx

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      13LL,
      &WPP_ea93f1868512325b454513e390c361b8_Traceguids,
      *((_QWORD *)this + 82));
  }
  v4 = *((_DWORD *)this + 162);
  if ( v4 )
    v5 = *((_DWORD *)this + 51);
  else
    v5 = *((_DWORD *)this + 160);
  *a2 = v5;
  return v4 != 0 ? 0x889000D : 0;
}
