/*
 * XREFs of DifCallPluginEntry @ 0x140616B50
 * Callers:
 *     DifRegisterKernelPlugins @ 0x140616FF0 (DifRegisterKernelPlugins.c)
 * Callees:
 *     DifUtilDbgPrint @ 0x140616120 (DifUtilDbgPrint.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall DifCallPluginEntry(unsigned int a1)
{
  unsigned __int64 v2; // rdx
  int v3; // eax
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 < 0x40 )
  {
    v6 = 0LL;
    v2 = (unsigned __int64)a1 >> 5;
    v3 = *((_DWORD *)&VfRuleClasses + v2);
    if ( _bittest(&v3, a1 & 0x1F) )
    {
      LOBYTE(v2) = 0;
      v4 = 0LL;
      if ( DifPluginCfgContext )
      {
        while ( (unsigned int)v4 < DifPluginCfgContextSize )
        {
          if ( a1 == *(_DWORD *)(DifPluginCfgContext + 12 * v4) )
          {
            LOBYTE(v2) = 1;
            v6 = *(_QWORD *)(DifPluginCfgContext + 12 * v4 + 4);
            break;
          }
          v4 = (unsigned int)(v4 + 1);
        }
      }
      LOBYTE(v2) = -(char)v2;
      v5 = guard_dispatch_icall_no_overrides((unsigned __int64)&v6 & -(__int64)((_BYTE)v2 != 0), v2);
      if ( v5 < 0 )
        DifUtilDbgPrint((int)"Failed to load plugin %d with error 0x%x\n", a1, (unsigned int)v5);
    }
  }
}
