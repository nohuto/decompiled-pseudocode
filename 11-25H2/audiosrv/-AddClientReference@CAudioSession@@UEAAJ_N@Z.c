/*
 * XREFs of ?AddClientReference@CAudioSession@@UEAAJ_N@Z @ 0x18005CCE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qdd @ 0x1800C49F4 (WPP_SF_qdd.c)
 */

__int64 __fastcall CAudioSession::AddClientReference(CAudioSession *this, char a2)
{
  volatile signed __int32 *v2; // rax

  _InterlockedIncrement((volatile signed __int32 *)this + 82);
  v2 = (volatile signed __int32 *)((char *)this + 332);
  if ( a2 )
    _InterlockedIncrement(v2);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      59LL,
      &WPP_6681b08aa41435022487e8d1ae4eb6cc_Traceguids,
      this,
      *((_DWORD *)this + 82),
      *v2);
  }
  return 0LL;
}
