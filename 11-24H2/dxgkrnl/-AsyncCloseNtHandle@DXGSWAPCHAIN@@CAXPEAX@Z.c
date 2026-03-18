/*
 * XREFs of ?AsyncCloseNtHandle@DXGSWAPCHAIN@@CAXPEAX@Z @ 0x1401FE280
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     Feature_Servicing_DeferredSwapChainClose__private_IsEnabledDeviceUsageNoInline @ 0x140079454 (Feature_Servicing_DeferredSwapChainClose__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

void __fastcall DXGSWAPCHAIN::AsyncCloseNtHandle(void *a1)
{
  __int64 v2; // rbx
  __int64 v3; // [rsp+20h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-48h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  if ( (unsigned int)Feature_Servicing_DeferredSwapChainClose__private_IsEnabledDeviceUsageNoInline()
    && !*((_QWORD *)a1 + 4) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3313;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pWorkItem->pNtProcess != nullptr",
      3313LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeStackAttachProcess(*((PRKPROCESS *)a1 + 4), &ApcState);
  v2 = ObCloseHandle(*((HANDLE *)a1 + 5), 1);
  if ( (unsigned int)Feature_Servicing_DeferredSwapChainClose__private_IsEnabledDeviceUsageNoInline() && (int)v2 < 0 )
  {
    WdLogSingleEntry2(1LL, *((_QWORD *)a1 + 5), v2);
    v3 = *((_QWORD *)a1 + 5);
    WdLogGlobalForLineNumber = 3326;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"Failed to close Nt handle 0x%I64x, error 0x%I64x",
      v3,
      v2,
      0LL,
      0LL,
      0LL);
  }
  KeUnstackDetachProcess(&ApcState);
  ObfDereferenceObject(*((PVOID *)a1 + 4));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a1);
}
