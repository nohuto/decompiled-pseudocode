/*
 * XREFs of RaidAdapterPowerIrp @ 0x140006D90
 * Callers:
 *     RaDriverPowerIrp @ 0x140006C80 (RaDriverPowerIrp.c)
 * Callees:
 *     RaidAdapterQueryPowerIrp @ 0x1400070EC (RaidAdapterQueryPowerIrp.c)
 *     RaidAdapterSetPowerIrp @ 0x140007260 (RaidAdapterSetPowerIrp.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x140055624 (WPP_SF_qqD.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     WPP_SF_qqDD @ 0x140067ED4 (WPP_SF_qqDD.c)
 *     RaForwardPowerIrp @ 0x140089E84 (RaForwardPowerIrp.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterPowerIrp(__int64 a1, __int64 a2)
{
  int v4; // ebx
  int v5; // ebp
  unsigned int PowerIrp; // eax
  unsigned int v7; // ebx
  bool v9; // zf
  char *v10; // rcx
  __int64 v11; // rdx
  void *v12; // rdx
  int *v13; // rax
  unsigned __int64 v14; // rdx
  char *v15; // rax
  char v16; // bp
  unsigned int v17; // eax
  char v18; // r13
  char v19; // r12
  char v20; // al
  char v21; // r15
  char v22; // r11
  _BYTE *v23; // r8
  unsigned __int8 v24; // r10
  int v25; // eax
  char *v26; // r14
  unsigned int v27; // r9d
  unsigned int *v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // r12
  char v31; // r9
  char v32; // [rsp+60h] [rbp-68h]
  char v33; // [rsp+61h] [rbp-67h]
  int v34; // [rsp+68h] [rbp-60h]
  unsigned int v35; // [rsp+6Ch] [rbp-5Ch]
  unsigned __int64 v36; // [rsp+70h] [rbp-58h]
  __int128 v37; // [rsp+78h] [rbp-50h] BYREF

  LOBYTE(v4) = 0;
  if ( ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 336)) )
  {
    v5 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 11LL, &WPP_3e1ffd7ece683aaa229dca75055d12f9_Traceguids, a1, a2, v5);
    }
    if ( v5 == 2 )
    {
      PowerIrp = RaidAdapterSetPowerIrp(a1, a2);
    }
    else if ( v5 == 3 )
    {
      PowerIrp = RaidAdapterQueryPowerIrp(a1, a2);
    }
    else
    {
      PowerIrp = RaForwardPowerIrp(*(_QWORD *)(a1 + 24), a2);
    }
    v7 = PowerIrp;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqDD(
        WPP_GLOBAL_Control->AttachedDevice,
        12LL,
        &WPP_3e1ffd7ece683aaa229dca75055d12f9_Traceguids,
        a1,
        a2,
        v5,
        PowerIrp);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 336));
    return v7;
  }
  v9 = StorEtwLoggingEnabled == 0;
  *(_DWORD *)(a2 + 48) = -1073741738;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v9 )
    goto LABEL_13;
  v37 = 0LL;
  IoGetActivityIdIrp(a2, &v37);
  v11 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v11 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_13;
    v12 = &EventNonReadWriteRequestComplete;
    goto LABEL_41;
  }
  if ( *(_BYTE *)v11 != 15 )
  {
    if ( *(_BYTE *)v11 != 27 )
      goto LABEL_13;
    if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v13 = *(int **)(a2 + 56);
        if ( v13 )
          v4 = *v13;
        McTemplateK0pqd_EtwWriteTransfer((_DWORD)v10, v11, (unsigned int)&v37, a2, v4, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_13;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_13;
    v12 = &EventPnpRequestComplete;
LABEL_41:
    McTemplateK0pd_EtwWriteTransfer(v10, v12, &v37, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_13;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_13;
  v14 = *(_QWORD *)(v11 + 8);
  v21 = 0;
  v22 = 0;
  v32 = 0;
  v23 = 0LL;
  v24 = 0;
  v16 = 0;
  v19 = 0;
  v25 = *(unsigned __int8 *)(v14 + 2);
  v18 = 0;
  if ( (_BYTE)v25 != 40 )
  {
    v21 = *(_BYTE *)(v14 + 72);
    v23 = *(_BYTE **)(v14 + 32);
    v24 = *(_BYTE *)(v14 + 11);
    v22 = *(_BYTE *)(v14 + 4);
    goto LABEL_83;
  }
  v25 = *(_DWORD *)(v14 + 20);
  v26 = 0LL;
  v33 = 0;
  if ( v25 )
    goto LABEL_13;
  v27 = *(_DWORD *)(v14 + 56);
  LODWORD(v10) = 0;
  v34 = 0;
  v35 = v27;
  if ( !v27 )
    goto LABEL_80;
  v28 = (unsigned int *)(v14 + 120);
  v36 = v14 + 120;
  while ( 1 )
  {
    v29 = *v28;
    if ( (unsigned int)v29 >= 0x80 )
    {
      v30 = *(unsigned int *)(v14 + 16);
      if ( (unsigned int)v29 < (unsigned int)v30 )
        break;
    }
LABEL_72:
    LODWORD(v10) = (_DWORD)v10 + 1;
    v28 = (unsigned int *)(v36 + 4);
    v34 = (int)v10;
    v36 += 4LL;
    if ( (unsigned int)v10 >= v27 )
      goto LABEL_79;
  }
  if ( *(_DWORD *)(v29 + v14) != 64 )
  {
    LODWORD(v10) = *(_DWORD *)(v29 + v14) - 65;
    if ( *(_DWORD *)(v29 + v14) == 65 )
    {
      LODWORD(v10) = v29 + 56;
      if ( v29 + 56 <= v30 )
      {
        v33 = 1;
        if ( *(_BYTE *)(v29 + v14 + 10) )
          v26 = (char *)(v29 + v14 + 24);
        v22 = *(_BYTE *)(v29 + v14 + 8);
        v23 = *(_BYTE **)(v29 + v14 + 16);
        v24 = *(_BYTE *)(v29 + v14 + 9);
      }
    }
    else if ( *(_DWORD *)(v29 + v14) == 66 )
    {
      LODWORD(v10) = v29 + 40;
      if ( v29 + 40 <= v30 )
      {
        if ( *(_DWORD *)(v29 + v14 + 12) )
          v26 = (char *)(v29 + v14 + 32);
        v23 = *(_BYTE **)(v29 + v14 + 24);
        goto LABEL_78;
      }
    }
    goto LABEL_70;
  }
  LODWORD(v10) = v29 + 40;
  if ( v29 + 40 > v30 )
  {
LABEL_70:
    if ( v33 )
      goto LABEL_79;
    LODWORD(v10) = v34;
    v27 = v35;
    goto LABEL_72;
  }
  if ( *(_BYTE *)(v29 + v14 + 10) )
    v26 = (char *)(v29 + v14 + 24);
  v23 = *(_BYTE **)(v29 + v14 + 16);
LABEL_78:
  v24 = *(_BYTE *)(v29 + v14 + 9);
  v22 = *(_BYTE *)(v29 + v14 + 8);
LABEL_79:
  v25 = 0;
  v19 = 0;
LABEL_80:
  if ( !v26 )
  {
LABEL_83:
    if ( !v25 )
      goto LABEL_84;
    goto LABEL_13;
  }
  v21 = *v26;
LABEL_84:
  if ( ((v21 - 8) & 0x5D) == 0 )
  {
    v31 = *(_BYTE *)(v14 + 3);
    if ( v31 == 1 || !v23 || !v24 )
      goto LABEL_37;
    LOBYTE(v14) = 0;
    v10 = &v23[v24];
    v15 = v23 + 8;
    if ( (unsigned __int8)((*v23 & 0x7F) - 114) <= 1u )
    {
      if ( v15 <= v10 )
      {
        LOBYTE(v14) = 1;
        v19 = v23[2];
        v16 = v23[1] & 0xF;
        v18 = v23[3];
      }
    }
    else
    {
      if ( v15 <= v10 )
      {
        v16 = v23[2] & 0xF;
        v17 = v24;
        if ( (unsigned int)(unsigned __int8)v23[7] + 8 <= v24 )
          v17 = (unsigned __int8)v23[7] + 8;
        v10 = v23 + 13;
        v14 = (unsigned __int64)&v23[v17];
        if ( (unsigned __int64)(v23 + 13) > v14 )
          v32 = 0;
        else
          v32 = v23[12];
        if ( (unsigned __int64)(v23 + 14) <= v14 )
          v18 = *v10;
        LOBYTE(v14) = 1;
      }
      v19 = v32;
    }
    if ( (_BYTE)v14 )
    {
      LOBYTE(v4) = v19;
      v20 = v18;
    }
    else
    {
LABEL_37:
      v16 = 0;
      v20 = 0;
    }
    McTemplateK0pduuuuup_EtwWriteTransfer(
      (_DWORD)v10,
      v14,
      (unsigned int)&v37,
      a2,
      *(_DWORD *)(a2 + 48),
      v31,
      v22,
      v16,
      v4,
      v20,
      a2);
  }
LABEL_13:
  IofCompleteRequest((PIRP)a2, 0);
  return 3221225558LL;
}
