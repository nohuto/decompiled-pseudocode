/*
 * XREFs of ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140250990
 * Callers:
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1402525F8 (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 * Callees:
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x140042514 (-FindByValue@-$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1401BFF18 (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1402C28F0 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140409A9C (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPnViaSDC(
        struct _KTHREAD **this,
        struct DMMVIDPN *a2,
        char a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  unsigned int v8; // edx
  __int64 result; // rax
  __int64 v10; // r9
  struct _DXGK_WIN32K_PARAM_DATA *Pool2; // rax
  struct _DXGK_WIN32K_PARAM_DATA *v12; // rdi
  struct DXGADAPTER *ContainingAdapter; // rax
  struct DXGADAPTER *v14; // rax
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rbp
  int v18; // eax
  struct DXGADAPTER *v19; // rax
  PVOID ModesArray; // rcx

  if ( this[8] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1401;
  }
  if ( !Set<DMMVIDPN>::FindByValue((__int64)(this + 17), (__int64)a2) )
  {
    WdLogSingleEntry2(2LL, a2, this);
    WdLogGlobalForLineNumber = 1409;
    return 3223192323LL;
  }
  if ( !DMMVIDPN::IsFunctional(a2, v8) )
  {
    WdLogSingleEntry1(2LL, a2);
    WdLogGlobalForLineNumber = 1418;
    return 3223192323LL;
  }
  Pool2 = (struct _DXGK_WIN32K_PARAM_DATA *)ExAllocatePool2(256LL, 32LL, 1313891414LL, v10);
  v12 = Pool2;
  if ( !Pool2 )
  {
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
    WdLogSingleEntry2(6LL, ContainingAdapter, 32LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 1430;
    return result;
  }
  *(_OWORD *)&Pool2->PathsArray = 0LL;
  *(_OWORD *)&Pool2->NumPathArrayElements = 0LL;
  v14 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
  LOBYTE(v15) = a3;
  v16 = DispConfigConvertFromVidPn(v12, v14, a2, v15);
  LODWORD(v17) = v16;
  if ( v16 < 0 )
  {
    WdLogSingleEntry3(2LL, a2, v12, v16);
    WdLogGlobalForLineNumber = 1456;
  }
  else
  {
    if ( !this[1] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 68;
    }
    v18 = ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(this[1], v12, a4);
    v17 = v18;
    if ( v18 >= 0 )
      return (unsigned int)v17;
    v19 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
    WdLogSingleEntry2(2LL, v19, v17);
    WdLogGlobalForLineNumber = 1448;
  }
  ModesArray = v12->ModesArray;
  if ( ModesArray )
  {
    ExFreePoolWithTag(ModesArray, 0);
    v12->ModesArray = 0LL;
  }
  if ( v12->PathsArray )
  {
    ExFreePoolWithTag(v12->PathsArray, 0);
    v12->PathsArray = 0LL;
  }
  ExFreePoolWithTag(v12, 0);
  return (unsigned int)v17;
}
