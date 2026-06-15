/*
 * XREFs of AudioServerReleaseStreamConnection @ 0x18010AEC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1800C480C (WPP_SF_q.c)
 *     ?ReleaseStreamConnection@@YAJPEAX@Z @ 0x180107250 (-ReleaseStreamConnection@@YAJPEAX@Z.c)
 */

__int64 __fastcall AudioServerReleaseStreamConnection(_QWORD **a1)
{
  __int64 result; // rax

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, (__int64)&WPP_8bc7b28d8efe3d7b840b96e094d2bf56_Traceguids, a1);
  }
  result = 2147942487LL;
  if ( a1 )
  {
    result = ReleaseStreamConnection(*a1);
    *a1 = 0LL;
  }
  return result;
}
