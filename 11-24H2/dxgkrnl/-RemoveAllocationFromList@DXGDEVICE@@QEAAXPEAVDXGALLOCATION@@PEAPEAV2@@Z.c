/*
 * XREFs of ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@PEAPEAV2@@Z @ 0x140337DE0
 * Callers:
 *     ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x140337BD4 (-RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGDEVICE::RemoveAllocationFromList(
        DXGDEVICE *this,
        struct DXGALLOCATION *a2,
        struct DXGALLOCATION **a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct DXGALLOCATION *v8; // rax

  if ( *((_DWORD *)this + 152) == 1 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v5 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v5 + 168)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 8602;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"m_ExecutionState != DXGDEVICEEXECUTION_ACTIVE || GetRenderCore()->IsCoreResourceSharedOwner()",
        8602LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  v6 = *((_QWORD *)a2 + 8);
  if ( v6 )
    *(_QWORD *)(v6 + 56) = *((_QWORD *)a2 + 7);
  v7 = *((_QWORD *)a2 + 7);
  v8 = (struct DXGALLOCATION *)*((_QWORD *)a2 + 8);
  if ( v7 )
    *(_QWORD *)(v7 + 64) = v8;
  else
    *a3 = v8;
  *((_QWORD *)a2 + 8) = 0LL;
  *((_QWORD *)a2 + 7) = 0LL;
}
