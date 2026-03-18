/*
 * XREFs of ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1402C6934
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x140026028 (-SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x1402519C4 (-DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MUL.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1402545D4 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@.c)
 *     ?PinMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I@Z @ 0x14025EE30 (-PinMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1402C66BC (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 * Callees:
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x14001CB60 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z @ 0x14002EE70 (-FindById@-$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x14003B78C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODESET::PinMode(DMMVIDPNSOURCEMODESET *this, unsigned int a2)
{
  DMMVIDPNPRESENTPATH *v2; // rdi
  __int64 v3; // r15
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 Container; // rax
  __int64 v8; // r12
  __int64 v9; // rbp
  _QWORD *v10; // r13
  _QWORD *v11; // rcx
  __int64 v12; // r8
  int v13; // r10d
  _QWORD *v14; // rdx
  _QWORD *v15; // r9
  int v16; // edx
  unsigned __int8 IsValidContentScaling; // al
  _QWORD *v18; // rax
  __int64 v19; // rdi
  _QWORD *v20; // rax
  __int64 result; // rax
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+60h] [rbp+8h]

  v2 = 0LL;
  v3 = a2;
  if ( !*((_BYTE *)this + 136) )
  {
    WdLogSingleEntry2(7LL, a2, this);
    result = 3223192352LL;
    WdLogGlobalForLineNumber = 182;
    return result;
  }
  v5 = IndexedSet<DMMVIDPNSOURCEMODE>::FindById((__int64)this + 24, a2);
  if ( !v5 )
  {
    WdLogSingleEntry2(2LL, v3, this);
    result = 3223192394LL;
    WdLogGlobalForLineNumber = 195;
    return result;
  }
  v6 = *((_QWORD *)this + 14);
  v24 = *((_QWORD *)this + 18);
  *((_QWORD *)this + 18) = v5;
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL, this);
    result = 3223192328LL;
    WdLogGlobalForLineNumber = 217;
    return result;
  }
  if ( !*(_QWORD *)(v6 + 40) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v6 + 40) + 64LL);
  v8 = 0LL;
  v9 = Container + 96;
  v10 = (_QWORD *)(Container + 120);
  while ( 2 )
  {
    v11 = (_QWORD *)*v10;
    v12 = 0LL;
    v13 = *(_DWORD *)(v6 + 24);
    if ( (_QWORD *)*v10 == v10 )
      v14 = 0LL;
    else
      v14 = v11 - 1;
    v15 = v11 - 1;
    while ( 1 )
    {
      if ( !v14 )
      {
        if ( v11 == v10 || v11 == (_QWORD *)8 )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, 0LL, v12, v15) + 24) = v9;
          WdLogGlobalForLineNumber = 195;
        }
        else
        {
          v19 = *(unsigned int *)(v6 + 24);
          if ( v12 )
          {
            v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, 0LL, v12, v15);
            v20[3] = v9;
            v20[4] = v19;
            v20[5] = v8;
            WdLogGlobalForLineNumber = 179;
            return 0LL;
          }
          v23 = WdLogNewEntry5_WdTrace(v11, 0LL, 0LL, v15);
          *(_QWORD *)(v23 + 24) = v19;
          *(_QWORD *)(v23 + 32) = v9;
          WdLogGlobalForLineNumber = 187;
        }
        WdLogSingleEntry4(2LL, v8, v3, this, -1071774919LL);
        result = 3223192377LL;
        WdLogGlobalForLineNumber = 242;
        return result;
      }
      if ( *(_DWORD *)(v14[11] + 24LL) == v13 )
        break;
LABEL_23:
      v18 = (_QWORD *)v14[1];
      v14 = v18 - 1;
      if ( v18 == v10 )
        v14 = 0LL;
    }
    if ( v12 != v8 )
    {
      ++v12;
      goto LABEL_23;
    }
    v16 = *(_DWORD *)(v14[12] + 24LL);
    if ( v16 == -1 )
      return 0LL;
    if ( v11 == v10 )
      goto LABEL_35;
    v2 = (DMMVIDPNPRESENTPATH *)(v11 - 1);
    while ( v2 && (*(_DWORD *)(*((_QWORD *)v2 + 11) + 24LL) != v13 || *(_DWORD *)(*((_QWORD *)v2 + 12) + 24LL) != v16) )
    {
      v22 = (_QWORD *)*((_QWORD *)v2 + 1);
      v2 = (DMMVIDPNPRESENTPATH *)(v22 - 1);
      if ( v22 == v10 )
        v2 = 0LL;
    }
    if ( !v2 )
    {
LABEL_35:
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 262;
    }
    IsValidContentScaling = DMMVIDPNPRESENTPATH::IsValidContentScaling(v2);
    v2 = 0LL;
    if ( IsValidContentScaling )
    {
      ++v8;
      continue;
    }
    break;
  }
  WdLogSingleEntry4(
    2LL,
    *(unsigned int *)(v5 + 76),
    *(unsigned int *)(v5 + 80),
    *(int *)(v5 + 96),
    *(unsigned int *)(v6 + 24));
  *((_QWORD *)this + 18) = v24;
  result = 3223192389LL;
  WdLogGlobalForLineNumber = 273;
  return result;
}
