/*
 * XREFs of CmCloseRmHandle @ 0x1406F973C
 * Callers:
 *     CmpTryToRundownHive @ 0x1402C6840 (CmpTryToRundownHive.c)
 *     CmShutdownSystem1 @ 0x1406679A8 (CmShutdownSystem1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmCloseRmHandle(__int64 a1, char a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 && (*(_DWORD *)(a1 + 64) == 1 || a2 == 1) )
  {
    result = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  return result;
}
