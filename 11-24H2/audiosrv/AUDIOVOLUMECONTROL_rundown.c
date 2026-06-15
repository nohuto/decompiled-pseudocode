/*
 * XREFs of AUDIOVOLUMECONTROL_rundown @ 0x18006E850
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1800C34E4 (WPP_SF_q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall AUDIOVOLUMECONTROL_rundown(__int64 a1)
{
  _UNKNOWN **result; // rax

  result = &WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    result = (_UNKNOWN **)WPP_SF_q(
                            *((_QWORD *)WPP_GLOBAL_Control + 2),
                            11LL,
                            &WPP_0bbc8e5536fd3ef960b697e18e744cbf_Traceguids,
                            a1);
  }
  if ( a1 )
    return (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return result;
}
