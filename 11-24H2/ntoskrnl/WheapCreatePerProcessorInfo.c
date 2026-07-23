/*
 * XREFs of WheapCreatePerProcessorInfo @ 0x140C468A8
 * Callers:
 *     WheaInitialize @ 0x140C4624C (WheaInitialize.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 WheapCreatePerProcessorInfo()
{
  unsigned int v0; // esi
  unsigned int v1; // ebx
  __int64 Pool2; // rdi
  __int64 Prcb; // rax

  v0 = KeNumberProcessors_0;
  v1 = 0;
  Pool2 = ExAllocatePool2(0x40uLL, 24LL * (unsigned int)KeNumberProcessors_0, 0x61656857uLL);
  if ( !Pool2 )
  {
    LODWORD(WheapStatus) = WheapStatus + 1;
    HIDWORD(WheapStatus) |= 0x10u;
    KeBugCheckEx(0x122u, 2uLL, v0, 0LL, 0LL);
  }
  if ( v0 )
  {
    do
    {
      Prcb = KeGetPrcb(v1++);
      *(_QWORD *)(Prcb + 35744) = Pool2;
      Pool2 += 24LL;
    }
    while ( v1 < v0 );
  }
  return 0LL;
}
