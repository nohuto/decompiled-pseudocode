/*
 * XREFs of GreDeleteWnd @ 0x140301670
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x14002E8AC (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     ?GrepDoBanding@@YAHAEAVXDCOBJ@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1400C23E0 (-GrepDoBanding@@YAHAEAVXDCOBJ@@HPEAU_POINTL@@PEAUtagSIZE@@@Z.c)
 *     EngDeleteWnd @ 0x140301530 (EngDeleteWnd.c)
 *     NtGdiEndPage @ 0x140327D80 (NtGdiEndPage.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140014E94 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401D399C (-GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z.c)
 *     ??0?$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140264FB0 (--0-$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$0CC@@@QEAA@PEAVEWNDOBJ@@@Z @ 0x14030058C (--0-$SEMOBJ@$0CC@@@QEAA@PEAVEWNDOBJ@@@Z.c)
 *     ?bValid@EWNDOBJ@@QEBAHXZ @ 0x140300714 (-bValid@EWNDOBJ@@QEBAHXZ.c)
 *     ?vDelete@EWNDOBJ@@QEAAXXZ @ 0x140300740 (-vDelete@EWNDOBJ@@QEAAXXZ.c)
 *     ?vUpdateDrv@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x140300FAC (-vUpdateDrv@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z.c)
 *     ?vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x14032E774 (-vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 */

void __fastcall GreDeleteWnd(struct EWNDOBJ *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  Gre::Base *v4; // rcx
  struct Gre::Base::SESSION_GLOBALS *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  const wchar_t *GlobalLockName; // rax
  struct _GRETHREAD *v9; // rax
  bool v10; // zf
  struct EWNDOBJ *v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  _QWORD *v19; // rcx
  EWNDOBJ *v20; // rcx
  const wchar_t *v21; // rax
  struct _GRETHREAD *v22; // rax
  HDC v23[19]; // [rsp+20h] [rbp-98h] BYREF
  HSEMAPHORE v24; // [rsp+C0h] [rbp+8h] BYREF
  HSEMAPHORE v25; // [rsp+C8h] [rbp+10h] BYREF
  HDEV v26; // [rsp+D0h] [rbp+18h] BYREF

  if ( EWNDOBJ::bValid(a1) )
  {
    v3 = *(_QWORD *)(v2 + 168);
    v26 = *(HDEV *)(*(_QWORD *)(v3 + 32) + 48LL);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v23, (struct PDEVOBJ *)&v26);
    v5 = Gre::Base::Globals(v4);
    SEMOBJ<33>::SEMOBJ<33>(&v25, v5);
    SEMOBJ<34>::SEMOBJ<34>(&v24, (__int64)a1);
    TRACKOBJ::vUpdateDrv((TRACKOBJ *)v3, a1, 0x20u);
    if ( v24 )
    {
      GlobalLockName = GrepGetGlobalLockName(34);
      EtwTraceGreLockReleaseSemaphore(GlobalLockName, v24);
      v9 = GreGetCurrentThreadCrossSessionCheck();
      if ( v9 )
      {
        v10 = (*(_QWORD *)v9 & 0xFFFFFFFBFFFFFFFFuLL) == 0;
        *(_QWORD *)v9 &= ~0x400000000uLL;
        if ( v10 )
          GrepOnAllLocksReleased();
      }
      GreReleaseSemaphoreExclusiveInternal(v24);
    }
    v11 = *(struct EWNDOBJ **)(v3 + 24);
    if ( v11 == a1 )
    {
      *(_QWORD *)(v3 + 24) = *((_QWORD *)a1 + 20);
    }
    else
    {
      while ( v11 )
      {
        v12 = (_QWORD *)((char *)v11 + 160);
        v11 = (struct EWNDOBJ *)*((_QWORD *)v11 + 20);
        if ( v11 == a1 )
        {
          *v12 = *((_QWORD *)a1 + 20);
          break;
        }
      }
    }
    EWNDOBJ::vDelete(a1, v6, v7);
    *((_DWORD *)a1 + 38) = 0;
    Win32FreePool(a1);
    if ( !*(_QWORD *)(v3 + 24) )
    {
      v16 = *(_QWORD *)(W32GetSessionState(v14, v13) + 96);
      v18 = *(_QWORD *)(v16 + 4824);
      if ( v3 == v18 )
      {
        *(_QWORD *)(v16 + 4824) = *(_QWORD *)(v3 + 8);
      }
      else
      {
        while ( v18 )
        {
          v19 = (_QWORD *)(v18 + 8);
          v18 = *(_QWORD *)(v18 + 8);
          if ( v18 == v3 )
          {
            *v19 = *(_QWORD *)(v3 + 8);
            break;
          }
        }
      }
      v20 = *(EWNDOBJ **)(v3 + 16);
      if ( v20 )
      {
        EWNDOBJ::vDelete(v20, v15, v17);
        *(_DWORD *)(*(_QWORD *)(v3 + 16) + 152LL) = 0;
        Win32FreePool(*(void **)(v3 + 16));
      }
      *(_DWORD *)v3 = 0;
      Win32FreePool((void *)v3);
    }
    vSpWndobjChange(v26, 0LL);
    if ( v25 )
    {
      v21 = GrepGetGlobalLockName(33);
      EtwTraceGreLockReleaseSemaphore(v21, v25);
      v22 = GreGetCurrentThreadCrossSessionCheck();
      if ( v22 )
      {
        v10 = (*(_QWORD *)v22 & 0xFFFFFFFDFFFFFFFFuLL) == 0;
        *(_QWORD *)v22 &= ~0x200000000uLL;
        if ( v10 )
          GrepOnAllLocksReleased();
      }
      GreReleaseSemaphoreExclusiveInternal(v25);
    }
    DEVLOCKOBJ::~DEVLOCKOBJ(v23);
    PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v26);
  }
}
