/*
 * XREFs of RaUnitQueryDeviceRelationsIrp @ 0x1401B51BC
 * Callers:
 *     RaUnitPnpIrp @ 0x140015D70 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitQueryDeviceRelationsIrp(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 Pool; // rax
  __int64 v6; // rsi
  unsigned int v7; // r12d
  bool v8; // zf
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  const EVENT_DESCRIPTOR *v12; // rdx
  int *v13; // rax
  unsigned __int64 v14; // rdx
  char v15; // r14
  _BYTE *v16; // r9
  unsigned __int8 v17; // r10
  char v18; // si
  char v19; // r11
  char v20; // r15
  char *v21; // r11
  unsigned int *v22; // r13
  __int64 v23; // rax
  unsigned __int64 v24; // rbp
  char v25; // cl
  char v26; // r8
  _BYTE *v27; // rax
  unsigned int v28; // eax
  char v29; // al
  int v30; // [rsp+20h] [rbp-A8h]
  char v31; // [rsp+60h] [rbp-68h]
  char v32; // [rsp+61h] [rbp-67h]
  int v33; // [rsp+64h] [rbp-64h]
  unsigned int v34; // [rsp+68h] [rbp-60h]
  GUID v35; // [rsp+70h] [rbp-58h] BYREF

  v2 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) == 4 )
  {
    Pool = RaidAllocatePool(256LL, 16LL, 1380213074LL, *(_QWORD *)(a1 + 8));
    v6 = Pool;
    if ( Pool )
    {
      *(_DWORD *)Pool = 1;
      *(_QWORD *)(Pool + 8) = *(_QWORD *)(a1 + 8);
      ObfReferenceObject(*(PVOID *)(a1 + 8));
      *(_QWORD *)(a2 + 56) = v6;
      v7 = 0;
    }
    else
    {
      v7 = -1073741801;
    }
  }
  else
  {
    v7 = *(_DWORD *)(a2 + 48);
  }
  v8 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v8 )
    goto LABEL_8;
  v35 = 0LL;
  IoGetActivityIdIrp(a2, &v35);
  v10 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v10 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_8;
    v30 = *(_DWORD *)(a2 + 48);
    v12 = &EventNonReadWriteRequestComplete;
    goto LABEL_12;
  }
  if ( *(_BYTE *)v10 != 15 )
  {
    if ( *(_BYTE *)v10 != 27 )
      goto LABEL_8;
    if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v13 = *(int **)(a2 + 56);
        if ( v13 )
          v2 = *v13;
        McTemplateK0pqd_EtwWriteTransfer(v9, v10, &v35, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_8;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_8;
    v12 = &EventPnpRequestComplete;
    v30 = *(_DWORD *)(a2 + 48);
LABEL_12:
    McTemplateK0pd_EtwWriteTransfer(v9, v12, &v35, a2, v30);
    goto LABEL_8;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_8;
  v14 = *(_QWORD *)(v10 + 8);
  v15 = 0;
  v16 = 0LL;
  v31 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( *(_BYTE *)(v14 + 2) != 40 )
  {
    v25 = *(_BYTE *)(v14 + 72);
    v16 = *(_BYTE **)(v14 + 32);
    v17 = *(_BYTE *)(v14 + 11);
    v15 = *(_BYTE *)(v14 + 4);
    if ( !*(_BYTE *)(v14 + 2) )
      goto LABEL_52;
    goto LABEL_8;
  }
  v21 = 0LL;
  v32 = 0;
  if ( *(_DWORD *)(v14 + 20) )
    goto LABEL_8;
  v9 = 0LL;
  v33 = 0;
  v34 = *(_DWORD *)(v14 + 56);
  if ( !v34 )
    goto LABEL_49;
  v22 = (unsigned int *)(v14 + 120);
  while ( 1 )
  {
    v23 = *v22;
    if ( (unsigned int)v23 >= 0x80 )
    {
      v24 = *(unsigned int *)(v14 + 16);
      if ( (unsigned int)v23 < (unsigned int)v24 )
        break;
    }
LABEL_42:
    v9 = (unsigned int)(v9 + 1);
    ++v22;
    v33 = v9;
    if ( (unsigned int)v9 >= v34 )
      goto LABEL_49;
  }
  if ( *(_DWORD *)(v23 + v14) != 64 )
  {
    v9 = (unsigned int)(*(_DWORD *)(v23 + v14) - 65);
    if ( *(_DWORD *)(v23 + v14) == 65 )
    {
      v9 = v23 + 56;
      if ( v23 + 56 <= v24 )
      {
        v32 = 1;
        if ( *(_BYTE *)(v23 + v14 + 10) )
          v21 = (char *)(v23 + v14 + 24);
        v15 = *(_BYTE *)(v23 + v14 + 8);
        v16 = *(_BYTE **)(v23 + v14 + 16);
        v17 = *(_BYTE *)(v23 + v14 + 9);
      }
    }
    else if ( *(_DWORD *)(v23 + v14) == 66 )
    {
      v9 = v23 + 40;
      if ( v23 + 40 <= v24 )
      {
        if ( *(_DWORD *)(v23 + v14 + 12) )
          v21 = (char *)(v23 + v14 + 32);
        v16 = *(_BYTE **)(v23 + v14 + 24);
        goto LABEL_48;
      }
    }
    goto LABEL_40;
  }
  v9 = v23 + 40;
  if ( v23 + 40 > v24 )
  {
LABEL_40:
    if ( v32 )
      goto LABEL_49;
    LODWORD(v9) = v33;
    goto LABEL_42;
  }
  if ( *(_BYTE *)(v23 + v14 + 10) )
    v21 = (char *)(v23 + v14 + 24);
  v16 = *(_BYTE **)(v23 + v14 + 16);
LABEL_48:
  v17 = *(_BYTE *)(v23 + v14 + 9);
  v15 = *(_BYTE *)(v23 + v14 + 8);
LABEL_49:
  if ( v21 )
  {
    v25 = *v21;
    v19 = 0;
LABEL_52:
    LOBYTE(v9) = v25 - 8;
    if ( (v9 & 0x5D) == 0 )
    {
      v26 = *(_BYTE *)(v14 + 3);
      if ( v26 == 1 || !v16 || !v17 )
        goto LABEL_71;
      LOBYTE(v14) = 0;
      v9 = (unsigned __int64)&v16[v17];
      v27 = v16 + 8;
      if ( (unsigned __int8)((*v16 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v27 <= v9 )
        {
          LOBYTE(v14) = 1;
          v19 = v16[2];
          v18 = v16[1] & 0xF;
          v20 = v16[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v27 <= v9 )
        {
          v18 = v16[2] & 0xF;
          v28 = v17;
          if ( (unsigned int)(unsigned __int8)v16[7] + 8 <= v17 )
            v28 = (unsigned __int8)v16[7] + 8;
          v9 = (unsigned __int64)(v16 + 13);
          v14 = (unsigned __int64)&v16[v28];
          if ( (unsigned __int64)(v16 + 13) > v14 )
            v31 = 0;
          else
            v31 = v16[12];
          if ( (unsigned __int64)(v16 + 14) <= v14 )
            v20 = *(_BYTE *)v9;
          LOBYTE(v14) = 1;
        }
        v19 = v31;
      }
      if ( (_BYTE)v14 )
      {
        LOBYTE(v2) = v19;
        v29 = v20;
      }
      else
      {
LABEL_71:
        v18 = 0;
        v29 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v9, v14, &v35, a2, *(_DWORD *)(a2 + 48), v26, v15, v18, v2, v29, a2);
    }
  }
LABEL_8:
  IofCompleteRequest((PIRP)a2, 0);
  return v7;
}
