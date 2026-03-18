/*
 * XREFs of ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402577C4
 * Callers:
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x140259430 (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 * Callees:
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x140041FA4 (-FindByValue@-$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1401C3488 (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1403627C0 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140401EB8 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPnViaSDC(
        struct _KTHREAD **this,
        struct DMMVIDPN *a2,
        char a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  unsigned int v8; // edx
  __int64 result; // rax
  struct _DXGK_WIN32K_PARAM_DATA *Pool2; // rax
  struct _DXGK_WIN32K_PARAM_DATA *v11; // rdi
  struct DXGADAPTER *ContainingAdapter; // rax
  struct DXGADAPTER *v13; // rax
  int v14; // eax
  __int64 v15; // rbp
  int v16; // eax
  struct DXGADAPTER *v17; // rax
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
  Pool2 = (struct _DXGK_WIN32K_PARAM_DATA *)ExAllocatePool2(256LL, 32LL, 1313891414LL);
  v11 = Pool2;
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
  v13 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
  v14 = DispConfigConvertFromVidPn(v11, v13, a2, a3);
  LODWORD(v15) = v14;
  if ( v14 < 0 )
  {
    WdLogSingleEntry3(2LL, a2, v11, v14);
    WdLogGlobalForLineNumber = 1456;
  }
  else
  {
    if ( !this[1] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 68;
    }
    v16 = ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(this[1], v11, a4);
    v15 = v16;
    if ( v16 >= 0 )
      return (unsigned int)v15;
    v17 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
    WdLogSingleEntry2(2LL, v17, v15);
    WdLogGlobalForLineNumber = 1448;
  }
  ModesArray = v11->ModesArray;
  if ( ModesArray )
  {
    ExFreePoolWithTag(ModesArray, 0);
    v11->ModesArray = 0LL;
  }
  if ( v11->PathsArray )
  {
    ExFreePoolWithTag(v11->PathsArray, 0);
    v11->PathsArray = 0LL;
  }
  ExFreePoolWithTag(v11, 0);
  return (unsigned int)v15;
}
