/*
 * XREFs of ?InitializeAttributes@CFlipExBuffer@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1400189CC
 * Callers:
 *     ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_N@Z @ 0x1400186F4 (-Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_N@Z.c)
 *     ?Initialize@CCompositionSwapchainBuffer@@AEAAJ_NPEAUFlipManagerObject@@_K2@Z @ 0x1400A18C4 (-Initialize@CCompositionSwapchainBuffer@@AEAAJ_NPEAUFlipManagerObject@@_K2@Z.c)
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipExBuffer::InitializeAttributes(CFlipExBuffer *this, const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  __int64 Win32kImportTable; // rax
  int v5; // edi
  __int64 v7; // rax
  __int64 v8; // rax

  Win32kImportTable = DxgkGetWin32kImportTable();
  v5 = (*(__int64 (__fastcall **)(char *))(Win32kImportTable + 40))((char *)this + 296);
  if ( v5 >= 0 )
  {
    *((_DWORD *)this + 162) = (unsigned int)PsGetCurrentProcessId();
    *((_OWORD *)this + 3) = *(_OWORD *)a2;
    *((_OWORD *)this + 4) = *((_OWORD *)a2 + 1);
    *((_OWORD *)this + 5) = *((_OWORD *)a2 + 2);
    *((_OWORD *)this + 6) = *((_OWORD *)a2 + 3);
    *((_OWORD *)this + 7) = *((_OWORD *)a2 + 4);
    *((_OWORD *)this + 8) = *((_OWORD *)a2 + 5);
    *((_OWORD *)this + 9) = *((_OWORD *)a2 + 6);
    *((_OWORD *)this + 10) = *((_OWORD *)a2 + 7);
    *((_OWORD *)this + 11) = *((_OWORD *)a2 + 8);
    if ( (*((_BYTE *)a2 + 136) & 0x50) == 0x50
      && ((v7 = DxgkGetWin32kImportTable(), (*(unsigned int (**)(void))(v7 + 440))())
       || (v8 = DxgkGetWin32kImportTable(), (*(unsigned int (**)(void))(v8 + 528))())
       || (*((_DWORD *)a2 + 34) & 0x80u) != 0) )
    {
      *((_DWORD *)this + 46) |= 0x40u;
    }
    else
    {
      *((_DWORD *)this + 46) &= ~0x40u;
    }
  }
  return (unsigned int)v5;
}
