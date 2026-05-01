/*
 * XREFs of ??$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByApplication@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18002A498
 * Callers:
 *     ?_RemoveApplication@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x1800910D8 (-_RemoveApplication@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_SetApplicationPos@CApplicationManager@@AEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAXW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x18009E348 (-_SetApplicationPos@CApplicationManager@@AEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DA.c)
 *     ?TerminateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4PLM_TERMINATE_FLAGS@@PEAW4PLM_TASKCOMPLETION_CATEGORY_FLAGS@@@Z @ 0x1800A0810 (-TerminateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4PLM_TERMINATE_FLAGS.c)
 *     ?ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperation@@@Z @ 0x1801419D0 (-ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperati.c)
 *     ?ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImmersiveApplication@@@Z @ 0x1801C5D40 (-ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUII.c)
 *     ?SetApplicationViewPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewPosition@@W4SET_IMM_APP_POS@@@Z @ 0x18020DDC0 (-SetApplicationViewPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicatio.c)
 *     ?GetSizeConstraintOverrides@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUtagSIZE@@111@Z @ 0x1802334A0 (-GetSizeConstraintOverrides@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUtagSIZE@@11.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByApplication>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v7; // r15
  unsigned __int64 i; // rsi
  int (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rbx
  int (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rdi
  int v11; // edi
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 (__fastcall ***v14)(_QWORD, GUID *, _QWORD *); // rcx
  int v15; // [rsp+80h] [rbp+40h] BYREF
  _QWORD *v16; // [rsp+88h] [rbp+48h]
  __int64 v17; // [rsp+90h] [rbp+50h] BYREF

  v16 = a2;
  if ( a3 )
    *a3 = 0LL;
  v7 = 0LL;
  for ( i = 0LL; i < *(_QWORD *)(a1 + 640); ++i )
  {
    v9 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(a1 + 632) + 8 * i);
    if ( v9 )
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v9)[1])(v9);
    v17 = 0LL;
    v10 = **v9;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
    if ( v10(v9, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v17) < 0 )
    {
      v11 = -1;
    }
    else
    {
      v15 = 0;
      (*(void (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v17 + 104LL))(v17, *v16, &v15);
      v11 = (v15 != 0) - 1;
    }
    v12 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v9)[2])(v9);
    if ( !v11 )
    {
      v7 = i;
      result = 0LL;
      goto LABEL_14;
    }
  }
  result = 2147647531LL;
LABEL_14:
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      v14 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*(_QWORD *)(a1 + 632) + 8 * v7);
      result = (**v14)(v14, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, a3);
    }
    if ( a4 )
      *a4 = v7;
  }
  return result;
}
