/*
 * XREFs of ??1?$function@$$A6A_NPEAX_K01I@Z@wistd@@QEAA@XZ @ 0x1800043CC
 * Callers:
 *     _wil::details_abi::RecordWnfUsageIndex_::_1_::dtor$4 @ 0x18004333D (_wil--details_abi--RecordWnfUsageIndex_--_1_--dtor$4.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wistd::function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::~function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  return result;
}
