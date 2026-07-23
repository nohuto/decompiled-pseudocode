/*
 * XREFs of SeCaptureHandles @ 0x140607B70
 * Callers:
 *     PspBuildCreateProcessContext @ 0x1408F9210 (PspBuildCreateProcessContext.c)
 *     NtCreateLowBoxToken @ 0x140AD5A60 (NtCreateLowBoxToken.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeCaptureHandles(unsigned int a1, __int64 a2, __int64 *a3)
{
  __int64 Pool2; // r8
  __int64 i; // rdx

  *a3 = 0LL;
  if ( a1 > 0xA )
    return 3221225711LL;
  if ( !a1 )
    return 0LL;
  Pool2 = ExAllocatePool2(0x100uLL, 8LL * a1, 0x63486553u);
  if ( !Pool2 )
    return 3221225626LL;
  for ( i = 0LL; (unsigned int)i < a1; i = (unsigned int)(i + 1) )
    *(_QWORD *)(Pool2 + 8 * i) = *(_QWORD *)(a2 + 8 * i);
  *a3 = Pool2;
  return 0LL;
}
