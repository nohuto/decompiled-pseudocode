/*
 * XREFs of ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C00C30D4
 * Callers:
 *     vAccNotifyDeleteSurfaceWrap @ 0x1C00716D0 (vAccNotifyDeleteSurfaceWrap.c)
 *     GreDwmStartup @ 0x1C008F45C (GreDwmStartup.c)
 *     GreDwmShutdown @ 0x1C009DFB8 (GreDwmShutdown.c)
 *     GreAccNotifyWindow @ 0x1C00C293C (GreAccNotifyWindow.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011C6C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0286B30 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C02A25FC (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 */

void __fastcall vAccNotify(struct _SURFOBJ *a1, unsigned int a2, void *a3)
{
  HDEV hdev; // rbx
  Gre::Base *v7; // rcx
  int v8; // eax
  struct _DISPSURF *i; // rbx
  __int64 v10; // rax
  struct _SURFOBJ *DevBitmap; // rax
  void (__fastcall *v12)(struct _SURFOBJ *, _QWORD, void *); // r10
  void (__fastcall *v13)(struct _SURFOBJ *, _QWORD, void *); // rax
  __int64 v14; // rcx
  __int128 v15; // [rsp+28h] [rbp-19h] BYREF
  HDEV v16; // [rsp+38h] [rbp-9h]
  int v17; // [rsp+40h] [rbp-1h]
  _QWORD v18[2]; // [rsp+48h] [rbp+7h] BYREF
  _BYTE v19[40]; // [rsp+58h] [rbp+17h] BYREF
  __int64 v20; // [rsp+80h] [rbp+3Fh]
  __int64 v21; // [rsp+88h] [rbp+47h]

  hdev = a1->hdev;
  if ( hdev || (hdev = (HDEV)UserGetHDEV()) != 0LL )
  {
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v18);
    v21 = 0LL;
    v20 = 0LL;
    v18[0] = 0LL;
    v15 = 0LL;
    v17 = 1;
    if ( ((_DWORD)hdev[10] & 1) != 0 )
    {
      Gre::Base::Globals(v7);
      *(_QWORD *)&v15 = *((_QWORD *)hdev + 6);
      v16 = hdev;
      GreAcquireSemaphore(v15);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v15, 11LL);
    }
    v8 = *((_DWORD *)hdev + 10);
    if ( (v8 & 0x20000000) != 0 )
    {
      for ( i = (struct _DISPSURF *)**((_QWORD **)hdev + 221); i; i = *(struct _DISPSURF **)i )
      {
        v10 = *((_QWORD *)i + 6);
        if ( v10 )
        {
          if ( (*(_DWORD *)(v10 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v10 + 2096) & 0x8000) != 0 )
          {
            v7 = *(Gre::Base **)(v10 + 1760);
            if ( *((_QWORD *)v7 + 95) )
            {
              DevBitmap = GetDevBitmap(i, a1);
              v12(DevBitmap, a2, a3);
            }
          }
        }
      }
    }
    else if ( (v8 & 0x20000) == 0 && ((_DWORD)hdev[448] & 0x8000000) != 0 && ((_DWORD)hdev[524] & 0x8000) != 0 )
    {
      v13 = *(void (__fastcall **)(struct _SURFOBJ *, _QWORD, void *))(*((_QWORD *)hdev + 220) + 760LL);
      if ( v13 )
        v13(a1, a2, a3);
    }
    v14 = *(_QWORD *)(SGDGetSessionState(v7) + 32);
    if ( *(_DWORD *)(v14 + 23660) && a2 == 5 )
    {
      *(_DWORD *)(v14 + 23660) = 0;
      vForceClientRgnUpdate();
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v15);
    if ( v18[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v18);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v19);
  }
}
