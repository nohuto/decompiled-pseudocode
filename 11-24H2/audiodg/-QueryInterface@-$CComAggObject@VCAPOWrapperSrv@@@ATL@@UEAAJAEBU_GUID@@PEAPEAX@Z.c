/*
 * XREFs of ?QueryInterface@?$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14005D6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterface@?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002C7D0 (-QueryInterface@-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z @ 0x14002D3DC (-InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComAggObject<CAPOWrapperSrv>::QueryInterface(__int64 a1, const struct _GUID *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _DWORD *v5; // rdx
  _QWORD *v6; // r8
  __int64 v7; // r9

  v3 = 0;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  if ( (unsigned int)ATL::InlineIsEqualUnknown(a2) )
  {
    *v6 = v7;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  else
  {
    return (unsigned int)ATL::CComObject<CAPOWrapperSrv>::QueryInterface(v7 + 24, v5, v6);
  }
  return v3;
}
