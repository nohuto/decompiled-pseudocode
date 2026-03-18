/*
 * XREFs of ?DxgkEngGetRedirBitmapSharedHandleApiExt@@YAXPEAUHDC__@@PEAPEAX@Z @ 0x1400F8060
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall DxgkEngGetRedirBitmapSharedHandleApiExt(HDC a1, void **a2)
{
  int (*v4)(void); // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  void (__fastcall *v7)(HDC, void **); // rax

  v4 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 272LL);
  if ( v4 && v4() >= 0 )
  {
    v7 = *(void (__fastcall **)(HDC, void **))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6, v5) + 24) + 280LL);
    if ( v7 )
      v7(a1, a2);
  }
}
