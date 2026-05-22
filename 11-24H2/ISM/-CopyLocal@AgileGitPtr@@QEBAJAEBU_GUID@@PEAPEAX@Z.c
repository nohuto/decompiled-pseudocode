/*
 * XREFs of ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18016D65C
 * Callers:
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180172B40 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AgileGitPtr::CopyLocal(AgileGitPtr *this, const struct _GUID *a2, void **a3)
{
  __int64 v3; // rax
  unsigned int v4; // r9d
  __int64 v5; // rcx

  v3 = *(_QWORD *)this;
  v4 = 0;
  *a3 = 0LL;
  if ( v3 )
  {
    v5 = *(_QWORD *)this;
    if ( v5 )
      return (*(unsigned int (__fastcall **)(__int64, const struct _GUID *))(*(_QWORD *)v5 + 24LL))(v5, a2);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v4;
}
