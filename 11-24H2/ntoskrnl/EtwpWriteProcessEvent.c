/*
 * XREFs of EtwpWriteProcessEvent @ 0x14094CE4C
 * Callers:
 *     EtwTraceProcess @ 0x14094CC44 (EtwTraceProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KeStackAttachProcess @ 0x1402473F0 (KeStackAttachProcess.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     EtwTraceSiloKernelEvent @ 0x140348590 (EtwTraceSiloKernelEvent.c)
 *     PsGetProcessServerSilo @ 0x140445660 (PsGetProcessServerSilo.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     EtwpBuildProcessEvent @ 0x14094B5C0 (EtwpBuildProcessEvent.c)
 *     EtwpPsProvTraceProcess @ 0x14094D000 (EtwpPsProvTraceProcess.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 */

void __fastcall EtwpWriteProcessEvent(__int64 a1, __int16 a2, _QWORD *a3, int *a4, unsigned __int16 *a5, __int64 a6)
{
  char v6; // r14
  char v11; // si
  __int64 ProcessServerSilo; // rax
  PVOID *v13; // [rsp+50h] [rbp-B0h]
  __int64 v14; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+68h] [rbp-98h]
  PVOID P[2]; // [rsp+70h] [rbp-90h] BYREF
  int v17[4]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v18; // [rsp+90h] [rbp-70h]
  __int64 v19; // [rsp+A0h] [rbp-60h]
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v21[18]; // [rsp+E0h] [rbp-20h] BYREF

  LODWORD(v14) = 0;
  v6 = 0;
  v15 = a6;
  v19 = 0LL;
  *(_OWORD *)v17 = 0LL;
  v11 = 1;
  v18 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  *(_OWORD *)P = 0LL;
  if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)a1 )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 488)) )
    {
      KeStackAttachProcess((PRKPROCESS)a1, &ApcState);
      v6 = 1;
    }
    else
    {
      v11 = 0;
    }
  }
  v13 = (PVOID *)v15;
  *(_OWORD *)a5 = 0LL;
  EtwpBuildProcessEvent(a1, a2, v11, (__int64)v17, a3, v21, (unsigned int *)&v14, a4, (PSTRING)P, a5, v13);
  if ( v6 )
  {
    KiUnstackDetachProcess((__int64)&ApcState, 0);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 488));
  }
  if ( EtwpHostSiloState != -4812 && (*(_DWORD *)(EtwpHostSiloState + 4812) & 1) != 0 )
    EtwpPsProvTraceProcess(a1, v19, (_DWORD)a4, (_DWORD)a3, a2);
  ProcessServerSilo = PsGetProcessServerSilo(a1);
  EtwTraceSiloKernelEvent(ProcessServerSilo, (__int64)v21, v14, 1u, a2, 0x601904u);
  if ( P[1] )
    ExFreePool(P[1]);
}
