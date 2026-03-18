/*
 * XREFs of bDeletePalette @ 0x1400BF950
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x140015750 (-GrepCloseCurrentProcess@@YAHXZ.c)
 *     GrepThreadCallout @ 0x1400BF560 (GrepThreadCallout.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     HmgShareLockCheck @ 0x14002F820 (HmgShareLockCheck.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400E8C68 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0XEPALOBJ2@@QEAA@XZ @ 0x1401C24C4 (--0XEPALOBJ2@@QEAA@XZ.c)
 *     ??1XEPALOBJ2@@QEAA@XZ @ 0x1401C2508 (--1XEPALOBJ2@@QEAA@XZ.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1401C256C (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 */

__int64 __fastcall bDeletePalette(__int64 a1)
{
  __int64 SessionState; // rax
  unsigned int v3; // edi
  int v4; // r8d
  struct _ERESOURCE *v5; // rbx
  struct _GRETHREAD *v6; // rax
  _QWORD v9[7]; // [rsp+20h] [rbp-38h] BYREF
  HSEMAPHORE v10; // [rsp+68h] [rbp+10h] BYREF

  SessionState = W32GetSessionState(a1);
  SEMOBJ<13>::SEMOBJ<13>(&v10, *(_QWORD *)(SessionState + 88));
  XEPALOBJ2::XEPALOBJ2((XEPALOBJ2 *)v9);
  v3 = 0;
  v9[0] = HmgShareLockCheck(a1, 8);
  if ( v9[0] )
    v3 = XEPALOBJ::bDeletePalette(v9, 0LL);
  XEPALOBJ2::~XEPALOBJ2((XEPALOBJ2 *)v9);
  v5 = (struct _ERESOURCE *)v10;
  if ( v10 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v10, v4);
    v6 = GreGetCurrentThreadCrossSessionCheck();
    if ( v6 )
    {
      if ( (*((_BYTE *)v6 + 21))-- == 1 )
        *(_QWORD *)v6 &= ~0x2000uLL;
    }
    GreReleaseSemaphoreSharedInternal(v5);
  }
  return v3;
}
