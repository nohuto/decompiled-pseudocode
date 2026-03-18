/*
 * XREFs of ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@PEBUCPointerInputFrame@@K@Z @ 0x1400C3A30
 * Callers:
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1400C2FA8 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C3C74 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400C47E4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F6318 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 */

const struct tagPOINTER_INFO *__fastcall CTouchProcessor::GetPointerInfo(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3)
{
  __int64 v4; // rbx
  CPointerInfoNode *v5; // rbx
  _BYTE v7[56]; // [rsp+20h] [rbp-38h] BYREF

  v4 = a3;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v7,
    (CTouchProcessor *)((char *)this + 32),
    0LL);
  v5 = (CPointerInfoNode *)(*((_QWORD *)a2 + 30) + 480 * v4);
  if ( (unsigned int)CPointerInfoNode::IsValid(v5) )
  {
    CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v7);
    return (CPointerInfoNode *)((char *)v5 + 168);
  }
  else
  {
    CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v7);
    return 0LL;
  }
}
