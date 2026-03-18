/*
 * XREFs of RtlEnumerateBoundaryDescriptorEntries @ 0x140867130
 * Callers:
 *     ObpCompareEntryLevel1 @ 0x140867480 (ObpCompareEntryLevel1.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140A09994 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140A09D98 (ObpCaptureBoundaryDescriptor.c)
 *     ObpCheckDuplicateEntries @ 0x140A0A0F8 (ObpCheckDuplicateEntries.c)
 *     ObpCompareNamespaceEntry @ 0x140A0A1B8 (ObpCompareNamespaceEntry.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x1404600D0 (RtlSubAuthorityCountSid.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlValidSid @ 0x140866F20 (RtlValidSid.c)
 *     RtlpValidateSidBuffer @ 0x1408670C8 (RtlpValidateSidBuffer.c)
 *     RtlLengthRequiredSid @ 0x140867110 (RtlLengthRequiredSid.c)
 *     ObpCompareEntryLevel2 @ 0x1408672E0 (ObpCompareEntryLevel2.c)
 *     ObpCompareEntryLevel1 @ 0x140867480 (ObpCompareEntryLevel1.c)
 *     ObpHashBoundaryFunction @ 0x140A03510 (ObpHashBoundaryFunction.c)
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
  __int64 v13; // r9
  int v14; // eax
  ULONG v16; // r15d
  PUCHAR v17; // rax
  BOOLEAN valid; // al
  int v19; // [rsp+60h] [rbp+8h]
  __int64 v20; // [rsp+70h] [rbp+18h]
  int v21; // [rsp+78h] [rbp+20h]

  v20 = a3;
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
  v21 = 0;
  v19 = 0;
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
      v13 = (unsigned int)(v9 + 1);
      v19 = v13;
      if ( (unsigned int)v13 > 1 )
        return 3221225661LL;
    }
    else
    {
      if ( *(_DWORD *)v8 == 2 )
      {
        v16 = v11 - 8;
        if ( (unsigned int)(v11 - 8) < 8 )
          return 3221225485LL;
        v17 = RtlSubAuthorityCountSid(v8 + 8);
        if ( v16 < RtlLengthRequiredSid(*v17) )
          return 3221225485LL;
        valid = RtlValidSid(v8 + 8);
      }
      else
      {
        if ( *(_DWORD *)v8 != 3 )
          return 3221225485LL;
        v21 = v7 + 1;
        if ( (unsigned int)(v7 + 1) > 1 )
          return 3221226026LL;
        valid = RtlpValidateSidBuffer(v8 + 8, v11 - 8);
      }
      if ( !valid )
        return 3221225485LL;
      a3 = v20;
    }
    if ( a2 )
    {
      if ( a2 == ObpCompareEntryLevel2 )
      {
        v14 = ObpCompareEntryLevel2(v8);
      }
      else if ( (char *)a2 == (char *)ObpCompareEntryLevel1 )
      {
        v14 = ObpCompareEntryLevel1(v8, a3);
      }
      else
      {
        v14 = (char *)a2 == (char *)ObpHashBoundaryFunction
            ? ObpHashBoundaryFunction(v8, a3)
            : guard_dispatch_icall_no_overrides(v8, a3, a3, v13);
      }
      if ( !v14 )
        break;
    }
    a3 = v20;
    v9 = v19;
    v8 = (char *)((unsigned __int64)(v12 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    v7 = v21;
  }
  if ( a1[1] != v10 )
    return 3221225485LL;
  return 0LL;
}
