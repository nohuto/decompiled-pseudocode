/*
 * XREFs of CSTRemove @ 0x1401AD6F0
 * Callers:
 *     VideoPortCallout @ 0x1401237F0 (VideoPortCallout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSTRemove(__int64 a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // rbx
  __int64 v5; // rax

  v3 = a1;
  v4 = 0LL;
  v5 = W32GetUserSessionState(a1) + 71552;
  while ( (unsigned int)v4 < 0x1E )
  {
    if ( *(_QWORD *)(v5 + 24 * v4) == a2 && *(_DWORD *)(v5 + 24 * v4 + 16) == v3 )
    {
      *(_QWORD *)(v5 + 24 * v4) = 0LL;
      *(_DWORD *)(v5 + 24 * v4 + 16) = 0;
      return 1LL;
    }
    v4 = (unsigned int)(v4 + 1);
  }
  return 0LL;
}
