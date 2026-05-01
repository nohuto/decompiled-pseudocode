/*
 * XREFs of ??$FindEx@VComPtrCompareHelper@@@?$CTSimpleFixedArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJAEBVComPtrCompareHelper@@AEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18016D054
 * Callers:
 *     ?_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x18016E200 (-_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTO.c)
 *     ?Remove@?$CTSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@PEA_K@Z @ 0x18054FCD8 (-Remove@-$CTSimpleArray@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTask.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,ComPtrCompareHelper>::FindEx<ComPtrCompareHelper>(
        _QWORD *a1,
        __int64 a2,
        __int64 (__fastcall ****a3)(_QWORD, GUID *, __int64 *),
        unsigned __int64 *a4)
{
  unsigned __int64 i; // rbx
  int (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall **v10)(_QWORD, GUID *, __int64 *); // rax
  int v11; // edi
  int v12; // eax
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = a2;
  *a4 = 0LL;
  for ( i = 0LL; i < a1[1]; ++i )
  {
    v8 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*a1 + 8 * i);
    if ( v8 )
    {
      v9 = *a3;
      if ( *a3 )
      {
        if ( v8 == (int (__fastcall ***)(_QWORD, GUID *, __int64 *))v9 )
          goto LABEL_14;
        v10 = *v8;
        v14 = 0LL;
        v15 = 0LL;
        if ( (*v10)(v8, &GUID_00000000_0000_0000_c000_000000000046, &v14) < 0 )
          goto LABEL_11;
        v11 = (**v9)(v9, &GUID_00000000_0000_0000_c000_000000000046, &v15);
        if ( v11 >= 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        if ( v11 >= 0 && v14 == v15 )
          v12 = 1;
        else
LABEL_11:
          v12 = 0;
        if ( v12 )
        {
LABEL_14:
          *a4 = i;
          return 0LL;
        }
      }
    }
  }
  return 2147647531LL;
}
