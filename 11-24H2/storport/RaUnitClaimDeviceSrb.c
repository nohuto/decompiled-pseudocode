/*
 * XREFs of RaUnitClaimDeviceSrb @ 0x14009220C
 * Callers:
 *     RaUnitScsiIrp @ 0x140002710 (RaUnitScsiIrp.c)
 *     RaDriverScsiIrp @ 0x1400038A0 (RaDriverScsiIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitClaimDeviceSrb(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  char v5; // al
  __int64 v6; // rax
  int v7; // ebx
  char v8; // al
  unsigned int v9; // ebp
  bool v10; // zf
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int *v13; // rax
  const EVENT_DESCRIPTOR *v14; // rdx
  unsigned __int64 v15; // rdx
  char v16; // r14
  _BYTE *v17; // r9
  unsigned __int8 v18; // r10
  char v19; // si
  char v20; // r11
  char v21; // r12
  char *v22; // r11
  unsigned int v23; // r13d
  unsigned int *v24; // r15
  __int64 v25; // rax
  unsigned __int64 v26; // rbp
  char v27; // cl
  char v28; // r8
  _BYTE *v29; // rax
  unsigned int v30; // eax
  char v31; // al
  int v33; // [rsp+20h] [rbp-B8h]
  char v34; // [rsp+60h] [rbp-78h]
  char v35; // [rsp+61h] [rbp-77h]
  unsigned int v36; // [rsp+64h] [rbp-74h]
  unsigned int v37; // [rsp+68h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-68h] BYREF
  GUID v39; // [rsp+88h] [rbp-50h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 48), &LockHandle);
  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  v5 = *(_BYTE *)(a1 + 504);
  if ( (v5 & 1) != 0 )
  {
    v7 = 0;
    if ( *(_BYTE *)(v4 + 2) == 40 )
    {
      *(_QWORD *)(v4 + 64) = 0LL;
      *(_DWORD *)(v4 + 44) = -2147483631;
    }
    else
    {
      *(_QWORD *)(v4 + 24) = 0LL;
      *(_DWORD *)(v4 + 64) = -2147483631;
    }
    v9 = -2147483631;
    v8 = 48;
  }
  else
  {
    *(_BYTE *)(a1 + 504) = v5 | 1;
    v6 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v4 + 2) == 40 )
      *(_QWORD *)(v4 + 64) = v6;
    else
      *(_QWORD *)(v4 + 24) = v6;
    v7 = 0;
    v8 = 1;
    v9 = 0;
  }
  *(_BYTE *)(v4 + 3) = v8;
  v36 = v9;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v10 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v9;
  if ( v10 )
    goto LABEL_76;
  v39 = 0LL;
  IoGetActivityIdIrp(a2, &v39);
  v12 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v12 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_76;
    v33 = *(_DWORD *)(a2 + 48);
    v14 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_75;
  }
  if ( *(_BYTE *)v12 != 15 )
  {
    if ( *(_BYTE *)v12 != 27 )
      goto LABEL_76;
    if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v13 = *(int **)(a2 + 56);
        if ( v13 )
          v7 = *v13;
        McTemplateK0pqd_EtwWriteTransfer(v11, v12, &v39, a2, v7, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_76;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_76;
    v14 = &EventPnpRequestComplete;
    v33 = *(_DWORD *)(a2 + 48);
LABEL_75:
    McTemplateK0pd_EtwWriteTransfer(v11, v14, &v39, a2, v33);
    goto LABEL_76;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_76;
  v15 = *(_QWORD *)(v12 + 8);
  v16 = 0;
  v17 = 0LL;
  v34 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  if ( *(_BYTE *)(v15 + 2) != 40 )
  {
    v27 = *(_BYTE *)(v15 + 72);
    v17 = *(_BYTE **)(v15 + 32);
    v18 = *(_BYTE *)(v15 + 11);
    v16 = *(_BYTE *)(v15 + 4);
    if ( !*(_BYTE *)(v15 + 2) )
      goto LABEL_52;
    goto LABEL_76;
  }
  v22 = 0LL;
  v35 = 0;
  if ( *(_DWORD *)(v15 + 20) )
    goto LABEL_76;
  v23 = 0;
  v37 = *(_DWORD *)(v15 + 56);
  if ( !v37 )
    goto LABEL_49;
  v24 = (unsigned int *)(v15 + 120);
  while ( 1 )
  {
    v25 = *v24;
    if ( (unsigned int)v25 >= 0x80 )
    {
      v26 = *(unsigned int *)(v15 + 16);
      if ( (unsigned int)v25 < (unsigned int)v26 )
        break;
    }
LABEL_42:
    ++v23;
    ++v24;
    if ( v23 >= v37 )
      goto LABEL_48;
  }
  if ( *(_DWORD *)(v25 + v15) != 64 )
  {
    v11 = (unsigned int)(*(_DWORD *)(v25 + v15) - 65);
    if ( *(_DWORD *)(v25 + v15) == 65 )
    {
      v11 = v25 + 56;
      if ( v25 + 56 <= v26 )
      {
        v35 = 1;
        if ( *(_BYTE *)(v25 + v15 + 10) )
          v22 = (char *)(v25 + v15 + 24);
        v16 = *(_BYTE *)(v25 + v15 + 8);
        v17 = *(_BYTE **)(v25 + v15 + 16);
        v18 = *(_BYTE *)(v25 + v15 + 9);
      }
    }
    else if ( *(_DWORD *)(v25 + v15) == 66 )
    {
      v11 = v25 + 40;
      if ( v25 + 40 <= v26 )
      {
        if ( *(_DWORD *)(v25 + v15 + 12) )
          v22 = (char *)(v25 + v15 + 32);
        v17 = *(_BYTE **)(v25 + v15 + 24);
        goto LABEL_47;
      }
    }
    goto LABEL_41;
  }
  v11 = v25 + 40;
  if ( v25 + 40 > v26 )
  {
LABEL_41:
    if ( v35 )
      goto LABEL_48;
    goto LABEL_42;
  }
  if ( *(_BYTE *)(v25 + v15 + 10) )
    v22 = (char *)(v25 + v15 + 24);
  v17 = *(_BYTE **)(v25 + v15 + 16);
LABEL_47:
  v18 = *(_BYTE *)(v25 + v15 + 9);
  v16 = *(_BYTE *)(v25 + v15 + 8);
LABEL_48:
  v9 = v36;
LABEL_49:
  if ( v22 )
  {
    v27 = *v22;
    v20 = 0;
LABEL_52:
    LOBYTE(v11) = v27 - 8;
    if ( (v11 & 0x5D) == 0 )
    {
      v28 = *(_BYTE *)(v15 + 3);
      if ( v28 == 1 || !v17 || !v18 )
        goto LABEL_71;
      LOBYTE(v15) = 0;
      v11 = (unsigned __int64)&v17[v18];
      v29 = v17 + 8;
      if ( (unsigned __int8)((*v17 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v29 <= v11 )
        {
          LOBYTE(v15) = 1;
          v20 = v17[2];
          v19 = v17[1] & 0xF;
          v21 = v17[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v29 <= v11 )
        {
          v19 = v17[2] & 0xF;
          v30 = v18;
          if ( (unsigned int)(unsigned __int8)v17[7] + 8 <= v18 )
            v30 = (unsigned __int8)v17[7] + 8;
          v11 = (unsigned __int64)(v17 + 13);
          v15 = (unsigned __int64)&v17[v30];
          if ( (unsigned __int64)(v17 + 13) > v15 )
            v34 = 0;
          else
            v34 = v17[12];
          if ( (unsigned __int64)(v17 + 14) <= v15 )
            v21 = *(_BYTE *)v11;
          LOBYTE(v15) = 1;
        }
        v20 = v34;
      }
      if ( (_BYTE)v15 )
      {
        LOBYTE(v7) = v20;
        v31 = v21;
      }
      else
      {
LABEL_71:
        v19 = 0;
        v31 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v11, v15, &v39, a2, *(_DWORD *)(a2 + 48), v28, v16, v19, v7, v31, a2);
    }
  }
LABEL_76:
  IofCompleteRequest((PIRP)a2, 0);
  return v9;
}
