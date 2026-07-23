/*
 * XREFs of DifZwAlpcConnectPortWrapper @ 0x14063A1F0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404848A0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C302C (DifGetReturnAddressForWrappers.c)
 *     ZwAlpcConnectPort @ 0x1406A8310 (ZwAlpcConnectPort.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall DifZwAlpcConnectPortWrapper(
        HANDLE *a1,
        UNICODE_STRING *a2,
        OBJECT_ATTRIBUTES *a3,
        _ALPC_PORT_ATTRIBUTES *a4,
        ULONG Flags,
        PSID RequiredServerSid,
        _PORT_MESSAGE *ConnectionMessage,
        ULONG_PTR *BufferLength,
        _ALPC_MESSAGE_ATTRIBUTES *OutMessageAttributes,
        _ALPC_MESSAGE_ATTRIBUTES *InMessageAttributes,
        LARGE_INTEGER *Timeout)
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
  _QWORD v26[7]; // [rsp+68h] [rbp-69h] BYREF
  ULONG v27; // [rsp+A0h] [rbp-31h]
  _ALPC_PORT_ATTRIBUTES *v28; // [rsp+A8h] [rbp-29h]
  OBJECT_ATTRIBUTES *v29; // [rsp+B0h] [rbp-21h]
  UNICODE_STRING *v30; // [rsp+B8h] [rbp-19h]
  HANDLE *v31; // [rsp+C0h] [rbp-11h]
  unsigned int v32; // [rsp+C8h] [rbp-9h]
  void *retaddr; // [rsp+100h] [rbp+2Fh]

  memset_0(v26, 0, 0x68uLL);
  APIThunkContextById = DifGetAPIThunkContextById(142);
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
  v26[0] = ReturnAddressForWrappers;
LABEL_7:
  v19 = 0;
  v31 = a1;
  v27 = Flags;
  v26[6] = RequiredServerSid;
  v26[5] = ConnectionMessage;
  v26[4] = BufferLength;
  v26[3] = OutMessageAttributes;
  v26[2] = InMessageAttributes;
  v26[1] = Timeout;
  v30 = a2;
  v29 = a3;
  v28 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v19 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v16[4]; i != v16 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(v26, v15);
    }
    if ( v19 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v32 = ZwAlpcConnectPort(
          a1,
          a2,
          a3,
          a4,
          Flags,
          RequiredServerSid,
          ConnectionMessage,
          BufferLength,
          OutMessageAttributes,
          InMessageAttributes,
          Timeout);
  if ( v16 )
  {
    if ( (v22 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v22 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v23 = (_QWORD **)(v16 + 6);
      for ( j = *v23; j != v23; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(v26, v21);
      }
      if ( v22 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v32;
}
