/*
 * XREFs of RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl @ 0x14009C684
 * Callers:
 *     RaUnitStorageSetPropertyIoctl @ 0x14018A9A8 (RaUnitStorageSetPropertyIoctl.c)
 * Callees:
 *     RaidUnitSendSrbIoControlSynchronously @ 0x14000CE9C (RaidUnitSendSrbIoControlSynchronously.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     Feature_Servicing_StorageSetProperty_BufferCheck__private_IsEnabledDeviceUsageNoInline @ 0x1400565A0 (Feature_Servicing_StorageSetProperty_BufferCheck__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaBuildSetProtocolSpecificPropertyBufferForMiniport @ 0x140089944 (RaBuildSetProtocolSpecificPropertyBufferForMiniport.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

NTSTATUS __fastcall RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl(__int64 a1, __int64 a2)
{
  int *v2; // r15
  int v3; // edi
  __int64 v4; // rax
  unsigned int *v6; // r13
  int v7; // ecx
  unsigned int v8; // edx
  unsigned __int64 v9; // rsi
  int v10; // esi
  char v11; // r12
  unsigned int v12; // eax
  _DWORD *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r13
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // ebx
  int v20; // eax
  bool v21; // zf
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  int *v24; // rax
  const EVENT_DESCRIPTOR *v25; // rdx
  __int64 v26; // rdx
  char v27; // bl
  char v28; // r13
  _BYTE *v29; // r9
  unsigned __int8 v30; // r10
  char v31; // r11
  char v32; // r15
  char *v33; // rbx
  unsigned int v34; // r12d
  unsigned __int64 v35; // r15
  __int64 v36; // r8
  int v37; // ecx
  char v38; // cl
  char v39; // r8
  _BYTE *v40; // rax
  unsigned int v41; // eax
  unsigned __int64 v42; // r8
  char v43; // al
  __int64 v44; // [rsp+20h] [rbp-49h]
  __int64 v45; // [rsp+28h] [rbp-41h]
  __int64 v46; // [rsp+30h] [rbp-39h]
  char v47; // [rsp+60h] [rbp-9h] BYREF
  char v48; // [rsp+61h] [rbp-8h] BYREF
  char v49; // [rsp+62h] [rbp-7h]
  unsigned int v50; // [rsp+64h] [rbp-5h]
  int v51; // [rsp+68h] [rbp-1h] BYREF
  PVOID P; // [rsp+70h] [rbp+7h] BYREF
  GUID v53; // [rsp+78h] [rbp+Fh] BYREF

  v2 = *(int **)(a2 + 24);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  *(_QWORD *)&v53.Data1 = a1;
  v6 = 0LL;
  P = 0LL;
  v7 = v2[1];
  v8 = *(_DWORD *)(v4 + 16);
  v9 = *(unsigned int *)(v4 + 8);
  v51 = 0;
  v47 = 0;
  v48 = 0;
  v50 = v8;
  if ( !v7 )
  {
    if ( *v2 == 50 )
    {
      v11 = 0;
      v12 = 72;
    }
    else
    {
      if ( *v2 != 68 )
        goto LABEL_7;
      v11 = 1;
      v12 = 80;
    }
    if ( v8 >= v12 )
    {
      v13 = v2 + 2;
      if ( v11 )
      {
        if ( *v13 != 1 || v2[3] != 72 )
          goto LABEL_7;
        v13 = v2 + 4;
      }
      if ( !(unsigned int)Feature_Servicing_StorageSetProperty_BufferCheck__private_IsEnabledDeviceUsageNoInline()
        || v50 >= (unsigned __int64)v13 + (unsigned int)v13[4] + (unsigned __int64)(unsigned int)v13[5] - (_QWORD)v2 )
      {
        if ( *v13 && v13[1] && ((v14 = (unsigned int)v13[4], !(_DWORD)v14) || (unsigned int)v14 >= 0x40 && v13[5]) )
        {
          if ( (unsigned int)v9 >= 0x48 )
          {
            if ( v9 < (unsigned __int64)(unsigned int)v13[5] + v14 + 8 )
              goto LABEL_7;
            v15 = *(_QWORD *)&v53.Data1;
            v10 = RaBuildSetProtocolSpecificPropertyBufferForMiniport(
                    *(_QWORD *)(*(_QWORD *)&v53.Data1 + 8LL),
                    a2,
                    (__int64 *)&P,
                    (unsigned int *)&v51,
                    &v47,
                    &v48);
            if ( v10 < 0 )
            {
              v6 = (unsigned int *)P;
            }
            else
            {
              if ( v48 )
              {
                ExFreePoolWithTag(P, 0x72536152u);
                ++*(_BYTE *)(a2 + 67);
                *(_QWORD *)(a2 + 184) += 72LL;
                return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(v15 + 24) + 8LL), (PIRP)a2);
              }
              v6 = (unsigned int *)P;
              v10 = RaidUnitSendSrbIoControlSynchronously(*(__int64 *)&v53.Data1, a2, (__int64)P, v51, 0LL, v47, 64);
              if ( v10 >= 0 )
              {
                if ( v11 )
                {
                  memmove(v2 + 2, v13, 0x40uLL);
                  v17 = 1;
                }
                else
                {
                  v17 = 72;
                }
                *v2 = v17;
                v18 = v2[7];
                v2[1] = 72;
                v2[8] = v6[15];
                if ( v18 )
                {
                  if ( v18 >= v6[14] )
                    v18 = v6[14];
                  v19 = v18;
                  memmove((char *)v2 + (unsigned int)v2[6] + 8, (char *)v6 + v6[13] + 36, v18);
                  v20 = v2[6] + 8;
                  v2[7] = v19;
                  *(_QWORD *)(a2 + 56) = v19 + v20;
                }
                else
                {
                  *(_QWORD *)(a2 + 56) = 72LL;
                }
              }
            }
          }
          else
          {
            if ( (unsigned int)v9 < 8 )
            {
              v10 = -1073741789;
              goto LABEL_44;
            }
            v10 = 0;
            *v2 = v11 != 0 ? 1 : 72;
            v2[1] = 72;
            *(_QWORD *)(a2 + 56) = 8LL;
          }
        }
        else
        {
          v10 = -1073741585;
        }
        if ( v6 )
          ExFreePoolWithTag(v6, 0x72536152u);
        if ( v10 >= 0 )
          goto LABEL_45;
        goto LABEL_44;
      }
    }
LABEL_7:
    v10 = -1073741585;
    goto LABEL_44;
  }
  if ( v7 != 1 )
  {
    v10 = -1073741637;
LABEL_44:
    *(_QWORD *)(a2 + 56) = 0LL;
    goto LABEL_45;
  }
  v10 = 0;
LABEL_45:
  v21 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v10;
  if ( v21 )
    goto LABEL_111;
  v53 = 0LL;
  IoGetActivityIdIrp(a2, &v53);
  v23 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v23 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_111;
    v25 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_110;
  }
  if ( *(_BYTE *)v23 != 15 )
  {
    if ( *(_BYTE *)v23 != 27 )
      goto LABEL_111;
    if ( *(_BYTE *)(v23 + 1) == 7 && !*(_DWORD *)(v23 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v24 = *(int **)(a2 + 56);
        if ( v24 )
          v3 = *v24;
        LODWORD(v45) = *(_DWORD *)(a2 + 48);
        LODWORD(v44) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v22, v23, &v53, a2, v44, v45);
      }
      goto LABEL_111;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_111;
    v25 = &EventPnpRequestComplete;
LABEL_110:
    LODWORD(v44) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v22, v25, &v53, a2, v44);
    goto LABEL_111;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_111;
  v26 = *(_QWORD *)(v23 + 8);
  v27 = 0;
  v28 = 0;
  v47 = 0;
  v29 = 0LL;
  v48 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  if ( *(_BYTE *)(v26 + 2) != 40 )
  {
    v38 = *(_BYTE *)(v26 + 72);
    v29 = *(_BYTE **)(v26 + 32);
    v30 = *(_BYTE *)(v26 + 11);
    v28 = *(_BYTE *)(v26 + 4);
    if ( !*(_BYTE *)(v26 + 2) )
      goto LABEL_86;
    goto LABEL_111;
  }
  v33 = 0LL;
  v49 = 0;
  if ( *(_DWORD *)(v26 + 20) )
    goto LABEL_111;
  v34 = 0;
  v50 = *(_DWORD *)(v26 + 56);
  if ( !v50 )
    goto LABEL_83;
  while ( 1 )
  {
    v22 = *(unsigned int *)(v26 + 4LL * v34 + 120);
    if ( (unsigned int)v22 >= 0x80 )
    {
      v35 = *(unsigned int *)(v26 + 16);
      if ( (unsigned int)v22 < (unsigned int)v35 )
        break;
    }
LABEL_76:
    if ( ++v34 >= v50 )
      goto LABEL_82;
  }
  v36 = (unsigned int)v22;
  v37 = *(_DWORD *)(v22 + v26) - 64;
  if ( v37 )
  {
    v22 = (unsigned int)(v37 - 1);
    if ( (_DWORD)v22 )
    {
      if ( (_DWORD)v22 == 1 )
      {
        v22 = v36 + 40;
        if ( v36 + 40 <= v35 )
        {
          if ( *(_DWORD *)(v36 + v26 + 12) )
            v33 = (char *)(v36 + v26 + 32);
          v29 = *(_BYTE **)(v36 + v26 + 24);
          goto LABEL_81;
        }
      }
    }
    else
    {
      v22 = v36 + 56;
      if ( v36 + 56 <= v35 )
      {
        v49 = 1;
        if ( *(_BYTE *)(v36 + v26 + 10) )
          v33 = (char *)(v36 + v26 + 24);
        v28 = *(_BYTE *)(v36 + v26 + 8);
        v29 = *(_BYTE **)(v36 + v26 + 16);
        v30 = *(_BYTE *)(v36 + v26 + 9);
      }
    }
    goto LABEL_75;
  }
  v22 = v36 + 40;
  if ( v36 + 40 > v35 )
  {
LABEL_75:
    if ( v49 )
      goto LABEL_82;
    goto LABEL_76;
  }
  if ( *(_BYTE *)(v36 + v26 + 10) )
    v33 = (char *)(v36 + v26 + 24);
  v29 = *(_BYTE **)(v36 + v26 + 16);
LABEL_81:
  v30 = *(_BYTE *)(v36 + v26 + 9);
  v28 = *(_BYTE *)(v36 + v26 + 8);
LABEL_82:
  v32 = 0;
LABEL_83:
  if ( v33 )
  {
    v38 = *v33;
    v27 = 0;
LABEL_86:
    LOBYTE(v22) = v38 - 8;
    if ( (v22 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v26 + 3) == 1 || !v29 || !v30 )
        goto LABEL_106;
      v39 = 0;
      v22 = (unsigned __int64)&v29[v30];
      v40 = v29 + 8;
      if ( (unsigned __int8)((*v29 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v40 <= v22 )
        {
          v39 = 1;
          v32 = v29[2];
          v31 = v29[1] & 0xF;
          v27 = v29[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v40 <= v22 )
        {
          v31 = v29[2] & 0xF;
          v41 = v30;
          if ( (unsigned int)(unsigned __int8)v29[7] + 8 <= v30 )
            v41 = (unsigned __int8)v29[7] + 8;
          v22 = (unsigned __int64)(v29 + 13);
          v42 = (unsigned __int64)&v29[v41];
          if ( (unsigned __int64)(v29 + 13) > v42 )
            v47 = 0;
          else
            v47 = v29[12];
          if ( (unsigned __int64)(v29 + 14) > v42 )
            v48 = 0;
          else
            v48 = *(_BYTE *)v22;
          v39 = 1;
        }
        v27 = v48;
        v32 = v47;
      }
      if ( v39 )
      {
        LOBYTE(v3) = v32;
        v43 = v27;
      }
      else
      {
LABEL_106:
        v31 = 0;
        v43 = 0;
      }
      LOBYTE(v46) = v28;
      LOBYTE(v45) = *(_BYTE *)(v26 + 3);
      LODWORD(v44) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v22, v26, &v53, a2, v44, v45, v46, v31, v3, v43, a2);
    }
  }
LABEL_111:
  IofCompleteRequest((PIRP)a2, 0);
  return v10;
}
