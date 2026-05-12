/*
 * XREFs of StorpCompleteServiceIrp @ 0x14003D874
 * Callers:
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1400255D0 (RaidpPortGetAdapter.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall StorpCompleteServiceIrp(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  bool v4; // zf
  __int64 v5; // rcx
  __int64 v6; // rdx
  int *v7; // rax
  int v8; // ecx
  void *v9; // rdx
  unsigned __int64 v10; // rdx
  char v11; // r15
  _BYTE *v12; // r9
  unsigned __int8 v13; // r10
  char v14; // si
  char v15; // r11
  unsigned __int8 v16; // r13
  char *v17; // r11
  unsigned int v18; // ecx
  unsigned int *v19; // r12
  __int64 v20; // rax
  unsigned __int64 v21; // r14
  char v22; // cl
  char v23; // r8
  _BYTE *v24; // rcx
  _BYTE *v25; // rax
  unsigned int v26; // eax
  char v27; // al
  int v28; // ecx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v29; // rcx
  char v31; // [rsp+68h] [rbp-9h]
  char v32; // [rsp+69h] [rbp-8h]
  unsigned int v33; // [rsp+6Ch] [rbp-5h]
  unsigned int v34; // [rsp+70h] [rbp-1h]
  int *v35; // [rsp+78h] [rbp+7h] BYREF
  int *v36; // [rsp+80h] [rbp+Fh] BYREF
  __int128 v37; // [rsp+88h] [rbp+17h] BYREF

  v2 = 0;
  v35 = 0LL;
  v36 = 0LL;
  if ( !a2 )
    return (unsigned int)-1056964602;
  RaidpPortGetAdapter(a1, &v35, &v36);
  v4 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v4 )
    goto LABEL_70;
  v37 = 0LL;
  IoGetActivityIdIrp(a2, &v37);
  v6 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v6 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_70;
    v9 = &EventNonReadWriteRequestComplete;
    goto LABEL_69;
  }
  if ( *(_BYTE *)v6 != 15 )
  {
    if ( *(_BYTE *)v6 != 27 )
      goto LABEL_70;
    if ( *(_BYTE *)(v6 + 1) == 7 && !*(_DWORD *)(v6 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v7 = *(int **)(a2 + 56);
        if ( v7 )
          v8 = *v7;
        else
          v8 = 0;
        McTemplateK0pqd_EtwWriteTransfer(v8, v6, (unsigned int)&v37, a2, v8, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_70;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_70;
    v9 = &EventPnpRequestComplete;
LABEL_69:
    McTemplateK0pd_EtwWriteTransfer(v5, v9, &v37, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_70;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_70;
  v10 = *(_QWORD *)(v6 + 8);
  v11 = 0;
  v12 = 0LL;
  v31 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  if ( *(_BYTE *)(v10 + 2) != 40 )
  {
    v22 = *(_BYTE *)(v10 + 72);
    v12 = *(_BYTE **)(v10 + 32);
    v13 = *(_BYTE *)(v10 + 11);
    v11 = *(_BYTE *)(v10 + 4);
    if ( !*(_BYTE *)(v10 + 2) )
      goto LABEL_46;
    goto LABEL_70;
  }
  v17 = 0LL;
  v32 = 0;
  if ( *(_DWORD *)(v10 + 20) )
    goto LABEL_70;
  v18 = 0;
  v33 = 0;
  v34 = *(_DWORD *)(v10 + 56);
  if ( !v34 )
    goto LABEL_43;
  v19 = (unsigned int *)(v10 + 120);
  while ( 1 )
  {
    v20 = *v19;
    if ( (unsigned int)v20 >= 0x80 )
    {
      v21 = *(unsigned int *)(v10 + 16);
      if ( (unsigned int)v20 < (unsigned int)v21 )
        break;
    }
LABEL_37:
    ++v18;
    ++v19;
    v33 = v18;
    if ( v18 >= v34 )
      goto LABEL_43;
  }
  if ( *(_DWORD *)(v20 + v10) != 64 )
  {
    if ( *(_DWORD *)(v20 + v10) == 65 )
    {
      if ( v20 + 56 <= v21 )
      {
        v32 = 1;
        if ( *(_BYTE *)(v20 + v10 + 10) )
          v17 = (char *)(v20 + v10 + 24);
        v11 = *(_BYTE *)(v20 + v10 + 8);
        v12 = *(_BYTE **)(v20 + v10 + 16);
        v13 = *(_BYTE *)(v20 + v10 + 9);
      }
    }
    else if ( *(_DWORD *)(v20 + v10) == 66 && v20 + 40 <= v21 )
    {
      if ( *(_DWORD *)(v20 + v10 + 12) )
        v17 = (char *)(v20 + v10 + 32);
      v12 = *(_BYTE **)(v20 + v10 + 24);
      goto LABEL_42;
    }
    goto LABEL_35;
  }
  if ( v20 + 40 > v21 )
  {
LABEL_35:
    if ( v32 )
      goto LABEL_43;
    v18 = v33;
    goto LABEL_37;
  }
  if ( *(_BYTE *)(v20 + v10 + 10) )
    v17 = (char *)(v20 + v10 + 24);
  v12 = *(_BYTE **)(v20 + v10 + 16);
LABEL_42:
  v13 = *(_BYTE *)(v20 + v10 + 9);
  v11 = *(_BYTE *)(v20 + v10 + 8);
LABEL_43:
  if ( v17 )
  {
    v22 = *v17;
    v15 = 0;
LABEL_46:
    if ( ((v22 - 8) & 0x5D) == 0 )
    {
      v23 = *(_BYTE *)(v10 + 3);
      if ( v23 == 1 || !v12 || !v13 )
        goto LABEL_65;
      LOBYTE(v10) = 0;
      v24 = &v12[v13];
      v25 = v12 + 8;
      if ( (unsigned __int8)((*v12 & 0x7F) - 114) <= 1u )
      {
        if ( v25 <= v24 )
        {
          LOBYTE(v10) = 1;
          v15 = v12[2];
          v14 = v12[1] & 0xF;
          v16 = v12[3];
        }
      }
      else
      {
        if ( v25 <= v24 )
        {
          v14 = v12[2] & 0xF;
          v26 = v13;
          if ( (unsigned int)(unsigned __int8)v12[7] + 8 <= v13 )
            v26 = (unsigned __int8)v12[7] + 8;
          v10 = (unsigned __int64)&v12[v26];
          if ( (unsigned __int64)(v12 + 13) > v10 )
            v31 = 0;
          else
            v31 = v12[12];
          if ( (unsigned __int64)(v12 + 14) <= v10 )
            v16 = v12[13];
          LOBYTE(v10) = 1;
        }
        v15 = v31;
      }
      if ( (_BYTE)v10 )
      {
        v27 = v15;
        v28 = v16;
      }
      else
      {
LABEL_65:
        v14 = 0;
        v27 = 0;
        v28 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v28,
        v10,
        (unsigned int)&v37,
        a2,
        *(_DWORD *)(a2 + 48),
        v23,
        v11,
        v14,
        v27,
        v28,
        a2);
    }
  }
LABEL_70:
  IofCompleteRequest((PIRP)a2, 0);
  if ( v35 )
  {
    v29 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)*((_QWORD *)v35 + 42);
LABEL_74:
    ExReleaseRundownProtectionCacheAware(v29);
  }
  else
  {
    if ( v36 )
    {
      v29 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)*((_QWORD *)v36 + 19);
      goto LABEL_74;
    }
    return (unsigned int)-1056964602;
  }
  return v2;
}
