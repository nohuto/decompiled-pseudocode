/*
 * XREFs of PspSetMinimalProcessName @ 0x14077A224
 * Callers:
 *     PsCreateMinimalProcess @ 0x1407798C4 (PsCreateMinimalProcess.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PspSetProcessShortName @ 0x140A288D4 (PspSetProcessShortName.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspSetMinimalProcessName(__int64 a1, const void **a2)
{
  __int64 Pool2; // rax
  __int64 v5; // rdi
  void *v7; // rcx

  Pool2 = ExAllocatePool2(0x40uLL, *(unsigned __int16 *)a2 + 16LL, 0x6E497350u);
  v5 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  *(_QWORD *)(Pool2 + 8) = Pool2 + 16;
  *(_WORD *)Pool2 = *(_WORD *)a2;
  *(_WORD *)(Pool2 + 2) = *(_WORD *)a2;
  memmove((void *)(Pool2 + 16), a2[1], *(unsigned __int16 *)a2);
  v7 = *(void **)(a1 + 848);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  *(_QWORD *)(a1 + 848) = v5;
  PspSetProcessShortName(a1, a2);
  return 0LL;
}
