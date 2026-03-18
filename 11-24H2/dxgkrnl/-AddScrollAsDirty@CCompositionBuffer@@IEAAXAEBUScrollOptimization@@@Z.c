/*
 * XREFs of ?AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z @ 0x14003227C
 * Callers:
 *     ?NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z @ 0x140031D68 (-NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z.c)
 *     ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x140034140 (-UpdateDirtyRegions@CCompositionToken@@QEAAJXZ.c)
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall CCompositionBuffer::AddScrollAsDirty(CCompositionBuffer *this, const struct ScrollOptimization *a2)
{
  __int64 Win32kImportTable; // rax
  int v5; // eax
  __int64 *v6; // rcx
  bool v7; // sf
  __int64 v8; // rax
  void (*v9)(void); // rax
  void (***v10)(void); // [rsp+38h] [rbp+10h] BYREF

  v10 = 0LL;
  Win32kImportTable = DxgkGetWin32kImportTable();
  v5 = (*(__int64 (__fastcall **)(char *, void (****)(void)))(Win32kImportTable + 48))((char *)a2 + 4, &v10);
  v6 = (__int64 *)*((_QWORD *)this + 37);
  v7 = v5 < 0;
  v8 = *v6;
  if ( v7 )
  {
    v9 = *(void (**)(void))(v8 + 32);
  }
  else
  {
    (*(void (__fastcall **)(__int64 *, void (***)(void), __int64))(v8 + 48))(v6, v10, 2LL);
    v9 = **v10;
  }
  v9();
}
