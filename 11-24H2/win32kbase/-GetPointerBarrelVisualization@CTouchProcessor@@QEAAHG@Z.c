/*
 * XREFs of ?GetPointerBarrelVisualization@CTouchProcessor@@QEAAHG@Z @ 0x140120F00
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400B7840 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x140107684 (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x14019CA14 (--0CInpLockGuardShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1401FB714 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerBarrelVisualization(CTouchProcessor *this, unsigned __int16 a2)
{
  struct CInputPointerNode *NodeById; // rax
  int v5; // eax
  int v6; // ebx
  tagDomLock *v8; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v8, (CTouchProcessor *)((char *)this + 32));
  NodeById = CTouchProcessor::FindNodeById(this, a2, 0, 0);
  if ( NodeById )
  {
    v5 = *((_DWORD *)NodeById + 75);
    if ( (v5 & 0x1000) != 0 )
    {
      v6 = (v5 & 0x800) != 0 ? 2 : 0;
      if ( !v9 )
        tagDomLock::UnLockExclusive((PERESOURCE *)v8);
      return (unsigned int)(v6 - 1);
    }
    else
    {
      CInpLockGuardShared::~CInpLockGuardShared((PERESOURCE **)&v8);
      return 0LL;
    }
  }
  else
  {
    if ( !v9 )
      tagDomLock::UnLockExclusive((PERESOURCE *)v8);
    return 1LL;
  }
}
