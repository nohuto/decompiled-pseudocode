/*
 * XREFs of ??1?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@QEAA@XZ @ 0x180060DC4
 * Callers:
 *     _CConstraintModelResourceManager::AddWorkItemToQueue_::_1_::dtor$1 @ 0x18016BAA5 (_CConstraintModelResourceManager--AddWorkItemToQueue_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CAutoPtr<ReacquireResourceWorkItem>::~CAutoPtr<ReacquireResourceWorkItem>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 8LL))(v2, 1LL);
  *a1 = 0LL;
  return result;
}
