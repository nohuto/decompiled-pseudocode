/*
 * XREFs of ?OnConnected@CUIComponentInputObjectProxy@@MEAAJXZ @ 0x180132780
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@CUIHierarchy@@SAAEAV1@XZ @ 0x18009AFA4 (-GetInstance@CUIHierarchy@@SAAEAV1@XZ.c)
 *     ?ModifyInputDisabledStateAndPropagate@CUIHierarchy@@AEAAX_KW4InputDisabledState@@_N@Z @ 0x1800A9300 (-ModifyInputDisabledStateAndPropagate@CUIHierarchy@@AEAAX_KW4InputDisabledState@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CUIComponentInputObjectProxy::OnConnected(CUIComponentInputObjectProxy *this)
{
  struct CUIHierarchy *Instance; // rsi
  char v3; // bl
  __int64 v4; // rax

  Instance = CUIHierarchy::GetInstance();
  v3 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 56LL))((char *)this + 8);
  v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8);
  CUIHierarchy::ModifyInputDisabledStateAndPropagate((__int64)Instance, v4, 2, v3);
  return 0LL;
}
