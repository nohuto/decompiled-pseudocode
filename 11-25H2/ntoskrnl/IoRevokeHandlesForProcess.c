/*
 * XREFs of IoRevokeHandlesForProcess @ 0x140593A48
 * Callers:
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     IopGetDevicePDO @ 0x14035AF78 (IopGetDevicePDO.c)
 *     PsGetCurrentSilo @ 0x1403FA570 (PsGetCurrentSilo.c)
 *     PnpDisableUserModeNotifications @ 0x1405A2F2C (PnpDisableUserModeNotifications.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObOpenObjectByNameEx @ 0x14085B430 (ObOpenObjectByNameEx.c)
 *     ObReferenceProcessHandleTable @ 0x1408ADC40 (ObReferenceProcessHandleTable.c)
 *     PsIsProcessAppContainer @ 0x140969C10 (PsIsProcessAppContainer.c)
 *     ExEnumHandleTable @ 0x1409864C0 (ExEnumHandleTable.c)
 *     ObDereferenceProcessHandleTable @ 0x1409EC090 (ObDereferenceProcessHandleTable.c)
 */

__int64 __fastcall IoRevokeHandlesForProcess(__int64 a1, void *a2)
{
  __int64 v5; // rsi
  unsigned int v6; // edi
  _DWORD *DevicePDO; // rax
  void *v8; // rsi
  PVOID Object[2]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v10[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+58h] [rbp-A8h]
  __int64 v12; // [rsp+60h] [rbp-A0h]
  int v13; // [rsp+68h] [rbp-98h]
  int v14; // [rsp+6Ch] [rbp-94h]
  __int128 v15; // [rsp+70h] [rbp-90h]
  _DWORD v16[4]; // [rsp+80h] [rbp-80h] BYREF
  int v17; // [rsp+90h] [rbp-70h]
  int v18; // [rsp+A0h] [rbp-60h]
  void *v19; // [rsp+A8h] [rbp-58h]
  __int128 v20; // [rsp+120h] [rbp+20h]
  __int128 v21; // [rsp+130h] [rbp+30h]
  __int64 CurrentSilo; // [rsp+140h] [rbp+40h]
  char v23; // [rsp+190h] [rbp+90h] BYREF

  v14 = 0;
  v10[1] = 0;
  if ( !(unsigned __int8)PsIsProcessAppContainer(a2) )
    return 0LL;
  v5 = ObReferenceProcessHandleTable(a2);
  if ( !v5 )
    return 3221225485LL;
  memset_0(v16, 0, 0xE0uLL);
  v11 = 0LL;
  v10[0] = 48;
  v20 = 0LL;
  v13 = 576;
  v12 = a1;
  LOWORD(v20) = 40;
  v15 = 0LL;
  v16[0] = 14680072;
  v18 = 1;
  v21 = 0LL;
  CurrentSilo = 1LL;
  CurrentSilo = (__int64)PsGetCurrentSilo();
  v6 = ObOpenObjectByNameEx(v10, IoFileObjectType, 0LL, 0LL, 0, v16, CurrentSilo, &v23);
  if ( v18 == -1096154543 )
  {
    v6 = v17;
    if ( v17 >= 0 )
    {
      Object[0] = v19;
      Object[1] = a2;
      ExEnumHandleTable(v5, IopCheckHandleForRevocation, Object, 0LL);
      DevicePDO = IopGetDevicePDO((__int64)Object[0]);
      v8 = DevicePDO;
      if ( DevicePDO )
      {
        PnpDisableUserModeNotifications(DevicePDO, a2);
        ObfDereferenceObjectWithTag(v8, 0x746C6644u);
      }
      ObfDereferenceObjectWithTag(Object[0], 0x746C6644u);
    }
  }
  ObDereferenceProcessHandleTable(a2);
  return v6;
}
