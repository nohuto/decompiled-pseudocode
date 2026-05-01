/*
 * XREFs of ?RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1802C03A4
 * Callers:
 *     ??$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEAPEAUHWND__@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@AEAW4TASK_WINDOW_TYPE@@AEAPEAUIImmersiveApplicationInternal@@AEAPEBUtagRECT@@AEAPEBUAPPLICATION_VIEW_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAUITaskWindow@@AEAPEAUHWND__@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@AEAW4TASK_WINDOW_TYPE@@AEAPEAUIImmersiveApplicationInternal@@AEAPEBUtagRECT@@AEAPEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180088964 (--$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEAPEAUHWND__@@AEAPEAUIViewWrapper@ViewManagerI.c)
 *     ?s_CreateInstance@CTaskWindow@@SAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@AEBU_GUID@@PEAPEAX@Z @ 0x1800893C0 (-s_CreateInstance@CTaskWindow@@SAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180033234 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_RegisterForViewReadinessChanges@CTaskWindow@@AEAAJXZ @ 0x1801EA550 (-_RegisterForViewReadinessChanges@CTaskWindow@@AEAAJXZ.c)
 *     ?s_ValidateCreationZbidAndConvert@CTaskWindow@@CA_NW4ZBID@@PEAW4BAND_ID@1@@Z @ 0x1802C5730 (-s_ValidateCreationZbidAndConvert@CTaskWindow@@CA_NW4ZBID@@PEAW4BAND_ID@1@@Z.c)
 *     ?_QueryCloakedState@CTaskWindow@@AEAAXXZ @ 0x180307A20 (-_QueryCloakedState@CTaskWindow@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

signed int __fastcall CTaskWindow::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v10; // rdx
  signed int result; // eax
  __int64 v12; // rcx
  unsigned int v13; // [rsp+48h] [rbp+20h] BYREF

  *(_QWORD *)(a1 + 40) = a2;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 56), a3);
  v10 = a5;
  *(_DWORD *)(a1 + 48) = a4;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 136), v10);
  if ( a2 )
  {
    v12 = *(_QWORD *)(a1 + 40);
    v13 = 0;
    if ( !(unsigned int)GetWindowBand(v12, &v13) )
    {
      result = ResultFromKnownLastError();
      if ( result < 0 )
        return result;
    }
    if ( !(unsigned __int8)CTaskWindow::s_ValidateCreationZbidAndConvert(v13, a1 + 52) )
      return -2147019873;
  }
  else
  {
    *(_DWORD *)(a1 + 52) = 5;
  }
  if ( !a6 || !a7 || (result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 64LL))(a1 + 8), result >= 0) )
  {
    if ( *(_QWORD *)(a1 + 40) )
      CTaskWindow::_QueryCloakedState((CTaskWindow *)a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 152LL))(a1 + 8);
    return CTaskWindow::_RegisterForViewReadinessChanges((CTaskWindow *)a1);
  }
  return result;
}
