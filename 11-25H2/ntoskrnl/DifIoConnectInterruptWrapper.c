/*
 * XREFs of DifIoConnectInterruptWrapper @ 0x14061A920
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     IoConnectInterrupt @ 0x140711AD0 (IoConnectInterrupt.c)
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
  __int64 *v15; // rsi
  int v16; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v18; // r14
  __int64 *i; // rbx
  BOOLEAN v20; // di
  _QWORD **v21; // rsi
  _QWORD *j; // rbx
  PVOID v24; // [rsp+68h] [rbp-49h] BYREF
  BOOLEAN v25; // [rsp+70h] [rbp-41h]
  KAFFINITY v26; // [rsp+78h] [rbp-39h]
  BOOLEAN v27; // [rsp+80h] [rbp-31h]
  KINTERRUPT_MODE v28; // [rsp+84h] [rbp-2Dh]
  KIRQL v29; // [rsp+88h] [rbp-29h]
  KIRQL v30; // [rsp+89h] [rbp-28h]
  ULONG v31; // [rsp+8Ch] [rbp-25h]
  KSPIN_LOCK *v32; // [rsp+90h] [rbp-21h]
  void *v33; // [rsp+98h] [rbp-19h]
  KSERVICE_ROUTINE *v34; // [rsp+A0h] [rbp-11h]
  PKINTERRUPT *v35; // [rsp+A8h] [rbp-9h]
  unsigned int v36; // [rsp+B0h] [rbp-1h]
  void *retaddr; // [rsp+E0h] [rbp+2Fh]

  memset_0(&v24, 0, 0x50uLL);
  APIThunkContextById = DifGetAPIThunkContextById(358);
  v15 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v16 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v16 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v16 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v24 = ReturnAddressForWrappers;
LABEL_7:
  v18 = 0;
  v35 = a1;
  v31 = Vector;
  v30 = Irql;
  v29 = SynchronizeIrql;
  v28 = InterruptMode;
  v27 = ShareVector;
  v26 = ProcessorEnableMask;
  v25 = FloatingSave;
  v34 = a2;
  v33 = a3;
  v32 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v18 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v15[4]; i != v15 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(&v24);
    }
    if ( v18 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v36 = IoConnectInterrupt(
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
  if ( v15 )
  {
    if ( (v20 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v20 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v21 = (_QWORD **)(v15 + 6);
      for ( j = *v21; j != v21; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v24);
      }
      if ( v20 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v36;
}
