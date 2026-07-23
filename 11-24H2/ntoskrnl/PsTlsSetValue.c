/*
 * XREFs of PsTlsSetValue @ 0x140A12950
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     RtlpFlsSetValueSlot @ 0x140A12A14 (RtlpFlsSetValueSlot.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PsTlsSetValue(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  struct _KTHREAD *v4; // rax
  __int64 Pool2; // rax
  unsigned int v6; // edi
  unsigned int v7; // ebx

  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)&CurrentThread[1].UserAffinityPrimaryGroup & 3) != 0 )
    return (unsigned int)-1073741749;
  v4 = KeGetCurrentThread();
  --v4->SpecialApcDisable;
  if ( (unsigned int)(a1 - 1) > 0xEE )
  {
    v7 = -1073741811;
    goto LABEL_7;
  }
  Pool2 = *(_QWORD *)&CurrentThread[1].UserAffinityPrimaryGroup;
  v6 = a1 + 16;
  if ( !Pool2 )
  {
    Pool2 = ExAllocatePool2(0x100uLL, 0x28uLL, 0x6B534C46u);
    if ( !Pool2 )
    {
      v7 = -1073741801;
      goto LABEL_7;
    }
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_OWORD *)Pool2 = 0LL;
    *(_OWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)&CurrentThread[1].UserAffinityPrimaryGroup = Pool2;
  }
  v7 = RtlpFlsSetValueSlot(a1, Pool2, v6, a2);
LABEL_7:
  KeLeaveGuardedRegion();
  return v7;
}
