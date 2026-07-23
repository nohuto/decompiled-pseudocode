/*
 * XREFs of KiOpPreprocessSecureFault @ 0x1403F5A10
 * Callers:
 *     KiPreprocessFault @ 0x1403F4D80 (KiPreprocessFault.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

char __fastcall KiOpPreprocessSecureFault(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, _QWORD *a3)
{
  struct _KPRCB *CurrentPrcb; // r9
  ULONG_PTR v4; // rax
  ULONG_PTR v5; // rbx
  __int64 v6; // r11

  if ( !*(_QWORD *)&HvlpVsmVtlCallVa || *(_DWORD *)(BugCheckParameter2 + 24) != 3 )
    KeBugCheckEx(0x12u, 4uLL, BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(BugCheckParameter2 + 32));
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = *(_QWORD *)(BugCheckParameter2 + 32);
  v5 = *(_QWORD *)(BugCheckParameter2 + 40);
  v6 = *(_QWORD *)(BugCheckParameter2 + 48);
  if ( a3 )
    *a3 = -1LL;
  if ( v4 != 1 && v4 != 2 && v4 != 4 )
    KeBugCheckEx(0x18Du, v4, v5, BugCheckParameter2, BugCheckParameter3);
  *(_QWORD *)(BugCheckParameter2 + 48) = 0LL;
  *(_DWORD *)BugCheckParameter2 = 268435460;
  *(_DWORD *)(BugCheckParameter2 + 24) = 2;
  if ( v4 == 1 )
  {
    *(_QWORD *)(BugCheckParameter2 + 32) = 8LL;
  }
  else
  {
    *(_QWORD *)(BugCheckParameter2 + 32) = v4 != 2;
    if ( a3 )
      *a3 = v6;
  }
  _InterlockedIncrement64((volatile signed __int64 *)&CurrentPrcb->NumberOfSecureFaults);
  return 0;
}
