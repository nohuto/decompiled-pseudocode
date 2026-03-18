/*
 * XREFs of ?GetMoveableResourceCallback@VIDMM_GLOBAL@@QEAAP6A_NPEBUVIDMM_PHYSICAL_ALLOC@@@ZXZ @ 0x140093E4C
 * Callers:
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUVIDMM_PHYSICAL_ALLOC@@PEA_K@Z @ 0x14009C8BC (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUV.c)
 *     ?Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1400A4090 (-Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@EE@Z @ 0x1400D3588 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@EE@Z.c)
 * Callees:
 *     <none>
 */

bool (__fastcall *__fastcall VIDMM_GLOBAL::GetMoveableResourceCallback(
        VIDMM_GLOBAL *this))(const struct VIDMM_PHYSICAL_ALLOC *)
{
  bool (__fastcall *result)(const struct VIDMM_PHYSICAL_ALLOC *); // rax

  if ( !*(_BYTE *)(*((_QWORD *)this + 3) + 3056LL) )
    return VIDMM_SEGMENT::IsMovableResourceNoDisplayingCB;
  result = VIDMM_SEGMENT::IsMovableResourceNoDisplayingCB;
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL) + 152LL) == 1 )
    return VIDMM_SEGMENT::IsMovableResourceCB;
  return result;
}
