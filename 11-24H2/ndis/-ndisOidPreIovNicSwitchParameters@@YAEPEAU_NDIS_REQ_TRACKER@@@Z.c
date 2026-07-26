/*
 * XREFs of ?ndisOidPreIovNicSwitchParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E1A80
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400066E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x140015A90 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1400527F0 (WPP_RECORDER_SF_D_ea_1400527F0.c)
 *     WPP_RECORDER_SF_Ld @ 0x140058010 (WPP_RECORDER_SF_Ld.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14008C0C0 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DD558 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1400DF118 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     ?ndisIovHWvRSSSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x14014B91C (-ndisIovHWvRSSSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z.c)
 */

char __fastcall ndisOidPreIovNicSwitchParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  char v2; // bl
  __int64 v4; // r13
  __int64 v5; // rax
  int v6; // edx
  struct _NDIS_MINIPORT_BLOCK *v7; // xmm2_8
  int v8; // eax
  int *v9; // rcx
  unsigned int v10; // esi
  int v11; // eax
  char v12; // di
  int v13; // eax
  _LIST_ENTRY *SwitchBySwitchId; // r9
  int v15; // eax
  unsigned int v16; // r8d
  _BYTE *OidSourceHandle; // rax
  int v18; // edx
  __int64 v19; // r9
  int v20; // eax
  unsigned __int16 v21; // cx
  int v22; // edx
  unsigned int v23; // eax
  unsigned int MaxNumVFs; // ecx
  unsigned __int16 v25; // r9
  char v27[8]; // [rsp+30h] [rbp-C8h]
  __m128i v28; // [rsp+50h] [rbp-A8h]
  struct _NDIS_NIC_SWITCH_CAPABILITIES *v29[2]; // [rsp+60h] [rbp-98h]
  __int128 v30; // [rsp+70h] [rbp-88h]
  __int64 v31; // [rsp+90h] [rbp-68h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  v4 = 0LL;
  v5 = ndisCaptureIovOidContext((__int64)&v31, a1);
  v28 = *(__m128i *)v5;
  *(_OWORD *)v29 = *(_OWORD *)(v5 + 16);
  v30 = *(_OWORD *)(v5 + 32);
  v7 = (struct _NDIS_MINIPORT_BLOCK *)_mm_srli_si128(*(__m128i *)v5, 8).m128i_u64[0];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      26,
      27,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v7,
      v1);
  }
  v8 = *(_DWORD *)(v1 + 4);
  v9 = (int *)((char *)a1 + 40);
  v10 = 548;
  if ( v8 == 12 )
  {
    *v9 = 0;
    if ( *(_DWORD *)(v1 + 48) < 0x224u )
    {
      v11 = -1073676268;
LABEL_8:
      *(_DWORD *)(v1 + 68) = 548;
LABEL_9:
      *v9 = v11;
LABEL_10:
      v2 = 1;
      v12 = 0;
      goto LABEL_68;
    }
    if ( *(_DWORD *)(v1 + 52) < 0x224u )
    {
      v11 = -1073676266;
      goto LABEL_8;
    }
    if ( *(_BYTE *)(*(_QWORD *)(v1 + 40) + 1LL) >= 2u )
    {
      v10 = 552;
      if ( *(_DWORD *)(v1 + 48) < 0x228u )
      {
        v11 = -1073676268;
LABEL_16:
        *(_DWORD *)(v1 + 68) = 552;
        goto LABEL_9;
      }
      if ( *(_DWORD *)(v1 + 52) < 0x228u )
      {
        v11 = -1073676266;
        goto LABEL_16;
      }
    }
  }
  else
  {
    if ( v8 != 1 )
    {
      *v9 = -1073741637;
      goto LABEL_10;
    }
    *v9 = 0;
    if ( *(_DWORD *)(v1 + 48) < 0x224u )
    {
      *(_DWORD *)(v1 + 56) = 548;
      *v9 = -1073676268;
      goto LABEL_10;
    }
    if ( *(_BYTE *)(*(_QWORD *)(v1 + 40) + 1LL) >= 2u )
    {
      *v9 = 0;
      v10 = 552;
      if ( *(_DWORD *)(v1 + 48) < 0x228u )
      {
        *(_DWORD *)(v1 + 56) = 552;
        *((_DWORD *)a1 + 10) = -1073676268;
        goto LABEL_10;
      }
    }
  }
  if ( !v28.m128i_i8[0] )
    goto LABEL_67;
  v13 = *(_DWORD *)(v1 + 4);
  if ( v13 == 12 )
  {
    *(_DWORD *)(v1 + 60) = 0;
    *(_DWORD *)(v1 + 64) = v10;
LABEL_28:
    v4 = *(_QWORD *)(v1 + 40);
    goto LABEL_29;
  }
  if ( v13 == 1 )
  {
    *(_DWORD *)(v1 + 52) = v10;
    goto LABEL_28;
  }
LABEL_29:
  if ( !ndisIovNicSwitchWithoutIovSupported(v29[1])
    && (!*((_QWORD *)&v30 + 1) || !v29[1] || (*(_BYTE *)(*((_QWORD *)&v30 + 1) + 8LL) & 3) != 3) )
  {
    goto LABEL_33;
  }
  SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v7, *(_DWORD *)(v4 + 12));
  if ( !SwitchBySwitchId )
  {
LABEL_37:
    *((_DWORD *)a1 + 10) = -1073741811;
    goto LABEL_34;
  }
  v15 = *(_DWORD *)(v1 + 4);
  if ( v15 == 12 )
  {
    memmove(*(void **)(v1 + 40), (char *)&SwitchBySwitchId[6].Flink + 4, v10);
    *((_DWORD *)a1 + 10) = 0;
    *(_DWORD *)(v1 + 60) = v10;
    goto LABEL_34;
  }
  if ( v15 != 1 )
  {
LABEL_67:
    v12 = 0;
    goto LABEL_68;
  }
  if ( v10 >= 0x228 )
  {
    if ( ndisIovHWvRSSSupported(v29[1]) )
    {
      if ( !v16 || v16 > v29[1]->MaxNumQueuePairsForDefaultVPort )
        goto LABEL_37;
    }
    else if ( v16 != 1 )
    {
      *((_DWORD *)a1 + 10) = -1073741637;
    }
  }
  OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1);
  if ( !OidSourceHandle || *OidSourceHandle != 18 )
  {
LABEL_33:
    *((_DWORD *)a1 + 10) = -1073741637;
LABEL_34:
    v12 = 0;
    v2 = 1;
    goto LABEL_68;
  }
  v12 = (char)OidSourceHandle;
  v20 = *(_DWORD *)(v4 + 4);
  if ( (v20 & 0x30000) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v18,
        26,
        28,
        (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids);
    }
    goto LABEL_53;
  }
  if ( (v20 & 0x10000) != 0 )
  {
    v21 = *(_WORD *)(v4 + 16);
    v22 = 512;
    if ( v21 > 0x200u )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v22) = 2;
        WPP_RECORDER_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v22,
          26,
          29,
          (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
          v21);
      }
      goto LABEL_53;
    }
  }
  if ( (v20 & 0x20000) != 0 )
  {
    v23 = *(_DWORD *)(v4 + 532);
    MaxNumVFs = *(_DWORD *)(v19 + 72);
    if ( v23 < MaxNumVFs )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_53:
        v2 = 1;
        *((_DWORD *)a1 + 10) = -1073741811;
        goto LABEL_68;
      }
      v25 = 30;
LABEL_62:
      *(_DWORD *)v27 = MaxNumVFs;
      WPP_RECORDER_SF_Ld(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x1Au,
        v25,
        (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
        v23,
        *(_QWORD *)v27);
      goto LABEL_53;
    }
    MaxNumVFs = v29[1]->MaxNumVFs;
    if ( v23 > MaxNumVFs )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_53;
      v25 = 31;
      goto LABEL_62;
    }
  }
LABEL_68:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x20u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v7,
      v12,
      v2,
      *((_DWORD *)a1 + 10));
  return v2;
}
