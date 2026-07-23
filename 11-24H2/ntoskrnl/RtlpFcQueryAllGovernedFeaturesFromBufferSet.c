/*
 * XREFs of RtlpFcQueryAllGovernedFeaturesFromBufferSet @ 0x14078D20C
 * Callers:
 *     RtlQueryAllInternalRuntimeFeatureConfigurations @ 0x1405E65D0 (RtlQueryAllInternalRuntimeFeatureConfigurations.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall RtlpFcQueryAllGovernedFeaturesFromBufferSet(__int64 a1, void *a2, unsigned __int64 *a3)
{
  unsigned int v4; // ebx
  const void *v5; // rdx
  unsigned __int64 v6; // rax

  v4 = 0;
  v5 = *(const void **)(a1 + 80);
  if ( v5 && (v6 = *(_QWORD *)(a1 + 88)) != 0 )
  {
    if ( *a3 >= v6 && a2 )
    {
      *a3 = v6;
      memmove(a2, v5, *(_QWORD *)(a1 + 88));
    }
    else
    {
      *a3 = v6;
      return (unsigned int)-2147483643;
    }
  }
  else
  {
    *a3 = 0LL;
  }
  return v4;
}
