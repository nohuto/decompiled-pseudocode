/*
 * XREFs of HalpInterruptMaskAcpi @ 0x140B5D638
 * Callers:
 *     HalpDispatchSystemStateTransition @ 0x1404BE448 (HalpDispatchSystemStateTransition.c)
 * Callees:
 *     HalpInterruptSetProblemEx @ 0x1404443B8 (HalpInterruptSetProblemEx.c)
 *     HalpInterruptApplyOverrides @ 0x140445554 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptFindLines @ 0x140445644 (HalpInterruptFindLines.c)
 *     HalpInterruptLookupController @ 0x140445B74 (HalpInterruptLookupController.c)
 *     HalpInterruptSetLineStateInternal @ 0x140445BA4 (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptPicLine @ 0x1404B0E5C (HalpInterruptPicLine.c)
 */

__int64 __fastcall HalpInterruptMaskAcpi(char a1)
{
  _QWORD *Lines; // rax
  __int64 v3; // rdx
  ULONG_PTR *v4; // rcx
  unsigned int v5; // r8d
  __int64 v6; // r9
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  HalpInterruptPicLine(&v8, (unsigned __int16)word_140FC056E);
  HalpInterruptApplyOverrides((__int64)&v8, 0LL, 0LL);
  Lines = HalpInterruptFindLines((unsigned int *)&v8);
  if ( !Lines )
    return HalpInterruptSetProblemEx(0LL, 18, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x946u);
  v3 = Lines[5];
  if ( a1 )
    *(_DWORD *)(v3 + 12) |= 0x10u;
  else
    *(_DWORD *)(v3 + 12) &= ~0x10u;
  v4 = HalpInterruptLookupController(*((_DWORD *)Lines + 4));
  if ( v4 )
    return HalpInterruptSetLineStateInternal((__int64)v4, (__int64)&v8, *(_QWORD *)(v6 + 40) + 56LL * v5);
  else
    return HalpInterruptSetProblemEx(0LL, 17, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x956u);
}
