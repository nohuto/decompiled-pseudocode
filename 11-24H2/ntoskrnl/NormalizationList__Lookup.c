/*
 * XREFs of NormalizationList__Lookup @ 0x1405F1254
 * Callers:
 *     RtlpGetNormalization @ 0x14078D4E0 (RtlpGetNormalization.c)
 * Callees:
 *     <none>
 */

char *__fastcall NormalizationList__Lookup(int a1)
{
  _DWORD *v1; // rax
  __int64 v2; // rdx

  v1 = NormalizationListHead;
  v2 = 0LL;
  if ( NormalizationListHead != (_UNKNOWN *)&NormalizationListHead )
  {
    while ( v1 != (_DWORD *)&NormalizationListHead )
    {
      if ( v1[4] == a1 )
        return (char *)(v1 + 6);
      v1 = *(_DWORD **)v1;
    }
  }
  return (char *)v2;
}
