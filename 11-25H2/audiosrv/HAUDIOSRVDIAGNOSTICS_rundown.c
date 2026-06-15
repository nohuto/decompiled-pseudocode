/*
 * XREFs of HAUDIOSRVDIAGNOSTICS_rundown @ 0x1800AEF00
 * Callers:
 *     <none>
 * Callees:
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x18000CB20 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 */

void __fastcall HAUDIOSRVDIAGNOSTICS_rundown(__int64 a1)
{
  LPCRITICAL_SECTION v1; // rbx
  bool v2; // zf
  LPCRITICAL_SECTION v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = g_ADGProcess;
  if ( a1 == *(_QWORD *)&g_ADGProcess[2].LockCount )
  {
    EnterCriticalSection(g_ADGProcess);
    v2 = LODWORD(v1[1].DebugInfo)-- == 1;
    v3 = v1;
    if ( v2 )
      CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v1);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v3);
  }
}
