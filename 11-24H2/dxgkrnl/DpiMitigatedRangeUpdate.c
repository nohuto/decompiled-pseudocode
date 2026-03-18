/*
 * XREFs of DpiMitigatedRangeUpdate @ 0x1402375C0
 * Callers:
 *     DxgkMitigatedRangeUpdateCB @ 0x14006C440 (DxgkMitigatedRangeUpdateCB.c)
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z @ 0x1400573EC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x14005A028 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DxgkDdiQueryVirtualFunctionLuid @ 0x140210A9C (DxgkDdiQueryVirtualFunctionLuid.c)
 */

void __fastcall DpiMitigatedRangeUpdate(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  void *v6; // rdx
  PIRP v7; // rsi
  struct _IRP *MasterIrp; // rcx
  _BYTE v9[32]; // [rsp+30h] [rbp-38h] BYREF
  int v10; // [rsp+50h] [rbp-18h]
  struct _LUID SourceLuid; // [rsp+70h] [rbp+8h] BYREF

  v4 = a1[8];
  SourceLuid = 0LL;
  LOBYTE(a4) = 1;
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v9, a1, 0LL, a4, 0, 0);
  if ( v10 < 0 || (int)DxgkDdiQueryVirtualFunctionLuid(*(_QWORD **)(v4 + 4032), 0LL, a2, (__int64)&SourceLuid) < 0 )
  {
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v9);
  }
  else
  {
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v9);
    ExAcquirePushLockExclusiveEx(v4 + 5560, 0LL);
    v6 = *(void **)(v4 + 5504);
    if ( v6 )
    {
      v7 = IoCsqRemoveNextIrp((PIO_CSQ)(v4 + 5400), v6);
      if ( v7 )
      {
        KeClearEvent((PRKEVENT)(v4 + 5568));
        MasterIrp = v7->AssociatedIrp.MasterIrp;
        *(_OWORD *)&MasterIrp->Type = 0LL;
        *(_OWORD *)&MasterIrp->Flags = 0LL;
        MasterIrp->ThreadListEntry.Flink = 0LL;
        LODWORD(MasterIrp->ThreadListEntry.Blink) = 0;
        RtlCopyLuid((PLUID)MasterIrp, &SourceLuid);
        v7->IoStatus.Status = 0;
        v7->IoStatus.Information = 44LL;
        IofCompleteRequest(v7, 1);
        KeWaitForSingleObject((PVOID)(v4 + 5568), Executive, 0, 0, 0LL);
      }
      else
      {
        WdLogSingleEntry1(2LL, -1073741811LL);
        WdLogGlobalForLineNumber = 5717;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 5725;
    }
    ExReleasePushLockExclusiveEx(v4 + 5560, 0LL);
  }
}
