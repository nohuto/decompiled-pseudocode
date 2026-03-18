/*
 * XREFs of ??1?$CMILCOMBaseWeakRefSource@VCMilObjectDeleter@@@@MEAA@XZ @ 0x1801E5DA4
 * Callers:
 *     ??1COverlaySwapChain@@MEAA@XZ @ 0x1801F50FC (--1COverlaySwapChain@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILCOMBaseWeakRefSource<CMilObjectDeleter>::~CMILCOMBaseWeakRefSource<CMilObjectDeleter>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16));
  }
  return result;
}
