/*
 * XREFs of RaidUnitSetPowerIrp @ 0x1400063C0
 * Callers:
 *     RaUnitPowerIrp @ 0x14000606C (RaUnitPowerIrp.c)
 * Callees:
 *     RaidUnitSetSystemPowerIrp @ 0x14000675C (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1400079E8 (RaidUnitSetDevicePowerIrp.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x140055624 (WPP_SF_qqD.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     WPP_SF_qq @ 0x140067E84 (WPP_SF_qq.c)
 *     WPP_SF_qqDD @ 0x140067ED4 (WPP_SF_qqDD.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidUnitSetPowerIrp(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // r14
  int v5; // ebp
  unsigned int v6; // eax
  unsigned int v7; // ebx
  int v9; // ebx
  bool v10; // zf
  char *v11; // rcx
  __int64 v12; // rdx
  void *v13; // rdx
  int *v14; // rax
  unsigned __int64 v15; // rdx
  char *v16; // rax
  char v17; // si
  unsigned int v18; // eax
  char v19; // r12
  char v20; // r11
  char v21; // al
  char v22; // r14
  _BYTE *v23; // r9
  unsigned __int8 v24; // r10
  char *v25; // r11
  unsigned int v26; // r13d
  unsigned int *v27; // r15
  __int64 v28; // rax
  unsigned __int64 v29; // rbp
  char v30; // cl
  char v31; // r8
  char v32; // [rsp+60h] [rbp-68h]
  char v33; // [rsp+61h] [rbp-67h]
  unsigned int v35; // [rsp+70h] [rbp-58h]
  __int128 v36; // [rsp+78h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v4 = a1;
  if ( *(int *)(v2 + 24) <= 6 )
  {
    v5 = *(_DWORD *)(v2 + 16);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 49LL, &WPP_3e1ffd7ece683aaa229dca75055d12f9_Traceguids, a1, a2, v5);
    }
    if ( v5 )
    {
      if ( v5 != 1 )
      {
        v7 = -1073741823;
LABEL_7:
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_qqDD(
            WPP_GLOBAL_Control->AttachedDevice,
            50LL,
            &WPP_3e1ffd7ece683aaa229dca75055d12f9_Traceguids,
            v4,
            a2,
            v5,
            v7);
        }
        return v7;
      }
      v6 = RaidUnitSetDevicePowerIrp(v4, a2);
    }
    else
    {
      v6 = RaidUnitSetSystemPowerIrp(v4, a2);
    }
    v7 = v6;
    goto LABEL_7;
  }
  LOBYTE(v9) = 0;
  *(_BYTE *)(a2 + 141) = -84;
  v10 = StorEtwLoggingEnabled == 0;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v10 )
    goto LABEL_16;
  v36 = 0LL;
  IoGetActivityIdIrp(a2, &v36);
  v12 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v12 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_16;
    v13 = &EventNonReadWriteRequestComplete;
    goto LABEL_20;
  }
  if ( *(_BYTE *)v12 != 15 )
  {
    if ( *(_BYTE *)v12 != 27 )
      goto LABEL_16;
    if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v14 = *(int **)(a2 + 56);
        if ( v14 )
          v9 = *v14;
        McTemplateK0pqd_EtwWriteTransfer((_DWORD)v11, v12, (unsigned int)&v36, a2, v9, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_16;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_16;
    v13 = &EventPnpRequestComplete;
LABEL_20:
    McTemplateK0pd_EtwWriteTransfer(v11, v13, &v36, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_16;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_16;
  v15 = *(_QWORD *)(v12 + 8);
  v22 = 0;
  v23 = 0LL;
  v32 = 0;
  v24 = 0;
  v17 = 0;
  v20 = 0;
  v19 = 0;
  if ( *(_BYTE *)(v15 + 2) != 40 )
  {
    v30 = *(_BYTE *)(v15 + 72);
    v23 = *(_BYTE **)(v15 + 32);
    v24 = *(_BYTE *)(v15 + 11);
    v22 = *(_BYTE *)(v15 + 4);
    if ( !*(_BYTE *)(v15 + 2) )
      goto LABEL_86;
    goto LABEL_43;
  }
  v25 = 0LL;
  v33 = 0;
  if ( *(_DWORD *)(v15 + 20) )
    goto LABEL_43;
  v26 = 0;
  v35 = *(_DWORD *)(v15 + 56);
  if ( !v35 )
    goto LABEL_83;
  v27 = (unsigned int *)(v15 + 120);
  while ( 1 )
  {
    v28 = *v27;
    if ( (unsigned int)v28 >= 0x80 )
    {
      v29 = *(unsigned int *)(v15 + 16);
      if ( (unsigned int)v28 < (unsigned int)v29 )
        break;
    }
LABEL_76:
    ++v26;
    ++v27;
    if ( v26 >= v35 )
      goto LABEL_83;
  }
  if ( *(_DWORD *)(v28 + v15) != 64 )
  {
    LODWORD(v11) = *(_DWORD *)(v28 + v15) - 65;
    if ( *(_DWORD *)(v28 + v15) == 65 )
    {
      LODWORD(v11) = v28 + 56;
      if ( v28 + 56 <= v29 )
      {
        v33 = 1;
        if ( *(_BYTE *)(v28 + v15 + 10) )
          v25 = (char *)(v28 + v15 + 24);
        v22 = *(_BYTE *)(v28 + v15 + 8);
        v23 = *(_BYTE **)(v28 + v15 + 16);
        v24 = *(_BYTE *)(v28 + v15 + 9);
      }
    }
    else if ( *(_DWORD *)(v28 + v15) == 66 )
    {
      LODWORD(v11) = v28 + 40;
      if ( v28 + 40 <= v29 )
      {
        if ( *(_DWORD *)(v28 + v15 + 12) )
          v25 = (char *)(v28 + v15 + 32);
        v23 = *(_BYTE **)(v28 + v15 + 24);
        goto LABEL_82;
      }
    }
    goto LABEL_75;
  }
  LODWORD(v11) = v28 + 40;
  if ( v28 + 40 > v29 )
  {
LABEL_75:
    if ( v33 )
      goto LABEL_83;
    goto LABEL_76;
  }
  if ( *(_BYTE *)(v28 + v15 + 10) )
    v25 = (char *)(v28 + v15 + 24);
  v23 = *(_BYTE **)(v28 + v15 + 16);
LABEL_82:
  v24 = *(_BYTE *)(v28 + v15 + 9);
  v22 = *(_BYTE *)(v28 + v15 + 8);
LABEL_83:
  if ( v25 )
  {
    v30 = *v25;
    v20 = 0;
LABEL_86:
    LOBYTE(v11) = v30 - 8;
    if ( ((unsigned __int8)v11 & 0x5D) == 0 )
    {
      v31 = *(_BYTE *)(v15 + 3);
      if ( v31 == 1 || !v23 || !v24 )
        goto LABEL_41;
      LOBYTE(v15) = 0;
      v11 = &v23[v24];
      v16 = v23 + 8;
      if ( (unsigned __int8)((*v23 & 0x7F) - 114) <= 1u )
      {
        if ( v16 <= v11 )
        {
          LOBYTE(v15) = 1;
          v20 = v23[2];
          v17 = v23[1] & 0xF;
          v19 = v23[3];
        }
      }
      else
      {
        if ( v16 <= v11 )
        {
          v17 = v23[2] & 0xF;
          v18 = v24;
          if ( (unsigned int)(unsigned __int8)v23[7] + 8 <= v24 )
            v18 = (unsigned __int8)v23[7] + 8;
          v11 = v23 + 13;
          v15 = (unsigned __int64)&v23[v18];
          if ( (unsigned __int64)(v23 + 13) > v15 )
            v32 = 0;
          else
            v32 = v23[12];
          if ( (unsigned __int64)(v23 + 14) <= v15 )
            v19 = *v11;
          LOBYTE(v15) = 1;
        }
        v20 = v32;
      }
      if ( (_BYTE)v15 )
      {
        LOBYTE(v9) = v20;
        v21 = v19;
      }
      else
      {
LABEL_41:
        v17 = 0;
        v21 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        (_DWORD)v11,
        v15,
        (unsigned int)&v36,
        a2,
        *(_DWORD *)(a2 + 48),
        v31,
        v22,
        v17,
        v9,
        v21,
        a2);
    }
  }
LABEL_43:
  v4 = a1;
LABEL_16:
  IofCompleteRequest((PIRP)a2, 0);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 48LL, &WPP_3e1ffd7ece683aaa229dca75055d12f9_Traceguids, v4, a2);
  }
  return 0LL;
}
