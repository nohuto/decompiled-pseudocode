/*
 * XREFs of IsFeatureEnabledUncached @ 0x140281B78
 * Callers:
 *     ?DxgkIsFeatureEnabled@@YAJPEAUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@UDXGK_ISFEATUREENABLED_FLAGS@@PEAU_DXGK_ISFEATUREENABLED_RESULT@@@Z @ 0x14028134C (-DxgkIsFeatureEnabled@@YAJPEAUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@UDXGK_ISFEATUREENABLED_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkIsVmConnectedToHost@@YA_NXZ @ 0x140068738 (-DxgkIsVmConnectedToHost@@YA_NXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     CheckFeatureDependencies @ 0x140280AE8 (CheckFeatureDependencies.c)
 *     ConfigureFeature @ 0x140280BF4 (ConfigureFeature.c)
 *     IsFeatureEnabledHost @ 0x140281998 (IsFeatureEnabledHost.c)
 */

__int64 __fastcall IsFeatureEnabledUncached(__int64 a1, signed int a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // r13
  unsigned int v7; // edi
  __int64 v8; // r15
  __int64 result; // rax
  __int64 v10; // r13
  __int16 v11; // dx
  int **v12; // r8
  bool v13; // zf
  unsigned __int16 v14; // r12
  __int64 v15; // rcx
  bool v16; // al
  __int16 v17; // ax
  __int16 v18; // cx
  __int16 v19; // ax
  __int16 v20; // cx
  unsigned __int16 v21; // cx
  bool v22; // cc
  unsigned __int8 v23; // al
  __int16 v24; // cx
  __int16 v25; // ax
  _BYTE v26[2]; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int16 v27; // [rsp+52h] [rbp-1Eh]
  unsigned __int64 v28; // [rsp+58h] [rbp-18h] BYREF
  int v29; // [rsp+60h] [rbp-10h]

  v3 = a2;
  v28 = (unsigned __int64)(unsigned int)a2 >> 28;
  v6 = a2 & 0xFFFFFFF;
  v7 = 0;
  if ( (a2 & 0xFFFFFFFu) >= dword_1400A6BE8[4 * v28] )
    v8 = 0LL;
  else
    v8 = *((_QWORD *)&g_FeatureDescriptorTables + 2 * v28) + 6 * v6;
  *(struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS *)a3 = DXGDEVICE::DestroyFlagsDefault;
  if ( v8 )
  {
    *(_WORD *)(a3 + 2) |= 2u;
    if ( (*(_BYTE *)(v8 + 4) & 0x10) == 0 && (*(_DWORD *)(a1 + 848) & 1) != 0 )
    {
      WdLogSingleEntry2(2LL, a2, a1);
      WdLogGlobalForLineNumber = 866;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Querying an adapter-specific feature must be done on an adapter database. FeatureId=%u, Database=0x%.16x",
        v3,
        a1,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
    ConfigureFeature(a1, a2, v8);
    v10 = *(_QWORD *)(a1 + 8 * v28 + 656) + 6 * v6;
    if ( (*(_BYTE *)(v8 + 4) & 0x10) != 0 && DxgkIsVmConnectedToHost() || (*(_DWORD *)(a1 + 848) & 2) != 0 )
    {
      v11 = *(_WORD *)(v8 + 4) & 0xE;
      if ( v11 == 4 )
      {
        WdLogSingleEntry1(4LL, v3);
        WdLogGlobalForLineNumber = 890;
        return 0LL;
      }
      if ( (*(_BYTE *)(v10 + 4) & 1) != 0 && v11 == 6 || v11 == 8 )
        return IsFeatureEnabledHost(a1, v3, v8, (_WORD *)v10, a3);
    }
    if ( (*(_BYTE *)(v10 + 4) & 1) != 0 )
    {
      v26[0] = 0;
      if ( ((unsigned int)v3 & 0xFFFFFFF) >= dword_1400A6CE8[4 * ((unsigned __int64)(unsigned int)v3 >> 28)] )
        v12 = 0LL;
      else
        v12 = (int **)(*((_QWORD *)&g_FeatureDependencyTables + 2 * ((unsigned __int64)(unsigned int)v3 >> 28))
                     + 16 * (v3 & 0xFFFFFFF));
      result = CheckFeatureDependencies(a1, v3, v12, v26);
      if ( (int)result < 0 || !v26[0] )
        return result;
      v13 = (*(_BYTE *)(v8 + 4) & 0x20) == 0;
      v14 = *(_WORD *)(v10 + 2);
      v27 = *(_WORD *)v10;
      if ( v13 )
        goto LABEL_43;
      v15 = *(_QWORD *)(a1 + 800);
      v28 = 0LL;
      v29 = 0;
      v16 = (*(_BYTE *)(v10 + 4) & 2) != 0;
      LODWORD(v28) = v3;
      LOBYTE(v29) = v16;
      if ( (*(int (__fastcall **)(__int64, unsigned __int64 *))(a1 + 824))(v15, &v28) >= 0 )
      {
        if ( BYTE1(v29) )
          v18 = 4;
        else
          v18 = 0;
        v19 = v18 | *(_WORD *)(a3 + 2) & 0xFFFB;
        if ( BYTE2(v29) )
          v20 = 8;
        else
          v20 = 0;
        v17 = v20 | v19 & 0xFFF7;
        v21 = v27;
        v22 = v27 <= WORD2(v28);
        *(_WORD *)(a3 + 2) = v17;
        if ( v22 )
          v21 = WORD2(v28);
        if ( v14 >= HIWORD(v28) )
          v14 = HIWORD(v28);
        if ( v14 < v21 )
          return 0LL;
      }
      else
      {
        v17 = *(_WORD *)(a3 + 2) & 0xFFF3;
        *(_WORD *)(a3 + 2) = v17;
      }
      if ( (v17 & 0xC) == 0xC )
      {
LABEL_43:
        WdLogSingleEntry1(4LL, v3);
        v23 = *(_BYTE *)(v10 + 4) & 1;
        WdLogGlobalForLineNumber = 988;
        v24 = v23;
        v25 = *(_WORD *)(a3 + 2) & 0xFFFE;
        *(_WORD *)a3 = v14;
        *(_WORD *)(a3 + 2) = v25 | v24;
      }
    }
    else
    {
      WdLogSingleEntry2(4LL, v3, a1);
      WdLogGlobalForLineNumber = 914;
    }
    return 0LL;
  }
  if ( DxgkIsVmConnectedToHost() || (*(_DWORD *)(a1 + 848) & 2) != 0 )
    return (unsigned int)IsFeatureEnabledHost(a1, v3, 0LL, 0LL, a3);
  return v7;
}
