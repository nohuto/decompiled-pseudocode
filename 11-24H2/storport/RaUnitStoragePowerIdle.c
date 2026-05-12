/*
 * XREFs of RaUnitStoragePowerIdle @ 0x140036D80
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitPoFxIdleComponentFromIoctl @ 0x140037038 (RaidUnitPoFxIdleComponentFromIoctl.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitStoragePowerIdle(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  int v5; // ebx
  bool v6; // zf
  char *v7; // rcx
  __int64 v8; // rdx
  int *v10; // rax
  unsigned __int64 v11; // rdx
  char *v12; // rax
  char v13; // si
  unsigned int v14; // eax
  char v15; // r15
  char v16; // r11
  char v17; // al
  char v18; // r14
  _BYTE *v19; // r9
  unsigned __int8 v20; // r10
  char *v21; // r11
  unsigned int v22; // r13d
  unsigned int *v23; // r12
  __int64 v24; // rax
  unsigned __int64 v25; // rbp
  char v26; // cl
  char v27; // r8
  char v28; // [rsp+60h] [rbp-68h]
  char v29; // [rsp+61h] [rbp-67h]
  int v30; // [rsp+64h] [rbp-64h]
  unsigned int v31; // [rsp+68h] [rbp-60h]
  __int128 v32; // [rsp+70h] [rbp-58h] BYREF

  v2 = -1073741823;
  v30 = -1073741823;
  LOBYTE(v5) = 0;
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    RaidUnitPoFxIdleComponentFromIoctl(a1);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
    v2 = 0;
    v30 = 0;
  }
  v6 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v2;
  if ( v6 )
    goto LABEL_7;
  v32 = 0LL;
  IoGetActivityIdIrp(a2, &v32);
  v8 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v8 == 14 )
  {
    if ( (byte_140171462 & 8) != 0 )
      McTemplateK0pd_EtwWriteTransfer(v7, &EventNonReadWriteRequestComplete, &v32, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_7;
  }
  if ( *(_BYTE *)v8 != 15 )
  {
    if ( *(_BYTE *)v8 == 27 )
    {
      if ( *(_BYTE *)(v8 + 1) == 7 && !*(_DWORD *)(v8 + 8) )
      {
        if ( (byte_140171462 & 0x40) != 0 )
        {
          v10 = *(int **)(a2 + 56);
          if ( v10 )
            v5 = *v10;
          McTemplateK0pqd_EtwWriteTransfer((_DWORD)v7, v8, (unsigned int)&v32, a2, v5, *(_DWORD *)(a2 + 48));
        }
      }
      else if ( (byte_140171462 & 0x20) != 0 )
      {
        McTemplateK0pd_EtwWriteTransfer(v7, &EventPnpRequestComplete, &v32, a2, *(_DWORD *)(a2 + 48));
      }
    }
    goto LABEL_7;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_7;
  v11 = *(_QWORD *)(v8 + 8);
  v18 = 0;
  v19 = 0LL;
  v28 = 0;
  v20 = 0;
  v13 = 0;
  v16 = 0;
  v15 = 0;
  if ( *(_BYTE *)(v11 + 2) != 40 )
  {
    v26 = *(_BYTE *)(v11 + 72);
    v19 = *(_BYTE **)(v11 + 32);
    v20 = *(_BYTE *)(v11 + 11);
    v18 = *(_BYTE *)(v11 + 4);
    if ( !*(_BYTE *)(v11 + 2) )
      goto LABEL_67;
    goto LABEL_7;
  }
  v21 = 0LL;
  v29 = 0;
  if ( *(_DWORD *)(v11 + 20) )
    goto LABEL_7;
  v22 = 0;
  v31 = *(_DWORD *)(v11 + 56);
  if ( !v31 )
    goto LABEL_64;
  v23 = (unsigned int *)(v11 + 120);
  while ( 1 )
  {
    v24 = *v23;
    if ( (unsigned int)v24 >= 0x80 )
    {
      v25 = *(unsigned int *)(v11 + 16);
      if ( (unsigned int)v24 < (unsigned int)v25 )
        break;
    }
LABEL_56:
    ++v22;
    ++v23;
    if ( v22 >= v31 )
      goto LABEL_63;
  }
  if ( *(_DWORD *)(v24 + v11) != 64 )
  {
    LODWORD(v7) = *(_DWORD *)(v24 + v11) - 65;
    if ( *(_DWORD *)(v24 + v11) == 65 )
    {
      LODWORD(v7) = v24 + 56;
      if ( v24 + 56 <= v25 )
      {
        v29 = 1;
        if ( *(_BYTE *)(v24 + v11 + 10) )
          v21 = (char *)(v24 + v11 + 24);
        v18 = *(_BYTE *)(v24 + v11 + 8);
        v19 = *(_BYTE **)(v24 + v11 + 16);
        v20 = *(_BYTE *)(v24 + v11 + 9);
      }
    }
    else if ( *(_DWORD *)(v24 + v11) == 66 )
    {
      LODWORD(v7) = v24 + 40;
      if ( v24 + 40 <= v25 )
      {
        if ( *(_DWORD *)(v24 + v11 + 12) )
          v21 = (char *)(v24 + v11 + 32);
        v19 = *(_BYTE **)(v24 + v11 + 24);
        goto LABEL_62;
      }
    }
    goto LABEL_55;
  }
  LODWORD(v7) = v24 + 40;
  if ( v24 + 40 > v25 )
  {
LABEL_55:
    if ( v29 )
      goto LABEL_63;
    goto LABEL_56;
  }
  if ( *(_BYTE *)(v24 + v11 + 10) )
    v21 = (char *)(v24 + v11 + 24);
  v19 = *(_BYTE **)(v24 + v11 + 16);
LABEL_62:
  v20 = *(_BYTE *)(v24 + v11 + 9);
  v18 = *(_BYTE *)(v24 + v11 + 8);
LABEL_63:
  v2 = v30;
LABEL_64:
  if ( v21 )
  {
    v26 = *v21;
    v16 = 0;
LABEL_67:
    LOBYTE(v7) = v26 - 8;
    if ( ((unsigned __int8)v7 & 0x5D) == 0 )
    {
      v27 = *(_BYTE *)(v11 + 3);
      if ( v27 == 1 || !v19 || !v20 )
        goto LABEL_30;
      LOBYTE(v11) = 0;
      v7 = &v19[v20];
      v12 = v19 + 8;
      if ( (unsigned __int8)((*v19 & 0x7F) - 114) <= 1u )
      {
        if ( v12 <= v7 )
        {
          LOBYTE(v11) = 1;
          v16 = v19[2];
          v13 = v19[1] & 0xF;
          v15 = v19[3];
        }
      }
      else
      {
        if ( v12 <= v7 )
        {
          v13 = v19[2] & 0xF;
          v14 = v20;
          if ( (unsigned int)(unsigned __int8)v19[7] + 8 <= v20 )
            v14 = (unsigned __int8)v19[7] + 8;
          v7 = v19 + 13;
          v11 = (unsigned __int64)&v19[v14];
          if ( (unsigned __int64)(v19 + 13) > v11 )
            v28 = 0;
          else
            v28 = v19[12];
          if ( (unsigned __int64)(v19 + 14) <= v11 )
            v15 = *v7;
          LOBYTE(v11) = 1;
        }
        v16 = v28;
      }
      if ( (_BYTE)v11 )
      {
        LOBYTE(v5) = v16;
        v17 = v15;
      }
      else
      {
LABEL_30:
        v13 = 0;
        v17 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        (_DWORD)v7,
        v11,
        (unsigned int)&v32,
        a2,
        *(_DWORD *)(a2 + 48),
        v27,
        v18,
        v13,
        v5,
        v17,
        a2);
    }
  }
LABEL_7:
  IofCompleteRequest((PIRP)a2, 0);
  return v2;
}
