/*
 * XREFs of ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1402CE380
 * Callers:
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x14025E080 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1402CE0CC (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1402D0358 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ?Add@?$Set@VDMMVIDPNPRESENTPATH@@@@QEAAEQEAVDMMVIDPNPRESENTPATH@@@Z @ 0x140038B3C (-Add@-$Set@VDMMVIDPNPRESENTPATH@@@@QEAAEQEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x14003B78C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x14003EF8C (-OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AddPath(
        DMMVIDPNTOPOLOGY *this,
        struct DMMVIDPNPRESENTPATH *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // r15
  DMMVIDPNTOPOLOGY *v9; // r14
  DMMVIDPNTOPOLOGY *v10; // r8
  int v11; // edx
  __int64 v12; // r10
  _QWORD *v13; // rcx
  __int64 v14; // r9
  char v15; // r12
  char *v16; // rcx
  __int64 result; // rax
  DMMVIDPNTOPOLOGY *v18; // rax
  DMMVIDPNTOPOLOGY *v19; // rax
  __int64 v20; // rbx
  DMMVIDPNTOPOLOGY *v21; // rax
  __int64 v22; // rdx

  v4 = (int)a3;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 546;
  }
  v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v7[3] = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
  v7[4] = *(unsigned int *)(*((_QWORD *)a2 + 12) + 24LL);
  v7[5] = *((int *)a2 + 26);
  v7[6] = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
  v7[7] = v4;
  WdLogGlobalForLineNumber = 550;
  if ( *((_BYTE *)this + 76) <= 1u )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 243;
  }
  if ( (*((_BYTE *)this + 78) & 2) == 0 )
  {
    WdLogSingleEntry1(2LL, this);
    result = 3221225506LL;
    WdLogGlobalForLineNumber = 555;
    return result;
  }
  v8 = *((_QWORD *)a2 + 12);
  v9 = (DMMVIDPNTOPOLOGY *)((char *)this + 24);
  v10 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)this + 3);
  v11 = *(_DWORD *)(v8 + 24);
  v12 = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
  if ( v10 != (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
  {
    v13 = (_QWORD *)((char *)v10 - 8);
    if ( v10 != (DMMVIDPNTOPOLOGY *)8 )
    {
      do
      {
        if ( *(_DWORD *)(v13[11] + 24LL) == (_DWORD)v12 && *(_DWORD *)(v13[12] + 24LL) == v11 )
          break;
        v18 = (DMMVIDPNTOPOLOGY *)v13[1];
        v13 = (_QWORD *)((char *)v18 - 8);
        if ( v18 == v9 )
          v13 = 0LL;
      }
      while ( v13 );
      if ( v13 )
      {
        WdLogSingleEntry2(3LL, a2, this);
        result = 3223192339LL;
        WdLogGlobalForLineNumber = 565;
        return result;
      }
    }
  }
  v14 = *(_QWORD *)(v8 + 96);
  v15 = *(_BYTE *)(v14 + 406);
  if ( v10 != v9 )
  {
    v16 = (char *)v10 - 8;
    while ( v16 )
    {
      if ( *(_DWORD *)(*((_QWORD *)v16 + 12) + 24LL) == v11 )
      {
        WdLogSingleEntry3(7LL, a2, this, *(unsigned int *)(v8 + 24));
        result = 3223192320LL;
        WdLogGlobalForLineNumber = 585;
        return result;
      }
      v19 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v16 + 1);
      v16 = (char *)v19 - 8;
      if ( v19 == v9 )
        v16 = 0LL;
    }
  }
  if ( !*(_QWORD *)(v14 + 112) )
  {
    if ( (_DWORD)v4 == 1 )
    {
      WdLogSingleEntry2(7LL, v12, *(unsigned int *)(v8 + 24));
      WdLogGlobalForLineNumber = 610;
    }
    else
    {
      if ( (_DWORD)v4 == 2 )
      {
        WdLogSingleEntry3(7LL, a2, this, *(unsigned int *)(v8 + 24));
        result = 3223192376LL;
        WdLogGlobalForLineNumber = 602;
        return result;
      }
      if ( (unsigned int)(v4 - 1) > 1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 619;
      }
    }
  }
  if ( *(DMMVIDPNTOPOLOGY **)v9 == v9 )
    v20 = 0LL;
  else
    v20 = *(_QWORD *)v9 - 8LL;
  while ( v20 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(v20 + 88) + 24LL) == *(_DWORD *)(*((_QWORD *)a2 + 11) + 24LL) )
    {
      if ( v15 )
      {
        WdLogSingleEntry2(3LL, v8, -1071774975LL);
        WdLogGlobalForLineNumber = 636;
        return 3223192321LL;
      }
      v22 = *(_QWORD *)(v20 + 96);
      if ( *(_BYTE *)(*(_QWORD *)(v22 + 96) + 406LL) )
      {
        WdLogSingleEntry2(3LL, v22, -1071774975LL);
        WdLogGlobalForLineNumber = 646;
        return 3223192321LL;
      }
    }
    if ( *(_DWORD *)(v20 + 104) == *((_DWORD *)a2 + 26) )
    {
      WdLogSingleEntry4(3LL, a2, *((int *)a2 + 26), v8, this);
      WdLogGlobalForLineNumber = 657;
    }
    v21 = *(DMMVIDPNTOPOLOGY **)(v20 + 8);
    v20 = (__int64)v21 - 8;
    if ( v21 == v9 )
      v20 = 0LL;
  }
  if ( Set<DMMVIDPNPRESENTPATH>::Add((__int64)this, (__int64)a2) != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 702;
  }
  if ( this )
  {
    if ( *((_QWORD *)a2 + 6) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 86;
    }
    *((_QWORD *)a2 + 6) = this;
  }
  else
  {
    WdLogSingleEntry2(2LL, (char *)a2 + 40, *((_QWORD *)a2 + 6));
    WdLogGlobalForLineNumber = 79;
  }
  *((_DWORD *)this + 49) |= 1 << (*((_DWORD *)a2 + 26) - 1);
  ProtectableFromChange::OnModifyingActionCompletion((DMMVIDPNTOPOLOGY *)((char *)this + 56), 1u);
  return 0LL;
}
