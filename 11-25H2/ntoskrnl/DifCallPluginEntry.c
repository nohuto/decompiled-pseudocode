/*
 * XREFs of DifCallPluginEntry @ 0x14060C5D0
 * Callers:
 *     DifRegisterKernelPlugins @ 0x14060CA70 (DifRegisterKernelPlugins.c)
 * Callees:
 *     DifUtilDbgPrint @ 0x14060BBA0 (DifUtilDbgPrint.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall DifCallPluginEntry(unsigned int a1)
{
  int v2; // eax
  char v3; // dl
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 < 0x40 )
  {
    v6 = 0LL;
    v2 = *((_DWORD *)&VfRuleClasses + ((unsigned __int64)a1 >> 5));
    if ( _bittest(&v2, a1 & 0x1F) )
    {
      v3 = 0;
      v4 = 0LL;
      if ( DifPluginCfgContext )
      {
        while ( (unsigned int)v4 < DifPluginCfgContextSize )
        {
          if ( a1 == *(_DWORD *)(DifPluginCfgContext + 12 * v4) )
          {
            v3 = 1;
            v6 = *(_QWORD *)(DifPluginCfgContext + 12 * v4 + 4);
            break;
          }
          v4 = (unsigned int)(v4 + 1);
        }
      }
      v5 = guard_dispatch_icall_no_overrides((unsigned __int64)&v6 & -(__int64)(v3 != 0));
      if ( v5 < 0 )
        DifUtilDbgPrint((int)"Failed to load plugin %d with error 0x%x\n", a1, (unsigned int)v5);
    }
  }
}
