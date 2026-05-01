/*
 * XREFs of ?QueryObject@ApplicationViewWrapper@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1801AC940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ApplicationViewWrapper::QueryObject(
        ApplicationViewWrapper *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v4; // rax

  *a4 = 0LL;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513.Data4;
  if ( v4 )
    return 2147942487LL;
  else
    return (***((__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))this + 8))(
             *((_QWORD *)this + 8),
             a3,
             a4);
}
