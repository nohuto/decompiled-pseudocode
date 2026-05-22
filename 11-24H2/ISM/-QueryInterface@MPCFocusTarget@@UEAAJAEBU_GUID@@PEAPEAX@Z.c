/*
 * XREFs of ?QueryInterface@MPCFocusTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180097E80
 * Callers:
 *     ?QueryInterface@MPCFocusTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FF8B0 (-QueryInterface@MPCFocusTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCFocusTarget@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FF8C0 (-QueryInterface@MPCFocusTarget@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?QueryInterface@MPCTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180097EF0 (-QueryInterface@MPCTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MPCFocusTarget::QueryInterface(MPCFocusTarget *this, const struct _GUID *a2, void **a3)
{
  __int64 v4; // rax

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b7db9364_602e_4e1a_8a9c_41444480abce.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b7db9364_602e_4e1a_8a9c_41444480abce.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b7db9364_602e_4e1a_8a9c_41444480abce.Data4;
  if ( v4 )
    return MPCTarget::QueryInterface(this, a2, a3);
  (*(void (__fastcall **)(MPCFocusTarget *))(*(_QWORD *)this + 8LL))(this);
  *a3 = (void *)(((unsigned __int64)this + 80) & -(__int64)(this != 0LL));
  return 0LL;
}
