/*
 * XREFs of ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C00E849C
 * Callers:
 *     _lambda_9e1c073be7703093e3ca0af05debe537_::operator() @ 0x1C00A3FAC (_lambda_9e1c073be7703093e3ca0af05debe537_--operator().c)
 *     ?IsTopmostRealApp@@YAHPEAUtagWND@@@Z @ 0x1C0214474 (-IsTopmostRealApp@@YAHPEAUtagWND@@@Z.c)
 *     xxxMenuWindowProc @ 0x1C0219F60 (xxxMenuWindowProc.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _anonymous_namespace_::GNT_NextTopScan @ 0x1C008EFC8 (_anonymous_namespace_--GNT_NextTopScan.c)
 *     _anonymous_namespace_::CheckTopLevelOnly @ 0x1C00956F8 (_anonymous_namespace_--CheckTopLevelOnly.c)
 *     SkipWindowOnMonitor @ 0x1C00A3E08 (SkipWindowOnMonitor.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _anonymous_namespace_::NTW_GetNextTop @ 0x1C00E8608 (_anonymous_namespace_--NTW_GetNextTop.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C0121808 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::NTW_GetPrevTop @ 0x1C02230BC (_anonymous_namespace_--NTW_GetPrevTop.c)
 */

const struct tagWND *__fastcall FindNextTopWindow::NextTopWindow(__int64 a1, __int64 a2, char a3)
{
  const struct tagWND *v6; // rbx
  char v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // r8
  const struct tagWND *v11; // rdi
  char *v12; // rdx
  const struct tagWND *v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 DesktopWindow; // rax
  bool v19; // zf
  __int64 NextTop; // rax
  char v22; // [rsp+60h] [rbp+8h] BYREF
  __int64 TopScan; // [rsp+78h] [rbp+20h]

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v22);
  v6 = 0LL;
  v7 = 0;
  TopScan = anonymous_namespace_::GNT_NextTopScan(gptiCurrent, 0LL, 0LL);
  if ( !a1 )
  {
    NextTop = anonymous_namespace_::NTW_GetNextTop(gptiCurrent, 0LL);
    v9 = anonymous_namespace_::CheckTopLevelOnly(NextTop);
    v11 = (const struct tagWND *)v9;
    v19 = v9 == 0;
    goto LABEL_15;
  }
  v9 = anonymous_namespace_::CheckTopLevelOnly(a1);
  v11 = (const struct tagWND *)v9;
  if ( v9 )
  {
    a2 = anonymous_namespace_::CheckTopLevelOnly(a2);
    while ( 1 )
    {
      v13 = v11;
      v14 = (a3 & 1) != 0
          ? anonymous_namespace_::NTW_GetPrevTop(gptiCurrent, v11)
          : anonymous_namespace_::NTW_GetNextTop(gptiCurrent, v11);
      v11 = (const struct tagWND *)v14;
      if ( v14 == v9 )
        break;
      if ( v14 == TopScan )
      {
        if ( v7 )
          break;
        v7 = 1;
      }
      if ( !v14 )
        break;
      v15 = *(_QWORD *)(v14 + 24);
      v16 = 0LL;
      if ( v15 )
      {
        v17 = *(_QWORD *)(v15 + 8);
        if ( v17 )
          v16 = *(_QWORD *)(v17 + 24);
      }
      DesktopWindow = GetDesktopWindow(v9, v16);
      if ( DesktopWindow != v8 )
        break;
      v19 = v13 == v11;
LABEL_15:
      if ( v19 )
        break;
      if ( v11 != (const struct tagWND *)a2 )
      {
        v12 = (char *)*((_QWORD *)v11 + 5);
        if ( (v12[31] & 0x18) == 0x10
          && ((unsigned __int8)~((unsigned __int8)v12[31] >> 5) & (unsigned __int8)~((unsigned __int8)v12[27] >> 3) & 1) != 0
          && ((a3 & 2) == 0 || v12[24] >= 0)
          && !GetWindowCloakState(v11)
          && ((a3 & 4) == 0 || !(unsigned int)SkipWindowOnMonitor(v11)) )
        {
          v6 = v11;
          break;
        }
      }
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v22, v8, v10);
  return v6;
}
