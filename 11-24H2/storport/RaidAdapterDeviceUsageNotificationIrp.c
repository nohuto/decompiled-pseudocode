/*
 * XREFs of RaidAdapterDeviceUsageNotificationIrp @ 0x14001695C
 * Callers:
 *     RaidAdapterPnpIrp @ 0x140015724 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaForwardIrpSynchronous @ 0x140015500 (RaForwardIrpSynchronous.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidNotifyPoAboutSpecialDevice @ 0x1400BE2BC (RaidNotifyPoAboutSpecialDevice.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterDeviceUsageNotificationIrp(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v4; // ebx
  volatile signed __int32 *v6; // rsi
  int v7; // r14d
  char v8; // r15
  bool v9; // zf
  char *v10; // rcx
  __int64 v11; // rdx
  int *v12; // rax
  void *v13; // rdx
  unsigned __int64 v14; // rdx
  char v15; // r15
  _BYTE *v16; // r9
  unsigned __int8 v17; // r10
  char v18; // si
  char v19; // r11
  char v20; // r12
  char *v21; // r11
  char v22; // r13
  unsigned int v23; // r14d
  unsigned __int64 v24; // rbp
  __int64 v25; // r8
  int v26; // ecx
  char v27; // cl
  char v28; // r8
  char *v29; // rax
  unsigned int v30; // eax
  char v31; // al
  char v33; // [rsp+60h] [rbp-68h]
  unsigned int v34; // [rsp+64h] [rbp-64h]
  int v35; // [rsp+68h] [rbp-60h]
  __int128 v36; // [rsp+70h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  LOBYTE(v4) = 0;
  v6 = 0LL;
  v7 = *(_DWORD *)(v2 + 16);
  v8 = *(_BYTE *)(v2 + 8);
  if ( v7 == 1 )
  {
    v6 = (volatile signed __int32 *)(a1 + 92);
  }
  else if ( *(_DWORD *)(v2 + 16) == 2 )
  {
    v6 = (volatile signed __int32 *)(a1 + 100);
  }
  else if ( *(_DWORD *)(v2 + 16) == 3 )
  {
    v6 = (volatile signed __int32 *)(a1 + 96);
  }
  v35 = RaForwardIrpSynchronous(*(struct _DEVICE_OBJECT **)(a1 + 24), (IRP *)a2);
  if ( v35 >= 0 && v6 )
  {
    if ( v8 )
      _InterlockedIncrement(v6);
    else
      _InterlockedDecrement(v6);
    IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(a1 + 32));
    if ( v7 == 1 )
      RaidNotifyPoAboutSpecialDevice(*(_QWORD *)(a1 + 32), *(unsigned int *)v6);
  }
  v9 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v35;
  if ( v9 )
    goto LABEL_78;
  v36 = 0LL;
  IoGetActivityIdIrp(a2, &v36);
  v11 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v11 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_78;
    v13 = &EventNonReadWriteRequestComplete;
    goto LABEL_77;
  }
  if ( *(_BYTE *)v11 != 15 )
  {
    if ( *(_BYTE *)v11 != 27 )
      goto LABEL_78;
    if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v12 = *(int **)(a2 + 56);
        if ( v12 )
          v4 = *v12;
        McTemplateK0pqd_EtwWriteTransfer((_DWORD)v10, v11, (unsigned int)&v36, a2, v4, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_78;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_78;
    v13 = &EventPnpRequestComplete;
LABEL_77:
    McTemplateK0pd_EtwWriteTransfer(v10, v13, &v36, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_78;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_78;
  v14 = *(_QWORD *)(v11 + 8);
  v15 = 0;
  v16 = 0LL;
  v33 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( *(_BYTE *)(v14 + 2) != 40 )
  {
    v27 = *(_BYTE *)(v14 + 72);
    v16 = *(_BYTE **)(v14 + 32);
    v17 = *(_BYTE *)(v14 + 11);
    v15 = *(_BYTE *)(v14 + 4);
    if ( !*(_BYTE *)(v14 + 2) )
      goto LABEL_54;
    goto LABEL_78;
  }
  v21 = 0LL;
  v22 = 0;
  if ( *(_DWORD *)(v14 + 20) )
    goto LABEL_78;
  v23 = 0;
  v34 = *(_DWORD *)(v14 + 56);
  if ( !v34 )
    goto LABEL_51;
  while ( 1 )
  {
    v10 = (char *)*(unsigned int *)(v14 + 4LL * v23 + 120);
    if ( (unsigned int)v10 >= 0x80 )
    {
      v24 = *(unsigned int *)(v14 + 16);
      if ( (unsigned int)v10 < (unsigned int)v24 )
        break;
    }
LABEL_45:
    if ( ++v23 >= v34 )
      goto LABEL_51;
  }
  v25 = (unsigned int)v10;
  v26 = *(_DWORD *)&v10[v14] - 64;
  if ( v26 )
  {
    LODWORD(v10) = v26 - 1;
    if ( (_DWORD)v10 )
    {
      if ( (_DWORD)v10 == 1 )
      {
        LODWORD(v10) = v25 + 40;
        if ( v25 + 40 <= v24 )
        {
          if ( *(_DWORD *)(v25 + v14 + 12) )
            v21 = (char *)(v25 + v14 + 32);
          v16 = *(_BYTE **)(v25 + v14 + 24);
          goto LABEL_50;
        }
      }
    }
    else
    {
      LODWORD(v10) = v25 + 56;
      if ( v25 + 56 <= v24 )
      {
        v22 = 1;
        if ( *(_BYTE *)(v25 + v14 + 10) )
          v21 = (char *)(v25 + v14 + 24);
        v15 = *(_BYTE *)(v25 + v14 + 8);
        v16 = *(_BYTE **)(v25 + v14 + 16);
        v17 = *(_BYTE *)(v25 + v14 + 9);
      }
    }
    goto LABEL_44;
  }
  LODWORD(v10) = v25 + 40;
  if ( v25 + 40 > v24 )
  {
LABEL_44:
    if ( v22 )
      goto LABEL_51;
    goto LABEL_45;
  }
  if ( *(_BYTE *)(v25 + v14 + 10) )
    v21 = (char *)(v25 + v14 + 24);
  v16 = *(_BYTE **)(v25 + v14 + 16);
LABEL_50:
  v17 = *(_BYTE *)(v25 + v14 + 9);
  v15 = *(_BYTE *)(v25 + v14 + 8);
LABEL_51:
  if ( v21 )
  {
    v27 = *v21;
    v19 = 0;
LABEL_54:
    LOBYTE(v10) = v27 - 8;
    if ( ((unsigned __int8)v10 & 0x5D) == 0 )
    {
      v28 = *(_BYTE *)(v14 + 3);
      if ( v28 == 1 || !v16 || !v17 )
        goto LABEL_73;
      LOBYTE(v14) = 0;
      v10 = &v16[v17];
      v29 = v16 + 8;
      if ( (unsigned __int8)((*v16 & 0x7F) - 114) <= 1u )
      {
        if ( v29 <= v10 )
        {
          LOBYTE(v14) = 1;
          v19 = v16[2];
          v18 = v16[1] & 0xF;
          v20 = v16[3];
        }
      }
      else
      {
        if ( v29 <= v10 )
        {
          v18 = v16[2] & 0xF;
          v30 = v17;
          if ( (unsigned int)(unsigned __int8)v16[7] + 8 <= v17 )
            v30 = (unsigned __int8)v16[7] + 8;
          v10 = v16 + 13;
          v14 = (unsigned __int64)&v16[v30];
          if ( (unsigned __int64)(v16 + 13) > v14 )
            v33 = 0;
          else
            v33 = v16[12];
          if ( (unsigned __int64)(v16 + 14) <= v14 )
            v20 = *v10;
          LOBYTE(v14) = 1;
        }
        v19 = v33;
      }
      if ( (_BYTE)v14 )
      {
        LOBYTE(v4) = v19;
        v31 = v20;
      }
      else
      {
LABEL_73:
        v18 = 0;
        v31 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        (_DWORD)v10,
        v14,
        (unsigned int)&v36,
        a2,
        *(_DWORD *)(a2 + 48),
        v28,
        v15,
        v18,
        v4,
        v31,
        a2);
    }
  }
LABEL_78:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v35;
}
