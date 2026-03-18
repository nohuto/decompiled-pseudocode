/*
 * XREFs of ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x1800C0EB0
 * Callers:
 *     ??1CChannelContext@@EEAA@XZ @ 0x1800C0A5C (--1CChannelContext@@EEAA@XZ.c)
 *     ??1CResourceTable@@UEAA@XZ @ 0x1800C0E0C (--1CResourceTable@@UEAA@XZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180264D94 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18014BED0 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<CProcessAttribution>(CDrawListCache **a1)
{
  CDrawListCache *v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v2);
    *a1 = 0LL;
  }
  return result;
}
