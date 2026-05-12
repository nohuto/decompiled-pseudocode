/*
 * XREFs of RaUnitStorageDiagnosticIoctl @ 0x140188188
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidUnitSendSrbIoControlSynchronously @ 0x14000CE9C (RaidUnitSendSrbIoControlSynchronously.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidDiagnosticIoctlStatusToNtStatus @ 0x1400652A0 (RaidDiagnosticIoctlStatusToNtStatus.c)
 *     RaBuildDiagnosticBufferForMiniport @ 0x14008913C (RaBuildDiagnosticBufferForMiniport.c)
 *     RaidCallerIsAdmin @ 0x14008B354 (RaidCallerIsAdmin.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memmove @ 0x140143780 (memmove.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

NTSTATUS __fastcall RaUnitStorageDiagnosticIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v3; // ebx
  char *v6; // r15
  size_t v7; // r13
  _DWORD *v8; // r14
  int v9; // edi
  int v10; // ecx
  int v12; // eax
  int v13; // ecx
  __int128 v14; // xmm0
  unsigned int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  bool v18; // zf
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  int *v21; // rax
  const EVENT_DESCRIPTOR *v22; // rdx
  unsigned __int64 v23; // rdx
  char v24; // r13
  _BYTE *v25; // r9
  unsigned __int8 v26; // r10
  char v27; // r14
  char v28; // r15
  char v29; // r11
  char *v30; // r11
  unsigned int v31; // r12d
  unsigned __int64 v32; // r15
  __int64 v33; // r8
  int v34; // ecx
  char v35; // cl
  char v36; // r8
  _BYTE *v37; // rax
  unsigned int v38; // eax
  char v39; // al
  __int64 v40; // [rsp+20h] [rbp-49h]
  __int64 v41; // [rsp+28h] [rbp-41h]
  __int64 v42; // [rsp+30h] [rbp-39h]
  char v43; // [rsp+60h] [rbp-9h]
  char v44; // [rsp+61h] [rbp-8h]
  char v45; // [rsp+62h] [rbp-7h]
  unsigned int v46; // [rsp+64h] [rbp-5h] BYREF
  PVOID P; // [rsp+68h] [rbp-1h] BYREF
  GUID v48; // [rsp+70h] [rbp+7h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  P = 0LL;
  v46 = 0;
  v6 = 0LL;
  v7 = *(unsigned int *)(v2 + 8);
  if ( !RaidCallerIsAdmin() )
    goto LABEL_31;
  if ( *(struct _KTHREAD **)(a2 + 152) != KeGetCurrentThread() )
  {
    v6 = (char *)P;
LABEL_31:
    v9 = -1073741790;
    goto LABEL_32;
  }
  v8 = *(_DWORD **)(a2 + 24);
  if ( v8 )
  {
    if ( *(_DWORD *)(v2 + 16) < 0x14u || (unsigned int)v7 < 0x24 )
    {
      v9 = -1073741820;
      goto LABEL_36;
    }
    if ( *v8 == 20 && v8[1] == 20 )
    {
      v10 = v8[3];
      if ( v10 )
      {
        if ( v10 < 4 && (int)v8[4] < 1 )
        {
          if ( (v8[2] & 1) != 0 )
          {
            ++*(_BYTE *)(a2 + 67);
            *(_QWORD *)(a2 + 184) += 72LL;
            return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), (PIRP)a2);
          }
          if ( v10 != 2 )
          {
            v17 = -1073741637;
            if ( v10 == 3 )
              v17 = -1073741811;
            v9 = v17;
            goto LABEL_36;
          }
          v12 = RaBuildDiagnosticBufferForMiniport(*(_QWORD *)(a1 + 8), a2, v7, &P, &v46);
          v6 = (char *)P;
          v9 = v12;
          if ( v12 >= 0 )
          {
            v9 = RaidUnitSendSrbIoControlSynchronously(a1, a2, (__int64)P, v46, 0LL, 0, 128);
            if ( v9 < 0 )
            {
              v16 = 0LL;
            }
            else
            {
              memset_0(v8, 0, v7);
              v13 = *((_DWORD *)v6 + 5);
              if ( v13 == 6 )
              {
                *v8 = 36;
                v9 = -2147483643;
                v8[6] = *((_DWORD *)v6 + 15);
                v14 = *(_OWORD *)(v6 + 44);
                v8[1] = 36;
                *(_OWORD *)(v8 + 2) = v14;
                *(_QWORD *)(a2 + 56) = 36LL;
                goto LABEL_32;
              }
              if ( v13 )
              {
                v9 = RaidDiagnosticIoctlStatusToNtStatus(v13);
                *(_QWORD *)(a2 + 56) = 0LL;
                goto LABEL_32;
              }
              *v8 = 36;
              v15 = *((_DWORD *)v6 + 15);
              if ( v15 >= (int)v7 - 32 )
                v15 = v7 - 32;
              v8[1] = v15 + 32;
              v8[6] = v15;
              *(_OWORD *)(v8 + 2) = *(_OWORD *)(v6 + 44);
              memmove(v8 + 8, v6 + 68, v15);
              v16 = (unsigned int)v8[1];
            }
            *(_QWORD *)(a2 + 56) = v16;
          }
LABEL_32:
          if ( v6 )
            ExFreePoolWithTag(v6, 0x72536152u);
          if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
            goto LABEL_37;
          goto LABEL_36;
        }
      }
    }
  }
  v9 = -1073741811;
LABEL_36:
  *(_QWORD *)(a2 + 56) = 0LL;
LABEL_37:
  v18 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v9;
  if ( v18 )
    goto LABEL_103;
  v48 = 0LL;
  IoGetActivityIdIrp(a2, &v48);
  v20 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v20 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_103;
    v22 = &EventNonReadWriteRequestComplete;
    goto LABEL_102;
  }
  if ( *(_BYTE *)v20 != 15 )
  {
    if ( *(_BYTE *)v20 != 27 )
      goto LABEL_103;
    if ( *(_BYTE *)(v20 + 1) == 7 && !*(_DWORD *)(v20 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v21 = *(int **)(a2 + 56);
        if ( v21 )
          v3 = *v21;
        LODWORD(v41) = *(_DWORD *)(a2 + 48);
        LODWORD(v40) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v19, v20, &v48, a2, v40, v41);
      }
      goto LABEL_103;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_103;
    v22 = &EventPnpRequestComplete;
LABEL_102:
    LODWORD(v40) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v19, v22, &v48, a2, v40);
    goto LABEL_103;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_103;
  v23 = *(_QWORD *)(v20 + 8);
  v24 = 0;
  v25 = 0LL;
  v43 = 0;
  v26 = 0;
  v44 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  if ( *(_BYTE *)(v23 + 2) != 40 )
  {
    v35 = *(_BYTE *)(v23 + 72);
    v25 = *(_BYTE **)(v23 + 32);
    v26 = *(_BYTE *)(v23 + 11);
    v24 = *(_BYTE *)(v23 + 4);
    if ( !*(_BYTE *)(v23 + 2) )
      goto LABEL_78;
    goto LABEL_103;
  }
  v30 = 0LL;
  v45 = 0;
  if ( *(_DWORD *)(v23 + 20) )
    goto LABEL_103;
  v31 = 0;
  v46 = *(_DWORD *)(v23 + 56);
  if ( !v46 )
    goto LABEL_75;
  while ( 1 )
  {
    v19 = *(unsigned int *)(v23 + 4LL * v31 + 120);
    if ( (unsigned int)v19 >= 0x80 )
    {
      v32 = *(unsigned int *)(v23 + 16);
      if ( (unsigned int)v19 < (unsigned int)v32 )
        break;
    }
LABEL_68:
    if ( ++v31 >= v46 )
      goto LABEL_74;
  }
  v33 = (unsigned int)v19;
  v34 = *(_DWORD *)(v19 + v23) - 64;
  if ( v34 )
  {
    v19 = (unsigned int)(v34 - 1);
    if ( (_DWORD)v19 )
    {
      if ( (_DWORD)v19 == 1 )
      {
        v19 = v33 + 40;
        if ( v33 + 40 <= v32 )
        {
          if ( *(_DWORD *)(v33 + v23 + 12) )
            v30 = (char *)(v33 + v23 + 32);
          v25 = *(_BYTE **)(v33 + v23 + 24);
          goto LABEL_73;
        }
      }
    }
    else
    {
      v19 = v33 + 56;
      if ( v33 + 56 <= v32 )
      {
        v45 = 1;
        if ( *(_BYTE *)(v33 + v23 + 10) )
          v30 = (char *)(v33 + v23 + 24);
        v24 = *(_BYTE *)(v33 + v23 + 8);
        v25 = *(_BYTE **)(v33 + v23 + 16);
        v26 = *(_BYTE *)(v33 + v23 + 9);
      }
    }
    goto LABEL_67;
  }
  v19 = v33 + 40;
  if ( v33 + 40 > v32 )
  {
LABEL_67:
    if ( v45 )
      goto LABEL_74;
    goto LABEL_68;
  }
  if ( *(_BYTE *)(v33 + v23 + 10) )
    v30 = (char *)(v33 + v23 + 24);
  v25 = *(_BYTE **)(v33 + v23 + 16);
LABEL_73:
  v26 = *(_BYTE *)(v33 + v23 + 9);
  v24 = *(_BYTE *)(v33 + v23 + 8);
LABEL_74:
  v28 = 0;
LABEL_75:
  if ( v30 )
  {
    v35 = *v30;
    v29 = 0;
LABEL_78:
    LOBYTE(v19) = v35 - 8;
    if ( (v19 & 0x5D) == 0 )
    {
      v36 = *(_BYTE *)(v23 + 3);
      if ( v36 == 1 || !v25 || !v26 )
        goto LABEL_98;
      LOBYTE(v23) = 0;
      v19 = (unsigned __int64)&v25[v26];
      v37 = v25 + 8;
      if ( (unsigned __int8)((*v25 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v37 <= v19 )
        {
          LOBYTE(v23) = 1;
          v28 = v25[2];
          v27 = v25[1] & 0xF;
          v29 = v25[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v37 <= v19 )
        {
          v27 = v25[2] & 0xF;
          v38 = v26;
          if ( (unsigned int)(unsigned __int8)v25[7] + 8 <= v26 )
            v38 = (unsigned __int8)v25[7] + 8;
          v19 = (unsigned __int64)(v25 + 13);
          v23 = (unsigned __int64)&v25[v38];
          if ( (unsigned __int64)(v25 + 13) > v23 )
            v43 = 0;
          else
            v43 = v25[12];
          if ( (unsigned __int64)(v25 + 14) > v23 )
            v44 = 0;
          else
            v44 = *(_BYTE *)v19;
          LOBYTE(v23) = 1;
        }
        v29 = v44;
        v28 = v43;
      }
      if ( (_BYTE)v23 )
      {
        LOBYTE(v3) = v28;
        v39 = v29;
      }
      else
      {
LABEL_98:
        v27 = 0;
        v39 = 0;
      }
      LOBYTE(v42) = v24;
      LOBYTE(v41) = v36;
      LODWORD(v40) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v19, v23, &v48, a2, v40, v41, v42, v27, v3, v39, a2);
    }
  }
LABEL_103:
  IofCompleteRequest((PIRP)a2, 0);
  return v9;
}
