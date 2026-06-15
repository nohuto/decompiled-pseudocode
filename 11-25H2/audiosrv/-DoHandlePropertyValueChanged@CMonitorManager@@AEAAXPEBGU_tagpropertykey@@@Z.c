/*
 * XREFs of ?DoHandlePropertyValueChanged@CMonitorManager@@AEAAXPEBGU_tagpropertykey@@@Z @ 0x18002E214
 * Callers:
 *     ?HandlePropertyValueChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18002E460 (-HandlePropertyValueChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002CFAC (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitorManager::DoHandlePropertyValueChanged(
        CMonitorManager *this,
        const unsigned __int16 *a2,
        struct _tagpropertykey *a3)
{
  unsigned __int64 i; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-38h] BYREF
  char v10; // [rsp+28h] [rbp-30h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_DWORD *)this + 14) == 1 )
  {
    for ( i = 0LL; i < 0x50; i += 16LL )
    {
      v7 = *(__int64 *)((char *)&CMonitorManager::_PropertyLookupTable + i);
      v8 = *(_QWORD *)&a3->fmtid.Data1 - *(_QWORD *)v7;
      if ( *(_QWORD *)&a3->fmtid.Data1 == *(_QWORD *)v7 )
      {
        v8 = *(_QWORD *)a3->fmtid.Data4 - *(_QWORD *)(v7 + 8);
        if ( !v8 )
          v8 = a3->pid - (unsigned __int64)*(unsigned int *)(v7 + 16);
      }
      if ( !v8 )
        (*(void (__fastcall **)(CMonitorManager *__hidden, const unsigned __int16 *, const struct _tagpropertykey *))((char *)&off_1801CC008 + i))(
          this,
          a2,
          a3);
    }
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
}
