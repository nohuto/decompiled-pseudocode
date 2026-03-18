/*
 * XREFs of ?vRemoveRefPalettes@@YAXK@Z @ 0x140014B30
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x140015750 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     HmgNextOwned @ 0x14001F530 (HmgNextOwned.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     HmgShareLockCheck @ 0x14002F820 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1400358E0 (HmgDecrementShareReferenceCountEx.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400E8C68 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall vRemoveRefPalettes(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 i; // rcx
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 SessionState; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbx
  HSEMAPHORE v11; // rbx
  struct _GRETHREAD *v12; // rax
  struct _BASEOBJECT *v14; // rcx
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF
  HSEMAPHORE v16; // [rsp+40h] [rbp+18h] BYREF

  v15 = 0LL;
  v2 = a1;
  for ( i = 0LL; ; i = v5 )
  {
    v5 = HmgNextOwned(i, v2, &v15);
    if ( !v5 )
      break;
    v6 = WORD1(v15);
    if ( (BYTE2(v15) & 0x1F) == 8 )
    {
      LOBYTE(v6) = BYTE2(v15) & 0x1F;
      SessionState = W32GetSessionState(v4, v6);
      SEMOBJ<13>::SEMOBJ<13>(&v16, *(_QWORD *)(SessionState + 88));
      LOBYTE(v8) = 8;
      v9 = HmgShareLockCheck(v15, v8);
      v10 = v9;
      if ( v9 )
      {
        v14 = *(struct _BASEOBJECT **)(v9 + 120);
        if ( v14 != (struct _BASEOBJECT *)v9 )
          HmgDecrementShareReferenceCountEx(v14, 0LL);
        *(_QWORD *)(v10 + 112) = *(_QWORD *)(v10 + 128);
        *(_QWORD *)(v10 + 120) = v10;
        HmgDecrementShareReferenceCountEx((struct _BASEOBJECT *)v10, 0LL);
      }
      v11 = v16;
      if ( v16 )
      {
        EtwTraceGreLockReleaseSemaphore(L"Palette", v16);
        v12 = GreGetCurrentThreadCrossSessionCheck();
        if ( v12 )
        {
          if ( (*((_BYTE *)v12 + 21))-- == 1 )
            *(_QWORD *)v12 &= ~0x2000uLL;
        }
        GreReleaseSemaphoreSharedInternal(v11);
        v16 = 0LL;
      }
    }
    v2 = a1;
  }
}
