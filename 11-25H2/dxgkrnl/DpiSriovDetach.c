/*
 * XREFs of DpiSriovDetach @ 0x140242750
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x140237020 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z @ 0x140054E24 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x140055794 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x14005A628 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DpiKsrDoKsrSave @ 0x140249E04 (DpiKsrDoKsrSave.c)
 */

__int64 __fastcall DpiSriovDetach(_QWORD *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned int v7; // esi
  bool v8; // zf
  __int64 v9; // rbx
  void *v10; // rdx
  PIRP v11; // rax
  void *v12; // rdx
  PIRP v13; // rax
  void *v14; // rdx
  PIRP v15; // rax
  signed __int32 v16; // eax
  _BYTE v18[32]; // [rsp+30h] [rbp-38h] BYREF
  int v19; // [rsp+50h] [rbp-18h]

  v4 = a1[8];
  v7 = 0;
  if ( bTracingEnabled )
    VgpuTrace(1, 0, (void *)v4, L"DpiSriovDetach", 0LL);
  v8 = a2 == 0;
  v9 = v4 + 5488;
  if ( !v8 )
    v9 = v4 + 5520;
  if ( *(_BYTE *)(v9 + 28) || *(_QWORD *)v9 )
  {
    LOBYTE(a4) = 1;
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v18, a1, 0LL, a4, 0, 0);
    v7 = v19;
    if ( v19 >= 0 )
    {
      v10 = *(void **)v9;
      *(_BYTE *)(v9 + 28) = 0;
      if ( v10 )
      {
        v11 = IoCsqRemoveNextIrp((PIO_CSQ)(v4 + 5400), v10);
        *(_QWORD *)v9 = 0LL;
        if ( v11 )
        {
          v11->IoStatus.Status = -1073741536;
          v11->IoStatus.Information = 0LL;
          IofCompleteRequest(v11, 0);
        }
      }
      v12 = *(void **)(v9 + 8);
      if ( v12 )
      {
        v13 = IoCsqRemoveNextIrp((PIO_CSQ)(v4 + 5400), v12);
        *(_QWORD *)(v9 + 8) = 0LL;
        if ( v13 )
        {
          v13->IoStatus.Status = -1073741536;
          v13->IoStatus.Information = 0LL;
          IofCompleteRequest(v13, 0);
        }
      }
      v14 = *(void **)(v9 + 16);
      if ( v14 )
      {
        v15 = IoCsqRemoveNextIrp((PIO_CSQ)(v4 + 5400), v14);
        *(_QWORD *)(v9 + 16) = 0LL;
        if ( v15 )
        {
          v15->IoStatus.Status = -1073741536;
          v15->IoStatus.Information = 0LL;
          IofCompleteRequest(v15, 0);
        }
      }
      v16 = _InterlockedDecrement(&dword_14015E308);
      if ( HIBYTE(word_14015E2F8) && !v16 )
        DpiKsrDoKsrSave();
    }
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v18);
    KeClearEvent((PRKEVENT)(v4 + 5568));
  }
  else
  {
    WdLogSingleEntry3(3LL, DpiFdoDispatchIoctl, DpiSriovDetach, 0LL);
    WdLogGlobalForLineNumber = 3027;
  }
  if ( bTracingEnabled )
    VgpuTrace(0, v7, (void *)v4, L"DpiSriovDetach", 0LL);
  return v7;
}
