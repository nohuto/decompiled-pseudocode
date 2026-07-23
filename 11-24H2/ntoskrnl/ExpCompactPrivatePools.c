/*
 * XREFs of ExpCompactPrivatePools @ 0x140A41B0C
 * Callers:
 *     ExpHpCompactionRoutine @ 0x140480FD0 (ExpHpCompactionRoutine.c)
 * Callees:
 *     RtlpHpHeapCompact @ 0x14035CB34 (RtlpHpHeapCompact.c)
 *     ExpPrivatePoolGetNext @ 0x140A41B64 (ExpPrivatePoolGetNext.c)
 */

__int64 __fastcall ExpCompactPrivatePools(__int64 a1)
{
  unsigned int v1; // esi
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rdi

  v1 = a1;
  v2 = 0LL;
  while ( 1 )
  {
    result = ExpPrivatePoolGetNext(a1, v2);
    v4 = result;
    if ( !result )
      break;
    v5 = 0LL;
    if ( *(_DWORD *)(result + 72) )
    {
      do
      {
        RtlpHpHeapCompact(*(_QWORD *)(v4 + 8 * v5 + 80));
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < *(_DWORD *)(v4 + 72) );
    }
    v2 = v4;
    a1 = v1;
  }
  return result;
}
