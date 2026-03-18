/*
 * XREFs of EditionGetInputDelegate @ 0x1401A6CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionGetInputDelegate(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  int v4; // eax

  v1 = *(_QWORD *)(a1 + 80);
  v2 = 0LL;
  if ( v1 )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(v1 + 16) + 1496LL);
    if ( v2 )
    {
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 528), 0, 0) & 1) == 0 )
        return v2;
      v2 = 0LL;
    }
    v4 = *(_DWORD *)(v1 + 260);
    if ( v4 && (v4 & 0x1000) != 0 )
      return *(_QWORD *)(v1 + 264);
  }
  return v2;
}
