/*
 * XREFs of DifIoConnectInterruptWrapper @ 0x1406268E0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     IoConnectInterrupt @ 0x14071DBD0 (IoConnectInterrupt.c)
 */

__int64 __fastcall DifIoConnectInterruptWrapper(
        PKINTERRUPT *a1,
        KSERVICE_ROUTINE *a2,
        void *a3,
        KSPIN_LOCK *a4,
        ULONG Vector,
        KIRQL Irql,
        KIRQL SynchronizeIrql,
        KINTERRUPT_MODE InterruptMode,
        BOOLEAN ShareVector,
        KAFFINITY ProcessorEnableMask,
        BOOLEAN FloatingSave)
{
  __int64 *APIThunkContextById; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // rsi
  int v19; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v21; // r14
  __int64 *i; // rbx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  BOOLEAN v26; // di
  _QWORD **v27; // rsi
  _QWORD *j; // rbx
  PVOID v30; // [rsp+68h] [rbp-49h] BYREF
  BOOLEAN v31; // [rsp+70h] [rbp-41h]
  KAFFINITY v32; // [rsp+78h] [rbp-39h]
  BOOLEAN v33; // [rsp+80h] [rbp-31h]
  KINTERRUPT_MODE v34; // [rsp+84h] [rbp-2Dh]
  KIRQL v35; // [rsp+88h] [rbp-29h]
  KIRQL v36; // [rsp+89h] [rbp-28h]
  ULONG v37; // [rsp+8Ch] [rbp-25h]
  KSPIN_LOCK *v38; // [rsp+90h] [rbp-21h]
  void *v39; // [rsp+98h] [rbp-19h]
  KSERVICE_ROUTINE *v40; // [rsp+A0h] [rbp-11h]
  PKINTERRUPT *v41; // [rsp+A8h] [rbp-9h]
  unsigned int v42; // [rsp+B0h] [rbp-1h]
  void *retaddr; // [rsp+E0h] [rbp+2Fh]

  memset_0(&v30, 0, 0x50uLL);
  APIThunkContextById = DifGetAPIThunkContextById(358);
  v18 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v19 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v19 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v19 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v30 = ReturnAddressForWrappers;
LABEL_7:
  v21 = 0;
  v41 = a1;
  v37 = Vector;
  v36 = Irql;
  v35 = SynchronizeIrql;
  v34 = InterruptMode;
  v33 = ShareVector;
  v32 = ProcessorEnableMask;
  v31 = FloatingSave;
  v40 = a2;
  v39 = a3;
  v38 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v21 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v18[4]; i != v18 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(&v30, v15, v16, v17);
    }
    if ( v21 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v42 = IoConnectInterrupt(
          a1,
          a2,
          a3,
          a4,
          Vector,
          Irql,
          SynchronizeIrql,
          InterruptMode,
          ShareVector,
          ProcessorEnableMask,
          FloatingSave);
  if ( v18 )
  {
    if ( (v26 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v26 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      v27 = (_QWORD **)(v18 + 6);
      for ( j = *v27; j != v27; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v30, v23, v24, v25);
      }
      if ( v26 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v42;
}
