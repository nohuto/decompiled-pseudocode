/*
 * XREFs of ?IsViewRectValid@TabletModePositioner@@AEAA_NAEBUtagRECT@@0@Z @ 0x18051BE24
 * Callers:
 *     ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x180520704 (-ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Tab.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall TabletModePositioner::IsViewRectValid(
        TabletModePositioner *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3)
{
  __int64 v3; // rcx
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int128 v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+40h] [rbp-18h]

  v3 = *((_QWORD *)this + 31);
  v14 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v3 + 24LL))(v3, &v12);
  v6 = a3->left - a2->left;
  if ( v6 < 0 )
    v6 = a2->left - a3->left;
  v7 = (int)(float)((float)(8 * v13) / 100.0);
  if ( v6 > v7 )
    return 0;
  v8 = a3->top - a2->top;
  if ( v8 < 0 )
    v8 = a2->top - a3->top;
  if ( v8 > v7 )
    return 0;
  v9 = a3->right - a2->right;
  if ( v9 < 0 )
    v9 = a2->right - a3->right;
  if ( v9 > v7 )
    return 0;
  v10 = a3->bottom - a2->bottom;
  if ( v10 < 0 )
    v10 = a2->bottom - a3->bottom;
  return v10 <= v7;
}
