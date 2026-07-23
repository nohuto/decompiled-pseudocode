/*
 * XREFs of _PnpDispatchDeviceInterface @ 0x1408CA5F0
 * Callers:
 *     PnpGetObjectProperty @ 0x1408CA950 (PnpGetObjectProperty.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAE28 (_PnpOpenObjectRegKey.c)
 *     _PnpGetObjectPropertyWorker @ 0x1408CB050 (_PnpGetObjectPropertyWorker.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 * Callees:
 *     _PnpMapCmStatusToDispatchStatus @ 0x14044453C (_PnpMapCmStatusToDispatchStatus.c)
 *     _CmGetMatchingDeviceInterfaceList @ 0x14081C23C (_CmGetMatchingDeviceInterfaceList.c)
 *     _CmGetDeviceInterfaceMappedPropertyLocales @ 0x14081EE80 (_CmGetDeviceInterfaceMappedPropertyLocales.c)
 *     _CmSetDeviceInterfaceMappedProperty @ 0x1408AEE34 (_CmSetDeviceInterfaceMappedProperty.c)
 *     _CmGetDeviceInterfaceMappedPropertyKeys @ 0x1408B3D7C (_CmGetDeviceInterfaceMappedPropertyKeys.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x1408B3FA8 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1408B42D0 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmValidateDeviceInterfaceName @ 0x1408C77C0 (_CmValidateDeviceInterfaceName.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1408C8EE4 (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmDeleteDeviceInterface @ 0x1409AABD0 (_CmDeleteDeviceInterface.c)
 *     _CmCreateDeviceInterface @ 0x1409C3968 (_CmCreateDeviceInterface.c)
 */

__int64 __fastcall PnpDispatchDeviceInterface(_QWORD *a1, WCHAR *a2, __int64 a3, int a4, _DWORD *a5)
{
  __int64 (__fastcall *v5)(__int64, __int64, unsigned int); // rbx
  __int128 *v8; // r8
  int v9; // r9d
  __int64 v10; // r9
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  int v16; // r9d
  __int64 v17; // rax
  void *v18; // r10
  _DWORD *v19; // r15
  unsigned int v20; // ebp
  __int64 v21; // r12
  _DWORD *v22; // r13
  __int64 v23; // r14
  unsigned int DeviceInterfaceMappedPropertyFromRegValue; // ecx
  __int64 v25; // r9
  unsigned int DeviceInterface; // eax
  unsigned int i; // r8d
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rdx
  int v32; // [rsp+40h] [rbp-48h]
  __int128 v33; // [rsp+48h] [rbp-40h] BYREF

  v5 = 0LL;
  v8 = 0LL;
  v33 = 0LL;
  v9 = a4 - 1;
  if ( !v9 )
  {
    DeviceInterface = CmValidateDeviceInterfaceName((__int64)a1, a2);
    goto LABEL_15;
  }
  v10 = (unsigned int)(v9 - 1);
  if ( !(_DWORD)v10 )
  {
    DeviceInterface = CmOpenDeviceInterfaceRegKey(
                        a1,
                        a2,
                        0x30u,
                        v10,
                        *a5,
                        *((_BYTE *)a5 + 4),
                        *((HANDLE **)a5 + 1),
                        a5 + 4);
LABEL_15:
    DeviceInterfaceMappedPropertyFromRegValue = DeviceInterface;
    return PnpMapCmStatusToDispatchStatus(DeviceInterfaceMappedPropertyFromRegValue);
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    DeviceInterface = CmCreateDeviceInterface(
                        (_DWORD)a1,
                        (_DWORD)a2,
                        *a5,
                        (int)a5 + 8,
                        (__int64)(a5 + 4),
                        a5[5] & 0xFFFF0000);
    goto LABEL_15;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    DeviceInterface = CmDeleteDeviceInterface(a1, a2, *a5 & 0xFFFF0000);
    goto LABEL_15;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( *(_QWORD *)a5 )
    {
      *(_QWORD *)&v33 = *(_QWORD *)a5;
      v5 = PnpCmMatchCallbackRoutine;
      v8 = &v33;
      *((_QWORD *)&v33 + 1) = *((_QWORD *)a5 + 1);
    }
    DeviceInterface = CmGetMatchingDeviceInterfaceList(
                        (__int64)a1,
                        (__int64)v5,
                        (__int64)v8,
                        *((_QWORD *)a5 + 2),
                        a5[6],
                        *((_QWORD *)a5 + 4),
                        a5[10] & 0xFFFF0000);
    goto LABEL_15;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    DeviceInterface = CmGetDeviceInterfaceMappedPropertyKeys(
                        (int)a1,
                        (int)a2,
                        *(_QWORD *)a5,
                        0,
                        *((_QWORD *)a5 + 3),
                        a5[8],
                        *((unsigned int **)a5 + 5));
    goto LABEL_15;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    DeviceInterface = CmGetDeviceInterfaceMappedPropertyLocales(
                        (__int64)a1,
                        (__int64)a2,
                        0LL,
                        *((_QWORD *)a5 + 1),
                        *((_WORD **)a5 + 2),
                        a5[6],
                        *((_DWORD **)a5 + 4));
    goto LABEL_15;
  }
  v16 = v15 - 1;
  if ( v16 )
  {
    if ( v16 != 1 )
    {
      DeviceInterfaceMappedPropertyFromRegValue = -1073741811;
      return PnpMapCmStatusToDispatchStatus(DeviceInterfaceMappedPropertyFromRegValue);
    }
    DeviceInterface = CmSetDeviceInterfaceMappedProperty(
                        (__int64)a1,
                        (__int64)a2,
                        *(_QWORD *)a5,
                        *((_QWORD *)a5 + 1),
                        *((_QWORD *)a5 + 2),
                        a5[6],
                        *((_QWORD *)a5 + 4),
                        a5[10]);
    goto LABEL_15;
  }
  v17 = *((_QWORD *)a5 + 1);
  v18 = *(void **)a5;
  v19 = (_DWORD *)*((_QWORD *)a5 + 6);
  v20 = a5[10];
  v21 = *((_QWORD *)a5 + 4);
  v22 = (_DWORD *)*((_QWORD *)a5 + 3);
  v23 = *((_QWORD *)a5 + 2);
  DeviceInterfaceMappedPropertyFromRegValue = -1073741802;
  *v19 = 0;
  v32 = (int)v18;
  if ( !v17 )
  {
    while ( (unsigned int)v8 < 3 )
    {
      v25 = (__int64)*(&off_140B3D1B0 + 2 * (unsigned int)v8);
      if ( v25 && *(_DWORD *)(v23 + 16) == *(_DWORD *)(v25 + 16) )
      {
        v31 = *(_QWORD *)v23 - *(_QWORD *)v25;
        if ( *(_QWORD *)v23 == *(_QWORD *)v25 )
          v31 = *(_QWORD *)(v23 + 8) - *(_QWORD *)(v25 + 8);
        if ( !v31 )
        {
          DeviceInterfaceMappedPropertyFromRegValue = CmGetDeviceInterfaceMappedPropertyFromRegValue(
                                                        a1,
                                                        a2,
                                                        v18,
                                                        v23,
                                                        v22,
                                                        v21,
                                                        v20,
                                                        v19);
          if ( DeviceInterfaceMappedPropertyFromRegValue != -1073741802 )
            return PnpMapCmStatusToDispatchStatus(DeviceInterfaceMappedPropertyFromRegValue);
          LODWORD(v18) = v32;
          break;
        }
      }
      LODWORD(v8) = (_DWORD)v8 + 1;
    }
    for ( i = 0; i < 4; ++i )
    {
      v29 = (__int64)*(&off_140B3DA10 + 2 * i);
      if ( *(_DWORD *)(v23 + 16) == *(_DWORD *)(v29 + 16) )
      {
        v30 = *(_QWORD *)v23 - *(_QWORD *)v29;
        if ( *(_QWORD *)v23 == *(_QWORD *)v29 )
          v30 = *(_QWORD *)(v23 + 8) - *(_QWORD *)(v29 + 8);
        if ( !v30 )
        {
          DeviceInterface = CmGetDeviceInterfaceMappedPropertyFromComposite(
                              (__int64)a1,
                              (__int64)a2,
                              (int)v18,
                              v23,
                              v22,
                              v21,
                              v20,
                              v19);
          goto LABEL_15;
        }
      }
    }
  }
  return PnpMapCmStatusToDispatchStatus(DeviceInterfaceMappedPropertyFromRegValue);
}
