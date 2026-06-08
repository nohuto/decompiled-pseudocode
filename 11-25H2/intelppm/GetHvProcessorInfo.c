/*
 * XREFs of GetHvProcessorInfo @ 0x140006830
 * Callers:
 *     RegisterHvPackage @ 0x140029000 (RegisterHvPackage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetHvProcessorInfo(int a1)
{
  __int64 v1; // r9
  unsigned int i; // r8d

  v1 = 0LL;
  for ( i = 0; i < dword_140019720; ++i )
  {
    if ( a1 == *(_DWORD *)(qword_140019718 + 12LL * i) )
      return qword_140019718 + 12LL * i;
  }
  return v1;
}
