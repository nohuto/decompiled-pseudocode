/*
 * XREFs of ?DereferencePointerInputFrameAndMessageData@CTouchProcessor@@SAXPEAUCPointerInputFrame@@@Z @ 0x1401FA310
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1400D3998 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F6360 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x140208BB8 (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 */

void __fastcall CTouchProcessor::DereferencePointerInputFrameAndMessageData(CTouchProcessor **a1)
{
  CTouchProcessor *v1; // rbx
  PERESOURCE *v3[9]; // [rsp+20h] [rbp-48h] BYREF

  v1 = *a1;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v3,
    (PERESOURCE *)*a1 + 4,
    0LL);
  CTouchProcessor::UnreferenceFrameAndMessageData(v1, (const struct CPointerInputFrame *)a1);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v3);
}
