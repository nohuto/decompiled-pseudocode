/*
 * XREFs of ViFaultsAddAppNoDuplicates @ 0x140B969F8
 * Callers:
 *     VfFaultsAddAllApps @ 0x140B961E0 (VfFaultsAddAllApps.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     RtlUpcaseUnicodeString @ 0x140962470 (RtlUpcaseUnicodeString.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     ViFaultsIsAppTarget @ 0x140B96CF0 (ViFaultsIsAppTarget.c)
 */

__int64 __fastcall ViFaultsAddAppNoDuplicates(void *Src, __int64 a2)
{
  size_t v2; // rdi
  unsigned int v4; // ebp
  ULONG_PTR Pool2; // rax
  UNICODE_STRING *v6; // rsi
  KIRQL v7; // bl
  UNICODE_STRING **v8; // rax

  v2 = 2 * a2;
  v4 = 0;
  Pool2 = ExAllocatePool2(0x40uLL, 2 * a2 + 34, 0x41466656uLL);
  v6 = (UNICODE_STRING *)Pool2;
  if ( Pool2 )
  {
    memmove((void *)(Pool2 + 32), Src, v2);
    *(unsigned __int16 *)((char *)&v6[2].Length + v2) = 0;
    RtlInitUnicodeString(v6 + 1, &v6[2].Length);
    RtlUpcaseUnicodeString(v6 + 1, v6 + 1, 0);
    v7 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
    if ( (unsigned int)ViFaultsIsAppTarget(&v6[1]) )
    {
      ExFreePoolWithTag(v6, 0);
    }
    else
    {
      v8 = (UNICODE_STRING **)qword_140F04098;
      if ( *(PVOID **)qword_140F04098 != &ViFaultApplicationsList )
        __fastfail(3u);
      *(_QWORD *)&v6->Length = &ViFaultApplicationsList;
      v6->Buffer = (wchar_t *)v8;
      *v8 = v6;
      qword_140F04098 = (__int64)v6;
    }
    KeReleaseSpinLock(&ViFaultInjectionLock, v7);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
