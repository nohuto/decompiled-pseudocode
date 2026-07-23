/*
 * XREFs of DifZwAlpcConnectPortWrapper @ 0x14062FC70
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     ZwAlpcConnectPort @ 0x14069C0A0 (ZwAlpcConnectPort.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  __int64 *v15; // rsi
  int v16; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v18; // r14
  __int64 *i; // rbx
  BOOLEAN v20; // di
  _QWORD **v21; // rsi
  _QWORD *j; // rbx
  _QWORD v24[7]; // [rsp+68h] [rbp-69h] BYREF
  ULONG v25; // [rsp+A0h] [rbp-31h]
  _ALPC_PORT_ATTRIBUTES *v26; // [rsp+A8h] [rbp-29h]
  OBJECT_ATTRIBUTES *v27; // [rsp+B0h] [rbp-21h]
  UNICODE_STRING *v28; // [rsp+B8h] [rbp-19h]
  HANDLE *v29; // [rsp+C0h] [rbp-11h]
  unsigned int v30; // [rsp+C8h] [rbp-9h]
  void *retaddr; // [rsp+100h] [rbp+2Fh]

  memset_0(v24, 0, 0x68uLL);
  APIThunkContextById = DifGetAPIThunkContextById(142);
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
  v24[0] = ReturnAddressForWrappers;
LABEL_7:
  v18 = 0;
  v29 = a1;
  v25 = Flags;
  v24[6] = RequiredServerSid;
  v24[5] = ConnectionMessage;
  v24[4] = BufferLength;
  v24[3] = OutMessageAttributes;
  v24[2] = InMessageAttributes;
  v24[1] = Timeout;
  v28 = a2;
  v27 = a3;
  v26 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v18 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v15[4]; i != v15 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(v24);
    }
    if ( v18 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v30 = ZwAlpcConnectPort(
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
  if ( v15 )
  {
    if ( (v20 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v20 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v21 = (_QWORD **)(v15 + 6);
      for ( j = *v21; j != v21; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(v24);
      }
      if ( v20 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v30;
}
