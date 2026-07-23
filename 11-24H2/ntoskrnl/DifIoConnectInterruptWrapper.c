/*
 * XREFs of DifIoConnectInterruptWrapper @ 0x140624EA0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404848A0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C302C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IoConnectInterrupt @ 0x14071B760 (IoConnectInterrupt.c)
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
  __int64 *v16; // rsi
  int v17; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v19; // r14
  __int64 *i; // rbx
  __int64 v21; // rdx
  BOOLEAN v22; // di
  _QWORD **v23; // rsi
  _QWORD *j; // rbx
  PVOID v26; // [rsp+68h] [rbp-49h] BYREF
  BOOLEAN v27; // [rsp+70h] [rbp-41h]
  KAFFINITY v28; // [rsp+78h] [rbp-39h]
  BOOLEAN v29; // [rsp+80h] [rbp-31h]
  KINTERRUPT_MODE v30; // [rsp+84h] [rbp-2Dh]
  KIRQL v31; // [rsp+88h] [rbp-29h]
  KIRQL v32; // [rsp+89h] [rbp-28h]
  ULONG v33; // [rsp+8Ch] [rbp-25h]
  KSPIN_LOCK *v34; // [rsp+90h] [rbp-21h]
  void *v35; // [rsp+98h] [rbp-19h]
  KSERVICE_ROUTINE *v36; // [rsp+A0h] [rbp-11h]
  PKINTERRUPT *v37; // [rsp+A8h] [rbp-9h]
  unsigned int v38; // [rsp+B0h] [rbp-1h]
  void *retaddr; // [rsp+E0h] [rbp+2Fh]

  memset_0(&v26, 0, 0x50uLL);
  APIThunkContextById = DifGetAPIThunkContextById(358);
  v16 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v17 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v17 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v17 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v26 = ReturnAddressForWrappers;
LABEL_7:
  v19 = 0;
  v37 = a1;
  v33 = Vector;
  v32 = Irql;
  v31 = SynchronizeIrql;
  v30 = InterruptMode;
  v29 = ShareVector;
  v28 = ProcessorEnableMask;
  v27 = FloatingSave;
  v36 = a2;
  v35 = a3;
  v34 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v19 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v16[4]; i != v16 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(&v26, v15);
    }
    if ( v19 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v38 = IoConnectInterrupt(
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
  if ( v16 )
  {
    if ( (v22 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v22 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v23 = (_QWORD **)(v16 + 6);
      for ( j = *v23; j != v23; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v26, v21);
      }
      if ( v22 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v38;
}
