/*
 * XREFs of LdrQueryOptionalDelayLoadedAPI @ 0x180117C30
 * Callers:
 *     <none>
 * Callees:
 *     LdrResolveDelayLoadedAPI @ 0x18001CEA0 (LdrResolveDelayLoadedAPI.c)
 *     LdrpFindDelayloadedMethod @ 0x18015F078 (LdrpFindDelayloadedMethod.c)
 *     LdrpFindDelayloadedMethodInDescriptor @ 0x18015F118 (LdrpFindDelayloadedMethodInDescriptor.c)
 *     LdrpGetDelayloadDescriptor @ 0x18015F1A4 (LdrpGetDelayloadDescriptor.c)
 */

__int64 __fastcall LdrQueryOptionalDelayLoadedAPI(unsigned __int64 a1, unsigned __int8 *a2, __int64 a3, int a4)
{
  int v7; // ecx
  char *DelayloadedMethodInDescriptor; // rax
  unsigned int *v9; // rbx
  __int64 DelayloadDescriptor; // rax
  unsigned int *v11; // [rsp+30h] [rbp-18h] BYREF

  v11 = 0LL;
  if ( a4 )
    return 3221225485LL;
  v7 = *a2 - 42;
  if ( *a2 == 42 )
    v7 = a2[1];
  if ( v7 )
  {
    DelayloadDescriptor = LdrpGetDelayloadDescriptor(a1);
    v9 = (unsigned int *)DelayloadDescriptor;
    if ( !DelayloadDescriptor )
      return 3221225781LL;
    DelayloadedMethodInDescriptor = (char *)LdrpFindDelayloadedMethodInDescriptor(a1, DelayloadDescriptor, a3);
  }
  else
  {
    DelayloadedMethodInDescriptor = (char *)LdrpFindDelayloadedMethod(a1, a3, &v11);
    v9 = v11;
  }
  if ( DelayloadedMethodInDescriptor )
    return LdrResolveDelayLoadedAPI(a1, v9, 0LL, 0LL, DelayloadedMethodInDescriptor, 0) == 0 ? 0xC0000139 : 0;
  return 3221225781LL;
}
