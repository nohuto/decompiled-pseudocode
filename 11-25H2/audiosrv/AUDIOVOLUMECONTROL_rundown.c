/*
 * XREFs of AUDIOVOLUMECONTROL_rundown @ 0x180080FB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1800C480C (WPP_SF_q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
                            &WPP_79e616eb0e6d3403fe38f66ee5371edb_Traceguids,
                            a1);
  }
  if ( a1 )
    return (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return result;
}
