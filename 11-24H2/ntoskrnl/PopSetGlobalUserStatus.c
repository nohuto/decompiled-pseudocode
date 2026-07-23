/*
 * XREFs of PopSetGlobalUserStatus @ 0x1409A357C
 * Callers:
 *     PopSetSessionUserStatus @ 0x1409A2C18 (PopSetSessionUserStatus.c)
 * Callees:
 *     PopExtendConnectionState @ 0x14075E728 (PopExtendConnectionState.c)
 *     PopEvaluateGlobalUserStatus @ 0x1409A35E8 (PopEvaluateGlobalUserStatus.c)
 */

__int64 __fastcall PopSetGlobalUserStatus(unsigned int *Buffer, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  unsigned __int64 v5; // rbx
  char v6; // bl
  int v7; // eax
  int v8; // eax

  v4 = a2;
  v5 = (unsigned int)Buffer;
  if ( PopMaximumConnectionSessions )
  {
    if ( (unsigned int)Buffer >= PopMaximumConnectionSessions )
      PopExtendConnectionState((unsigned int)Buffer);
    if ( PopMaximumConnectionSessions )
    {
      Buffer = PopConnectionBitmap.Buffer;
      a2 = v5 >> 3;
      v6 = v5 & 7;
      v7 = *((char *)PopConnectionBitmap.Buffer + a2);
      if ( v4 )
        v8 = v7 & ~(1 << v6);
      else
        v8 = v7 | (1 << v6);
      *((_BYTE *)PopConnectionBitmap.Buffer + a2) = v8;
    }
  }
  return PopEvaluateGlobalUserStatus(Buffer, a2, a3, a4);
}
