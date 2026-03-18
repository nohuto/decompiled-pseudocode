/*
 * XREFs of DifCallPluginEntry @ 0x140618590
 * Callers:
 *     DifRegisterKernelPlugins @ 0x140618A30 (DifRegisterKernelPlugins.c)
 * Callees:
 *     DifUtilDbgPrint @ 0x140617B60 (DifUtilDbgPrint.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall DifCallPluginEntry(unsigned int a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 < 0x40 )
  {
    v8 = 0LL;
    v4 = (unsigned __int64)a1 >> 5;
    v5 = *((_DWORD *)&VfRuleClasses + v4);
    if ( _bittest(&v5, a1 & 0x1F) )
    {
      LOBYTE(v4) = 0;
      v6 = 0LL;
      if ( DifPluginCfgContext )
      {
        while ( (unsigned int)v6 < DifPluginCfgContextSize )
        {
          if ( a1 == *(_DWORD *)(DifPluginCfgContext + 12 * v6) )
          {
            LOBYTE(v4) = 1;
            v8 = *(_QWORD *)(DifPluginCfgContext + 12 * v6 + 4);
            break;
          }
          v6 = (unsigned int)(v6 + 1);
        }
      }
      LOBYTE(v4) = -(char)v4;
      v7 = guard_dispatch_icall_no_overrides(
             (unsigned __int64)&v8 & -(__int64)((_BYTE)v4 != 0),
             v4,
             DifPluginCfgContext,
             a2);
      if ( v7 < 0 )
        DifUtilDbgPrint((int)"Failed to load plugin %d with error 0x%x\n", a1, (unsigned int)v7);
    }
  }
}
