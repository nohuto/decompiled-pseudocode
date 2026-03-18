/*
 * XREFs of ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x18018D380
 * Callers:
 *     ??1CChannelContext@@EEAA@XZ @ 0x18018CF2C (--1CChannelContext@@EEAA@XZ.c)
 *     ??1CResourceTable@@UEAA@XZ @ 0x18018D2DC (--1CResourceTable@@UEAA@XZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180259E9C (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x180110290 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
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
