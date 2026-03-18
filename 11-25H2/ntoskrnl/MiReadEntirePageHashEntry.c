/*
 * XREFs of MiReadEntirePageHashEntry @ 0x140462534
 * Callers:
 *     MiLateWritePageHash @ 0x1404C9C60 (MiLateWritePageHash.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReadEntirePageHashEntry(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)a2 = *(_DWORD *)a1;
  result = 0LL;
  if ( dword_140E37050 )
  {
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 8);
    result = *(unsigned int *)(a1 + 4);
  }
  else
  {
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  *(_DWORD *)(a2 + 4) = result;
  return result;
}
