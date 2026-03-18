/*
 * XREFs of ??1?$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801B1664
 * Callers:
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18010A010 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 *     ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x180147934 (-DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ.c)
 *     ??1CDrawListBatchManager@@IEAA@XZ @ 0x1801B1608 (--1CDrawListBatchManager@@IEAA@XZ.c)
 * Callees:
 *     ??_GCDrawListEntryBatch@@EEAAPEAXI@Z @ 0x1801B18D0 (--_GCDrawListEntryBatch@@EEAAPEAXI@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::com_ptr_t<CDrawListEntryBatch,wil::err_returncode_policy>::~com_ptr_t<CDrawListEntryBatch,wil::err_returncode_policy>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rbx
  int v2; // edi
  int v3; // edi
  void *(__fastcall *v4)(CDrawListEntryBatch *__hidden, unsigned int); // rax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *a1;
  if ( *a1 )
  {
    v2 = _InterlockedDecrement(v1 + 2);
    if ( v2 < -1 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x26,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v5);
    if ( !v2 )
    {
      if ( _InterlockedAdd(v1 + 2, 1u) <= 0 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x18,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v5);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 40LL))(v1);
      v3 = _InterlockedDecrement(v1 + 2);
      if ( v3 < -1 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x26,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v5);
      if ( !v3 )
      {
        if ( _InterlockedDecrement(v1 + 2) < -1 )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x26,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v5);
        v4 = *(void *(__fastcall **)(CDrawListEntryBatch *__hidden, unsigned int))(*(_QWORD *)v1 + 32LL);
        if ( v4 == CDrawListEntryBatch::`scalar deleting destructor' )
          CDrawListEntryBatch::`scalar deleting destructor'((CDrawListEntryBatch *)v1, 1u);
        else
          v4((CDrawListEntryBatch *)v1, 1u);
      }
    }
  }
}
