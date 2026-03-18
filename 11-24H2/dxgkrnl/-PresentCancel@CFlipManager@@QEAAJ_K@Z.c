/*
 * XREFs of ?PresentCancel@CFlipManager@@QEAAJ_K@Z @ 0x140064B74
 * Callers:
 *     NtFlipObjectPresentCancel @ 0x14009E0C0 (NtFlipObjectPresentCancel.c)
 * Callees:
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x140019460 (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14009E7B4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipManager::PresentCancel(CFlipManager *this, __int64 a2)
{
  unsigned int v4; // esi
  __int64 Pool2; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  CFlipManager *v8; // rcx
  CFlipManager **v9; // rdx
  void (__fastcall *v10)(_QWORD, __int64); // rbx
  unsigned int TracingId; // eax
  CFlipManager::PresentHistory *v12; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax

  v4 = 0;
  Pool2 = ExAllocatePool2(257LL, 40LL, 1668301638LL);
  v6 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    v7 = (_QWORD *)(Pool2 + 8);
    v8 = (CFlipManager *)(v6 + 1);
    v7[1] = v7;
    *v7 = v7;
    *v6 = &CFlipPresentCancel::`vftable';
    v6[3] = *((_QWORD *)this + 29);
    v9 = (CFlipManager **)*((_QWORD *)this + 25);
    v6[4] = a2;
    if ( *v9 != (CFlipManager *)((char *)this + 192) )
      __fastfail(3u);
    *(_QWORD *)v8 = (char *)this + 192;
    v6[2] = v9;
    *v9 = v8;
    *((_QWORD *)this + 25) = v8;
    v10 = *(void (__fastcall **)(_QWORD, __int64))(DxgkGetWin32kImportTable() + 312);
    TracingId = CFlipManager::GetTracingId(this);
    v10(TracingId, a2);
    v12 = (CFlipManager::PresentHistory *)*((_QWORD *)this + 3);
    if ( v12 )
    {
      NextEntry = CFlipManager::PresentHistory::GetNextEntry(v12);
      *((_DWORD *)NextEntry + 10) = 11;
      *((_QWORD *)NextEntry + 2) = v6[3];
      *((_QWORD *)NextEntry + 4) = v6[4];
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v4;
}
