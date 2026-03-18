/*
 * XREFs of ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1402A8390
 * Callers:
 *     ?ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1402FCD78 (-ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z.c)
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1402FD790 (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002B720 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z @ 0x1402A8958 (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1402AA44C (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::Release(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rbp
  unsigned __int64 v8; // r9
  int v9; // esi
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // rax
  const wchar_t *v15; // r9
  __int64 v16; // r9
  size_t Size; // [rsp+28h] [rbp-60h]
  __int64 v18; // [rsp+30h] [rbp-58h]
  _DWORD v19[4]; // [rsp+50h] [rbp-38h] BYREF
  int v20; // [rsp+A0h] [rbp+18h] BYREF

  v4 = a4;
  if ( a3 )
  {
    if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*(_QWORD *)(a1 + 8) + 16LL)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 724;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"(pContext == NULL) || (m_pProducerDevice->GetRenderCore()->IsCoreResourceSharedOwner())",
        724LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v16 = *(_QWORD *)(a1 + 120);
    if ( a3 != v16 )
    {
      WdLogSingleEntry3(1LL, a3, a1, v16);
      v18 = *(_QWORD *)(a1 + 120);
      WdLogGlobalForLineNumber = 729;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"Context 0x%I64x does not own DxgiKeyedMutex 0x%I64x, context 0x%I64x does",
        a3,
        a1,
        v18,
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
  if ( !*(_DWORD *)(a1 + 128) )
  {
    WdLogSingleEntry1(1LL, a1);
    WdLogGlobalForLineNumber = 734;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"DxgiKeyedMutex 0x%I64x has not been acquired",
      a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( !a3 )
    goto LABEL_4;
  v11 = *(_QWORD *)(a1 + 120);
  v12 = *(_QWORD *)(a1 + 112) + 1LL;
  *(_QWORD *)(a1 + 112) = v12;
  v13 = *(_DWORD *)(v11 + 24);
  v19[0] = *(_DWORD *)(a1 + 96);
  v14 = *(_QWORD *)(a3 + 16);
  v20 = v13;
  v9 = SignalSynchronizationObjectInternal(1LL, v19, 0LL, 1LL, &v20, 0LL, v12, 0LL, *(_QWORD *)(v14 + 40), 2);
  if ( v9 < 0 )
  {
    WdLogSingleEntry1(2LL, a1);
    v15 = L"Failed to submit GPU signal for DxgiKeyedMutex 0x%I64x";
    WdLogGlobalForLineNumber = 771;
  }
  else
  {
LABEL_4:
    v8 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 120) = 0LL;
    *(_DWORD *)(a1 + 128) = 0;
    LODWORD(Size) = 0;
    v9 = DXGKEYEDMUTEX::ReleaseSync(
           *(DXGKEYEDMUTEX **)(a1 + 24 * v4 + 24),
           *(_DWORD *)(a1 + 24 * v4 + 16),
           a2,
           v8,
           0LL,
           Size,
           0);
    if ( v9 >= 0 )
      return 0LL;
    WdLogSingleEntry1(2LL, a1);
    v15 = L"Failed to release DxgiKeyedMutex 0x%I64x";
    WdLogGlobalForLineNumber = 784;
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v15, a1, 0LL, 0LL, 0LL, 0LL);
  return (unsigned int)v9;
}
