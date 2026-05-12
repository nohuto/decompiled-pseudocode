/*
 * XREFs of RaidAdapterStorageQueryPropertyIoctl @ 0x1401BD85C
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14002B3B0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x140038D88 (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidGetStorageAdapterCryptoProperty @ 0x1400652F0 (RaidGetStorageAdapterCryptoProperty.c)
 *     RaidGetStorageAdapterProtocolSpecificProperty @ 0x14006552C (RaidGetStorageAdapterProtocolSpecificProperty.c)
 *     RaidGetStorageAdapterRpmbProperty @ 0x140065844 (RaidGetStorageAdapterRpmbProperty.c)
 *     RaidGetStorageAdapterSelfEncryptionProperty @ 0x1400658C8 (RaidGetStorageAdapterSelfEncryptionProperty.c)
 *     RaidGetStorageAdapterTemperatureProperty @ 0x1400659E4 (RaidGetStorageAdapterTemperatureProperty.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     RaidGetStorageAdapterFruIdProperty @ 0x14018363C (RaidGetStorageAdapterFruIdProperty.c)
 *     RaidGetStorageMiniportProperty @ 0x14018375C (RaidGetStorageMiniportProperty.c)
 *     RaidGetStorageAdapterProperty @ 0x1401B724C (RaidGetStorageAdapterProperty.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1401B86B4 (RaidGetStorageAdapterSerialNumberProperty.c)
 */

__int64 __fastcall RaidAdapterStorageQueryPropertyIoctl(_DWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  int *v4; // r9
  unsigned int StorageAdapterTemperatureProperty; // r14d
  unsigned __int64 v7; // rdx
  int v8; // r8d
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // ebx
  unsigned int StorageAdapterSerialNumberProperty; // eax
  __int64 v14; // rax
  bool v15; // zf
  unsigned __int64 v16; // rcx
  unsigned __int8 *v17; // rdx
  int v18; // eax
  unsigned __int64 v19; // rdx
  char v20; // r13
  _BYTE *v21; // r9
  unsigned __int8 v22; // r10
  char v23; // si
  char v24; // r15
  char v25; // r11
  char *v26; // r11
  unsigned int v27; // r12d
  unsigned __int64 v28; // r15
  __int64 v29; // r8
  int v30; // ecx
  const EVENT_DESCRIPTOR *v31; // rdx
  char v32; // cl
  char v33; // r8
  _BYTE *v34; // rax
  unsigned int v35; // eax
  char v36; // al
  int *v37; // rax
  char v38; // r13
  _BYTE *v39; // r9
  unsigned __int8 v40; // r10
  char v41; // si
  char v42; // r15
  char v43; // r11
  char *v44; // r11
  unsigned int v45; // r12d
  unsigned __int64 v46; // r15
  __int64 v47; // r8
  int v48; // ecx
  char v49; // cl
  char v50; // r8
  _BYTE *v51; // rax
  unsigned int v52; // eax
  unsigned __int64 v53; // r8
  char v54; // al
  char v56; // [rsp+28h] [rbp-41h]
  char v57; // [rsp+30h] [rbp-39h]
  char v58; // [rsp+38h] [rbp-31h]
  char v59; // [rsp+40h] [rbp-29h]
  char v60; // [rsp+48h] [rbp-21h]
  __int64 v61; // [rsp+50h] [rbp-19h]
  char v62; // [rsp+60h] [rbp-9h]
  char v63; // [rsp+60h] [rbp-9h]
  char v64; // [rsp+61h] [rbp-8h]
  char v65; // [rsp+61h] [rbp-8h]
  char v66; // [rsp+62h] [rbp-7h]
  char v67; // [rsp+62h] [rbp-7h]
  unsigned __int64 v68; // [rsp+68h] [rbp-1h] BYREF
  GUID v69; // [rsp+70h] [rbp+7h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v4 = *(int **)(a2 + 24);
  StorageAdapterTemperatureProperty = -1073741811;
  v7 = *(unsigned int *)(v2 + 8);
  v68 = v7;
  if ( *(_DWORD *)(v2 + 16) < 8u
    || (v8 = *v4, *v4 != 1)
    && ((v9 = (unsigned int)(v8 - 5), (unsigned int)v9 > 0x3E) || (v10 = 0x7811500000001801LL, !_bittest64(&v10, v9)))
    && v8 != 69 )
  {
    v12 = 0;
    *(_BYTE *)(a2 + 141) = -84;
    v15 = StorEtwLoggingEnabled == 0;
    StorageAdapterTemperatureProperty = -1073741808;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_DWORD *)(a2 + 48) = -1073741808;
    if ( v15 )
      goto LABEL_163;
    v69 = 0LL;
    IoGetActivityIdIrp(a2, &v69);
    v17 = *(unsigned __int8 **)(a2 + 184);
    if ( *v17 != 14 )
    {
      v18 = *v17 - 15;
      if ( *v17 == 15 )
      {
        if ( byte_140171461 >= 0 )
          goto LABEL_163;
        v19 = *((_QWORD *)v17 + 1);
        v38 = 0;
        v39 = 0LL;
        v63 = 0;
        v40 = 0;
        v65 = 0;
        v41 = 0;
        v42 = 0;
        v43 = 0;
        if ( *(_BYTE *)(v19 + 2) != 40 )
        {
          v49 = *(_BYTE *)(v19 + 72);
          v39 = *(_BYTE **)(v19 + 32);
          v40 = *(_BYTE *)(v19 + 11);
          v38 = *(_BYTE *)(v19 + 4);
          if ( *(_BYTE *)(v19 + 2) )
            goto LABEL_163;
          goto LABEL_137;
        }
        v44 = 0LL;
        v67 = 0;
        if ( *(_DWORD *)(v19 + 20) )
          goto LABEL_163;
        v45 = 0;
        LODWORD(v68) = *(_DWORD *)(v19 + 56);
        if ( !(_DWORD)v68 )
          goto LABEL_134;
        while ( 1 )
        {
          v16 = *(unsigned int *)(v19 + 4LL * v45 + 120);
          if ( (unsigned int)v16 >= 0x80 )
          {
            v46 = *(unsigned int *)(v19 + 16);
            if ( (unsigned int)v16 < (unsigned int)v46 )
            {
              v47 = (unsigned int)v16;
              v48 = *(_DWORD *)(v16 + v19) - 64;
              if ( v48 )
              {
                v16 = (unsigned int)(v48 - 1);
                if ( (_DWORD)v16 )
                {
                  if ( (_DWORD)v16 == 1 )
                  {
                    v16 = v47 + 40;
                    if ( v47 + 40 <= v46 )
                    {
                      if ( *(_DWORD *)(v47 + v19 + 12) )
                        v44 = (char *)(v47 + v19 + 32);
                      v39 = *(_BYTE **)(v47 + v19 + 24);
LABEL_132:
                      v40 = *(_BYTE *)(v47 + v19 + 9);
                      v38 = *(_BYTE *)(v47 + v19 + 8);
LABEL_133:
                      v42 = 0;
LABEL_134:
                      if ( !v44 )
                        goto LABEL_163;
                      v49 = *v44;
                      v43 = 0;
LABEL_137:
                      LOBYTE(v16) = v49 - 8;
                      if ( (v16 & 0x5D) != 0 )
                        goto LABEL_163;
                      if ( *(_BYTE *)(v19 + 3) == 1 || !v39 || !v40 )
                        goto LABEL_157;
                      v50 = 0;
                      v16 = (unsigned __int64)&v39[v40];
                      v51 = v39 + 8;
                      if ( (unsigned __int8)((*v39 & 0x7F) - 114) <= 1u )
                      {
                        if ( (unsigned __int64)v51 <= v16 )
                        {
                          v50 = 1;
                          v42 = v39[2];
                          v41 = v39[1] & 0xF;
                          v43 = v39[3];
                        }
                      }
                      else
                      {
                        if ( (unsigned __int64)v51 <= v16 )
                        {
                          v41 = v39[2] & 0xF;
                          v52 = v40;
                          if ( (unsigned int)(unsigned __int8)v39[7] + 8 <= v40 )
                            v52 = (unsigned __int8)v39[7] + 8;
                          v16 = (unsigned __int64)(v39 + 13);
                          v53 = (unsigned __int64)&v39[v52];
                          if ( (unsigned __int64)(v39 + 13) > v53 )
                            v63 = 0;
                          else
                            v63 = v39[12];
                          if ( (unsigned __int64)(v39 + 14) > v53 )
                            v65 = 0;
                          else
                            v65 = *(_BYTE *)v16;
                          v50 = 1;
                        }
                        v43 = v65;
                        v42 = v63;
                      }
                      if ( v50 )
                      {
                        LOBYTE(v12) = v42;
                        v54 = v43;
                      }
                      else
                      {
LABEL_157:
                        v41 = 0;
                        v54 = 0;
                      }
                      v61 = a2;
                      v60 = v54;
                      v59 = v12;
                      v58 = v41;
                      v57 = v38;
                      v56 = *(_BYTE *)(v19 + 3);
LABEL_159:
                      McTemplateK0pduuuuup_EtwWriteTransfer(
                        v16,
                        v19,
                        &v69,
                        a2,
                        *(_DWORD *)(a2 + 48),
                        v56,
                        v57,
                        v58,
                        v59,
                        v60,
                        v61);
                      goto LABEL_163;
                    }
                  }
                }
                else
                {
                  v16 = v47 + 56;
                  if ( v47 + 56 <= v46 )
                  {
                    v67 = 1;
                    if ( *(_BYTE *)(v47 + v19 + 10) )
                      v44 = (char *)(v47 + v19 + 24);
                    v38 = *(_BYTE *)(v47 + v19 + 8);
                    v39 = *(_BYTE **)(v47 + v19 + 16);
                    v40 = *(_BYTE *)(v47 + v19 + 9);
                  }
                }
              }
              else
              {
                v16 = v47 + 40;
                if ( v47 + 40 <= v46 )
                {
                  if ( *(_BYTE *)(v47 + v19 + 10) )
                    v44 = (char *)(v47 + v19 + 24);
                  v39 = *(_BYTE **)(v47 + v19 + 16);
                  goto LABEL_132;
                }
              }
              if ( v67 )
                goto LABEL_133;
            }
          }
          if ( ++v45 >= (unsigned int)v68 )
            goto LABEL_133;
        }
      }
      goto LABEL_101;
    }
LABEL_160:
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_163;
    v31 = &EventNonReadWriteRequestComplete;
    goto LABEL_162;
  }
  v11 = v4[1];
  v12 = 0;
  if ( v11 )
  {
    if ( v11 == 1 )
    {
      StorageAdapterTemperatureProperty = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 56) = 0LL;
      StorageAdapterTemperatureProperty = -1073741808;
    }
    goto LABEL_42;
  }
  if ( v8 > 53 )
  {
    switch ( v8 )
    {
      case '9':
        StorageAdapterSerialNumberProperty = RaidGetStorageAdapterSerialNumberProperty((__int64)a1, v4, &v68);
        goto LABEL_40;
      case '@':
        StorageAdapterSerialNumberProperty = RaidGetStorageAdapterSelfEncryptionProperty((__int64)a1, v4, &v68);
        goto LABEL_40;
      case 'A':
        StorageAdapterSerialNumberProperty = RaidGetStorageAdapterFruIdProperty((__int64)a1, v4, &v68);
        goto LABEL_40;
    }
    if ( v8 != 66 )
    {
      if ( v8 == 67 )
        goto LABEL_30;
      if ( v8 != 69 )
        goto LABEL_42;
      goto LABEL_29;
    }
    if ( v7 >= 8 )
    {
      *v4 = 12;
      StorageAdapterTemperatureProperty = 0;
      v4[1] = 12;
      if ( v7 < 0xC )
      {
        v14 = 8LL;
LABEL_41:
        *(_QWORD *)(a2 + 56) = v14;
        goto LABEL_42;
      }
      v4[2] = 1;
    }
    else
    {
      StorageAdapterTemperatureProperty = -1073741789;
    }
    v14 = 12LL;
    goto LABEL_41;
  }
  switch ( v8 )
  {
    case 53:
      StorageAdapterSerialNumberProperty = RaidGetStorageAdapterPhysicalTopologyProperty((__int64)a1, (IRP *)a2, &v68);
      goto LABEL_40;
    case 1:
      StorageAdapterSerialNumberProperty = RaidGetStorageAdapterProperty((__int64)a1, (__int64)v4, (__int64 *)&v68);
      goto LABEL_40;
    case 5:
      StorageAdapterSerialNumberProperty = RaidGetStorageMiniportProperty((__int64)a1, v4, &v68);
      goto LABEL_40;
    case 16:
      StorageAdapterSerialNumberProperty = RaidGetStorageAdapterRpmbProperty(a1, a2, &v68);
LABEL_40:
      StorageAdapterTemperatureProperty = StorageAdapterSerialNumberProperty;
      v14 = v68;
      goto LABEL_41;
    case 17:
LABEL_29:
      StorageAdapterSerialNumberProperty = RaidGetStorageAdapterCryptoProperty((__int64)a1, a2, &v68, v8 == 69);
      goto LABEL_40;
    case 49:
LABEL_30:
      StorageAdapterSerialNumberProperty = RaidGetStorageAdapterProtocolSpecificProperty(
                                             (__int64)a1,
                                             (IRP *)a2,
                                             (__int64 *)&v68);
      goto LABEL_40;
    case 51:
      StorageAdapterTemperatureProperty = RaidGetStorageAdapterTemperatureProperty((__int64)a1, (IRP *)a2, &v68);
      *(_QWORD *)(a2 + 56) = v68;
      break;
  }
LABEL_42:
  v15 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = StorageAdapterTemperatureProperty;
  if ( v15 )
    goto LABEL_163;
  v69 = 0LL;
  IoGetActivityIdIrp(a2, &v69);
  v17 = *(unsigned __int8 **)(a2 + 184);
  if ( *v17 == 14 )
    goto LABEL_160;
  v18 = *v17 - 15;
  if ( *v17 != 15 )
  {
LABEL_101:
    if ( v18 != 12 )
      goto LABEL_163;
    if ( v17[1] == 7 && !*((_DWORD *)v17 + 2) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v37 = *(int **)(a2 + 56);
        if ( v37 )
          v12 = *v37;
        McTemplateK0pqd_EtwWriteTransfer(v16, (__int64)v17, &v69, a2, v12, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_163;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_163;
    v31 = &EventPnpRequestComplete;
LABEL_162:
    McTemplateK0pd_EtwWriteTransfer(v16, v31, &v69, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_163;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_163;
  v19 = *((_QWORD *)v17 + 1);
  v20 = 0;
  v21 = 0LL;
  v62 = 0;
  v22 = 0;
  v64 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  if ( *(_BYTE *)(v19 + 2) != 40 )
  {
    v32 = *(_BYTE *)(v19 + 72);
    v21 = *(_BYTE **)(v19 + 32);
    v22 = *(_BYTE *)(v19 + 11);
    v20 = *(_BYTE *)(v19 + 4);
    if ( *(_BYTE *)(v19 + 2) )
      goto LABEL_163;
LABEL_76:
    LOBYTE(v16) = v32 - 8;
    if ( (v16 & 0x5D) != 0 )
      goto LABEL_163;
    v33 = *(_BYTE *)(v19 + 3);
    if ( v33 == 1 || !v21 || !v22 )
      goto LABEL_96;
    LOBYTE(v19) = 0;
    v16 = (unsigned __int64)&v21[v22];
    v34 = v21 + 8;
    if ( (unsigned __int8)((*v21 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v34 <= v16 )
      {
        LOBYTE(v19) = 1;
        v24 = v21[2];
        v23 = v21[1] & 0xF;
        v25 = v21[3];
      }
    }
    else
    {
      if ( (unsigned __int64)v34 <= v16 )
      {
        v23 = v21[2] & 0xF;
        v35 = v22;
        if ( (unsigned int)(unsigned __int8)v21[7] + 8 <= v22 )
          v35 = (unsigned __int8)v21[7] + 8;
        v16 = (unsigned __int64)(v21 + 13);
        v19 = (unsigned __int64)&v21[v35];
        if ( (unsigned __int64)(v21 + 13) > v19 )
          v62 = 0;
        else
          v62 = v21[12];
        if ( (unsigned __int64)(v21 + 14) > v19 )
          v64 = 0;
        else
          v64 = *(_BYTE *)v16;
        LOBYTE(v19) = 1;
      }
      v25 = v64;
      v24 = v62;
    }
    if ( (_BYTE)v19 )
    {
      LOBYTE(v12) = v24;
      v36 = v25;
    }
    else
    {
LABEL_96:
      v23 = 0;
      v36 = 0;
    }
    v61 = a2;
    v60 = v36;
    v59 = v12;
    v58 = v23;
    v57 = v20;
    v56 = v33;
    goto LABEL_159;
  }
  v26 = 0LL;
  v66 = 0;
  if ( *(_DWORD *)(v19 + 20) )
    goto LABEL_163;
  v27 = 0;
  LODWORD(v68) = *(_DWORD *)(v19 + 56);
  if ( !(_DWORD)v68 )
    goto LABEL_73;
  while ( 1 )
  {
    v16 = *(unsigned int *)(v19 + 4LL * v27 + 120);
    if ( (unsigned int)v16 >= 0x80 )
    {
      v28 = *(unsigned int *)(v19 + 16);
      if ( (unsigned int)v16 < (unsigned int)v28 )
        break;
    }
LABEL_66:
    if ( ++v27 >= (unsigned int)v68 )
      goto LABEL_72;
  }
  v29 = (unsigned int)v16;
  v30 = *(_DWORD *)(v19 + v16) - 64;
  if ( v30 )
  {
    v16 = (unsigned int)(v30 - 1);
    if ( (_DWORD)v16 )
    {
      if ( (_DWORD)v16 == 1 )
      {
        v16 = v29 + 40;
        if ( v29 + 40 <= v28 )
        {
          if ( *(_DWORD *)(v19 + v29 + 12) )
            v26 = (char *)(v29 + v19 + 32);
          v21 = *(_BYTE **)(v19 + v29 + 24);
          goto LABEL_71;
        }
      }
    }
    else
    {
      v16 = v29 + 56;
      if ( v29 + 56 <= v28 )
      {
        v66 = 1;
        if ( *(_BYTE *)(v19 + v29 + 10) )
          v26 = (char *)(v29 + v19 + 24);
        v20 = *(_BYTE *)(v19 + v29 + 8);
        v21 = *(_BYTE **)(v19 + v29 + 16);
        v22 = *(_BYTE *)(v19 + v29 + 9);
      }
    }
    goto LABEL_65;
  }
  v16 = v29 + 40;
  if ( v29 + 40 > v28 )
  {
LABEL_65:
    if ( v66 )
      goto LABEL_72;
    goto LABEL_66;
  }
  if ( *(_BYTE *)(v19 + v29 + 10) )
    v26 = (char *)(v29 + v19 + 24);
  v21 = *(_BYTE **)(v19 + v29 + 16);
LABEL_71:
  v22 = *(_BYTE *)(v19 + v29 + 9);
  v20 = *(_BYTE *)(v19 + v29 + 8);
LABEL_72:
  v24 = 0;
LABEL_73:
  if ( v26 )
  {
    v32 = *v26;
    v25 = 0;
    goto LABEL_76;
  }
LABEL_163:
  IofCompleteRequest((PIRP)a2, 0);
  return StorageAdapterTemperatureProperty;
}
