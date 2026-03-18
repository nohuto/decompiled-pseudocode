/*
 * XREFs of ?SetPointerVisualization@CTouchProcessor@@QEAAHGHPEAHH@Z @ 0x1400D3220
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1400D3998 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F6360 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1401FB714 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerVisualization(
        CTouchProcessor *this,
        unsigned __int16 a2,
        int a3,
        int *a4,
        int a5)
{
  struct CInputPointerNode *NodeById; // rax
  unsigned int v10; // ebx
  unsigned int v11; // edx
  _BYTE v13[64]; // [rsp+20h] [rbp-48h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v13,
    (CTouchProcessor *)((char *)this + 32),
    0LL);
  NodeById = CTouchProcessor::FindNodeById(this, a2, 0, 0);
  v10 = 0;
  if ( NodeById )
  {
    v11 = (a3 << 8) ^ (*((_DWORD *)NodeById + 75) ^ (a3 << 8)) & 0xFFFFFEFF;
    *((_DWORD *)NodeById + 75) = v11;
    if ( a4 )
      v11 = (*a4 << 9) ^ ((*a4 << 9) ^ v11) & 0xFFFFFDFF;
    v10 = 1;
    *((_DWORD *)NodeById + 75) = (a5 << 10) ^ (v11 ^ (a5 << 10)) & 0xFFFFFBFF;
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v13);
  return v10;
}
