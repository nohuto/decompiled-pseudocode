/*
 * XREFs of _PnpDispatchDevice @ 0x1408CB5A0
 * Callers:
 *     PnpGetObjectProperty @ 0x1408CA950 (PnpGetObjectProperty.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAE28 (_PnpOpenObjectRegKey.c)
 *     _PnpGetObjectPropertyWorker @ 0x1408CB050 (_PnpGetObjectPropertyWorker.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 * Callees:
 *     _PnpMapCmStatusToDispatchStatus @ 0x14044453C (_PnpMapCmStatusToDispatchStatus.c)
 *     _CmDeleteDevice @ 0x1408189D8 (_CmDeleteDevice.c)
 *     _CmValidateDeviceName @ 0x1408B59E0 (_CmValidateDeviceName.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     _CmSetDeviceMappedProperty @ 0x140980AE0 (_CmSetDeviceMappedProperty.c)
 *     _CmGetMatchingDeviceList @ 0x1409AA61C (_CmGetMatchingDeviceList.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x1409AB838 (_CmGetDeviceMappedPropertyKeys.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1409ABB00 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1409ACEE0 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1409AD3C4 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmCreateDevice @ 0x1409C4008 (_CmCreateDevice.c)
 *     _CmGetDeviceMappedPropertyLocales @ 0x140A44794 (_CmGetDeviceMappedPropertyLocales.c)
 */

__int64 __fastcall PnpDispatchDevice(__int64 a1, _WORD *a2, __int64 a3, int a4, _DWORD *a5)
{
  __int64 (__fastcall *v5)(__int64, __int64, unsigned int); // rbx
  __int128 *v8; // r8
  unsigned int DeviceMappedPropertyFromRegProp; // r10d
  __int64 v10; // r9
  unsigned int v11; // ebp
  __int64 v12; // r11
  int v13; // r13d
  __int64 v14; // rdi
  __int64 v15; // rax
  _DWORD *v16; // r14
  __int64 v17; // rcx
  unsigned int i; // eax
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v22; // rdx
  unsigned int j; // ecx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // [rsp+50h] [rbp-58h]
  __int64 v28; // [rsp+58h] [rbp-50h]
  __int64 v29; // [rsp+60h] [rbp-48h]
  __int128 v30; // [rsp+68h] [rbp-40h] BYREF

  LODWORD(v5) = 0;
  LODWORD(v8) = 0;
  v30 = 0LL;
  if ( a4 == 8 )
  {
    DeviceMappedPropertyFromRegProp = -1073741802;
    v10 = *((_QWORD *)a5 + 4);
    v11 = a5[14] & 0xFFFF0000;
    v12 = *((_QWORD *)a5 + 3);
    v13 = a5[10];
    v14 = *((_QWORD *)a5 + 2);
    v15 = *((_QWORD *)a5 + 1);
    v16 = (_DWORD *)*((_QWORD *)a5 + 6);
    v17 = *(_QWORD *)a5;
    v28 = v10;
    v29 = v12;
    *v16 = 0;
    v27 = v17;
    if ( !v15 )
    {
      for ( i = 0; i < 0x21; ++i )
      {
        v19 = (__int64)*(&CmDeviceRegPropMap + 3 * i);
        if ( *(_DWORD *)(v14 + 16) == *(_DWORD *)(v19 + 16) )
        {
          v22 = *(_QWORD *)v14 - *(_QWORD *)v19;
          if ( *(_QWORD *)v14 == *(_QWORD *)v19 )
            v22 = *(_QWORD *)(v14 + 8) - *(_QWORD *)(v19 + 8);
          if ( !v22 )
          {
            DeviceMappedPropertyFromRegProp = CmGetDeviceMappedPropertyFromRegProp(
                                                a1,
                                                (_DWORD)a2,
                                                v17,
                                                v14,
                                                v12,
                                                v10,
                                                v13,
                                                (__int64)v16,
                                                v11);
            if ( DeviceMappedPropertyFromRegProp != -1073741802 )
              return PnpMapCmStatusToDispatchStatus(DeviceMappedPropertyFromRegProp);
            v10 = v28;
            v12 = v29;
            break;
          }
        }
      }
      for ( j = 0; ; ++j )
      {
        if ( j >= 2 )
          goto LABEL_23;
        v24 = (__int64)*(&off_140B3D6F0 + 4 * j);
        if ( *(_DWORD *)(v14 + 16) == *(_DWORD *)(v24 + 16) )
        {
          v26 = *(_QWORD *)v14 - *(_QWORD *)v24;
          if ( *(_QWORD *)v14 == *(_QWORD *)v24 )
            v26 = *(_QWORD *)(v14 + 8) - *(_QWORD *)(v24 + 8);
          if ( !v26 )
            break;
        }
      }
      DeviceMappedPropertyFromRegProp = CmGetDeviceMappedPropertyFromInstanceKeyRegValue(
                                          a1,
                                          (_DWORD)a2,
                                          v27,
                                          v14,
                                          v12,
                                          v10,
                                          v13,
                                          (__int64)v16);
      if ( DeviceMappedPropertyFromRegProp == -1073741802 )
      {
LABEL_23:
        while ( (unsigned int)v5 < 0x1C )
        {
          v25 = (__int64)*(&off_140B3FB70 + 2 * (unsigned int)v5);
          if ( *(_DWORD *)(v14 + 16) == *(_DWORD *)(v25 + 16) )
          {
            v20 = *(_QWORD *)v14 - *(_QWORD *)v25;
            if ( *(_QWORD *)v14 == *(_QWORD *)v25 )
              v20 = *(_QWORD *)(v14 + 8) - *(_QWORD *)(v25 + 8);
            if ( !v20 )
            {
              DeviceMappedPropertyFromRegProp = CmGetDeviceMappedPropertyFromComposite(
                                                  a1,
                                                  a2,
                                                  v27,
                                                  v14,
                                                  v29,
                                                  v28,
                                                  v13,
                                                  v16,
                                                  v11);
              return PnpMapCmStatusToDispatchStatus(DeviceMappedPropertyFromRegProp);
            }
          }
          LODWORD(v5) = (_DWORD)v5 + 1;
        }
      }
    }
  }
  else if ( a4 == 2 )
  {
    DeviceMappedPropertyFromRegProp = CmOpenDeviceRegKey(
                                        a1,
                                        (__int64)a2,
                                        16,
                                        0,
                                        *a5,
                                        *((_BYTE *)a5 + 4),
                                        *((_QWORD *)a5 + 1),
                                        a5 + 4);
  }
  else
  {
    switch ( a4 )
    {
      case 1:
        DeviceMappedPropertyFromRegProp = CmValidateDeviceName(a1, a2);
        break;
      case 3:
        DeviceMappedPropertyFromRegProp = CmCreateDevice(
                                            a1,
                                            (_DWORD)a2,
                                            *a5,
                                            (int)a5 + 8,
                                            (__int64)(a5 + 4),
                                            a5[5] & 0xFFFF0000);
        break;
      case 4:
        DeviceMappedPropertyFromRegProp = CmDeleteDevice(a1, (__int64)a2, *a5 & 0xFFFF0000);
        break;
      case 5:
        if ( *(_QWORD *)a5 )
        {
          *(_QWORD *)&v30 = *(_QWORD *)a5;
          v5 = PnpCmMatchCallbackRoutine;
          v8 = &v30;
          *((_QWORD *)&v30 + 1) = *((_QWORD *)a5 + 1);
        }
        DeviceMappedPropertyFromRegProp = CmGetMatchingDeviceList(
                                            a1,
                                            (_DWORD)v5,
                                            (_DWORD)v8,
                                            *((_QWORD *)a5 + 2),
                                            a5[6],
                                            *((_QWORD *)a5 + 4),
                                            a5[10] & 0xFFFF0000);
        break;
      case 6:
        DeviceMappedPropertyFromRegProp = CmGetDeviceMappedPropertyKeys(
                                            a1,
                                            (_DWORD)a2,
                                            *(_QWORD *)a5,
                                            0,
                                            *((_QWORD *)a5 + 3),
                                            a5[8],
                                            *((_QWORD *)a5 + 5));
        break;
      case 7:
        DeviceMappedPropertyFromRegProp = CmGetDeviceMappedPropertyLocales(
                                            a1,
                                            (_DWORD)a2,
                                            0,
                                            *((_QWORD *)a5 + 1),
                                            *((_QWORD *)a5 + 2),
                                            a5[6],
                                            *((_QWORD *)a5 + 4));
        break;
      case 9:
        DeviceMappedPropertyFromRegProp = CmSetDeviceMappedProperty(
                                            a1,
                                            (int)a2,
                                            *((_QWORD *)a5 + 2),
                                            a5[6],
                                            *((PLARGE_INTEGER *)a5 + 4),
                                            a5[10]);
        break;
      default:
        DeviceMappedPropertyFromRegProp = -1073741811;
        break;
    }
  }
  return PnpMapCmStatusToDispatchStatus(DeviceMappedPropertyFromRegProp);
}
