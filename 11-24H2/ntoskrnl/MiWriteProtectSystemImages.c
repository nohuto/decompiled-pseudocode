/*
 * XREFs of MiWriteProtectSystemImages @ 0x1407E86C0
 * Callers:
 *     <none>
 * Callees:
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     MiProtectSystemImage @ 0x140A8D1E8 (MiProtectSystemImage.c)
 */

__int64 __fastcall MiWriteProtectSystemImages(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rcx

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 112);
  if ( !v2 || !*(_QWORD *)(MiSectionControlArea(v2) + 144) || (*(_DWORD *)(v1 + 104) & 0x8000000) == 0 )
    MiProtectSystemImage(v1, 1LL);
  return 0LL;
}
