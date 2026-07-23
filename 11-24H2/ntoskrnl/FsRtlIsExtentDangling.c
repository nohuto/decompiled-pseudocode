/*
 * XREFs of FsRtlIsExtentDangling @ 0x14070AAD0
 * Callers:
 *     <none>
 * Callees:
 *     MiIsExtentDangling @ 0x1407F09E0 (MiIsExtentDangling.c)
 */

__int64 __fastcall FsRtlIsExtentDangling(__int64 a1, __int64 a2)
{
  return MiIsExtentDangling(a1, a2, 0LL);
}
