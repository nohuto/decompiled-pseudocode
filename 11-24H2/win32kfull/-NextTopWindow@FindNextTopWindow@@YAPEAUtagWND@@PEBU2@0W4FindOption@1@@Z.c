/*
 * XREFs of ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1400F697C
 * Callers:
 *     _lambda_9e1c073be7703093e3ca0af05debe537_::operator() @ 0x1400F68DC (_lambda_9e1c073be7703093e3ca0af05debe537_--operator().c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     ?IsTopmostRealApp@@YAHPEAUtagWND@@@Z @ 0x1402BCBA8 (-IsTopmostRealApp@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140067F70 (-IsWindowCloaked@@YA_NPEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::NTW_GetPrevTop @ 0x1400F6B74 (_anonymous_namespace_--NTW_GetPrevTop.c)
 *     _anonymous_namespace_::CheckTopLevelOnly @ 0x1400F6BC4 (_anonymous_namespace_--CheckTopLevelOnly.c)
 *     SkipWindowOnMonitor @ 0x1400F6EBC (SkipWindowOnMonitor.c)
 *     _anonymous_namespace_::GNT_NextTopScan @ 0x1402DB478 (_anonymous_namespace_--GNT_NextTopScan.c)
 */

const struct tagWND *__fastcall FindNextTopWindow::NextTopWindow(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  const struct tagWND *v8; // rbx
  char v9; // bp
  struct tagTHREADINFO *v10; // r15
  __int64 i; // rsi
  const struct tagWND *PrevTop; // rdi
  bool j; // zf
  __int64 DesktopWindow; // rax
  __int64 v15; // rdx
  char *v16; // rdx
  const struct tagWND *v17; // r14
  const struct tagWND *v18; // rbp
  const struct tagWND *v19; // rdx
  _BYTE v21[72]; // [rsp+20h] [rbp-48h] BYREF
  char v22; // [rsp+70h] [rbp+8h]
  __int64 TopScan; // [rsp+88h] [rbp+20h]

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v21);
  v8 = 0LL;
  v22 = 0;
  v9 = 0;
  v10 = PtiCurrent(v7, v6);
  TopScan = anonymous_namespace_::GNT_NextTopScan(v10, 0LL, 0LL);
  if ( a1 )
  {
    i = anonymous_namespace_::CheckTopLevelOnly(a1);
    PrevTop = (const struct tagWND *)i;
    if ( i )
    {
      a2 = anonymous_namespace_::CheckTopLevelOnly(a2);
      goto LABEL_15;
    }
  }
  else
  {
    for ( i = anonymous_namespace_::GNT_NextTopScan(v10, 0LL, 0LL); i; i = *(_QWORD *)(i + 112) )
    {
      if ( (*(_WORD *)(*(_QWORD *)(i + 40) + 42LL) & 0x2FFF) != 0x29D )
        break;
    }
    PrevTop = (const struct tagWND *)i;
    for ( j = i == 0; !j; j = v17 == PrevTop )
    {
      if ( PrevTop != (const struct tagWND *)a2 )
      {
        v16 = (char *)*((_QWORD *)PrevTop + 5);
        if ( (v16[31] & 0x18) == 0x10
          && ((unsigned __int8)~((unsigned __int8)v16[31] >> 5) & (unsigned __int8)~((unsigned __int8)v16[27] >> 3) & 1) != 0
          && ((a3 & 2) == 0 || v16[24] >= 0)
          && !IsWindowCloaked(PrevTop)
          && ((a3 & 4) == 0 || !(unsigned int)SkipWindowOnMonitor(PrevTop)) )
        {
          v8 = PrevTop;
          break;
        }
      }
LABEL_15:
      v17 = PrevTop;
      if ( (a3 & 1) != 0 )
      {
        PrevTop = (const struct tagWND *)anonymous_namespace_::NTW_GetPrevTop(v10, PrevTop);
      }
      else
      {
        v18 = PrevTop;
        v19 = 0LL;
        while ( 1 )
        {
          PrevTop = (const struct tagWND *)anonymous_namespace_::GNT_NextTopScan(v10, v19, v18);
          if ( PrevTop )
            break;
          v19 = v18;
          if ( !v18 )
          {
            PrevTop = (const struct tagWND *)anonymous_namespace_::GNT_NextTopScan(v10, 0LL, 0LL);
            break;
          }
          v18 = (const struct tagWND *)*((_QWORD *)v18 + 15);
        }
        v9 = v22;
      }
      if ( PrevTop == (const struct tagWND *)i )
        break;
      if ( PrevTop == (const struct tagWND *)TopScan )
      {
        if ( v9 )
          break;
        v9 = 1;
        v22 = 1;
      }
      if ( !PrevTop )
        break;
      GetDesktopWindow(i);
      DesktopWindow = GetDesktopWindow((__int64)PrevTop);
      if ( v15 != DesktopWindow )
        break;
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v21);
  return v8;
}
