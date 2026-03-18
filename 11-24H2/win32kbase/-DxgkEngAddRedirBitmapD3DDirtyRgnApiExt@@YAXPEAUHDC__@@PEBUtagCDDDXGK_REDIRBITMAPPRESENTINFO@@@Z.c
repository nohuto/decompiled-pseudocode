/*
 * XREFs of ?DxgkEngAddRedirBitmapD3DDirtyRgnApiExt@@YAXPEAUHDC__@@PEBUtagCDDDXGK_REDIRBITMAPPRESENTINFO@@@Z @ 0x1400FE420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall DxgkEngAddRedirBitmapD3DDirtyRgnApiExt(HDC a1, const struct tagCDDDXGK_REDIRBITMAPPRESENTINFO *a2)
{
  int (*v4)(void); // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  void (__fastcall *v7)(HDC, const struct tagCDDDXGK_REDIRBITMAPPRESENTINFO *); // rax

  v4 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 288LL);
  if ( v4 && v4() >= 0 )
  {
    v7 = *(void (__fastcall **)(HDC, const struct tagCDDDXGK_REDIRBITMAPPRESENTINFO *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6, v5)
                                                                                                  + 24)
                                                                                      + 296LL);
    if ( v7 )
      v7(a1, a2);
  }
}
