/*
 * XREFs of RaUnitScsiMiniportIoctl @ 0x140035FB8
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterPoFxIdleComponent @ 0x14001D890 (RaidAdapterPoFxIdleComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterPoFxActivateComponent @ 0x14001DA40 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x14001DF90 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidGetSrbIoctlFromIrp @ 0x14001EC18 (RaidGetSrbIoctlFromIrp.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitScsiMiniportIoctl(__int64 a1, __int64 a2)
{
  int SrbIoctlFromIrp; // eax
  int v5; // edi
  unsigned int v6; // r12d
  __int64 v7; // r14
  char v8; // bl
  unsigned int v9; // eax
  __int64 v10; // rbp
  unsigned int v11; // r14d
  volatile signed __int32 *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  bool v16; // zf
  char *v17; // rcx
  __int64 v18; // rdx
  void *v19; // rdx
  int *v20; // rax
  unsigned __int64 v21; // rdx
  char *v22; // rax
  char v23; // bl
  unsigned int v24; // eax
  char v25; // r15
  char v26; // r11
  char v27; // al
  char v28; // r14
  _BYTE *v29; // r9
  unsigned __int8 v30; // r10
  char *v31; // r11
  unsigned int v32; // r13d
  unsigned int *v33; // r12
  __int64 v34; // rax
  unsigned __int64 v35; // rsi
  char v36; // cl
  char v37; // r8
  char v38; // [rsp+60h] [rbp-68h]
  char v39; // [rsp+61h] [rbp-67h]
  int v40; // [rsp+64h] [rbp-64h]
  unsigned int v41; // [rsp+68h] [rbp-60h] BYREF
  int v42; // [rsp+6Ch] [rbp-5Ch] BYREF
  __int128 v43; // [rsp+70h] [rbp-58h] BYREF

  SrbIoctlFromIrp = RaidGetSrbIoctlFromIrp(a2, &v43, &v42, &v41, 1);
  LOBYTE(v5) = 0;
  v40 = SrbIoctlFromIrp;
  v6 = SrbIoctlFromIrp;
  if ( SrbIoctlFromIrp >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    v8 = 0;
    if ( *(_QWORD *)(v7 + 4960) )
    {
      RaidAdapterPoFxActivateComponent(*(_QWORD *)(a1 + 24), 0LL, 1LL);
      v8 = 2;
    }
    if ( RaidUnitCheckAndAcquirePoFx(a1) )
    {
      if ( (*(_BYTE *)(v7 + 108) & 1) != 0 )
      {
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 2168), 1uLL);
        if ( (*(_BYTE *)(v7 + 108) & 2) != 0 )
          _InterlockedAdd64((volatile signed __int64 *)(a1 + 2176), 1uLL);
      }
      v13 = *(volatile signed __int32 **)(a1 + 1872);
      if ( (v13[37] & 1) != 0 )
      {
        _InterlockedAdd(v13 + 36, 1u);
        v13 = *(volatile signed __int32 **)(a1 + 1872);
      }
      v14 = 5LL;
      v15 = *(_QWORD *)v13;
      if ( !*(_DWORD *)(a1 + 1036) )
        v14 = 1LL;
      PoFxActivateComponent(v15, 0LL, v14);
      v8 |= 1u;
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
    }
    v9 = RaidAdapterScsiMiniportIoctlWithAddress(
           *(_QWORD *)(a1 + 24),
           a2,
           *(unsigned __int8 *)(a1 + 104),
           *(_BYTE *)(a1 + 105),
           *(_BYTE *)(a1 + 106),
           1);
    v10 = *(_QWORD *)(a1 + 24);
    v11 = v9;
    if ( (v8 & 1) != 0 && RaidUnitCheckAndAcquirePoFx(a1) )
    {
      PoFxIdleComponent(**(_QWORD **)(a1 + 1872), 0LL, 0LL);
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
    }
    if ( (unsigned __int8)v8 >= 2u )
    {
      if ( *(_QWORD *)(v10 + 4960) )
        RaidAdapterPoFxIdleComponent(v10, 0LL, 0LL);
    }
    return v11;
  }
  v16 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = SrbIoctlFromIrp;
  if ( v16 )
    goto LABEL_22;
  v43 = 0LL;
  IoGetActivityIdIrp(a2, &v43);
  v18 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v18 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_22;
    v19 = &EventNonReadWriteRequestComplete;
    goto LABEL_48;
  }
  if ( *(_BYTE *)v18 != 15 )
  {
    if ( *(_BYTE *)v18 != 27 )
      goto LABEL_22;
    if ( *(_BYTE *)(v18 + 1) == 7 && !*(_DWORD *)(v18 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v20 = *(int **)(a2 + 56);
        if ( v20 )
          v5 = *v20;
        McTemplateK0pqd_EtwWriteTransfer((_DWORD)v17, v18, (unsigned int)&v43, a2, v5, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_22;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_22;
    v19 = &EventPnpRequestComplete;
LABEL_48:
    McTemplateK0pd_EtwWriteTransfer(v17, v19, &v43, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_22;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_22;
  v21 = *(_QWORD *)(v18 + 8);
  v28 = 0;
  v29 = 0LL;
  v38 = 0;
  v30 = 0;
  v23 = 0;
  v26 = 0;
  v25 = 0;
  if ( *(_BYTE *)(v21 + 2) != 40 )
  {
    v36 = *(_BYTE *)(v21 + 72);
    v29 = *(_BYTE **)(v21 + 32);
    v30 = *(_BYTE *)(v21 + 11);
    v28 = *(_BYTE *)(v21 + 4);
    if ( !*(_BYTE *)(v21 + 2) )
      goto LABEL_86;
    goto LABEL_22;
  }
  v31 = 0LL;
  v39 = 0;
  if ( *(_DWORD *)(v21 + 20) )
    goto LABEL_22;
  v32 = 0;
  v41 = *(_DWORD *)(v21 + 56);
  if ( !v41 )
    goto LABEL_83;
  v33 = (unsigned int *)(v21 + 120);
  while ( 1 )
  {
    v34 = *v33;
    if ( (unsigned int)v34 >= 0x80 )
    {
      v35 = *(unsigned int *)(v21 + 16);
      if ( (unsigned int)v34 < (unsigned int)v35 )
        break;
    }
LABEL_75:
    ++v32;
    ++v33;
    if ( v32 >= v41 )
      goto LABEL_82;
  }
  if ( *(_DWORD *)(v34 + v21) != 64 )
  {
    LODWORD(v17) = *(_DWORD *)(v34 + v21) - 65;
    if ( *(_DWORD *)(v34 + v21) == 65 )
    {
      LODWORD(v17) = v34 + 56;
      if ( v34 + 56 <= v35 )
      {
        v39 = 1;
        if ( *(_BYTE *)(v34 + v21 + 10) )
          v31 = (char *)(v34 + v21 + 24);
        v28 = *(_BYTE *)(v34 + v21 + 8);
        v29 = *(_BYTE **)(v34 + v21 + 16);
        v30 = *(_BYTE *)(v34 + v21 + 9);
      }
    }
    else if ( *(_DWORD *)(v34 + v21) == 66 )
    {
      LODWORD(v17) = v34 + 40;
      if ( v34 + 40 <= v35 )
      {
        if ( *(_DWORD *)(v34 + v21 + 12) )
          v31 = (char *)(v34 + v21 + 32);
        v29 = *(_BYTE **)(v34 + v21 + 24);
        goto LABEL_81;
      }
    }
    goto LABEL_74;
  }
  LODWORD(v17) = v34 + 40;
  if ( v34 + 40 > v35 )
  {
LABEL_74:
    if ( v39 )
      goto LABEL_82;
    goto LABEL_75;
  }
  if ( *(_BYTE *)(v34 + v21 + 10) )
    v31 = (char *)(v34 + v21 + 24);
  v29 = *(_BYTE **)(v34 + v21 + 16);
LABEL_81:
  v30 = *(_BYTE *)(v34 + v21 + 9);
  v28 = *(_BYTE *)(v34 + v21 + 8);
LABEL_82:
  v6 = v40;
LABEL_83:
  if ( v31 )
  {
    v36 = *v31;
    v26 = 0;
LABEL_86:
    LOBYTE(v17) = v36 - 8;
    if ( ((unsigned __int8)v17 & 0x5D) == 0 )
    {
      v37 = *(_BYTE *)(v21 + 3);
      if ( v37 == 1 || !v29 || !v30 )
        goto LABEL_44;
      LOBYTE(v21) = 0;
      v17 = &v29[v30];
      v22 = v29 + 8;
      if ( (unsigned __int8)((*v29 & 0x7F) - 114) <= 1u )
      {
        if ( v22 <= v17 )
        {
          LOBYTE(v21) = 1;
          v26 = v29[2];
          v23 = v29[1] & 0xF;
          v25 = v29[3];
        }
      }
      else
      {
        if ( v22 <= v17 )
        {
          v23 = v29[2] & 0xF;
          v24 = v30;
          if ( (unsigned int)(unsigned __int8)v29[7] + 8 <= v30 )
            v24 = (unsigned __int8)v29[7] + 8;
          v17 = v29 + 13;
          v21 = (unsigned __int64)&v29[v24];
          if ( (unsigned __int64)(v29 + 13) > v21 )
            v38 = 0;
          else
            v38 = v29[12];
          if ( (unsigned __int64)(v29 + 14) <= v21 )
            v25 = *v17;
          LOBYTE(v21) = 1;
        }
        v26 = v38;
      }
      if ( (_BYTE)v21 )
      {
        LOBYTE(v5) = v26;
        v27 = v25;
      }
      else
      {
LABEL_44:
        v23 = 0;
        v27 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        (_DWORD)v17,
        v21,
        (unsigned int)&v43,
        a2,
        *(_DWORD *)(a2 + 48),
        v37,
        v28,
        v23,
        v5,
        v27,
        a2);
    }
  }
LABEL_22:
  IofCompleteRequest((PIRP)a2, 0);
  return v6;
}
