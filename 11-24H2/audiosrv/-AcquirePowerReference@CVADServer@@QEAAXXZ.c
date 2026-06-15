/*
 * XREFs of ?AcquirePowerReference@CVADServer@@QEAAXXZ @ 0x18000F9E8
 * Callers:
 *     ?StartStream_Internal@CVADServer@@IEAAJXZ @ 0x18010EB8C (-StartStream_Internal@CVADServer@@IEAAJXZ.c)
 * Callees:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180010DC4 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011640 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CVADServer::AcquirePowerReference(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  struct _RTL_CRITICAL_SECTION_DEBUG *v3; // rax
  std::_Ref_count_base *v4; // rdx
  std::_Ref_count_base *v5; // rcx
  struct _RTL_CRITICAL_SECTION_DEBUG *v6; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v7; // [rsp+28h] [rbp-10h]

  v2 = this + 11;
  EnterCriticalSection(this + 11);
  if ( !this[12].DebugInfo )
  {
    CPowerReferenceManager::AcquirePowerReferenceForStream(g_powerReferenceManager, &v6, this);
    v3 = v6;
    v4 = v7;
    v6 = 0LL;
    v7 = 0LL;
    this[12].DebugInfo = v3;
    v5 = *(std::_Ref_count_base **)&this[12].LockCount;
    *(_QWORD *)&this[12].LockCount = v4;
    if ( v5 )
    {
      std::_Ref_count_base::_Decref(v5);
      if ( v7 )
        std::_Ref_count_base::_Decref(v7);
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
