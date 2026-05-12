/*
 * XREFs of RaUnitStorageQueryPropertyIoctl @ 0x1401BEAB0
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x14000D4E0 (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl @ 0x140030E98 (RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceNumaPropertyIoctl @ 0x140031EEC (RaUnitStorageQueryDeviceNumaPropertyIoctl.c)
 *     RaUnitQueryStorageStackPropertyIoctl @ 0x140032DB8 (RaUnitQueryStorageStackPropertyIoctl.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140056648 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaUnitStorageQueryDeviceEndurancePropertyIoctl @ 0x14009AF44 (RaUnitStorageQueryDeviceEndurancePropertyIoctl.c)
 *     RaUnitStorageQueryDeviceFruIdPropertyIoctl @ 0x14009B3D8 (RaUnitStorageQueryDeviceFruIdPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceLedStatePropertyIoctl @ 0x14009B8D0 (RaUnitStorageQueryDeviceLedStatePropertyIoctl.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x14009BCE8 (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x14009C17C (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 *     RaidUnitGetCryptoProperty @ 0x14009E600 (RaidUnitGetCryptoProperty.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x14018A54C (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 *     RaUnitStorageQueryDevicePropertyIoctl @ 0x1401B48A0 (RaUnitStorageQueryDevicePropertyIoctl.c)
 *     RaUnitStorageQueryDeviceIdPropertyIoctl @ 0x1401B6BF4 (RaUnitStorageQueryDeviceIdPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl @ 0x1401BA518 (RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl.c)
 */

int __fastcall RaUnitStorageQueryPropertyIoctl(__int64 a1, __int64 a2)
{
  _BYTE *v4; // rdi
  bool v5; // zf
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _DWORD *v9; // rax
  const EVENT_DESCRIPTOR *v10; // rdx
  __int64 v11; // r8
  char v12; // r13
  unsigned __int8 v13; // r11
  char v14; // r14
  char v15; // r12
  char v16; // r15
  unsigned __int8 *v17; // rsi
  unsigned int v18; // r10d
  unsigned int v19; // ebp
  __int64 v20; // rcx
  __int64 v21; // r9
  int v22; // ecx
  int v23; // ecx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  _BYTE *v26; // rax
  unsigned int v27; // eax
  int result; // eax
  __int64 v29; // rcx
  int v30; // [rsp+20h] [rbp-98h]
  GUID v31; // [rsp+60h] [rbp-58h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 8u )
  {
    switch ( **(_DWORD **)(a2 + 24) )
    {
      case 0:
        result = RaUnitStorageQueryDevicePropertyIoctl(a1, a2);
        break;
      case 2:
        result = RaUnitStorageQueryDeviceIdPropertyIoctl(a1, a2);
        break;
      case 0xC:
        result = RaUnitStorageQueryDevicePowerPropertyIoctl(a1, a2);
        break;
      case 0x30:
        result = RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl(a1, a2);
        break;
      case 0x32:
      case 0x44:
        result = RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl(a1, a2);
        break;
      case 0x34:
        result = RaUnitStorageQueryDeviceTemperaturePropertyIoctl(a1, a2);
        break;
      case 0x36:
        result = RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl(a1, a2);
        break;
      case 0x3B:
        result = RaUnitStorageQueryDeviceNumaPropertyIoctl(a1, a2);
        break;
      case 0x3E:
        result = RaUnitStorageQueryDeviceEndurancePropertyIoctl(a1, a2);
        break;
      case 0x3F:
        result = RaUnitStorageQueryDeviceLedStatePropertyIoctl(a1, a2);
        break;
      case 0x40:
        result = RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl(a1, a2);
        break;
      case 0x41:
        result = RaUnitStorageQueryDeviceFruIdPropertyIoctl(a1, a2);
        break;
      case 0x42:
        result = RaUnitQueryStorageStackPropertyIoctl(0x140000000LL, a2);
        break;
      case 0x45:
        if ( !(unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
          goto LABEL_77;
        result = RaidUnitGetCryptoProperty(a1, a2);
        if ( result == -1073741637 )
          goto LABEL_77;
        break;
      default:
LABEL_77:
        if ( StorEtwLoggingEnabled )
        {
          v31 = 0LL;
          IoGetActivityIdIrp(a2, &v31);
          if ( (byte_140171462 & 8) != 0 )
            McTemplateK0pd_EtwWriteTransfer(v29, &EventNonReadWriteRequestComplete, &v31, a2, *(_DWORD *)(a2 + 48));
        }
        ++*(_BYTE *)(a2 + 67);
        *(_QWORD *)(a2 + 184) += 72LL;
        result = IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), (PIRP)a2);
        break;
    }
  }
  else
  {
    v4 = 0LL;
    v5 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741585;
    if ( v5 )
      goto LABEL_60;
    v31 = 0LL;
    IoGetActivityIdIrp(a2, &v31);
    v8 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v8 == 14 )
    {
      if ( (byte_140171462 & 8) == 0 )
        goto LABEL_60;
      v7 = *(unsigned int *)(a2 + 48);
      v10 = &EventNonReadWriteRequestComplete;
      v30 = *(_DWORD *)(a2 + 48);
      goto LABEL_59;
    }
    if ( *(_BYTE *)v8 != 15 )
    {
      if ( *(_BYTE *)v8 != 27 )
        goto LABEL_60;
      if ( *(_BYTE *)(v8 + 1) == 7 && !*(_DWORD *)(v8 + 8) )
      {
        if ( (byte_140171462 & 0x40) != 0 )
        {
          v9 = *(_DWORD **)(a2 + 56);
          if ( v9 )
            LODWORD(v4) = *v9;
          McTemplateK0pqd_EtwWriteTransfer(v7, v6, &v31, a2, (_DWORD)v4, *(_DWORD *)(a2 + 48));
        }
        goto LABEL_60;
      }
      if ( (byte_140171462 & 0x20) == 0 )
        goto LABEL_60;
      v10 = &EventPnpRequestComplete;
      v30 = *(_DWORD *)(a2 + 48);
LABEL_59:
      McTemplateK0pd_EtwWriteTransfer(v7, v10, &v31, a2, v30);
      goto LABEL_60;
    }
    if ( byte_140171461 >= 0 )
      goto LABEL_60;
    v11 = *(_QWORD *)(v8 + 8);
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    if ( *(_BYTE *)(v11 + 2) == 40 )
    {
      v17 = 0LL;
      if ( *(_DWORD *)(v11 + 20) )
        goto LABEL_60;
      v18 = 0;
      v19 = *(_DWORD *)(v11 + 56);
      if ( !v19 )
        goto LABEL_36;
      while ( 1 )
      {
        v20 = *(unsigned int *)(v11 + 4LL * v18 + 120);
        if ( (unsigned int)v20 < 0x80 )
          goto LABEL_30;
        v6 = *(unsigned int *)(v11 + 16);
        if ( (unsigned int)v20 >= (unsigned int)v6 )
          goto LABEL_30;
        v21 = (unsigned int)v20;
        v22 = *(_DWORD *)(v20 + v11) - 64;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            if ( v23 == 1 && v21 + 40 <= v6 )
            {
              if ( *(_DWORD *)(v21 + v11 + 12) )
                v17 = (unsigned __int8 *)(v21 + v11 + 32);
              v4 = *(_BYTE **)(v21 + v11 + 24);
              goto LABEL_35;
            }
            goto LABEL_30;
          }
          v24 = v21 + 56;
        }
        else
        {
          v24 = v21 + 40;
        }
        if ( v24 <= v6 )
        {
          if ( *(_BYTE *)(v21 + v11 + 10) )
            v17 = (unsigned __int8 *)(v21 + v11 + 24);
          v4 = *(_BYTE **)(v21 + v11 + 16);
LABEL_35:
          v12 = *(_BYTE *)(v21 + v11 + 8);
          v13 = *(_BYTE *)(v21 + v11 + 9);
LABEL_36:
          if ( v17 )
          {
            v25 = *v17;
            goto LABEL_39;
          }
          goto LABEL_60;
        }
LABEL_30:
        if ( ++v18 >= v19 )
          goto LABEL_36;
      }
    }
    v25 = *(unsigned __int8 *)(v11 + 72);
    v4 = *(_BYTE **)(v11 + 32);
    v13 = *(_BYTE *)(v11 + 11);
    v12 = *(_BYTE *)(v11 + 4);
    if ( *(_BYTE *)(v11 + 2) )
      goto LABEL_60;
LABEL_39:
    LOBYTE(v25) = v25 - 8;
    if ( (v25 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v11 + 3) == 1 || !v4 || !v13 )
        goto LABEL_55;
      LOBYTE(v6) = 0;
      v25 = (unsigned __int64)&v4[v13];
      v26 = v4 + 8;
      if ( (unsigned __int8)((*v4 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v26 > v25 )
          goto LABEL_54;
        v15 = v4[2];
        v14 = v4[1] & 0xF;
        v16 = v4[3];
      }
      else
      {
        if ( (unsigned __int64)v26 > v25 )
          goto LABEL_54;
        v14 = v4[2] & 0xF;
        v27 = v13;
        if ( (unsigned int)(unsigned __int8)v4[7] + 8 <= v13 )
          v27 = (unsigned __int8)v4[7] + 8;
        v25 = (unsigned __int64)(v4 + 13);
        v6 = (unsigned __int64)&v4[v27];
        if ( (unsigned __int64)(v4 + 13) <= v6 )
          v15 = v4[12];
        if ( (unsigned __int64)(v4 + 14) <= v6 )
          v16 = *(_BYTE *)v25;
      }
      LOBYTE(v6) = 1;
LABEL_54:
      if ( (_BYTE)v6 )
      {
LABEL_56:
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v25,
          v6,
          &v31,
          a2,
          *(_DWORD *)(a2 + 48),
          *(_BYTE *)(v11 + 3),
          v12,
          v14,
          v15,
          v16,
          a2);
        goto LABEL_60;
      }
LABEL_55:
      v16 = 0;
      v15 = 0;
      v14 = 0;
      goto LABEL_56;
    }
LABEL_60:
    IofCompleteRequest((PIRP)a2, 0);
    return -1073741585;
  }
  return result;
}
