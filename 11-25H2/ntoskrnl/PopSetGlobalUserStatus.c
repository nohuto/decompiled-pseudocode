/*
 * XREFs of PopSetGlobalUserStatus @ 0x14096517C
 * Callers:
 *     PopSetSessionUserStatus @ 0x140964818 (PopSetSessionUserStatus.c)
 * Callees:
 *     PopExtendConnectionState @ 0x140752CF8 (PopExtendConnectionState.c)
 *     PopEvaluateGlobalUserStatus @ 0x1409651E8 (PopEvaluateGlobalUserStatus.c)
 */

__int64 __fastcall PopSetGlobalUserStatus(unsigned int a1, int a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rdx
  char v5; // bl
  int v6; // eax
  int v7; // eax

  v3 = a1;
  if ( PopMaximumConnectionSessions )
  {
    if ( a1 >= PopMaximumConnectionSessions )
      PopExtendConnectionState(a1);
    if ( PopMaximumConnectionSessions )
    {
      v4 = v3 >> 3;
      v5 = v3 & 7;
      v6 = *((char *)PopConnectionBitmap.Buffer + v4);
      if ( a2 )
        v7 = v6 & ~(1 << v5);
      else
        v7 = v6 | (1 << v5);
      *((_BYTE *)PopConnectionBitmap.Buffer + v4) = v7;
    }
  }
  return PopEvaluateGlobalUserStatus();
}
