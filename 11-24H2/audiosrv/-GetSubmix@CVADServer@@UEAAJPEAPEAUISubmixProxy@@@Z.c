/*
 * XREFs of ?GetSubmix@CVADServer@@UEAAJPEAPEAUISubmixProxy@@@Z @ 0x18010D230
 * Callers:
 *     ?GetStreamVpoContext@CVADServer@@UEAAJPEAKPEAPEAX@Z @ 0x18010CB30 (-GetStreamVpoContext@CVADServer@@UEAAJPEAKPEAPEAX@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVADServer::GetSubmix(struct _RTL_CRITICAL_SECTION *this, struct ISubmixProxy **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // rcx
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = this + 5;
  EnterCriticalSection(this + 5);
  v5 = (__int64)this[4].OwningThread + 8;
  v7 = v2;
  LODWORD(v2) = (*(__int64 (__fastcall **)(__int64, struct ISubmixProxy **))(*(_QWORD *)v5 + 128LL))(v5, a2);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v7);
  return (unsigned int)v2;
}
