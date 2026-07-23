/*
 * XREFs of KeInitializeProcessUserCetLogging @ 0x140A80914
 * Callers:
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall KeInitializeProcessUserCetLogging(__int64 a1)
{
  __int64 Pool2; // rax
  unsigned int v3; // edx

  Pool2 = ExAllocatePool2(0x100uLL, 0xC0uLL, 0x4C544543u);
  v3 = 0;
  if ( Pool2 )
  {
    *(_QWORD *)Pool2 = 0LL;
    *(_QWORD *)(Pool2 + 8) = Pool2 + 88;
    *(_DWORD *)(Pool2 + 20) = 5;
    *(_QWORD *)(Pool2 + 32) = Pool2 + 128;
    *(_QWORD *)(Pool2 + 56) = Pool2 + 168;
    *(_DWORD *)(Pool2 + 44) = 5;
    *(_DWORD *)(Pool2 + 68) = 3;
    *(_QWORD *)(a1 + 424) = Pool2;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v3;
}
