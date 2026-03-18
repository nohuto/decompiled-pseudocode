/*
 * XREFs of PspAddProcessToWorkingSetChangeList @ 0x140767938
 * Callers:
 *     PspSetJobLimitsProcessCallback @ 0x1408D7DD0 (PspSetJobLimitsProcessCallback.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140299100 (ObReferenceObjectSafeWithTag.c)
 *     MmEnforceWorkingSetLimit @ 0x14047D754 (MmEnforceWorkingSetLimit.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

char __fastcall PspAddProcessToWorkingSetChangeList(_KPROCESS *Object)
{
  __int64 Pool2; // rax
  unsigned __int64 v3; // rdi
  __int64 *v4; // rcx

  LODWORD(Pool2) = Object[1].DirectoryTableBase;
  if ( (Pool2 & 1) == 0 )
  {
    v3 = Object[1].Padding[3];
    if ( (*(_DWORD *)(v3 + 1056) & 1) != 0 )
    {
      LOBYTE(Pool2) = ObReferenceObjectSafeWithTag((__int64)Object, 0x624A7350u);
      if ( (_BYTE)Pool2 )
      {
        Pool2 = ExAllocatePool2(0x100uLL);
        if ( Pool2 )
        {
          *(_QWORD *)(Pool2 + 16) = Object;
          *(_QWORD *)(Pool2 + 32) = *(_QWORD *)(v3 + 1008);
          *(_QWORD *)(Pool2 + 24) = *(_QWORD *)(v3 + 1000);
          v4 = (__int64 *)qword_140FC60B0;
          if ( *(__int64 **)qword_140FC60B0 != &PspWorkingSetChangeHead )
            __fastfail(3u);
          *(_QWORD *)Pool2 = &PspWorkingSetChangeHead;
          *(_QWORD *)(Pool2 + 8) = v4;
          *v4 = Pool2;
          qword_140FC60B0 = Pool2;
        }
        else
        {
          LOBYTE(Pool2) = ObfDereferenceObjectWithTag(Object, 0x624A7350u);
        }
      }
    }
    else
    {
      LOBYTE(Pool2) = MmEnforceWorkingSetLimit(Object, 2);
    }
  }
  return Pool2;
}
