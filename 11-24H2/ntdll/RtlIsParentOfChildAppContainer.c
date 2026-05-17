/*
 * XREFs of RtlIsParentOfChildAppContainer @ 0x1800B5800
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetAppContainerSidType @ 0x1800B5630 (RtlGetAppContainerSidType.c)
 */

char __fastcall RtlIsParentOfChildAppContainer(__int64 a1, __int64 a2)
{
  unsigned int i; // edx
  int v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0;
  if ( (int)RtlGetAppContainerSidType(a1, &v6) < 0 || v6 != 2 || (int)RtlGetAppContainerSidType(a2, &v6) < 0 || v6 != 1 )
    return 0;
  for ( i = 1; i < 8; ++i )
  {
    if ( *(_DWORD *)(a1 + 4LL * i + 8) != *(_DWORD *)(a2 + 4LL * i + 8) )
      return 0;
  }
  return 1;
}
