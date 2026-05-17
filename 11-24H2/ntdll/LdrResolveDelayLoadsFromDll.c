/*
 * XREFs of LdrResolveDelayLoadsFromDll @ 0x18015F030
 * Callers:
 *     <none>
 * Callees:
 *     LdrpGetDelayloadDescriptor @ 0x18015F1A4 (LdrpGetDelayloadDescriptor.c)
 */

__int64 __fastcall LdrResolveDelayLoadsFromDll(unsigned __int64 a1, __int64 a2, int a3)
{
  unsigned int *DelayloadDescriptor; // rax

  if ( a3 )
    return 3221225485LL;
  DelayloadDescriptor = (unsigned int *)LdrpGetDelayloadDescriptor(a1);
  if ( DelayloadDescriptor )
    return LdrpResolveDelayLoadDescriptor(a1, DelayloadDescriptor);
  else
    return 3221225781LL;
}
