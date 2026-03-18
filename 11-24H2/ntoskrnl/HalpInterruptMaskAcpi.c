/*
 * XREFs of HalpInterruptMaskAcpi @ 0x140B6C718
 * Callers:
 *     HalpDispatchSystemStateTransition @ 0x1404BD3D0 (HalpDispatchSystemStateTransition.c)
 * Callees:
 *     HalpInterruptApplyOverrides @ 0x1403B96C4 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptFindLines @ 0x1403B97B4 (HalpInterruptFindLines.c)
 *     HalpInterruptLookupController @ 0x1403B9D14 (HalpInterruptLookupController.c)
 *     HalpInterruptSetLineStateInternal @ 0x1403B9D44 (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptSetProblemEx @ 0x1403BC82C (HalpInterruptSetProblemEx.c)
 *     HalpInterruptPicLine @ 0x1404B1DAC (HalpInterruptPicLine.c)
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
  HalpInterruptPicLine(&v8, (unsigned __int16)word_140FC0D0E);
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
    return HalpInterruptSetLineStateInternal((__int64)v4, (__int64)&v8, *(_QWORD *)(v6 + 40) + 56LL * v5, v6);
  else
    return HalpInterruptSetProblemEx(0LL, 17, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x956u);
}
