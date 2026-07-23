/*
 * XREFs of PfpPartitionReferenceParentSafeByProcess @ 0x140418850
 * Callers:
 *     PfSnEndTrace @ 0x14095A268 (PfSnEndTrace.c)
 *     PfCheckDeprioritizeFile @ 0x1409DCA6C (PfCheckDeprioritizeFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpPartitionReferenceParentSafeByProcess(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8
  signed __int64 v3; // rax
  signed __int64 v4; // rtt
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 1880);
  _m_prefetchw((const void *)(v2 + 40));
  v3 = *(_QWORD *)(v2 + 40);
  while ( (unsigned __int64)(v3 + 1) > 1 )
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 40), v3 + 1, v3);
    if ( v4 == v3 )
    {
      result = v2;
      *a1 = *(_QWORD *)(v2 + 32);
      return result;
    }
  }
  if ( v3 )
    __fastfail(0xEu);
  *a1 = 0LL;
  return 0LL;
}
