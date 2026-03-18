/*
 * XREFs of ?DxgkQuerySwapChainBindingStatus@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14001BB5C
 * Callers:
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x140301AA8 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1403AC990 (-QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORY.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?IsTokenManagerReady@@YAHXZ @ 0x14001A7A4 (-IsTokenManagerReady@@YAHXZ.c)
 *     ?OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z @ 0x14001AB60 (-OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z.c)
 *     ?ResolveHandle@CompositionTokenObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14001B004 (-ResolveHandle@CompositionTokenObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?MarkPending@CompositionTokenObject@@QEAAJXZ @ 0x14001B490 (-MarkPending@CompositionTokenObject@@QEAAJXZ.c)
 *     ?NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14001BDDC (-NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     ?NotifyPendingFlipManagerPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14005C4AC (-NotifyPendingFlipManagerPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkQuerySwapChainBindingStatus(int a1, struct _LUID a2, struct _D3DKMT_PRESENTHISTORYTOKEN *a3)
{
  unsigned int v3; // ebx
  void *FenceValue; // r14
  int v9; // edi
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  UINT64 CompositionSyncKey; // rsi
  __int64 v15; // rax
  __int64 Win32kImportTable; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  PVOID v23; // rbp
  PVOID Object; // [rsp+A0h] [rbp+18h] BYREF
  void *Handle; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0;
  if ( a3->Model == D3DKMT_PM_REDIRECTED_COMPOSITION )
  {
    FenceValue = (void *)a3->Token.Flip.FenceValue;
    if ( FenceValue )
    {
      v9 = 0;
      Object = 0LL;
      Handle = 0LL;
      if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2605;
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(v18, v17, v19, 0LL, 2, -1, L"m_pGlobal != NULL", 45, 0, 0, 0, 0);
        }
      }
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304952LL) + 520LL))();
      if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2605;
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(v21, v20, v22, 0LL, 2, -1, L"m_pGlobal != NULL", 45, 0, 0, 0, 0);
        }
      }
      v10 = (*(__int64 (**)(void))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304952LL) + 552LL))();
      if ( !a1
        || v10
        || !(unsigned int)IsTokenManagerReady()
        || (Win32kImportTable = DxgkGetWin32kImportTable(), !(*(unsigned int (**)(void))(Win32kImportTable + 536))()) )
      {
        v9 = -1071775730;
      }
      v11 = DxgkGetWin32kImportTable();
      (*(void (**)(void))(v11 + 568))();
      if ( v9 < 0 )
        goto LABEL_12;
      v9 = CompositionTokenObject::ResolveHandle(FenceValue, v12, v13, (struct CompositionTokenObject **)&Object);
      if ( v9 < 0 )
        goto LABEL_12;
      v23 = Object;
      v9 = CompositionTokenObject::MarkPending((CompositionTokenObject *)Object);
      if ( v9 >= 0 )
      {
        v9 = DxgkCompositionObject::OpenDwmHandle(v23, &Handle);
        if ( v9 >= 0 )
          a3->Token.Flip.FenceValue = (UINT64)Handle;
      }
      ObfDereferenceObject(v23);
      if ( v9 < 0 )
      {
LABEL_12:
        CompositionSyncKey = a3->Token.Flip.CompositionSyncKey;
        if ( CompositionSyncKey )
        {
          v15 = DxgkGetWin32kImportTable();
          (*(void (__fastcall **)(UINT64))(v15 + 64))(CompositionSyncKey);
        }
      }
      return (unsigned int)v9;
    }
  }
  else if ( a3->Model == D3DKMT_PM_FLIPMANAGER )
  {
    return (unsigned int)NotifyPendingFlipManagerPresent(a1, a2, a3);
  }
  else
  {
    return (unsigned int)NotifyPendingFlipPresent(a1, a2, a3);
  }
  return v3;
}
