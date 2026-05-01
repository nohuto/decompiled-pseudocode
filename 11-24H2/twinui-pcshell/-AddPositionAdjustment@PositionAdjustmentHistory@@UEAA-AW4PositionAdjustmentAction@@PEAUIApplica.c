/*
 * XREFs of ?AddPositionAdjustment@PositionAdjustmentHistory@@UEAA?AW4PositionAdjustmentAction@@PEAUIApplicationView@@@Z @ 0x1805248C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180136920 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x18014075C (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x1801E1988 (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEBAXXZ @ 0x180215968 (-InternalAddRef@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a506e902e7170e918a173785fdf388b8_____lambda_a506e902e7170e918a173785fdf388b8___ @ 0x1805247B4 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a506e902e7170.c)
 *     ?GetEntryCountForView@PositionAdjustmentHistory@@AEAAIPEAUIApplicationView@@@Z @ 0x180524A50 (-GetEntryCountForView@PositionAdjustmentHistory@@AEAAIPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PositionAdjustmentHistory::AddPositionAdjustment(
        PositionAdjustmentHistory *a1,
        struct IApplicationView *a2)
{
  void *v4; // r8
  ULONGLONG TickCount64; // r13
  unsigned int v6; // edi
  int v7; // esi
  volatile int *v8; // rdx
  __int64 v9; // rbx
  __int64 *v10; // rbx
  volatile int *v11; // rdx
  volatile signed __int32 **v12; // rax
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int EntryCountForView; // eax
  __int64 v18[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  PositionAdjustmentHistory *v20; // [rsp+80h] [rbp+40h] BYREF
  volatile signed __int32 *v21; // [rsp+88h] [rbp+48h] BYREF
  PositionAdjustmentHistory *v22; // [rsp+90h] [rbp+50h] BYREF

  v18[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v18);
  TickCount64 = GetTickCount64();
  v18[1] = TickCount64;
  v6 = 0;
  v7 = 0;
  v8 = (volatile int *)*((_QWORD *)a1 + 4);
  if ( v8 != *((volatile int **)a1 + 6)
    || (v7 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
               (__int64)a1 + 24,
               (unsigned __int64)v8 + 1,
               v4),
        v7 >= 0) )
  {
    v9 = *((_QWORD *)a1 + 4);
    *((_QWORD *)a1 + 4) = v9 + 1;
    v10 = (__int64 *)(*((_QWORD *)a1 + 3) + 16 * v9);
    if ( v10 )
    {
      *v10 = (__int64)a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v10);
      v10[1] = TickCount64;
    }
  }
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2B,
      (int)"pcshell\\twinui\\tabletmode\\lib\\positionadjustmenthistory.cpp",
      (const char *)(unsigned int)v7);
  v22 = a1;
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalAddRef((__int64 *)&v22, v8);
  v20 = a1;
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalAddRef((__int64 *)&v20, v11);
  v12 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a506e902e7170e918a173785fdf388b8_____lambda_a506e902e7170e918a173785fdf388b8___(
          &v21,
          (volatile signed __int32 *)&v20);
  v13 = *v12;
  *v12 = 0LL;
  v14 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v14);
  }
  CurrentThreadId = GetCurrentThreadId();
  SHTaskPoolQueueTask(2LL, 0LL, CurrentThreadId);
  if ( v13 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease((__int64 *)&v20);
  EntryCountForView = PositionAdjustmentHistory::GetEntryCountForView(a1, a2);
  if ( EntryCountForView >= 3 )
    v6 = 2 - (EntryCountForView < 4);
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease((__int64 *)&v22);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v18);
  return v6;
}
