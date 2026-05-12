/*
 * XREFs of StorExtCompleteServiceIrp @ 0x1400731B0
 * Callers:
 *     <none>
 * Callees:
 *     RaidpPortGetAdapter @ 0x1400255D0 (RaidpPortGetAdapter.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall StorExtCompleteServiceIrp(__int64 a1, __int64 a2)
{
  bool v3; // zf
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int *v6; // rax
  __int64 v7; // rcx
  const EVENT_DESCRIPTOR *v8; // rdx
  unsigned __int64 v9; // rdx
  char v10; // bp
  _BYTE *v11; // r9
  unsigned __int8 v12; // r10
  char v13; // di
  char v14; // r13
  unsigned __int8 v15; // r14
  char *v16; // r11
  unsigned int v17; // r12d
  unsigned int *v18; // r15
  __int64 v19; // rax
  unsigned __int64 v20; // rsi
  char v21; // cl
  char v22; // r8
  _BYTE *v23; // rcx
  _BYTE *v24; // rax
  unsigned int v25; // eax
  char v26; // al
  __int64 v27; // rcx
  char v28; // [rsp+60h] [rbp-58h]
  int *v29; // [rsp+68h] [rbp-50h] BYREF
  PEX_RUNDOWN_REF_CACHE_AWARE *v30; // [rsp+70h] [rbp-48h] BYREF
  GUID v31; // [rsp+78h] [rbp-40h] BYREF

  v30 = 0LL;
  RaidpPortGetAdapter(a1, (int **)&v30, &v29);
  v3 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v3 )
    goto LABEL_65;
  v31 = 0LL;
  IoGetActivityIdIrp(a2, &v31);
  v5 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v5 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_65;
    v8 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_64;
  }
  if ( *(_BYTE *)v5 != 15 )
  {
    if ( *(_BYTE *)v5 != 27 )
      goto LABEL_65;
    if ( *(_BYTE *)(v5 + 1) == 7 && !*(_DWORD *)(v5 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v6 = *(unsigned int **)(a2 + 56);
        if ( v6 )
          v7 = *v6;
        else
          v7 = 0LL;
        McTemplateK0pqd_EtwWriteTransfer(v7, v5, &v31, a2, v7, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_65;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_65;
    v8 = &EventPnpRequestComplete;
LABEL_64:
    McTemplateK0pd_EtwWriteTransfer(v4, v8, &v31, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_65;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_65;
  v9 = *(_QWORD *)(v5 + 8);
  v10 = 0;
  v11 = 0LL;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  if ( *(_BYTE *)(v9 + 2) == 40 )
  {
    v16 = 0LL;
    v28 = 0;
    if ( *(_DWORD *)(v9 + 20) )
      goto LABEL_65;
    v17 = 0;
    LODWORD(v29) = *(_DWORD *)(v9 + 56);
    if ( !(_DWORD)v29 )
      goto LABEL_40;
    v18 = (unsigned int *)(v9 + 120);
    while ( 1 )
    {
      v19 = *v18;
      if ( (unsigned int)v19 >= 0x80 )
      {
        v20 = *(unsigned int *)(v9 + 16);
        if ( (unsigned int)v19 < (unsigned int)v20 )
        {
          if ( *(_DWORD *)(v19 + v9) == 64 )
          {
            if ( v19 + 40 <= v20 )
            {
              if ( *(_BYTE *)(v19 + v9 + 10) )
                v16 = (char *)(v19 + v9 + 24);
              v11 = *(_BYTE **)(v19 + v9 + 16);
LABEL_39:
              v12 = *(_BYTE *)(v19 + v9 + 9);
              v10 = *(_BYTE *)(v19 + v9 + 8);
LABEL_40:
              if ( v16 )
              {
                v21 = *v16;
                goto LABEL_43;
              }
              goto LABEL_65;
            }
          }
          else if ( *(_DWORD *)(v19 + v9) == 65 )
          {
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
          else if ( *(_DWORD *)(v19 + v9) == 66 && v19 + 40 <= v20 )
          {
            if ( *(_DWORD *)(v19 + v9 + 12) )
              v16 = (char *)(v19 + v9 + 32);
            v11 = *(_BYTE **)(v19 + v9 + 24);
            goto LABEL_39;
          }
          if ( v28 )
            goto LABEL_40;
        }
      }
      ++v17;
      ++v18;
      if ( v17 >= (unsigned int)v29 )
        goto LABEL_40;
    }
  }
  v21 = *(_BYTE *)(v9 + 72);
  v11 = *(_BYTE **)(v9 + 32);
  v12 = *(_BYTE *)(v9 + 11);
  v10 = *(_BYTE *)(v9 + 4);
  if ( *(_BYTE *)(v9 + 2) )
    goto LABEL_65;
LABEL_43:
  if ( ((v21 - 8) & 0x5D) == 0 )
  {
    v22 = *(_BYTE *)(v9 + 3);
    if ( v22 == 1 || !v11 || !v12 )
      goto LABEL_60;
    LOBYTE(v9) = 0;
    v23 = &v11[v12];
    v24 = v11 + 8;
    if ( (unsigned __int8)((*v11 & 0x7F) - 114) <= 1u )
    {
      if ( v24 > v23 )
        goto LABEL_58;
      v14 = v11[2];
      v13 = v11[1] & 0xF;
      v15 = v11[3];
    }
    else
    {
      if ( v24 > v23 )
        goto LABEL_58;
      v13 = v11[2] & 0xF;
      v25 = v12;
      if ( (unsigned int)(unsigned __int8)v11[7] + 8 <= v12 )
        v25 = (unsigned __int8)v11[7] + 8;
      v9 = (unsigned __int64)&v11[v25];
      if ( (unsigned __int64)(v11 + 13) <= v9 )
        v14 = v11[12];
      if ( (unsigned __int64)(v11 + 14) <= v9 )
        v15 = v11[13];
    }
    LOBYTE(v9) = 1;
LABEL_58:
    if ( (_BYTE)v9 )
    {
      v26 = v14;
      v27 = v15;
LABEL_61:
      McTemplateK0pduuuuup_EtwWriteTransfer(v27, v9, &v31, a2, *(_DWORD *)(a2 + 48), v22, v10, v13, v26, v27, a2);
      goto LABEL_65;
    }
LABEL_60:
    v13 = 0;
    v26 = 0;
    v27 = 0LL;
    goto LABEL_61;
  }
LABEL_65:
  IofCompleteRequest((PIRP)a2, 0);
  if ( v30 )
    ExReleaseRundownProtectionCacheAware(v30[42]);
}
