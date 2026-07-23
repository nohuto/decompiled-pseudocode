/*
 * XREFs of BiTranslateDisplayOrder @ 0x140AA4E84
 * Callers:
 *     BiExportEfiBootManager @ 0x140AADFCC (BiExportEfiBootManager.c)
 * Callees:
 *     BiTranslateObjectIdentifier @ 0x140815E74 (BiTranslateObjectIdentifier.c)
 */

__int64 __fastcall BiTranslateDisplayOrder(__int64 **a1, _QWORD *a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v10; // r14
  __int64 result; // rax

  v4 = 0LL;
  v5 = 0;
  if ( *a4 )
  {
    v10 = (unsigned int)*a4;
    do
    {
      if ( (int)BiTranslateObjectIdentifier(a1, a2, (_DWORD *)(a3 + 4 * v4)) >= 0 )
        v4 = (unsigned int)(v4 + 1);
      else
        v5 = -2147483635;
      a2 += 2;
      --v10;
    }
    while ( v10 );
  }
  result = v5;
  *a4 = v4;
  return result;
}
