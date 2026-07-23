/*
 * XREFs of EtwTracePriority @ 0x140330F04
 * Callers:
 *     IoApplyPriorityInfoThread @ 0x140330C20 (IoApplyPriorityInfoThread.c)
 *     PsSetIoPriorityThread @ 0x140330D1C (PsSetIoPriorityThread.c)
 *     PsSetPagePriorityThread @ 0x140330E98 (PsSetPagePriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x140331740 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x140371FE0 (KeSetPriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1404470CC (KeSetPriorityAndQuantumProcess.c)
 *     KeBoostPriorityThread @ 0x1404DD768 (KeBoostPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1404DDF20 (KeSetBasePriorityThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     EtwpPsProvTracePriority @ 0x140330FD0 (EtwpPsProvTracePriority.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
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
    if ( EtwpHostSiloState != -4812 && (*(_DWORD *)(EtwpHostSiloState + 4816) & 0x2000) != 0 )
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
    return EtwTraceKernelEvent((int)&v15, 1, 0x20002000u, a2, 23075075);
  }
  return result;
}
