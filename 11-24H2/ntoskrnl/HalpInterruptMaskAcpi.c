/*
 * XREFs of HalpInterruptMaskAcpi @ 0x140B6DFB8
 * Callers:
 *     HalpDispatchSystemStateTransition @ 0x1404B8540 (HalpDispatchSystemStateTransition.c)
 * Callees:
 *     HalpInterruptLookupController @ 0x1403726E4 (HalpInterruptLookupController.c)
 *     HalpInterruptSetLineStateInternal @ 0x140372714 (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptFindLines @ 0x140373298 (HalpInterruptFindLines.c)
 *     HalpInterruptApplyOverrides @ 0x1403732F0 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptSetProblemEx @ 0x14037537C (HalpInterruptSetProblemEx.c)
 *     HalpInterruptPicLine @ 0x1404AC63C (HalpInterruptPicLine.c)
 */

__int64 __fastcall HalpInterruptMaskAcpi(char a1)
{
  ULONG_PTR *Lines; // rax
  ULONG_PTR v3; // rdx
  ULONG_PTR *v4; // rcx
  unsigned int v5; // r8d
  __int64 v6; // r9
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  HalpInterruptPicLine(&v8, (unsigned __int16)word_140FC0FAE);
  HalpInterruptApplyOverrides((__int64)&v8, 0LL, 0LL);
  Lines = HalpInterruptFindLines((int *)&v8);
  if ( !Lines )
    return HalpInterruptSetProblemEx(0LL, 18, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x952u);
  v3 = Lines[5];
  if ( a1 )
    *(_DWORD *)(v3 + 12) |= 0x10u;
  else
    *(_DWORD *)(v3 + 12) &= ~0x10u;
  v4 = HalpInterruptLookupController(*((_DWORD *)Lines + 4));
  if ( v4 )
    return HalpInterruptSetLineStateInternal((__int64)v4, (__int64)&v8, *(_QWORD *)(v6 + 40) + 56LL * v5);
  else
    return HalpInterruptSetProblemEx(0LL, 17, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x962u);
}
