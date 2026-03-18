/*
 * XREFs of ?IsPointerPrimary@CTouchProcessor@@QEAAH_K@Z @ 0x1402017E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x140107684 (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x14019CA14 (--0CInpLockGuardShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1401FEFCC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerPrimary(PERESOURCE *this, __int64 a2)
{
  CTouchProcessor *v3; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  unsigned int v5; // ebx
  PERESOURCE *v7[3]; // [rsp+20h] [rbp-18h] BYREF

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v7, this + 4);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v3, a2);
  v5 = 0;
  if ( NonConstMsgData )
    v5 = -__CFSHR__(*((_DWORD *)NonConstMsgData + 9), 5);
  CInpLockGuardShared::~CInpLockGuardShared(v7);
  return v5;
}
