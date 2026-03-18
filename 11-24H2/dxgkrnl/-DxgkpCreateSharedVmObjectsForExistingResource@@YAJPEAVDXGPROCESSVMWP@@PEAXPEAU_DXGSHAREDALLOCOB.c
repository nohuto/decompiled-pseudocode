/*
 * XREFs of ?DxgkpCreateSharedVmObjectsForExistingResource@@YAJPEAVDXGPROCESSVMWP@@PEAXPEAU_DXGSHAREDALLOCOBJECT@@PEAPEAVDXGSHAREDVMOBJECT@@PEAI@Z @ 0x1401E1028
 * Callers:
 *     ?DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z @ 0x1401E129C (-DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140035C78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402B64B0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1403E8358 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
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
  unsigned int v13; // edi
  __int64 v14; // rax
  DXGSHAREDVMOBJECT *v15; // rbx
  unsigned int *v16; // rax
  __int64 v18; // [rsp+20h] [rbp-78h]
  int v19; // [rsp+38h] [rbp-60h]
  _BYTE v20[32]; // [rsp+50h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+8h] BYREF

  Handle = 0LL;
  v9 = 0;
  if ( !*((_QWORD *)a3 + 2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3051;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pSharedObject->pSharedResource != nullptr",
      3051LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v10 = *(_QWORD *)(*((_QWORD *)a1 + 74) + 280LL);
  CurrentProcess = PsGetCurrentProcess(a1);
  LOBYTE(v19) = 0;
  LODWORD(v18) = 0;
  v12 = ObDuplicateObject(CurrentProcess, a2, v10, &Handle, v18, 512, 6, v19);
  v13 = v12;
  if ( v12 < 0 )
  {
    WdLogSingleEntry1(3LL, v12);
    WdLogGlobalForLineNumber = 3066;
    goto LABEL_10;
  }
  v14 = operator new(0x20uLL, 0x4B677844u, 256LL);
  v15 = (DXGSHAREDVMOBJECT *)v14;
  if ( !v14 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 3073;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate DXGSHAREDVMOBJECT",
      3073LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v13 = -1073741801;
LABEL_10:
    if ( Handle )
      ObCloseHandle(Handle, 0);
    goto LABEL_12;
  }
  *(_DWORD *)(v14 + 24) = 1;
  *(_DWORD *)v14 = 4;
  *(_QWORD *)(v14 + 8) = a3;
  *(_QWORD *)(v14 + 16) = Handle;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v20, a1);
  v9 = HMGRTABLE::AllocHandle((char *)a1 + 280, v15, 13LL, 0LL, 0);
  if ( !v9 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3094;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to allocate NT shared object handle",
      3094LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v13 = -1073741801;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20);
    DXGSHAREDVMOBJECT::ReleaseReference(v15);
LABEL_12:
    v15 = 0LL;
    goto LABEL_13;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20);
LABEL_13:
  v16 = a5;
  *a4 = v15;
  *v16 = v9;
  return v13;
}
