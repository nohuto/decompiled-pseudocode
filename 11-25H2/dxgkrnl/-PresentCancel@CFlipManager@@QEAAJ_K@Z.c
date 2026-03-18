/*
 * XREFs of ?PresentCancel@CFlipManager@@QEAAJ_K@Z @ 0x140064F54
 * Callers:
 *     NtFlipObjectPresentCancel @ 0x14009BD60 (NtFlipObjectPresentCancel.c)
 * Callees:
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x140009F2C (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 *     DxgkGetWin32kImportTable @ 0x14000CC5C (DxgkGetWin32kImportTable.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14009C454 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipManager::PresentCancel(CFlipManager *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // esi
  __int64 Pool2; // rax
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  CFlipManager *v10; // rcx
  CFlipManager **v11; // rdx
  void (__fastcall *v12)(_QWORD, __int64); // rbx
  unsigned int TracingId; // eax
  CFlipManager::PresentHistory *v14; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax

  v6 = 0;
  Pool2 = ExAllocatePool2(257LL, 40LL, 1668301638LL, a4);
  v8 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    v9 = (_QWORD *)(Pool2 + 8);
    v10 = (CFlipManager *)(v8 + 1);
    v9[1] = v9;
    *v9 = v9;
    *v8 = &CFlipPresentCancel::`vftable';
    v8[3] = *((_QWORD *)this + 29);
    v11 = (CFlipManager **)*((_QWORD *)this + 25);
    v8[4] = a2;
    if ( *v11 != (CFlipManager *)((char *)this + 192) )
      __fastfail(3u);
    *(_QWORD *)v10 = (char *)this + 192;
    v8[2] = v11;
    *v11 = v10;
    *((_QWORD *)this + 25) = v10;
    v12 = *(void (__fastcall **)(_QWORD, __int64))(DxgkGetWin32kImportTable() + 312);
    TracingId = CFlipManager::GetTracingId(this);
    v12(TracingId, a2);
    v14 = (CFlipManager::PresentHistory *)*((_QWORD *)this + 3);
    if ( v14 )
    {
      NextEntry = CFlipManager::PresentHistory::GetNextEntry(v14);
      *((_DWORD *)NextEntry + 10) = 11;
      *((_QWORD *)NextEntry + 2) = v8[3];
      *((_QWORD *)NextEntry + 4) = v8[4];
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v6;
}
