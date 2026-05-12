/*
 * XREFs of RaidUnitTestDeviceQueue @ 0x1400A0F68
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidUnitRestartQueue @ 0x140001B70 (RaidUnitRestartQueue.c)
 *     RaidPauseAdapterQueue @ 0x1400078E0 (RaidPauseAdapterQueue.c)
 *     RaidPauseUnitQueue @ 0x140014D40 (RaidPauseUnitQueue.c)
 *     RiDisableDeviceQueueFastPath @ 0x140026CB0 (RiDisableDeviceQueueFastPath.c)
 *     RaUnitUnlockForwardIo @ 0x14002B180 (RaUnitUnlockForwardIo.c)
 *     RaUnitLockForwardIo @ 0x1400301C0 (RaUnitLockForwardIo.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1400664A8 (RaidResumeAndRestartAdapterQueues.c)
 *     RaidFreezeUnitQueue @ 0x14009D878 (RaidFreezeUnitQueue.c)
 *     RaidResumeAndRestartUnitQueue @ 0x14009DA34 (RaidResumeAndRestartUnitQueue.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidUnitTestDeviceQueue(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebx
  _DWORD *v5; // rcx
  unsigned int v7; // r15d
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  int v12; // edx
  int v13; // edx
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  bool v17; // zf
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  int *v20; // rax
  const EVENT_DESCRIPTOR *v21; // rdx
  unsigned __int64 v22; // rdx
  char v23; // r14
  _BYTE *v24; // r9
  unsigned __int8 v25; // r10
  char v26; // di
  char v27; // r11
  char v28; // r12
  char *v29; // r11
  unsigned int *v30; // r13
  __int64 v31; // rax
  unsigned __int64 v32; // rbp
  char v33; // cl
  char v34; // r8
  _BYTE *v35; // rax
  unsigned int v36; // eax
  char v37; // al
  int v39; // [rsp+20h] [rbp-A8h]
  char v40; // [rsp+60h] [rbp-68h]
  char v41; // [rsp+61h] [rbp-67h]
  int v42; // [rsp+64h] [rbp-64h]
  unsigned int v43; // [rsp+68h] [rbp-60h]
  GUID v44; // [rsp+70h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  v5 = *(_DWORD **)(a2 + 24);
  v7 = 0;
  if ( *(_DWORD *)(v2 + 16) < 0xCu || *v5 != 12 || v5[1] != 12 )
    goto LABEL_27;
  v8 = v5[2];
  if ( v8 > 5 )
  {
    v14 = v8 - 6;
    if ( !v14 )
    {
      RaidPauseUnitQueue(a1);
      goto LABEL_28;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      RaidResumeAndRestartUnitQueue(a1);
      goto LABEL_28;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      RaidPauseAdapterQueue(*(_QWORD *)(a1 + 24));
      goto LABEL_28;
    }
    if ( v16 == 1 )
    {
      RaidResumeAndRestartAdapterQueues(*(_QWORD *)(a1 + 24));
      goto LABEL_28;
    }
LABEL_27:
    v7 = -1073741811;
    goto LABEL_28;
  }
  if ( v8 == 5 )
  {
    *(_BYTE *)(a1 + 756) = 0;
    v12 = 3;
    goto LABEL_15;
  }
  if ( !v8 )
  {
    *(_BYTE *)(a1 + 757) = 1;
    RiDisableDeviceQueueFastPath((struct _EX_RUNDOWN_REF *)(a1 + 720), 0);
    v13 = 1;
    goto LABEL_17;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    *(_BYTE *)(a1 + 757) = 0;
    v12 = 1;
    goto LABEL_15;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    *(_BYTE *)(a1 + 759) = 1;
    RiDisableDeviceQueueFastPath((struct _EX_RUNDOWN_REF *)(a1 + 720), 0);
    v13 = 2;
LABEL_17:
    RaUnitLockForwardIo(a1, v13);
    goto LABEL_28;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    *(_BYTE *)(a1 + 759) = 0;
    v12 = 2;
LABEL_15:
    RaUnitUnlockForwardIo(a1, v12);
    RaidUnitRestartQueue(a1, 0);
    goto LABEL_28;
  }
  if ( v11 != 1 )
    goto LABEL_27;
  RaidFreezeUnitQueue(a1);
LABEL_28:
  v17 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v17 )
    goto LABEL_94;
  v44 = 0LL;
  IoGetActivityIdIrp(a2, &v44);
  v19 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v19 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_94;
    v39 = *(_DWORD *)(a2 + 48);
    v21 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_93;
  }
  if ( *(_BYTE *)v19 != 15 )
  {
    if ( *(_BYTE *)v19 != 27 )
      goto LABEL_94;
    if ( *(_BYTE *)(v19 + 1) == 7 && !*(_DWORD *)(v19 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v20 = *(int **)(a2 + 56);
        if ( v20 )
          v3 = *v20;
        McTemplateK0pqd_EtwWriteTransfer(v18, v19, &v44, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_94;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_94;
    v21 = &EventPnpRequestComplete;
    v39 = *(_DWORD *)(a2 + 48);
LABEL_93:
    McTemplateK0pd_EtwWriteTransfer(v18, v21, &v44, a2, v39);
    goto LABEL_94;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_94;
  v22 = *(_QWORD *)(v19 + 8);
  v23 = 0;
  v24 = 0LL;
  v40 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  if ( *(_BYTE *)(v22 + 2) != 40 )
  {
    v33 = *(_BYTE *)(v22 + 72);
    v24 = *(_BYTE **)(v22 + 32);
    v25 = *(_BYTE *)(v22 + 11);
    v23 = *(_BYTE *)(v22 + 4);
    if ( !*(_BYTE *)(v22 + 2) )
      goto LABEL_70;
    goto LABEL_94;
  }
  v29 = 0LL;
  v41 = 0;
  if ( *(_DWORD *)(v22 + 20) )
    goto LABEL_94;
  v18 = 0LL;
  v42 = 0;
  v43 = *(_DWORD *)(v22 + 56);
  if ( !v43 )
    goto LABEL_67;
  v30 = (unsigned int *)(v22 + 120);
  while ( 1 )
  {
    v31 = *v30;
    if ( (unsigned int)v31 >= 0x80 )
    {
      v32 = *(unsigned int *)(v22 + 16);
      if ( (unsigned int)v31 < (unsigned int)v32 )
        break;
    }
LABEL_61:
    v18 = (unsigned int)(v18 + 1);
    ++v30;
    v42 = v18;
    if ( (unsigned int)v18 >= v43 )
      goto LABEL_67;
  }
  if ( *(_DWORD *)(v31 + v22) != 64 )
  {
    v18 = (unsigned int)(*(_DWORD *)(v31 + v22) - 65);
    if ( *(_DWORD *)(v31 + v22) == 65 )
    {
      v18 = v31 + 56;
      if ( v31 + 56 <= v32 )
      {
        v41 = 1;
        if ( *(_BYTE *)(v31 + v22 + 10) )
          v29 = (char *)(v31 + v22 + 24);
        v23 = *(_BYTE *)(v31 + v22 + 8);
        v24 = *(_BYTE **)(v31 + v22 + 16);
        v25 = *(_BYTE *)(v31 + v22 + 9);
      }
    }
    else if ( *(_DWORD *)(v31 + v22) == 66 )
    {
      v18 = v31 + 40;
      if ( v31 + 40 <= v32 )
      {
        if ( *(_DWORD *)(v31 + v22 + 12) )
          v29 = (char *)(v31 + v22 + 32);
        v24 = *(_BYTE **)(v31 + v22 + 24);
        goto LABEL_66;
      }
    }
    goto LABEL_59;
  }
  v18 = v31 + 40;
  if ( v31 + 40 > v32 )
  {
LABEL_59:
    if ( v41 )
      goto LABEL_67;
    LODWORD(v18) = v42;
    goto LABEL_61;
  }
  if ( *(_BYTE *)(v31 + v22 + 10) )
    v29 = (char *)(v31 + v22 + 24);
  v24 = *(_BYTE **)(v31 + v22 + 16);
LABEL_66:
  v25 = *(_BYTE *)(v31 + v22 + 9);
  v23 = *(_BYTE *)(v31 + v22 + 8);
LABEL_67:
  if ( v29 )
  {
    v33 = *v29;
    v27 = 0;
LABEL_70:
    LOBYTE(v18) = v33 - 8;
    if ( (v18 & 0x5D) == 0 )
    {
      v34 = *(_BYTE *)(v22 + 3);
      if ( v34 == 1 || !v24 || !v25 )
        goto LABEL_89;
      LOBYTE(v22) = 0;
      v18 = (unsigned __int64)&v24[v25];
      v35 = v24 + 8;
      if ( (unsigned __int8)((*v24 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v35 <= v18 )
        {
          LOBYTE(v22) = 1;
          v27 = v24[2];
          v26 = v24[1] & 0xF;
          v28 = v24[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v35 <= v18 )
        {
          v26 = v24[2] & 0xF;
          v36 = v25;
          if ( (unsigned int)(unsigned __int8)v24[7] + 8 <= v25 )
            v36 = (unsigned __int8)v24[7] + 8;
          v18 = (unsigned __int64)(v24 + 13);
          v22 = (unsigned __int64)&v24[v36];
          if ( (unsigned __int64)(v24 + 13) > v22 )
            v40 = 0;
          else
            v40 = v24[12];
          if ( (unsigned __int64)(v24 + 14) <= v22 )
            v28 = *(_BYTE *)v18;
          LOBYTE(v22) = 1;
        }
        v27 = v40;
      }
      if ( (_BYTE)v22 )
      {
        LOBYTE(v3) = v27;
        v37 = v28;
      }
      else
      {
LABEL_89:
        v26 = 0;
        v37 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v18, v22, &v44, a2, *(_DWORD *)(a2 + 48), v34, v23, v26, v3, v37, a2);
    }
  }
LABEL_94:
  IofCompleteRequest((PIRP)a2, 0);
  return v7;
}
