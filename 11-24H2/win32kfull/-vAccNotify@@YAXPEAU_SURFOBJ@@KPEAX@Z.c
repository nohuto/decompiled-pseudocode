/*
 * XREFs of ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1401C1F8C
 * Callers:
 *     GreAccNotifyWindow @ 0x14002AAC0 (GreAccNotifyWindow.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x140167A80 (vAccNotifyDeleteSurfaceWrap.c)
 *     GreDwmStartup @ 0x1401C9A3C (GreDwmStartup.c)
 *     GreDwmShutdown @ 0x140264BB4 (GreDwmShutdown.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140014E94 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1402FC494 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1403007A8 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall vAccNotify(struct _SURFOBJ *a1, unsigned int a2, void *a3)
{
  HDEV hdev; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  struct _DISPSURF *i; // rbx
  __int64 v12; // rax
  struct _SURFOBJ *DevBitmap; // rax
  void (__fastcall *v14)(struct _SURFOBJ *, _QWORD, void *); // r10
  void (__fastcall *v15)(struct _SURFOBJ *, _QWORD, void *); // rax
  HDC v16[18]; // [rsp+20h] [rbp-98h] BYREF
  HDEV v17; // [rsp+C0h] [rbp+8h] BYREF

  hdev = a1->hdev;
  if ( !hdev )
    hdev = (HDEV)UserGetHDEV();
  v17 = hdev;
  if ( hdev )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v16, (struct PDEVOBJ *)&v17);
    v9 = *((_DWORD *)hdev + 10);
    if ( (v9 & 0x20000000) != 0 )
    {
      for ( i = (struct _DISPSURF *)**((_QWORD **)hdev + 223); i; i = *(struct _DISPSURF **)i )
      {
        v12 = *((_QWORD *)i + 6);
        if ( v12 )
        {
          if ( (*(_DWORD *)(v12 + 1808) & 0x8000000) != 0 && (*(_DWORD *)(v12 + 2112) & 0x8000) != 0 )
          {
            v8 = *(_QWORD *)(v12 + 1776);
            if ( *(_QWORD *)(v8 + 768) )
            {
              DevBitmap = GetDevBitmap(i, a1);
              v14(DevBitmap, a2, a3);
            }
          }
        }
      }
    }
    else if ( (v9 & 0x20000) == 0 && ((_DWORD)hdev[452] & 0x8000000) != 0 && ((_DWORD)hdev[528] & 0x8000) != 0 )
    {
      v15 = *(void (__fastcall **)(struct _SURFOBJ *, _QWORD, void *))(*((_QWORD *)hdev + 222) + 768LL);
      if ( v15 )
        v15(a1, a2, a3);
    }
    v10 = *(_QWORD *)(W32GetSessionState(v8, v7) + 96);
    if ( *(_DWORD *)(v10 + 4816) )
    {
      if ( a2 == 5 )
      {
        *(_DWORD *)(v10 + 4816) = 0;
        vForceClientRgnUpdate();
      }
    }
    DEVLOCKOBJ::~DEVLOCKOBJ(v16);
  }
}
