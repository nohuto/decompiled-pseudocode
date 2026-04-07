/*
 * XREFs of ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x18007E2E8
 * Callers:
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x180089ED0 (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18002F6B4 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?CreateDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x1800330BC (-CreateDesktopWindowReplacement@CDesktopManager@@SAX_K@Z.c)
 *     ?DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x180033474 (-DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z.c)
 */

void __fastcall CWindowList::CreateOrDestroyDesktopWindowReplacementForDesktops(CWindowList *this, char a2)
{
  struct _RTL_GENERIC_TABLE *i; // rcx
  unsigned __int64 v5; // rcx
  __int64 *v6; // rax
  __int64 *v7; // rbx
  CMILRefCountBase *v8; // rcx
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  RestartKey = 0LL;
  for ( i = (struct _RTL_GENERIC_TABLE *)((char *)this + 8); ; i = (struct _RTL_GENERIC_TABLE *)((char *)this + 8) )
  {
    v6 = (__int64 *)RtlEnumerateGenericTableWithoutSplaying(i, &RestartKey);
    v7 = v6;
    if ( !v6 )
      break;
    if ( *((_BYTE *)v6 + 72) )
    {
      v5 = *v6;
      if ( a2 )
      {
        CDesktopManager::CreateDesktopWindowReplacement(v5);
        if ( !*((_QWORD *)this + 69) && CDesktopManager::IsLogonDesktop(*v7) )
        {
          *((_QWORD *)this + 69) = v7[3];
          v8 = (CMILRefCountBase *)v7[3];
          if ( v8 )
            CMILRefCountBase::AddRef(v8);
        }
      }
      else
      {
        CDesktopManager::DestroyDesktopWindowReplacement(v5);
      }
    }
  }
}
