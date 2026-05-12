/*
 * XREFs of RaUnitCancelStopDeviceIrp @ 0x140184F64
 * Callers:
 *     RaUnitPnpIrp @ 0x140015D70 (RaUnitPnpIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidUnitConvertToNormalUnit @ 0x14009E158 (RaidUnitConvertToNormalUnit.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitCancelStopDeviceIrp(__int64 a1, __int64 a2)
{
  int v3; // ebx
  bool v4; // zf
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  int *v7; // rax
  const EVENT_DESCRIPTOR *v8; // rdx
  unsigned __int64 v9; // rdx
  char v10; // r14
  _BYTE *v11; // r9
  unsigned __int8 v12; // r10
  char v13; // si
  char v14; // r11
  char v15; // r15
  char *v16; // r11
  unsigned int v17; // r13d
  unsigned int *v18; // r12
  __int64 v19; // rax
  unsigned __int64 v20; // rbp
  char v21; // cl
  char v22; // r8
  _BYTE *v23; // rax
  unsigned int v24; // eax
  char v25; // al
  char v27; // [rsp+60h] [rbp-58h]
  char v28; // [rsp+61h] [rbp-57h]
  unsigned int v29; // [rsp+64h] [rbp-54h]
  GUID v30; // [rsp+68h] [rbp-50h] BYREF

  _InterlockedExchange((volatile __int32 *)(a1 + 56), 1);
  RaidUnitConvertToNormalUnit(a1);
  v3 = 0;
  *(_BYTE *)(a2 + 141) = -84;
  v4 = StorEtwLoggingEnabled == 0;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v4 )
    goto LABEL_66;
  v30 = 0LL;
  IoGetActivityIdIrp(a2, &v30);
  v6 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v6 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_66;
    v8 = &EventNonReadWriteRequestComplete;
    goto LABEL_65;
  }
  if ( *(_BYTE *)v6 != 15 )
  {
    if ( *(_BYTE *)v6 != 27 )
      goto LABEL_66;
    if ( *(_BYTE *)(v6 + 1) == 7 && !*(_DWORD *)(v6 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v7 = *(int **)(a2 + 56);
        if ( v7 )
          v3 = *v7;
        McTemplateK0pqd_EtwWriteTransfer(v5, v6, &v30, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_66;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_66;
    v8 = &EventPnpRequestComplete;
LABEL_65:
    McTemplateK0pd_EtwWriteTransfer(v5, v8, &v30, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_66;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_66;
  v9 = *(_QWORD *)(v6 + 8);
  v10 = 0;
  v11 = 0LL;
  v27 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  if ( *(_BYTE *)(v9 + 2) != 40 )
  {
    v21 = *(_BYTE *)(v9 + 72);
    v11 = *(_BYTE **)(v9 + 32);
    v12 = *(_BYTE *)(v9 + 11);
    v10 = *(_BYTE *)(v9 + 4);
    if ( !*(_BYTE *)(v9 + 2) )
      goto LABEL_42;
    goto LABEL_66;
  }
  v16 = 0LL;
  v28 = 0;
  if ( *(_DWORD *)(v9 + 20) )
    goto LABEL_66;
  v17 = 0;
  v29 = *(_DWORD *)(v9 + 56);
  if ( !v29 )
    goto LABEL_39;
  v18 = (unsigned int *)(v9 + 120);
  while ( 1 )
  {
    v19 = *v18;
    if ( (unsigned int)v19 >= 0x80 )
    {
      v20 = *(unsigned int *)(v9 + 16);
      if ( (unsigned int)v19 < (unsigned int)v20 )
        break;
    }
LABEL_33:
    ++v17;
    ++v18;
    if ( v17 >= v29 )
      goto LABEL_39;
  }
  if ( *(_DWORD *)(v19 + v9) != 64 )
  {
    v5 = (unsigned int)(*(_DWORD *)(v19 + v9) - 65);
    if ( *(_DWORD *)(v19 + v9) == 65 )
    {
      v5 = v19 + 56;
      if ( v19 + 56 <= v20 )
      {
        v28 = 1;
        if ( *(_BYTE *)(v19 + v9 + 10) )
          v16 = (char *)(v19 + v9 + 24);
        v10 = *(_BYTE *)(v19 + v9 + 8);
        v11 = *(_BYTE **)(v19 + v9 + 16);
        v12 = *(_BYTE *)(v19 + v9 + 9);
      }
    }
    else if ( *(_DWORD *)(v19 + v9) == 66 )
    {
      v5 = v19 + 40;
      if ( v19 + 40 <= v20 )
      {
        if ( *(_DWORD *)(v19 + v9 + 12) )
          v16 = (char *)(v19 + v9 + 32);
        v11 = *(_BYTE **)(v19 + v9 + 24);
        goto LABEL_38;
      }
    }
    goto LABEL_32;
  }
  v5 = v19 + 40;
  if ( v19 + 40 > v20 )
  {
LABEL_32:
    if ( v28 )
      goto LABEL_39;
    goto LABEL_33;
  }
  if ( *(_BYTE *)(v19 + v9 + 10) )
    v16 = (char *)(v19 + v9 + 24);
  v11 = *(_BYTE **)(v19 + v9 + 16);
LABEL_38:
  v12 = *(_BYTE *)(v19 + v9 + 9);
  v10 = *(_BYTE *)(v19 + v9 + 8);
LABEL_39:
  if ( v16 )
  {
    v21 = *v16;
    v14 = 0;
LABEL_42:
    LOBYTE(v5) = v21 - 8;
    if ( (v5 & 0x5D) == 0 )
    {
      v22 = *(_BYTE *)(v9 + 3);
      if ( v22 == 1 || !v11 || !v12 )
        goto LABEL_61;
      LOBYTE(v9) = 0;
      v5 = (unsigned __int64)&v11[v12];
      v23 = v11 + 8;
      if ( (unsigned __int8)((*v11 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v23 <= v5 )
        {
          LOBYTE(v9) = 1;
          v14 = v11[2];
          v13 = v11[1] & 0xF;
          v15 = v11[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v23 <= v5 )
        {
          v13 = v11[2] & 0xF;
          v24 = v12;
          if ( (unsigned int)(unsigned __int8)v11[7] + 8 <= v12 )
            v24 = (unsigned __int8)v11[7] + 8;
          v5 = (unsigned __int64)(v11 + 13);
          v9 = (unsigned __int64)&v11[v24];
          if ( (unsigned __int64)(v11 + 13) > v9 )
            v27 = 0;
          else
            v27 = v11[12];
          if ( (unsigned __int64)(v11 + 14) <= v9 )
            v15 = *(_BYTE *)v5;
          LOBYTE(v9) = 1;
        }
        v14 = v27;
      }
      if ( (_BYTE)v9 )
      {
        LOBYTE(v3) = v14;
        v25 = v15;
      }
      else
      {
LABEL_61:
        v13 = 0;
        v25 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v5, v9, &v30, a2, *(_DWORD *)(a2 + 48), v22, v10, v13, v3, v25, a2);
    }
  }
LABEL_66:
  IofCompleteRequest((PIRP)a2, 0);
  return 0LL;
}
