/*
 * XREFs of RtlLookupElementGenericTable @ 0x1800C4840
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x1800C48C0 (RtlSplay.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlLookupElementGenericTable(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  int v5; // eax

  v2 = *a1;
  if ( !*a1 )
    return 0LL;
  while ( 1 )
  {
    v5 = ((__int64 (__fastcall *)(__int64 *, __int64, __int64))a1[5])(a1, a2, v2 + 40);
    if ( v5 )
      break;
    v2 = *(_QWORD *)(v2 + 8);
LABEL_4:
    if ( !v2 )
      return 0LL;
  }
  if ( v5 == 1 )
  {
    v2 = *(_QWORD *)(v2 + 16);
    goto LABEL_4;
  }
  *a1 = RtlSplay(v2);
  return v2 + 40;
}
