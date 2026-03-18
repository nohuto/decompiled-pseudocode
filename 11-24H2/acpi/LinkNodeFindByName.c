/*
 * XREFs of LinkNodeFindByName @ 0x1400A8DA0
 * Callers:
 *     PcisuppGetRoutingInfo @ 0x1400B37A4 (PcisuppGetRoutingInfo.c)
 * Callees:
 *     ACPIAmliBuildObjectPathname @ 0x140039780 (ACPIAmliBuildObjectPathname.c)
 */

__int64 __fastcall LinkNodeFindByName(const char *a1, __int64 *a2)
{
  __int64 i; // rbx
  __int64 *v5; // rcx
  __int64 result; // rax
  PVOID v7; // rcx
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  for ( i = LinkNodeListHead - 56; &LinkNodeListHead != (__int64 *)(i + 56); i = *(_QWORD *)(i + 56) - 56LL )
  {
    v5 = *(__int64 **)(i + 600);
    P = 0LL;
    result = ACPIAmliBuildObjectPathname(v5, &P, 0);
    if ( (int)result < 0 )
      return result;
    v7 = P;
    if ( !strcmp((const char *)P, a1) )
    {
      *a2 = i;
      ExFreePoolWithTag(v7, 0);
      return 0LL;
    }
    ExFreePoolWithTag(P, 0);
  }
  return 3221226021LL;
}
