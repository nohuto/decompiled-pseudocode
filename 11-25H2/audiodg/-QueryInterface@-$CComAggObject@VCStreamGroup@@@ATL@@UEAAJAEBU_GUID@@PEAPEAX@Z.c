/*
 * XREFs of ?QueryInterface@?$CComAggObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140065840
 * Callers:
 *     <none>
 * Callees:
 *     ?_InternalQueryInterface@CStreamGroup@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002D484 (-_InternalQueryInterface@CStreamGroup@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z @ 0x14002D6DC (-InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComAggObject<CStreamGroup>::QueryInterface(__int64 a1, const struct _GUID *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  const struct _GUID *v5; // rdx
  char **v6; // r8
  char *v7; // r9

  v3 = 0;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  if ( (unsigned int)ATL::InlineIsEqualUnknown(a2) )
  {
    *v6 = v7;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  else
  {
    return (unsigned int)CStreamGroup::_InternalQueryInterface((CStreamGroup *)(v7 + 24), v5, v6);
  }
  return v3;
}
