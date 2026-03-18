/*
 * XREFs of ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C00C32F8
 * Callers:
 *     bDynamicModeChange @ 0x1C00C75B0 (bDynamicModeChange.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0048150 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C005B180 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0097060 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vChangeWndObjs(struct SURFACE *a1, struct PDEV *a2, struct SURFACE *a3, struct PDEV *a4)
{
  __int64 (*v8)(void); // rax
  _QWORD *i; // rbx
  struct SURFACE *v10; // rax
  __int64 j; // rdi
  __int64 k; // rdi
  HSEMAPHORE v13; // [rsp+20h] [rbp-28h] BYREF
  struct PDEV *v14; // [rsp+58h] [rbp+10h] BYREF
  struct PDEV *v15; // [rsp+68h] [rbp+20h] BYREF

  v13 = *(HSEMAPHORE *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 56LL);
  EngAcquireSemaphore(v13);
  v8 = qword_1C0294C30;
  v14 = a2;
  v15 = a4;
  if ( qword_1C0294C30 )
    v8 = (__int64 (*)(void))qword_1C0294C30();
  for ( i = *(_QWORD **)v8; i; i = (_QWORD *)i[1] )
  {
    v10 = (struct SURFACE *)i[4];
    if ( v10 == a1 )
    {
      for ( j = i[3]; j; j = *(_QWORD *)(j + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v15);
        PDEVOBJ::vUnreferencePdev(&v14);
      }
    }
    else if ( v10 == a3 )
    {
      for ( k = i[3]; k; k = *(_QWORD *)(k + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v14);
        PDEVOBJ::vUnreferencePdev(&v15);
      }
    }
  }
  SEMOBJ::vUnlock((PERESOURCE *)&v13);
}
