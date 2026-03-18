/*
 * XREFs of ?DestroyDelayDeleteResources@CComposition@@QEAAXXZ @ 0x1801335D0
 * Callers:
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x1800ED3DC (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ??_ECVisualTree@@UEAAPEAXI@Z @ 0x1801336D0 (--_ECVisualTree@@UEAAPEAXI@Z.c)
 *     ??_GCSurfaceBrush@@MEAAPEAXI@Z @ 0x180133720 (--_GCSurfaceBrush@@MEAAPEAXI@Z.c)
 *     ??_ECRectangleGeometry@@UEAAPEAXI@Z @ 0x180133770 (--_ECRectangleGeometry@@UEAAPEAXI@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CComposition::DestroyDelayDeleteResources(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  const char *v3; // r9
  CVisualTree *v4; // rcx
  __int64 v5; // rax
  void *(__fastcall *v6)(CRectangleGeometry *__hidden, unsigned int); // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = this + 143;
  EnterCriticalSection(this + 143);
  while ( 1 )
  {
    v4 = *(CVisualTree **)&this[144].LockCount;
    if ( !v4 )
      break;
    v5 = *((_QWORD *)v4 + 8);
    *(_QWORD *)&this[144].LockCount = v5;
    if ( !v5 )
      this[144].OwningThread = 0LL;
    if ( *((_DWORD *)v4 + 2) != -1 )
    {
      this[144].LockSemaphore = v4;
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x5A,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resource.cpp",
        v3);
    }
    v6 = *(void *(__fastcall **)(CRectangleGeometry *__hidden, unsigned int))(*(_QWORD *)v4 + 32LL);
    if ( v6 == CVisualTree::`vector deleting destructor' )
    {
      CVisualTree::`vector deleting destructor'(v4, 1u);
    }
    else if ( v6 == CSurfaceBrush::`scalar deleting destructor' )
    {
      CSurfaceBrush::`scalar deleting destructor'(v4, 1u);
    }
    else if ( v6 == CRectangleGeometry::`vector deleting destructor' )
    {
      CRectangleGeometry::`vector deleting destructor'(v4, 1u);
    }
    else
    {
      v6(v4, 1u);
    }
  }
  if ( v1 )
    LeaveCriticalSection(v1);
}
