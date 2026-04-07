/*
 * XREFs of ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x180033668
 * Callers:
 *     ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x18008E834 (-ModeChange@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     ?CreateDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x1800330BC (-CreateDesktopWindowReplacement@CDesktopManager@@SAX_K@Z.c)
 *     ?DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x180033474 (-DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z.c)
 */

void __fastcall CWindowList::RecreateDesktopWindowReplacementForDesktops(CWindowList *this)
{
  struct _RTL_GENERIC_TABLE *v1; // rdi
  unsigned __int64 *v2; // rax
  unsigned __int64 *v3; // rbx
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  RestartKey = 0LL;
  v1 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
  while ( 1 )
  {
    v2 = (unsigned __int64 *)RtlEnumerateGenericTableWithoutSplaying(v1, &RestartKey);
    v3 = v2;
    if ( !v2 )
      break;
    if ( *((_BYTE *)v2 + 72) )
    {
      CDesktopManager::DestroyDesktopWindowReplacement(*v2);
      CDesktopManager::CreateDesktopWindowReplacement(*v3);
    }
  }
}
