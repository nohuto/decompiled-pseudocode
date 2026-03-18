/*
 * XREFs of EtwTracePriority @ 0x14020E1D8
 * Callers:
 *     IoApplyPriorityInfoThread @ 0x14020DEF0 (IoApplyPriorityInfoThread.c)
 *     PsSetIoPriorityThread @ 0x14020DFEC (PsSetIoPriorityThread.c)
 *     PsSetPagePriorityThread @ 0x14020E16C (PsSetPagePriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14020E620 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402691AC (KeSetPriorityAndQuantumProcess.c)
 *     KeSetPriorityThread @ 0x1403778B0 (KeSetPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1404713B0 (KeSetBasePriorityThread.c)
 *     KeBoostPriorityThread @ 0x1404B71EC (KeBoostPriorityThread.c)
 * Callees:
 *     EtwpPsProvTracePriority @ 0x14020E2A4 (EtwpPsProvTracePriority.c)
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTracePriority(__int64 a1, unsigned __int16 a2, int a3, int a4, _BYTE *a5)
{
  char v5; // di
  char v7; // bl
  int v9; // eax
  __int64 result; // rax
  int v11; // [rsp+30h] [rbp-48h] BYREF
  char v12; // [rsp+34h] [rbp-44h]
  char v13; // [rsp+35h] [rbp-43h]
  __int16 v14; // [rsp+36h] [rbp-42h]
  int *v15; // [rsp+38h] [rbp-40h] BYREF
  int v16; // [rsp+40h] [rbp-38h]
  int v17; // [rsp+44h] [rbp-34h]

  if ( a3 != a4 )
  {
    v5 = a4;
    v7 = a3;
    if ( EtwpHostSiloState != -4540 && (*(_DWORD *)(EtwpHostSiloState + 4544) & 0x2000) != 0 )
      EtwpPsProvTracePriority(a1, a2);
    v9 = *(_DWORD *)(a1 + 1296);
    v14 = 0;
    v11 = v9;
    v12 = v7;
    v13 = v5;
    if ( a5 )
      LOBYTE(v14) = *a5;
    v17 = 0;
    v15 = &v11;
    v16 = 8;
    return EtwTraceKernelEvent((unsigned int)&v15, 1, 536879104, a2, 23075075);
  }
  return result;
}
