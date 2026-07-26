/*
 * XREFs of ?ndisOidPreIovNicSwitchParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E8C90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x140026CC0 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x14005D3E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_D @ 0x14006D370 (WPP_RECORDER_SF_D_ea_14006D370.c)
 *     WPP_RECORDER_SF_Ld @ 0x140072CB0 (WPP_RECORDER_SF_Ld.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140097870 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400E4768 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1400E6328 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     ?ndisIovHWvRSSSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1401565EC (-ndisIovHWvRSSSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z.c)
 */

char __fastcall ndisOidPreIovNicSwitchParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  char v2; // bl
  __int64 v4; // r13
  __int64 v5; // rax
  struct _NDIS_MINIPORT_BLOCK *v6; // xmm2_8
  int v7; // eax
  int *v8; // rcx
  unsigned int v9; // esi
  int v10; // eax
  char v11; // di
  int v12; // eax
  _LIST_ENTRY *SwitchBySwitchId; // r9
  int v14; // eax
  unsigned int v15; // r8d
  _BYTE *OidSourceHandle; // rax
  int v17; // edx
  __int64 v18; // r9
  int v19; // eax
  unsigned int v20; // eax
  unsigned int MaxNumVFs; // ecx
  unsigned __int16 v22; // r9
  char v24[8]; // [rsp+28h] [rbp-D0h]
  char v25[8]; // [rsp+30h] [rbp-C8h]
  __m128i v26; // [rsp+50h] [rbp-A8h]
  struct _NDIS_NIC_SWITCH_CAPABILITIES *v27[2]; // [rsp+60h] [rbp-98h]
  __int128 v28; // [rsp+70h] [rbp-88h]
  __int64 v29; // [rsp+90h] [rbp-68h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  v4 = 0LL;
  v5 = ndisCaptureIovOidContext((__int64)&v29, a1);
  v26 = *(__m128i *)v5;
  *(_OWORD *)v27 = *(_OWORD *)(v5 + 16);
  v28 = *(_OWORD *)(v5 + 32);
  v6 = (struct _NDIS_MINIPORT_BLOCK *)_mm_srli_si128(*(__m128i *)v5, 8).m128i_u64[0];
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x1Bu,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v6,
      v1);
  v7 = *(_DWORD *)(v1 + 4);
  v8 = (int *)((char *)a1 + 40);
  v9 = 548;
  if ( v7 == 12 )
  {
    *v8 = 0;
    if ( *(_DWORD *)(v1 + 48) < 0x224u )
    {
      v10 = -1073676268;
LABEL_8:
      *(_DWORD *)(v1 + 68) = 548;
LABEL_9:
      *v8 = v10;
LABEL_10:
      v2 = 1;
      v11 = 0;
      goto LABEL_68;
    }
    if ( *(_DWORD *)(v1 + 52) < 0x224u )
    {
      v10 = -1073676266;
      goto LABEL_8;
    }
    if ( *(_BYTE *)(*(_QWORD *)(v1 + 40) + 1LL) >= 2u )
    {
      v9 = 552;
      if ( *(_DWORD *)(v1 + 48) < 0x228u )
      {
        v10 = -1073676268;
LABEL_16:
        *(_DWORD *)(v1 + 68) = 552;
        goto LABEL_9;
      }
      if ( *(_DWORD *)(v1 + 52) < 0x228u )
      {
        v10 = -1073676266;
        goto LABEL_16;
      }
    }
  }
  else
  {
    if ( v7 != 1 )
    {
      *v8 = -1073741637;
      goto LABEL_10;
    }
    *v8 = 0;
    if ( *(_DWORD *)(v1 + 48) < 0x224u )
    {
      *(_DWORD *)(v1 + 56) = 548;
      *v8 = -1073676268;
      goto LABEL_10;
    }
    if ( *(_BYTE *)(*(_QWORD *)(v1 + 40) + 1LL) >= 2u )
    {
      *v8 = 0;
      v9 = 552;
      if ( *(_DWORD *)(v1 + 48) < 0x228u )
      {
        *(_DWORD *)(v1 + 56) = 552;
        *((_DWORD *)a1 + 10) = -1073676268;
        goto LABEL_10;
      }
    }
  }
  if ( !v26.m128i_i8[0] )
    goto LABEL_67;
  v12 = *(_DWORD *)(v1 + 4);
  if ( v12 == 12 )
  {
    *(_DWORD *)(v1 + 60) = 0;
    *(_DWORD *)(v1 + 64) = v9;
LABEL_28:
    v4 = *(_QWORD *)(v1 + 40);
    goto LABEL_29;
  }
  if ( v12 == 1 )
  {
    *(_DWORD *)(v1 + 52) = v9;
    goto LABEL_28;
  }
LABEL_29:
  if ( !ndisIovNicSwitchWithoutIovSupported(v27[1])
    && (!*((_QWORD *)&v28 + 1) || !v27[1] || (*(_BYTE *)(*((_QWORD *)&v28 + 1) + 8LL) & 3) != 3) )
  {
    goto LABEL_33;
  }
  SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v6, *(_DWORD *)(v4 + 12));
  if ( !SwitchBySwitchId )
  {
LABEL_37:
    *((_DWORD *)a1 + 10) = -1073741811;
    goto LABEL_34;
  }
  v14 = *(_DWORD *)(v1 + 4);
  if ( v14 == 12 )
  {
    memmove(*(void **)(v1 + 40), (char *)&SwitchBySwitchId[6].Flink + 4, v9);
    *((_DWORD *)a1 + 10) = 0;
    *(_DWORD *)(v1 + 60) = v9;
    goto LABEL_34;
  }
  if ( v14 != 1 )
  {
LABEL_67:
    v11 = 0;
    goto LABEL_68;
  }
  if ( v9 >= 0x228 )
  {
    if ( ndisIovHWvRSSSupported(v27[1]) )
    {
      if ( !v15 || v15 > v27[1]->MaxNumQueuePairsForDefaultVPort )
        goto LABEL_37;
    }
    else if ( v15 != 1 )
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
    v11 = 0;
    v2 = 1;
    goto LABEL_68;
  }
  v11 = (char)OidSourceHandle;
  v19 = *(_DWORD *)(v4 + 4);
  if ( (v19 & 0x30000) == 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v17,
        26,
        28,
        (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids);
    }
    goto LABEL_53;
  }
  if ( (v19 & 0x10000) != 0 && *(_WORD *)(v4 + 16) > 0x200u )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v24 = *(unsigned __int16 *)(v4 + 16);
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x1Au,
        0x1Du,
        (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
        *(_QWORD *)v24);
    }
    goto LABEL_53;
  }
  if ( (v19 & 0x20000) != 0 )
  {
    v20 = *(_DWORD *)(v4 + 532);
    MaxNumVFs = *(_DWORD *)(v18 + 72);
    if ( v20 < MaxNumVFs )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      {
LABEL_53:
        v2 = 1;
        *((_DWORD *)a1 + 10) = -1073741811;
        goto LABEL_68;
      }
      v22 = 30;
LABEL_62:
      *(_DWORD *)v25 = MaxNumVFs;
      WPP_RECORDER_SF_Ld(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x1Au,
        v22,
        (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
        v20,
        *(_QWORD *)v25);
      goto LABEL_53;
    }
    MaxNumVFs = v27[1]->MaxNumVFs;
    if ( v20 > MaxNumVFs )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_53;
      v22 = 31;
      goto LABEL_62;
    }
  }
LABEL_68:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x20u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v6,
      v11,
      v2,
      *((_DWORD *)a1 + 10));
  return v2;
}
