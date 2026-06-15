/*
 * XREFs of ?WorkItemThreadProc@CConstraintModelResourceManager@@AEAAXXZ @ 0x180059DDC
 * Callers:
 *     ?s_WorkerThreadProc@CConstraintModelResourceManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180059950 (-s_WorkerThreadProc@CConstraintModelResourceManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_W.c)
 * Callees:
 *     ?RemoveHead@?$CAtlList@V?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VReacquireResourceWorkItem@@@2@@ATL@@QEAA?AV?$CAutoPtr@VReacquireResourceWorkItem@@@2@XZ @ 0x180059EE8 (-RemoveHead@-$CAtlList@V-$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VR.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A4D5C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CConstraintModelResourceManager::WorkItemThreadProc(CConstraintModelResourceManager *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  char *v3; // rsi
  void (__fastcall ***v4)(_QWORD, CConstraintModelResourceManager *); // r14
  __int64 v5; // rbp
  __int64 v6; // [rsp+60h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 192);
  v3 = (char *)this + 232;
  while ( 1 )
  {
    v4 = 0LL;
    EnterCriticalSection(v2);
    v5 = *((_QWORD *)this + 31);
    if ( v5 )
    {
      if ( !*(_QWORD *)v3 )
        ATL::AtlThrowImpl(-2147467259);
      v4 = *(void (__fastcall ****)(_QWORD, CConstraintModelResourceManager *))(*(_QWORD *)v3 + 16LL);
    }
    LeaveCriticalSection(v2);
    if ( !v5 )
      break;
    (**v4)(v4, this);
    EnterCriticalSection(v2);
    ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::RemoveHead(
      v3,
      &v6);
    if ( v6 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 8LL))(v6, 1LL);
    v6 = 0LL;
    LeaveCriticalSection(v2);
  }
}
