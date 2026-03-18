/*
 * XREFs of ??1CFlipAwayFence@@QEAA@XZ @ 0x14009C038
 * Callers:
 *     ??_GCFlipAwayFence@@QEAAPEAXI@Z @ 0x14009B1C0 (--_GCFlipAwayFence@@QEAAPEAXI@Z.c)
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x1403313E0 (DxgkImmediateSignalSynchronizationObjectByReference.c)
 *     ?DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z @ 0x1403ABF10 (-DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z.c)
 */

void __fastcall CFlipAwayFence::~CFlipAwayFence(CFlipAwayFence *this)
{
  CFlipAwayFence **v2; // rcx
  CFlipAwayFence **v3; // rax
  void *v4; // rcx
  __int64 Win32kImportTable; // rax
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(CFlipAwayFence ***)this;
  if ( v2[1] != this || (v3 = (CFlipAwayFence **)*((_QWORD *)this + 1), *v3 != this) )
    __fastfail(3u);
  *v3 = (CFlipAwayFence *)v2;
  v2[1] = (CFlipAwayFence *)v3;
  if ( *((_DWORD *)this + 10) )
  {
    DxgkImmediateSignalSynchronizationObjectByReference(*((_QWORD *)this + 6), -1LL);
    v6.hSyncObject = *((_DWORD *)this + 10);
    DxgkCddDestroySynchronizationObject(&v6);
  }
  v4 = (void *)*((_QWORD *)this + 6);
  if ( v4 )
    ObfDereferenceObject(v4);
  Win32kImportTable = DxgkGetWin32kImportTable();
  (*(void (__fastcall **)(_QWORD, _QWORD))(Win32kImportTable + 408))(
    *((_QWORD *)this + 4),
    *(_QWORD *)((char *)this + 20));
}
