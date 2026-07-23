/*
 * XREFs of DifZwAlpcAcceptConnectPortWrapper @ 0x14062FA80
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     ZwAlpcAcceptConnectPort @ 0x14069C060 (ZwAlpcAcceptConnectPort.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  __int64 *v13; // rsi
  int v14; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v16; // r14
  __int64 *i; // rbx
  BOOLEAN v18; // di
  _QWORD **v19; // rsi
  _QWORD *j; // rbx
  PVOID v22; // [rsp+58h] [rbp-51h] BYREF
  BOOLEAN v23; // [rsp+60h] [rbp-49h]
  _ALPC_MESSAGE_ATTRIBUTES *v24; // [rsp+68h] [rbp-41h]
  _PORT_MESSAGE *v25; // [rsp+70h] [rbp-39h]
  PVOID v26; // [rsp+78h] [rbp-31h]
  _ALPC_PORT_ATTRIBUTES *v27; // [rsp+80h] [rbp-29h]
  OBJECT_ATTRIBUTES *v28; // [rsp+88h] [rbp-21h]
  ULONG v29; // [rsp+90h] [rbp-19h]
  void *v30; // [rsp+98h] [rbp-11h]
  HANDLE *v31; // [rsp+A0h] [rbp-9h]
  unsigned int v32; // [rsp+A8h] [rbp-1h]
  void *retaddr; // [rsp+E0h] [rbp+37h]

  memset_0(&v22, 0, 0x58uLL);
  APIThunkContextById = DifGetAPIThunkContextById(143);
  v13 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v14 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v14 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v14 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v22 = ReturnAddressForWrappers;
LABEL_7:
  v16 = 0;
  v31 = a1;
  v27 = PortAttributes;
  v26 = PortContext;
  v25 = ConnectionRequest;
  v24 = ConnectionMessageAttributes;
  v23 = AcceptConnection;
  v30 = a2;
  v29 = a3;
  v28 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v16 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v13[4]; i != v13 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(&v22);
    }
    if ( v16 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v32 = ZwAlpcAcceptConnectPort(
          a1,
          a2,
          a3,
          a4,
          PortAttributes,
          PortContext,
          ConnectionRequest,
          ConnectionMessageAttributes,
          AcceptConnection);
  if ( v13 )
  {
    if ( (v18 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v18 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v19 = (_QWORD **)(v13 + 6);
      for ( j = *v19; j != v19; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v22);
      }
      if ( v18 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v32;
}
