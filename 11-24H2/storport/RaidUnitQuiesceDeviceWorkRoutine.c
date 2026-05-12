/*
 * XREFs of RaidUnitQuiesceDeviceWorkRoutine @ 0x140050270
 * Callers:
 *     <none>
 * Callees:
 *     RaidLunQueueWaitForQuiescence @ 0x140026A9C (RaidLunQueueWaitForQuiescence.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     RaUnitWaitForForwardIoQuiescence @ 0x140056320 (RaUnitWaitForForwardIoQuiescence.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall RaidUnitQuiesceDeviceWorkRoutine(PDEVICE_OBJECT DeviceObject, _QWORD *Context)
{
  char *DeviceExtension; // r15
  __int64 v4; // rbp
  unsigned int v5; // esi
  __int64 v6; // rbx
  int v7; // edi
  int v8; // edx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  char v12; // al
  bool v13; // zf
  __int64 v14; // rbx
  char *v15; // rcx
  __int64 v16; // rdx
  int *v17; // rax
  void *v18; // rdx
  unsigned __int64 v19; // rdx
  char v20; // r12
  _BYTE *v21; // r9
  unsigned __int8 v22; // r10
  char v23; // bp
  char v24; // r11
  char v25; // r13
  char *v26; // r11
  unsigned int v27; // r14d
  unsigned __int64 v28; // rsi
  __int64 v29; // r8
  int v30; // ecx
  char v31; // cl
  char v32; // r8
  char *v33; // rax
  unsigned int v34; // eax
  char v35; // al
  unsigned __int64 v36; // r8
  signed __int32 v37; // eax
  signed __int32 v38; // ett
  char v39; // [rsp+60h] [rbp-58h]
  char v40; // [rsp+61h] [rbp-57h]
  unsigned int v41; // [rsp+64h] [rbp-54h]
  __int128 v42; // [rsp+68h] [rbp-50h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v4 = *(_QWORD *)(*(_QWORD *)(Context[1] + 184LL) + 8LL);
  if ( *(_BYTE *)(v4 + 2) == 40 )
    v5 = *(_DWORD *)(v4 + 40);
  else
    v5 = *(_DWORD *)(v4 + 20);
  v6 = MEMORY[0xFFFFF78000000014];
  LOBYTE(v7) = 0;
  v8 = RaidLunQueueWaitForQuiescence((__int64)(DeviceExtension + 720), v5);
  if ( v8 != 258 )
  {
    if ( v5 )
    {
      v9 = 1000LL * v5;
      v10 = (MEMORY[0xFFFFF78000000014] - v6) / 10000;
      if ( v10 >= v9 )
        v11 = 1LL;
      else
        v11 = v9 - v10;
    }
    else
    {
      v11 = 0LL;
    }
    v8 = RaUnitWaitForForwardIoQuiescence(DeviceExtension, v11);
  }
  v12 = 9;
  if ( v8 != 258 )
    v12 = 1;
  *(_BYTE *)(v4 + 3) = v12;
  v13 = StorEtwLoggingEnabled == 0;
  v14 = Context[1];
  *(_BYTE *)(v14 + 141) = -84;
  *(_DWORD *)(v14 + 48) = v8;
  if ( v13 )
    goto LABEL_77;
  v42 = 0LL;
  IoGetActivityIdIrp(v14, &v42);
  v16 = *(_QWORD *)(v14 + 184);
  switch ( *(_BYTE *)v16 )
  {
    case 0xE:
      if ( (byte_140171462 & 8) == 0 )
        break;
      v18 = &EventNonReadWriteRequestComplete;
LABEL_76:
      McTemplateK0pd_EtwWriteTransfer(v15, v18, &v42, v14, *(_DWORD *)(v14 + 48));
      break;
    case 0xF:
      if ( byte_140171461 >= 0 )
        break;
      v19 = *(_QWORD *)(v16 + 8);
      v20 = 0;
      v21 = 0LL;
      v39 = 0;
      v22 = 0;
      v23 = 0;
      v24 = 0;
      v25 = 0;
      if ( *(_BYTE *)(v19 + 2) != 40 )
      {
        v31 = *(_BYTE *)(v19 + 72);
        v21 = *(_BYTE **)(v19 + 32);
        v22 = *(_BYTE *)(v19 + 11);
        v20 = *(_BYTE *)(v19 + 4);
        if ( !*(_BYTE *)(v19 + 2) )
          goto LABEL_53;
        break;
      }
      v26 = 0LL;
      v40 = 0;
      if ( *(_DWORD *)(v19 + 20) )
        break;
      v27 = 0;
      v41 = *(_DWORD *)(v19 + 56);
      if ( !v41 )
        goto LABEL_50;
      while ( 1 )
      {
        v15 = (char *)*(unsigned int *)(v19 + 4LL * v27 + 120);
        if ( (unsigned int)v15 >= 0x80 )
        {
          v28 = *(unsigned int *)(v19 + 16);
          if ( (unsigned int)v15 < (unsigned int)v28 )
          {
            v29 = (unsigned int)v15;
            v30 = *(_DWORD *)&v15[v19] - 64;
            if ( v30 )
            {
              LODWORD(v15) = v30 - 1;
              if ( (_DWORD)v15 )
              {
                if ( (_DWORD)v15 == 1 )
                {
                  LODWORD(v15) = v29 + 40;
                  if ( v29 + 40 <= v28 )
                  {
                    if ( *(_DWORD *)(v29 + v19 + 12) )
                      v26 = (char *)(v29 + v19 + 32);
                    v21 = *(_BYTE **)(v29 + v19 + 24);
                    goto LABEL_49;
                  }
                }
              }
              else
              {
                LODWORD(v15) = v29 + 56;
                if ( v29 + 56 <= v28 )
                {
                  v40 = 1;
                  if ( *(_BYTE *)(v29 + v19 + 10) )
                    v26 = (char *)(v29 + v19 + 24);
                  v20 = *(_BYTE *)(v29 + v19 + 8);
                  v21 = *(_BYTE **)(v29 + v19 + 16);
                  v22 = *(_BYTE *)(v29 + v19 + 9);
                }
              }
            }
            else
            {
              LODWORD(v15) = v29 + 40;
              if ( v29 + 40 <= v28 )
              {
                if ( *(_BYTE *)(v29 + v19 + 10) )
                  v26 = (char *)(v29 + v19 + 24);
                v21 = *(_BYTE **)(v29 + v19 + 16);
LABEL_49:
                v22 = *(_BYTE *)(v29 + v19 + 9);
                v20 = *(_BYTE *)(v29 + v19 + 8);
LABEL_50:
                if ( v26 )
                {
                  v31 = *v26;
                  v24 = 0;
LABEL_53:
                  LOBYTE(v15) = v31 - 8;
                  if ( ((unsigned __int8)v15 & 0x5D) == 0 )
                  {
                    v32 = *(_BYTE *)(v19 + 3);
                    if ( v32 == 1 || !v21 || !v22 )
                      goto LABEL_72;
                    LOBYTE(v19) = 0;
                    v15 = &v21[v22];
                    v33 = v21 + 8;
                    if ( (unsigned __int8)((*v21 & 0x7F) - 114) <= 1u )
                    {
                      if ( v33 <= v15 )
                      {
                        LOBYTE(v19) = 1;
                        v24 = v21[2];
                        v23 = v21[1] & 0xF;
                        v25 = v21[3];
                      }
                    }
                    else
                    {
                      if ( v33 <= v15 )
                      {
                        v23 = v21[2] & 0xF;
                        v34 = v22;
                        if ( (unsigned int)(unsigned __int8)v21[7] + 8 <= v22 )
                          v34 = (unsigned __int8)v21[7] + 8;
                        v15 = v21 + 13;
                        v19 = (unsigned __int64)&v21[v34];
                        if ( (unsigned __int64)(v21 + 13) > v19 )
                          v39 = 0;
                        else
                          v39 = v21[12];
                        if ( (unsigned __int64)(v21 + 14) <= v19 )
                          v25 = *v15;
                        LOBYTE(v19) = 1;
                      }
                      v24 = v39;
                    }
                    if ( (_BYTE)v19 )
                    {
                      LOBYTE(v7) = v24;
                      v35 = v25;
                    }
                    else
                    {
LABEL_72:
                      v23 = 0;
                      v35 = 0;
                    }
                    McTemplateK0pduuuuup_EtwWriteTransfer(
                      (_DWORD)v15,
                      v19,
                      (unsigned int)&v42,
                      v14,
                      *(_DWORD *)(v14 + 48),
                      v32,
                      v20,
                      v23,
                      v7,
                      v35,
                      v14);
                  }
                }
                goto LABEL_77;
              }
            }
            if ( v40 )
              goto LABEL_50;
          }
        }
        if ( ++v27 >= v41 )
          goto LABEL_50;
      }
    case 0x1B:
      if ( *(_BYTE *)(v16 + 1) == 7 && !*(_DWORD *)(v16 + 8) )
      {
        if ( (byte_140171462 & 0x40) != 0 )
        {
          v17 = *(int **)(v14 + 56);
          if ( v17 )
            v7 = *v17;
          McTemplateK0pqd_EtwWriteTransfer((_DWORD)v15, v16, (unsigned int)&v42, v14, v7, *(_DWORD *)(v14 + 48));
        }
        break;
      }
      if ( (byte_140171462 & 0x20) != 0 )
      {
        v18 = &EventPnpRequestComplete;
        goto LABEL_76;
      }
      break;
  }
LABEL_77:
  IofCompleteRequest((PIRP)v14, 0);
  v36 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v37 = *(_DWORD *)(v36 + *((_QWORD *)DeviceExtension + 5));
  while ( (v37 & 1) == 0 )
  {
    v38 = v37;
    v37 = _InterlockedCompareExchange((volatile signed __int32 *)(v36 + *((_QWORD *)DeviceExtension + 5)), v37 - 2, v37);
    if ( v38 == v37 )
      return;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeviceExtension + 258, 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(DeviceExtension + 520), 0, 0);
}
