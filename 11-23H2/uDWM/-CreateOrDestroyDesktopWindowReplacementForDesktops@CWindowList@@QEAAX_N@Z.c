/*
 * XREFs of ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x18001FC44
 * Callers:
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x18001FAD8 (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 * Callees:
 *     ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x180050E14 (-CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x180051228 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x1800512FC (-DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z.c)
 */

void __fastcall CWindowList::CreateOrDestroyDesktopWindowReplacementForDesktops(CWindowList *this, char a2)
{
  struct _RTL_GENERIC_TABLE *i; // rcx
  unsigned __int64 *v5; // rax
  unsigned __int64 *v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  RestartKey = 0LL;
  for ( i = (struct _RTL_GENERIC_TABLE *)((char *)this + 8); ; i = (struct _RTL_GENERIC_TABLE *)((char *)this + 8) )
  {
    v5 = (unsigned __int64 *)RtlEnumerateGenericTableWithoutSplaying(i, &RestartKey);
    v6 = v5;
    if ( !v5 )
      break;
    if ( *((_BYTE *)v5 + 72) )
    {
      v7 = *v5;
      if ( a2 )
      {
        CDesktopManager::CreateDesktopWindowForLogonDesktop(v7);
        if ( !*((_QWORD *)this + 70) && CDesktopManager::IsLogonDesktop(*v6) )
        {
          *((_QWORD *)this + 70) = v6[3];
          v8 = v6[3];
          if ( v8 )
            _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
        }
      }
      else
      {
        CDesktopManager::DestroyDesktopWindowReplacement(v7);
      }
    }
  }
}
