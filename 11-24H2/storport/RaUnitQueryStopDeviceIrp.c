/*
 * XREFs of RaUnitQueryStopDeviceIrp @ 0x140187280
 * Callers:
 *     RaUnitPnpIrp @ 0x140015D70 (RaUnitPnpIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitQueryStopDeviceIrp(__int64 a1, __int64 a2)
{
  int v3; // ecx
  int v4; // ebx
  unsigned int v5; // ebp
  bool v6; // zf
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  int *v9; // rax
  const EVENT_DESCRIPTOR *v10; // rdx
  unsigned __int64 v11; // rdx
  char v12; // r14
  _BYTE *v13; // r9
  unsigned __int8 v14; // r10
  char v15; // si
  char v16; // r11
  char v17; // r15
  char *v18; // r11
  unsigned int v19; // r13d
  unsigned int *v20; // r12
  __int64 v21; // rax
  unsigned __int64 v22; // rbp
  char v23; // cl
  char v24; // r8
  _BYTE *v25; // rax
  unsigned int v26; // eax
  char v27; // al
  int v29; // [rsp+20h] [rbp-A8h]
  char v30; // [rsp+60h] [rbp-68h]
  char v31; // [rsp+61h] [rbp-67h]
  unsigned int v32; // [rsp+64h] [rbp-64h]
  unsigned int v33; // [rsp+68h] [rbp-60h]
  GUID v34; // [rsp+70h] [rbp-58h] BYREF

  _InterlockedExchange((volatile __int32 *)(a1 + 56), 3);
  v3 = -*(_DWORD *)(a1 + 1036);
  *(_BYTE *)(a2 + 141) = -84;
  v4 = 0;
  v5 = v3 != 0 ? 0x80000011 : 0;
  v6 = StorEtwLoggingEnabled == 0;
  v32 = v5;
  *(_DWORD *)(a2 + 48) = v5;
  if ( v6 )
    goto LABEL_67;
  v34 = 0LL;
  IoGetActivityIdIrp(a2, &v34);
  v8 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v8 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_67;
    v29 = *(_DWORD *)(a2 + 48);
    v10 = &EventNonReadWriteRequestComplete;
    goto LABEL_66;
  }
  if ( *(_BYTE *)v8 != 15 )
  {
    if ( *(_BYTE *)v8 != 27 )
      goto LABEL_67;
    if ( *(_BYTE *)(v8 + 1) == 7 && !*(_DWORD *)(v8 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v9 = *(int **)(a2 + 56);
        if ( v9 )
          v4 = *v9;
        McTemplateK0pqd_EtwWriteTransfer(v7, v8, &v34, a2, v4, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_67;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_67;
    v10 = &EventPnpRequestComplete;
    v29 = *(_DWORD *)(a2 + 48);
LABEL_66:
    McTemplateK0pd_EtwWriteTransfer(v7, v10, &v34, a2, v29);
    goto LABEL_67;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_67;
  v11 = *(_QWORD *)(v8 + 8);
  v12 = 0;
  v13 = 0LL;
  v30 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( *(_BYTE *)(v11 + 2) != 40 )
  {
    v23 = *(_BYTE *)(v11 + 72);
    v13 = *(_BYTE **)(v11 + 32);
    v14 = *(_BYTE *)(v11 + 11);
    v12 = *(_BYTE *)(v11 + 4);
    if ( !*(_BYTE *)(v11 + 2) )
      goto LABEL_43;
    goto LABEL_67;
  }
  v18 = 0LL;
  v31 = 0;
  if ( *(_DWORD *)(v11 + 20) )
    goto LABEL_67;
  v19 = 0;
  v33 = *(_DWORD *)(v11 + 56);
  if ( !v33 )
    goto LABEL_40;
  v20 = (unsigned int *)(v11 + 120);
  while ( 1 )
  {
    v21 = *v20;
    if ( (unsigned int)v21 >= 0x80 )
    {
      v22 = *(unsigned int *)(v11 + 16);
      if ( (unsigned int)v21 < (unsigned int)v22 )
        break;
    }
LABEL_33:
    ++v19;
    ++v20;
    if ( v19 >= v33 )
      goto LABEL_39;
  }
  if ( *(_DWORD *)(v21 + v11) != 64 )
  {
    v7 = (unsigned int)(*(_DWORD *)(v21 + v11) - 65);
    if ( *(_DWORD *)(v21 + v11) == 65 )
    {
      v7 = v21 + 56;
      if ( v21 + 56 <= v22 )
      {
        v31 = 1;
        if ( *(_BYTE *)(v21 + v11 + 10) )
          v18 = (char *)(v21 + v11 + 24);
        v12 = *(_BYTE *)(v21 + v11 + 8);
        v13 = *(_BYTE **)(v21 + v11 + 16);
        v14 = *(_BYTE *)(v21 + v11 + 9);
      }
    }
    else if ( *(_DWORD *)(v21 + v11) == 66 )
    {
      v7 = v21 + 40;
      if ( v21 + 40 <= v22 )
      {
        if ( *(_DWORD *)(v21 + v11 + 12) )
          v18 = (char *)(v21 + v11 + 32);
        v13 = *(_BYTE **)(v21 + v11 + 24);
        goto LABEL_38;
      }
    }
    goto LABEL_32;
  }
  v7 = v21 + 40;
  if ( v21 + 40 > v22 )
  {
LABEL_32:
    if ( v31 )
      goto LABEL_39;
    goto LABEL_33;
  }
  if ( *(_BYTE *)(v21 + v11 + 10) )
    v18 = (char *)(v21 + v11 + 24);
  v13 = *(_BYTE **)(v21 + v11 + 16);
LABEL_38:
  v14 = *(_BYTE *)(v21 + v11 + 9);
  v12 = *(_BYTE *)(v21 + v11 + 8);
LABEL_39:
  v5 = v32;
LABEL_40:
  if ( v18 )
  {
    v23 = *v18;
    v16 = 0;
LABEL_43:
    LOBYTE(v7) = v23 - 8;
    if ( (v7 & 0x5D) == 0 )
    {
      v24 = *(_BYTE *)(v11 + 3);
      if ( v24 == 1 || !v13 || !v14 )
        goto LABEL_62;
      LOBYTE(v11) = 0;
      v7 = (unsigned __int64)&v13[v14];
      v25 = v13 + 8;
      if ( (unsigned __int8)((*v13 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v25 <= v7 )
        {
          LOBYTE(v11) = 1;
          v16 = v13[2];
          v15 = v13[1] & 0xF;
          v17 = v13[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v25 <= v7 )
        {
          v15 = v13[2] & 0xF;
          v26 = v14;
          if ( (unsigned int)(unsigned __int8)v13[7] + 8 <= v14 )
            v26 = (unsigned __int8)v13[7] + 8;
          v7 = (unsigned __int64)(v13 + 13);
          v11 = (unsigned __int64)&v13[v26];
          if ( (unsigned __int64)(v13 + 13) > v11 )
            v30 = 0;
          else
            v30 = v13[12];
          if ( (unsigned __int64)(v13 + 14) <= v11 )
            v17 = *(_BYTE *)v7;
          LOBYTE(v11) = 1;
        }
        v16 = v30;
      }
      if ( (_BYTE)v11 )
      {
        LOBYTE(v4) = v16;
        v27 = v17;
      }
      else
      {
LABEL_62:
        v15 = 0;
        v27 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v7, v11, &v34, a2, *(_DWORD *)(a2 + 48), v24, v12, v15, v4, v27, a2);
    }
  }
LABEL_67:
  IofCompleteRequest((PIRP)a2, 0);
  return v5;
}
