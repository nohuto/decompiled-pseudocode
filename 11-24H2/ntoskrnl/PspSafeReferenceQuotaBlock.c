/*
 * XREFs of PspSafeReferenceQuotaBlock @ 0x140A2BFEC
 * Callers:
 *     PspLookupProcessQuotaBlock @ 0x140A2BAE4 (PspLookupProcessQuotaBlock.c)
 *     PspAssignProcessQuotaBlock @ 0x140A2BBE8 (PspAssignProcessQuotaBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSafeReferenceQuotaBlock(__int64 a1)
{
  signed __int32 v1; // edx
  bool v2; // zf
  signed __int32 v3; // eax

  _m_prefetchw((const void *)(a1 + 512));
  v1 = *(_DWORD *)(a1 + 512);
  while ( v1 )
  {
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 512), v1 + 1, v1);
    v2 = v1 == v3;
    v1 = v3;
    if ( v2 )
      return 1LL;
  }
  return 0LL;
}
