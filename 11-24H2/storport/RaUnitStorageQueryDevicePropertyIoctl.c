/*
 * XREFs of RaUnitStorageQueryDevicePropertyIoctl @ 0x1401B48A0
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1401BEAB0 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     RaGetUnitStorageDeviceProperty @ 0x1401B4A30 (RaGetUnitStorageDeviceProperty.c)
 */

__int64 __fastcall RaUnitStorageQueryDevicePropertyIoctl(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  _BYTE *v5; // rsi
  int v6; // ecx
  int UnitStorageDeviceProperty; // edi
  bool v8; // zf
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // al
  _DWORD *v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int8 v15; // r8
  char v16; // r10
  char v17; // r12
  char v18; // r15
  char v19; // r11
  unsigned __int8 *v20; // r9
  unsigned int v21; // eax
  unsigned int v22; // ecx
  unsigned int *v23; // r13
  __int64 v24; // rax
  unsigned __int64 v25; // rbp
  int v26; // ecx
  int v27; // ecx
  unsigned __int64 v28; // rcx
  char v29; // r9
  _BYTE *v30; // rax
  unsigned int v31; // eax
  unsigned int v32; // [rsp+60h] [rbp-58h] BYREF
  int v33; // [rsp+64h] [rbp-54h]
  GUID v34; // [rsp+68h] [rbp-50h] BYREF

  v4 = *(_QWORD *)(a2 + 24);
  v5 = 0LL;
  v32 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  v6 = *(_DWORD *)(v4 + 4);
  if ( v6 )
  {
    if ( v6 == 1 )
      UnitStorageDeviceProperty = 0;
    else
      UnitStorageDeviceProperty = -1073741637;
  }
  else
  {
    UnitStorageDeviceProperty = RaGetUnitStorageDeviceProperty(a1, v4, &v32);
    if ( UnitStorageDeviceProperty < 0 )
      *(_QWORD *)(a2 + 56) = 0LL;
    else
      *(_QWORD *)(a2 + 56) = v32;
  }
  v8 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = UnitStorageDeviceProperty;
  if ( v8 )
    goto LABEL_7;
  v34 = 0LL;
  IoGetActivityIdIrp(a2, &v34);
  v10 = *(_QWORD *)(a2 + 184);
  v11 = *(_BYTE *)v10;
  if ( *(_BYTE *)v10 != 15 )
  {
    if ( v11 == 14 )
    {
      if ( (byte_140171462 & 8) != 0 )
        McTemplateK0pd_EtwWriteTransfer(v10, &EventNonReadWriteRequestComplete, &v34, a2, *(_DWORD *)(a2 + 48));
    }
    else if ( v11 == 27 )
    {
      if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
      {
        if ( (byte_140171462 & 0x40) != 0 )
        {
          v13 = *(_DWORD **)(a2 + 56);
          if ( v13 )
            LODWORD(v5) = *v13;
          McTemplateK0pqd_EtwWriteTransfer(v10, v9, &v34, a2, (_DWORD)v5, *(_DWORD *)(a2 + 48));
        }
      }
      else if ( (byte_140171462 & 0x20) != 0 )
      {
        McTemplateK0pd_EtwWriteTransfer(v10, &EventPnpRequestComplete, &v34, a2, *(_DWORD *)(a2 + 48));
      }
    }
    goto LABEL_7;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_7;
  v14 = *(_QWORD *)(v10 + 8);
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( *(_BYTE *)(v14 + 2) != 40 )
  {
    v28 = *(unsigned __int8 *)(v14 + 72);
    v5 = *(_BYTE **)(v14 + 32);
    v15 = *(_BYTE *)(v14 + 11);
    v17 = *(_BYTE *)(v14 + 4);
    if ( *(_BYTE *)(v14 + 2) )
      goto LABEL_7;
LABEL_51:
    LOBYTE(v28) = v28 - 8;
    if ( (v28 & 0x5D) != 0 )
      goto LABEL_7;
    v29 = *(_BYTE *)(v14 + 3);
    if ( v29 == 1 || !v5 || !v15 )
      goto LABEL_67;
    LOBYTE(v14) = 0;
    v28 = (unsigned __int64)&v5[v15];
    v30 = v5 + 8;
    if ( (unsigned __int8)((*v5 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v30 > v28 )
        goto LABEL_66;
      v18 = v5[2];
      v16 = v5[1] & 0xF;
      v19 = v5[3];
    }
    else
    {
      if ( (unsigned __int64)v30 > v28 )
        goto LABEL_66;
      v16 = v5[2] & 0xF;
      v31 = v15;
      if ( (unsigned int)(unsigned __int8)v5[7] + 8 <= v15 )
        v31 = (unsigned __int8)v5[7] + 8;
      v28 = (unsigned __int64)(v5 + 13);
      v14 = (unsigned __int64)&v5[v31];
      if ( (unsigned __int64)(v5 + 13) <= v14 )
        v18 = v5[12];
      if ( (unsigned __int64)(v5 + 14) <= v14 )
        v19 = *(_BYTE *)v28;
    }
    LOBYTE(v14) = 1;
LABEL_66:
    if ( (_BYTE)v14 )
    {
LABEL_68:
      McTemplateK0pduuuuup_EtwWriteTransfer(v28, v14, &v34, a2, *(_DWORD *)(a2 + 48), v29, v17, v16, v18, v19, a2);
      goto LABEL_7;
    }
LABEL_67:
    v19 = 0;
    v18 = 0;
    v16 = 0;
    goto LABEL_68;
  }
  v20 = 0LL;
  if ( *(_DWORD *)(v14 + 20) )
    goto LABEL_7;
  v21 = *(_DWORD *)(v14 + 56);
  v33 = 0;
  v32 = v21;
  if ( !v21 )
    goto LABEL_42;
  v22 = v21;
  v23 = (unsigned int *)(v14 + 120);
  while ( 1 )
  {
    v24 = *v23;
    if ( (unsigned int)v24 < 0x80 )
      goto LABEL_48;
    v25 = *(unsigned int *)(v14 + 16);
    if ( (unsigned int)v24 >= (unsigned int)v25 )
      goto LABEL_48;
    v26 = *(_DWORD *)(v24 + v14);
    if ( v26 != 64 )
      break;
    if ( v24 + 40 <= v25 )
    {
      if ( !*(_BYTE *)(v24 + v14 + 10) )
        goto LABEL_40;
LABEL_39:
      v20 = (unsigned __int8 *)(v24 + v14 + 24);
LABEL_40:
      v5 = *(_BYTE **)(v24 + v14 + 16);
      goto LABEL_41;
    }
LABEL_47:
    v22 = v32;
LABEL_48:
    ++v23;
    if ( ++v33 >= v22 )
      goto LABEL_42;
  }
  v27 = v26 - 65;
  if ( !v27 )
  {
    if ( v24 + 56 <= v25 )
    {
      if ( *(_BYTE *)(v24 + v14 + 10) )
        goto LABEL_39;
      goto LABEL_40;
    }
    goto LABEL_47;
  }
  if ( v27 != 1 || v24 + 40 > v25 )
    goto LABEL_47;
  if ( *(_DWORD *)(v24 + v14 + 12) )
    v20 = (unsigned __int8 *)(v24 + v14 + 32);
  v5 = *(_BYTE **)(v24 + v14 + 24);
LABEL_41:
  v17 = *(_BYTE *)(v24 + v14 + 8);
  v15 = *(_BYTE *)(v24 + v14 + 9);
LABEL_42:
  if ( v20 )
  {
    v28 = *v20;
    goto LABEL_51;
  }
LABEL_7:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)UnitStorageDeviceProperty;
}
