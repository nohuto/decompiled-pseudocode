/*
 * XREFs of ?UpdateDCompVisuals@CTopLevelWindow@@AEAAXXZ @ 0x180006CFC
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18003DE40 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CTopLevelWindow::UpdateDCompVisuals(CTopLevelWindow *this)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx

  v1 = *((_QWORD *)this + 94);
  if ( v1 && *(_DWORD *)(v1 + 560) )
  {
    v3 = 0LL;
    do
    {
      v4 = *(_QWORD *)(*(_QWORD *)(v1 + 536) + 8 * v3);
      if ( *(_BYTE *)(v4 + 34) )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 104) + 64LL))(*(_QWORD *)(v4 + 104));
      v1 = *((_QWORD *)this + 94);
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < *(_DWORD *)(v1 + 560) );
  }
}
