/*
 * XREFs of IopCreateVpb @ 0x140712A58
 * Callers:
 *     IoCreateDevice @ 0x1408ABEC0 (IoCreateDevice.c)
 *     IoVerifyVolume @ 0x140AB1440 (IoVerifyVolume.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopCreateVpb(__int64 a1)
{
  __int64 Pool2; // rax

  Pool2 = ExAllocatePool2(0x40uLL, 0x60uLL, 0x20627056u);
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)Pool2 = 6291466;
  *(_QWORD *)(Pool2 + 16) = a1;
  *(_QWORD *)(a1 + 56) = Pool2;
  return 0LL;
}
