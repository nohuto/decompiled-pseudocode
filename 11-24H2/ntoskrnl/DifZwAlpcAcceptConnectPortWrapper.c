/*
 * XREFs of DifZwAlpcAcceptConnectPortWrapper @ 0x14063A000
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404848A0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C302C (DifGetReturnAddressForWrappers.c)
 *     ZwAlpcAcceptConnectPort @ 0x1406A82D0 (ZwAlpcAcceptConnectPort.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall DifZwAlpcAcceptConnectPortWrapper(
        HANDLE *a1,
        void *a2,
        ULONG a3,
        OBJECT_ATTRIBUTES *a4,
        _ALPC_PORT_ATTRIBUTES *PortAttributes,
        PVOID PortContext,
        _PORT_MESSAGE *ConnectionRequest,
        _ALPC_MESSAGE_ATTRIBUTES *ConnectionMessageAttributes,
        BOOLEAN AcceptConnection)
{
  __int64 *APIThunkContextById; // rax
  __int64 v13; // rdx
  __int64 *v14; // rsi
  int v15; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v17; // r14
  __int64 *i; // rbx
  __int64 v19; // rdx
  BOOLEAN v20; // di
  _QWORD **v21; // rsi
  _QWORD *j; // rbx
  PVOID v24; // [rsp+58h] [rbp-51h] BYREF
  BOOLEAN v25; // [rsp+60h] [rbp-49h]
  _ALPC_MESSAGE_ATTRIBUTES *v26; // [rsp+68h] [rbp-41h]
  _PORT_MESSAGE *v27; // [rsp+70h] [rbp-39h]
  PVOID v28; // [rsp+78h] [rbp-31h]
  _ALPC_PORT_ATTRIBUTES *v29; // [rsp+80h] [rbp-29h]
  OBJECT_ATTRIBUTES *v30; // [rsp+88h] [rbp-21h]
  ULONG v31; // [rsp+90h] [rbp-19h]
  void *v32; // [rsp+98h] [rbp-11h]
  HANDLE *v33; // [rsp+A0h] [rbp-9h]
  unsigned int v34; // [rsp+A8h] [rbp-1h]
  void *retaddr; // [rsp+E0h] [rbp+37h]

  memset_0(&v24, 0, 0x58uLL);
  APIThunkContextById = DifGetAPIThunkContextById(143);
  v14 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v15 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v15 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v15 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v24 = ReturnAddressForWrappers;
LABEL_7:
  v17 = 0;
  v33 = a1;
  v29 = PortAttributes;
  v28 = PortContext;
  v27 = ConnectionRequest;
  v26 = ConnectionMessageAttributes;
  v25 = AcceptConnection;
  v32 = a2;
  v31 = a3;
  v30 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v17 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v14[4]; i != v14 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(&v24, v13);
    }
    if ( v17 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v34 = ZwAlpcAcceptConnectPort(
          a1,
          a2,
          a3,
          a4,
          PortAttributes,
          PortContext,
          ConnectionRequest,
          ConnectionMessageAttributes,
          AcceptConnection);
  if ( v14 )
  {
    if ( (v20 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v20 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v21 = (_QWORD **)(v14 + 6);
      for ( j = *v21; j != v21; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v24, v19);
      }
      if ( v20 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v34;
}
