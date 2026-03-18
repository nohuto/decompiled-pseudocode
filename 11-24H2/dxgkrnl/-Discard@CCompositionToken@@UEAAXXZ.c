/*
 * XREFs of ?Discard@CCompositionToken@@UEAAXXZ @ 0x140037DB0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x140034140 (-UpdateDirtyRegions@CCompositionToken@@QEAAJXZ.c)
 *     ?ReleaseAllUpdates@CCompositionToken@@IEAAXXZ @ 0x140037E18 (-ReleaseAllUpdates@CCompositionToken@@IEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall CCompositionToken::Discard(CCompositionToken *this)
{
  int v1; // eax
  __int64 Win32kImportTable; // rax
  CCompositionToken *v4; // rdi

  v1 = *((_DWORD *)this + 6);
  if ( v1 >= 3 )
  {
    v4 = (CCompositionToken *)((char *)this - 8);
  }
  else
  {
    if ( !v1 && *((_QWORD *)this + 10) )
    {
      Win32kImportTable = DxgkGetWin32kImportTable();
      (*(void (__fastcall **)(_QWORD))(Win32kImportTable + 64))(*((_QWORD *)this + 10));
    }
    v4 = (CCompositionToken *)((char *)this - 8);
    CCompositionToken::UpdateDirtyRegions((CCompositionToken *)((char *)this - 8));
  }
  CCompositionToken::ReleaseAllUpdates(v4);
  *((_DWORD *)this + 6) = 6;
}
