/*
 * XREFs of ?DxgkpCreateSharedVmObjectsForExistingResource@@YAJPEAVDXGPROCESSVMWP@@PEAXPEAU_DXGSHAREDALLOCOBJECT@@PEAPEAVDXGSHAREDVMOBJECT@@PEAI@Z @ 0x1401DBD98
 * Callers:
 *     ?DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z @ 0x1401DC00C (-DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14003583C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402FF830 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x140348180 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkpCreateSharedVmObjectsForExistingResource(
        struct DXGPROCESSVMWP *a1,
        void *a2,
        struct _DXGSHAREDALLOCOBJECT *a3,
        struct DXGSHAREDVMOBJECT **a4,
        unsigned int *a5)
{
  unsigned int v9; // esi
  __int64 v10; // rbx
  __int64 CurrentProcess; // rax
  int v12; // eax
  __int64 v13; // r9
  unsigned int v14; // edi
  __int64 v15; // rax
  DXGSHAREDVMOBJECT *v16; // rbx
  unsigned int *v17; // rax
  __int64 v19; // [rsp+20h] [rbp-78h]
  int v20; // [rsp+38h] [rbp-60h]
  _BYTE v21[32]; // [rsp+50h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+8h] BYREF

  Handle = 0LL;
  v9 = 0;
  if ( !*((_QWORD *)a3 + 2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3077;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pSharedObject->pSharedResource != nullptr",
      3077LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v10 = *(_QWORD *)(*((_QWORD *)a1 + 74) + 280LL);
  CurrentProcess = PsGetCurrentProcess(a1);
  LOBYTE(v20) = 0;
  LODWORD(v19) = 0;
  v12 = ObDuplicateObject(CurrentProcess, a2, v10, &Handle, v19, 512, 6, v20);
  v14 = v12;
  if ( v12 < 0 )
  {
    WdLogSingleEntry1(3LL, v12);
    WdLogGlobalForLineNumber = 3092;
    goto LABEL_10;
  }
  v15 = operator new(0x20uLL, 0x4B677844u, 256LL, v13);
  v16 = (DXGSHAREDVMOBJECT *)v15;
  if ( !v15 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 3099;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate DXGSHAREDVMOBJECT",
      3099LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v14 = -1073741801;
LABEL_10:
    if ( Handle )
      ObCloseHandle(Handle, 0);
    goto LABEL_12;
  }
  *(_DWORD *)(v15 + 24) = 1;
  *(_DWORD *)v15 = 4;
  *(_QWORD *)(v15 + 8) = a3;
  *(_QWORD *)(v15 + 16) = Handle;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v21, a1);
  v9 = HMGRTABLE::AllocHandle((char *)a1 + 280, v16, 13LL, 0LL, 0);
  if ( !v9 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3120;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to allocate NT shared object handle",
      3120LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v14 = -1073741801;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21);
    DXGSHAREDVMOBJECT::ReleaseReference(v16);
LABEL_12:
    v16 = 0LL;
    goto LABEL_13;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21);
LABEL_13:
  v17 = a5;
  *a4 = v16;
  *v17 = v9;
  return v14;
}
