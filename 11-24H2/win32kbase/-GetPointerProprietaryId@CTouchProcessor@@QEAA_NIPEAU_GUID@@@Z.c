/*
 * XREFs of ?GetPointerProprietaryId@CTouchProcessor@@QEAA_NIPEAU_GUID@@@Z @ 0x140126B58
 * Callers:
 *     NtUserGetPointerProprietaryId @ 0x14016D880 (NtUserGetPointerProprietaryId.c)
 * Callees:
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400B7840 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x140107684 (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x14019CA14 (--0CInpLockGuardShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1401FB714 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

char __fastcall CTouchProcessor::GetPointerProprietaryId(CTouchProcessor *this, unsigned __int16 a2, struct _GUID *a3)
{
  struct CInputPointerNode *NodeById; // rax
  __int64 v7; // rdx
  tagDomLock *v9; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]

  *a3 = 0LL;
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v9, (CTouchProcessor *)((char *)this + 32));
  NodeById = CTouchProcessor::FindNodeById(this, a2, 0, 0);
  if ( !NodeById )
    goto LABEL_5;
  v7 = *((_QWORD *)NodeById + 5) - *(_QWORD *)&a3->Data1;
  if ( !v7 )
    v7 = *((_QWORD *)NodeById + 6) - *(_QWORD *)a3->Data4;
  if ( v7 )
  {
    *a3 = *(struct _GUID *)((char *)NodeById + 40);
    CInpLockGuardShared::~CInpLockGuardShared((PERESOURCE **)&v9);
    return 1;
  }
  else
  {
LABEL_5:
    if ( !v10 )
      tagDomLock::UnLockExclusive((PERESOURCE *)v9);
    return 0;
  }
}
