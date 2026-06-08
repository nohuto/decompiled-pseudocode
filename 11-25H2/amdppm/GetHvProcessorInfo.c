/*
 * XREFs of GetHvProcessorInfo @ 0x140006584
 * Callers:
 *     RegisterHvPackage @ 0x1400266D0 (RegisterHvPackage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetHvProcessorInfo(int a1)
{
  __int64 v1; // r9
  unsigned int i; // r8d

  v1 = 0LL;
  for ( i = 0; i < dword_140014B40; ++i )
  {
    if ( a1 == *(_DWORD *)(qword_140014B38 + 12LL * i) )
      return qword_140014B38 + 12LL * i;
  }
  return v1;
}
