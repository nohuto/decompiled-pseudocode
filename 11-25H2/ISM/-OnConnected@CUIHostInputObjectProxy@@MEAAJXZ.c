/*
 * XREFs of ?OnConnected@CUIHostInputObjectProxy@@MEAAJXZ @ 0x18012F240
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@CUIHierarchy@@SAAEAV1@XZ @ 0x18009AE04 (-GetInstance@CUIHierarchy@@SAAEAV1@XZ.c)
 *     ?ModifyInputDisabledStateAndPropagate@CUIHierarchy@@AEAAX_KW4InputDisabledState@@_N@Z @ 0x1800AA800 (-ModifyInputDisabledStateAndPropagate@CUIHierarchy@@AEAAX_KW4InputDisabledState@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CUIHostInputObjectProxy::OnConnected(CUIHostInputObjectProxy *this)
{
  struct CUIHierarchy *Instance; // rsi
  char v3; // bl
  __int64 v4; // rax

  Instance = CUIHierarchy::GetInstance();
  v3 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8);
  v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 40LL))((char *)this + 8);
  CUIHierarchy::ModifyInputDisabledStateAndPropagate((__int64)Instance, v4, 1, v3);
  return 0LL;
}
