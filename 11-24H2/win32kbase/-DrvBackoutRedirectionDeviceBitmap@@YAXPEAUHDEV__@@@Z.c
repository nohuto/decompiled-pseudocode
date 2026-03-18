/*
 * XREFs of ?DrvBackoutRedirectionDeviceBitmap@@YAXPEAUHDEV__@@@Z @ 0x1400851E0
 * Callers:
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x14019A38C (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001F87C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     GreReleaseHmgrSemaphore @ 0x14001F960 (GreReleaseHmgrSemaphore.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001FCA8 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     GreAcquireHmgrSemaphore @ 0x14001FED0 (GreAcquireHmgrSemaphore.c)
 *     HmgSafeNextObjt @ 0x140086CD0 (HmgSafeNextObjt.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1401C320C (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 */

void __fastcall DrvBackoutRedirectionDeviceBitmap(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 i; // rcx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  struct SURFACE *v6; // rcx
  struct SURFACE *v7; // [rsp+30h] [rbp+8h] BYREF
  HSEMAPHORE v8; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  SEMOBJ<20>::SEMOBJ<20>(&v8);
  for ( i = 0LL; ; i = v5 )
  {
    LOBYTE(v2) = 5;
    v5 = HmgSafeNextObjt(i, v2, &v7);
    if ( !v5 )
      break;
    GreReleaseHmgrSemaphore(v4);
    v6 = v7;
    if ( *((_QWORD *)v7 + 5) == a1[223] && (*((_DWORD *)v7 + 29) & 1) != 0 )
      vCleanupRedirectionSurface(v7, 1);
    GreAcquireHmgrSemaphore((__int64)v6);
  }
  SEMOBJ<20>::vUnlock(&v8);
}
