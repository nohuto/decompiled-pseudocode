/*
 * XREFs of HalpDeleteSecondaryIcEntry @ 0x140553358
 * Callers:
 *     HalpUnregisterSecondaryIcInterface @ 0x140553730 (HalpUnregisterSecondaryIcInterface.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x140553128 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpDeleteSecondaryIcEntry(PVOID P)
{
  unsigned int v1; // edi
  _QWORD *v3; // rcx
  PVOID *v4; // rax
  unsigned __int8 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v6 = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)P + 29, 0, 0) <= 0 )
  {
    HalpAcquireSecondaryIcEntryExclusive((volatile signed __int32 *)P, &v6);
    v3 = *(_QWORD **)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || (v4 = (PVOID *)*((_QWORD *)P + 1), *v4 != P) )
      __fastfail(3u);
    *v4 = v3;
    v3[1] = v4;
    _InterlockedDecrement((volatile signed __int32 *)P + 28);
    HalpReleaseHighLevelLock((volatile signed __int64 *)&SecondaryIcListSpinLock, v6);
    KeSetEvent((PRKEVENT)P + 5, 0, 0);
    ObfDereferenceObjectWithTag(*((PVOID *)P + 6), 0x746C6644u);
    ExFreePoolWithTag(P, 0x326C6148u);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v1;
}
