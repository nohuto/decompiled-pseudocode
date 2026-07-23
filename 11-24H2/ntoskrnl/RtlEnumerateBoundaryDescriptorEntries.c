/*
 * XREFs of RtlEnumerateBoundaryDescriptorEntries @ 0x14086B5C0
 * Callers:
 *     ObpCompareEntryLevel1 @ 0x14086B910 (ObpCompareEntryLevel1.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140A05EC4 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140A062C8 (ObpCaptureBoundaryDescriptor.c)
 *     ObpCheckDuplicateEntries @ 0x140A06628 (ObpCheckDuplicateEntries.c)
 *     ObpCompareNamespaceEntry @ 0x140A066E8 (ObpCompareNamespaceEntry.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x140454FB0 (RtlSubAuthorityCountSid.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     RtlValidSid @ 0x14086B530 (RtlValidSid.c)
 *     RtlpValidateSidBuffer @ 0x14086B55C (RtlpValidateSidBuffer.c)
 *     RtlLengthRequiredSid @ 0x14086B5A0 (RtlLengthRequiredSid.c)
 *     ObpCompareEntryLevel2 @ 0x14086B770 (ObpCompareEntryLevel2.c)
 *     ObpCompareEntryLevel1 @ 0x14086B910 (ObpCompareEntryLevel1.c)
 *     ObpHashBoundaryFunction @ 0x14086D620 (ObpHashBoundaryFunction.c)
 */

__int64 __fastcall RtlEnumerateBoundaryDescriptorEntries(
        _DWORD *a1,
        __int64 (__fastcall *a2)(void *Source1),
        __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 v6; // rsi
  int v7; // r10d
  char *v8; // rbx
  int v9; // r9d
  int v10; // r12d
  __int64 v11; // rdx
  char *v12; // r13
  int v13; // eax
  ULONG v15; // r15d
  PUCHAR v16; // rax
  BOOLEAN valid; // al
  int v18; // [rsp+60h] [rbp+8h]
  __int64 v19; // [rsp+70h] [rbp+18h]
  int v20; // [rsp+78h] [rbp+20h]

  v19 = a3;
  v3 = (unsigned int)a1[2];
  if ( (unsigned int)v3 < 0x10 )
    return 3221225485LL;
  if ( *a1 != 1 )
    return 3221225485LL;
  v6 = (unsigned __int64)a1 + v3;
  if ( (_DWORD *)((char *)a1 + v3) < a1 )
    return 3221225485LL;
  v7 = 0;
  v8 = (char *)(a1 + 4);
  v9 = 0;
  v20 = 0;
  v18 = 0;
  v10 = 0;
  while ( (unsigned __int64)(v8 + 8) < v6 )
  {
    v11 = *((unsigned int *)v8 + 1);
    ++v10;
    if ( (unsigned int)v11 < 8 )
      return 3221225485LL;
    v12 = &v8[v11];
    if ( (unsigned __int64)&v8[v11] > v6 || v12 < v8 )
      return 3221225485LL;
    if ( *(_DWORD *)v8 == 1 )
    {
      v18 = v9 + 1;
      if ( (unsigned int)(v9 + 1) > 1 )
        return 3221225661LL;
    }
    else
    {
      if ( *(_DWORD *)v8 == 2 )
      {
        v15 = v11 - 8;
        if ( (unsigned int)(v11 - 8) < 8 )
          return 3221225485LL;
        v16 = RtlSubAuthorityCountSid(v8 + 8);
        if ( v15 < RtlLengthRequiredSid(*v16) )
          return 3221225485LL;
        valid = RtlValidSid(v8 + 8);
      }
      else
      {
        if ( *(_DWORD *)v8 != 3 )
          return 3221225485LL;
        v20 = v7 + 1;
        if ( (unsigned int)(v7 + 1) > 1 )
          return 3221226026LL;
        valid = RtlpValidateSidBuffer(v8 + 8, v11 - 8);
      }
      if ( !valid )
        return 3221225485LL;
      a3 = v19;
    }
    if ( a2 )
    {
      if ( a2 == ObpCompareEntryLevel2 )
      {
        v13 = ObpCompareEntryLevel2(v8);
      }
      else if ( (char *)a2 == (char *)ObpCompareEntryLevel1 )
      {
        v13 = ObpCompareEntryLevel1(v8, a3);
      }
      else
      {
        v13 = (char *)a2 == (char *)ObpHashBoundaryFunction
            ? ObpHashBoundaryFunction(v8, a3)
            : guard_dispatch_icall_no_overrides(v8, a3);
      }
      if ( !v13 )
        break;
    }
    a3 = v19;
    v9 = v18;
    v8 = (char *)((unsigned __int64)(v12 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    v7 = v20;
  }
  if ( a1[1] != v10 )
    return 3221225485LL;
  return 0LL;
}
