/*
 * XREFs of PopEtAggregateKeyCopy @ 0x140961688
 * Callers:
 *     PopEtAggregateKeyCopyFromProcess @ 0x140961410 (PopEtAggregateKeyCopyFromProcess.c)
 *     PopEtAggregateGet @ 0x14096221C (PopEtAggregateGet.c)
 * Callees:
 *     PopEtStringReference @ 0x14096217C (PopEtStringReference.c)
 */

void __fastcall PopEtAggregateKeyCopy(__int64 *a1, _OWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt

  *(_OWORD *)a1 = *a2;
  *((_OWORD *)a1 + 1) = a2[1];
  v3 = *a1;
  if ( *a1 && *(_WORD *)(v3 + 24) )
  {
    _m_prefetchw((const void *)(v3 + 16));
    v5 = *(_QWORD *)(v3 + 16);
    while ( (unsigned __int64)(v5 + 1) > 1 )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 16), v5 + 1, v5);
      if ( v6 == v5 )
        goto LABEL_3;
    }
    if ( v5 )
      __fastfail(0xEu);
  }
LABEL_3:
  v4 = a1[1];
  if ( v4 )
    PopEtStringReference(v4, v3, a1);
}
