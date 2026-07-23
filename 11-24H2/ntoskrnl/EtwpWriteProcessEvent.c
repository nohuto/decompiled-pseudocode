/*
 * XREFs of EtwpWriteProcessEvent @ 0x1408F13BC
 * Callers:
 *     EtwTraceProcess @ 0x1408F11B4 (EtwTraceProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     EtwTraceSiloKernelEvent @ 0x1403C1FD0 (EtwTraceSiloKernelEvent.c)
 *     PsGetProcessServerSilo @ 0x14043D810 (PsGetProcessServerSilo.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     EtwpBuildProcessEvent @ 0x1408EFB30 (EtwpBuildProcessEvent.c)
 *     EtwpPsProvTraceProcess @ 0x1408F1570 (EtwpPsProvTraceProcess.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 */

void __fastcall EtwpWriteProcessEvent(
        __int64 a1,
        __int16 a2,
        _QWORD *a3,
        ULONG_PTR *a4,
        unsigned __int16 *a5,
        __int64 a6)
{
  char v6; // r14
  char v11; // si
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 ProcessServerSilo; // rax
  PVOID *v15; // [rsp+50h] [rbp-B0h]
  __int64 v16; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h]
  PVOID P[2]; // [rsp+70h] [rbp-90h] BYREF
  int v19[4]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v20; // [rsp+90h] [rbp-70h]
  __int64 v21; // [rsp+A0h] [rbp-60h]
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v23[18]; // [rsp+E0h] [rbp-20h] BYREF

  LODWORD(v16) = 0;
  v6 = 0;
  v17 = a6;
  v21 = 0LL;
  *(_OWORD *)v19 = 0LL;
  v11 = 1;
  v20 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  *(_OWORD *)P = 0LL;
  if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)a1 )
  {
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 488)) )
    {
      KeStackAttachProcess((PRKPROCESS)a1, &ApcState);
      v6 = 1;
    }
    else
    {
      v11 = 0;
    }
  }
  v15 = (PVOID *)v17;
  *(_OWORD *)a5 = 0LL;
  EtwpBuildProcessEvent(a1, a2, v11, (__int64)v19, a3, v23, (unsigned int *)&v16, a4, (PSTRING)P, a5, v15);
  if ( v6 )
  {
    KiUnstackDetachProcess((__int64)&ApcState, 0, v12, v13);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 488));
  }
  if ( EtwpHostSiloState != -4812 && (*(_DWORD *)(EtwpHostSiloState + 4812) & 1) != 0 )
    EtwpPsProvTraceProcess(a1, v21, (_DWORD)a4, (_DWORD)a3, a2);
  ProcessServerSilo = PsGetProcessServerSilo(a1);
  EtwTraceSiloKernelEvent(ProcessServerSilo, (__int64)v23, v16, 1u, a2, 0x601904u);
  if ( P[1] )
    ExFreePool(P[1]);
}
