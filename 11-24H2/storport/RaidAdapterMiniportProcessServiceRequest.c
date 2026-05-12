/*
 * XREFs of RaidAdapterMiniportProcessServiceRequest @ 0x14005C628
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14002B3B0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     WPP_SF_qqDD @ 0x140067ED4 (WPP_SF_qqDD.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidAdapterMiniportProcessServiceRequest(__int64 a1, __int64 a2)
{
  int v2; // ebx
  unsigned int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // rdx
  bool v8; // zf
  int v9; // ebp
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  int *v12; // rax
  const EVENT_DESCRIPTOR *v13; // rdx
  unsigned __int64 v14; // rdx
  char v15; // r12
  char v16; // bp
  _BYTE *v17; // r8
  unsigned __int8 v18; // r10
  char v19; // r15
  int v20; // eax
  char v21; // r13
  char *v22; // r14
  unsigned int v23; // r9d
  unsigned int *v24; // r13
  __int64 v25; // rax
  unsigned __int64 v26; // r11
  char v27; // r9
  _BYTE *v28; // rax
  unsigned int v29; // eax
  char v30; // al
  char v32; // [rsp+60h] [rbp-78h]
  char v33; // [rsp+61h] [rbp-77h]
  char v34; // [rsp+62h] [rbp-76h]
  int v35; // [rsp+68h] [rbp-70h]
  int v36; // [rsp+6Ch] [rbp-6Ch]
  unsigned int v37; // [rsp+70h] [rbp-68h]
  GUID v39; // [rsp+80h] [rbp-58h] BYREF

  v2 = 0;
  v5 = -1073741637;
  v6 = a1 + 376;
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 232);
    if ( v7 )
    {
      if ( !*(_BYTE *)(a1 + 4370) && (*(_BYTE *)(v6 + 248) & 8) != 0 && *(_QWORD *)(v7 + 144) )
      {
        *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
        (*(void (__fastcall **)(__int64, __int64))(v7 + 144))(*(_QWORD *)(v6 + 240) + 16LL, a2);
        return 259;
      }
    }
  }
  v8 = StorEtwLoggingEnabled == 0;
  v9 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL);
  v35 = v9;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = -1073741637;
  if ( v8 )
    goto LABEL_75;
  v39 = 0LL;
  IoGetActivityIdIrp(a2, &v39);
  v11 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v11 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_75;
    v13 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_19;
  }
  if ( *(_BYTE *)v11 != 15 )
  {
    if ( *(_BYTE *)v11 != 27 )
      goto LABEL_75;
    if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v12 = *(int **)(a2 + 56);
        if ( v12 )
          v2 = *v12;
        McTemplateK0pqd_EtwWriteTransfer(v10, v11, &v39, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_75;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_75;
    v13 = (const EVENT_DESCRIPTOR *)&EventPnpRequestComplete;
LABEL_19:
    McTemplateK0pd_EtwWriteTransfer(v10, v13, &v39, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_75;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_75;
  v14 = *(_QWORD *)(v11 + 8);
  v15 = 0;
  v16 = 0;
  v33 = 0;
  v17 = 0LL;
  v32 = 0;
  v18 = 0;
  v19 = 0;
  v20 = *(unsigned __int8 *)(v14 + 2);
  v21 = 0;
  if ( (_BYTE)v20 != 40 )
  {
    v15 = *(_BYTE *)(v14 + 72);
    v17 = *(_BYTE **)(v14 + 32);
    v18 = *(_BYTE *)(v14 + 11);
    v16 = *(_BYTE *)(v14 + 4);
    goto LABEL_51;
  }
  v20 = *(_DWORD *)(v14 + 20);
  v22 = 0LL;
  v34 = 0;
  if ( v20 )
    goto LABEL_74;
  v23 = *(_DWORD *)(v14 + 56);
  v10 = 0LL;
  v36 = 0;
  v37 = v23;
  if ( !v23 )
    goto LABEL_48;
  v24 = (unsigned int *)(v14 + 120);
  while ( 1 )
  {
    v25 = *v24;
    if ( (unsigned int)v25 >= 0x80 )
    {
      v26 = *(unsigned int *)(v14 + 16);
      if ( (unsigned int)v25 < (unsigned int)v26 )
        break;
    }
LABEL_41:
    v10 = (unsigned int)(v10 + 1);
    ++v24;
    v36 = v10;
    if ( (unsigned int)v10 >= v23 )
      goto LABEL_47;
  }
  if ( *(_DWORD *)(v25 + v14) != 64 )
  {
    v10 = (unsigned int)(*(_DWORD *)(v25 + v14) - 65);
    if ( *(_DWORD *)(v25 + v14) == 65 )
    {
      v10 = v25 + 56;
      if ( v25 + 56 <= v26 )
      {
        v34 = 1;
        if ( *(_BYTE *)(v25 + v14 + 10) )
          v22 = (char *)(v25 + v14 + 24);
        v16 = *(_BYTE *)(v25 + v14 + 8);
        v17 = *(_BYTE **)(v25 + v14 + 16);
        v18 = *(_BYTE *)(v25 + v14 + 9);
      }
    }
    else if ( *(_DWORD *)(v25 + v14) == 66 )
    {
      v10 = v25 + 40;
      if ( v25 + 40 <= v26 )
      {
        if ( *(_DWORD *)(v25 + v14 + 12) )
          v22 = (char *)(v25 + v14 + 32);
        v17 = *(_BYTE **)(v25 + v14 + 24);
        goto LABEL_46;
      }
    }
    goto LABEL_39;
  }
  v10 = v25 + 40;
  if ( v25 + 40 > v26 )
  {
LABEL_39:
    if ( v34 )
      goto LABEL_47;
    LODWORD(v10) = v36;
    v23 = v37;
    goto LABEL_41;
  }
  if ( *(_BYTE *)(v25 + v14 + 10) )
    v22 = (char *)(v25 + v14 + 24);
  v17 = *(_BYTE **)(v25 + v14 + 16);
LABEL_46:
  v18 = *(_BYTE *)(v25 + v14 + 9);
  v16 = *(_BYTE *)(v25 + v14 + 8);
LABEL_47:
  v20 = 0;
  v21 = 0;
LABEL_48:
  if ( !v22 )
  {
LABEL_51:
    if ( !v20 )
      goto LABEL_52;
    goto LABEL_74;
  }
  v15 = *v22;
LABEL_52:
  if ( ((v15 - 8) & 0x5D) == 0 )
  {
    v27 = *(_BYTE *)(v14 + 3);
    if ( v27 == 1 || !v17 || !v18 )
      goto LABEL_72;
    LOBYTE(v14) = 0;
    v10 = (unsigned __int64)&v17[v18];
    v28 = v17 + 8;
    if ( (unsigned __int8)((*v17 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v28 <= v10 )
      {
        LOBYTE(v14) = 1;
        v19 = v17[1] & 0xF;
        v21 = v17[3];
        v33 = v17[2];
      }
    }
    else
    {
      if ( (unsigned __int64)v28 <= v10 )
      {
        v19 = v17[2] & 0xF;
        v29 = v18;
        if ( (unsigned int)(unsigned __int8)v17[7] + 8 <= v18 )
          v29 = (unsigned __int8)v17[7] + 8;
        v10 = (unsigned __int64)(v17 + 13);
        v14 = (unsigned __int64)&v17[v29];
        if ( (unsigned __int64)(v17 + 13) > v14 )
          v33 = 0;
        else
          v33 = v17[12];
        if ( (unsigned __int64)(v17 + 14) > v14 )
          v32 = 0;
        else
          v32 = *(_BYTE *)v10;
        LOBYTE(v14) = 1;
      }
      v21 = v32;
    }
    if ( (_BYTE)v14 )
    {
      LOBYTE(v2) = v33;
      v5 = -1073741637;
      v30 = v21;
    }
    else
    {
LABEL_72:
      v19 = 0;
      v30 = 0;
    }
    McTemplateK0pduuuuup_EtwWriteTransfer(v10, v14, &v39, a2, *(_DWORD *)(a2 + 48), v27, v16, v19, v2, v30, a2);
  }
LABEL_74:
  v9 = v35;
LABEL_75:
  IofCompleteRequest((PIRP)a2, 0);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 336));
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      35LL,
      &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids,
      a1,
      a2,
      v9,
      -1073741637);
  }
  return v5;
}
