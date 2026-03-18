/*
 * XREFs of _ChangeWindowMessageFilterEx @ 0x1C0035668
 * Callers:
 *     NtUserChangeWindowMessageFilterEx @ 0x1C00354D0 (NtUserChangeWindowMessageFilterEx.c)
 * Callees:
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C0034EAC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ?ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z @ 0x1C00357EC (-ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z.c)
 *     ?GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C0035844 (-GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     ?AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C00358D4 (-AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 *     ?RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C00372A8 (-RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 *     ?IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z @ 0x1C003732C (-IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C0042BA8 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 *     ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C0044790 (-VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 *     FreeWindowMessageFilter @ 0x1C013C0A0 (FreeWindowMessageFilter.c)
 */

__int64 __fastcall ChangeWindowMessageFilterEx(struct tagWND *a1, unsigned int a2, int a3, __int64 a4)
{
  unsigned int v4; // esi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rbx
  void **v11; // r12
  int v12; // r9d
  struct tagVWPL **v13; // rcx
  int v15; // [rsp+20h] [rbp-48h]
  void **v16[7]; // [rsp+30h] [rbp-38h] BYREF
  int v17; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v17 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v10 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  *(_DWORD *)(a4 + 4) = 0;
  if ( (unsigned __int8)Enforced() )
  {
    if ( !(unsigned int)ValidateChangeMessageFilter((struct tagPROCESSINFO *)v10, a2) )
      return 0LL;
    if ( a3 )
    {
      v16[0] = GetWindowMessageFilter(a1);
      v11 = v16[0];
      if ( a3 == 1 )
      {
        v4 = AddMessageToFilter(v16, a2, &v17);
        if ( v4 && v17 )
          *(_DWORD *)(a4 + 4) = 1;
      }
      else
      {
        if ( a3 != 2 )
          return v4;
        v4 = RemoveMessageFromFilter(v16, a2, &v17);
        if ( v4 )
        {
          if ( (unsigned int)IsMessageAllowedByFilterEx(*(void *const **)(v10 + 872), a2, 0LL, 0LL)
            || (unsigned int)IsMessageAlwaysAllowedAcrossIL(a2) )
          {
            *(_DWORD *)(a4 + 4) = 3;
          }
          else if ( v17 )
          {
            *(_DWORD *)(a4 + 4) = 2;
          }
        }
      }
      if ( v11 != v16[0] )
      {
        v13 = (struct tagVWPL **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 880LL);
        if ( v16[0] )
          return (unsigned int)VWPLAddBase(v13, (unsigned __int64)v16[0], a1, 5u, v15);
        else
          VWPLRemoveBase(v13, 0LL, a1, v12, 0LL);
      }
      return v4;
    }
    FreeWindowMessageFilter(a1);
  }
  return 1LL;
}
