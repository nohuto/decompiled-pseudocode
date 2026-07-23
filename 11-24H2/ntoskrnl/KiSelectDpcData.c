/*
 * XREFs of KiSelectDpcData @ 0x140425200
 * Callers:
 *     KeRemoveQueueDpcEx @ 0x14045A7C0 (KeRemoveQueueDpcEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSelectDpcData(__int64 a1, _BYTE *a2)
{
  __int64 result; // rax
  char v3; // dl
  __int64 v4; // rcx

  result = a1 + 14400;
  if ( *a2 == 26 )
  {
    v3 = *(_BYTE *)(a1 + 14520);
    v4 = a1 + 14448;
    if ( v3 )
      return v4;
  }
  return result;
}
