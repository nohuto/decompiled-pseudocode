/*
 * XREFs of MiDbgPatchIdentity @ 0x140680100
 * Callers:
 *     MiDbgCopyMemory @ 0x14067F6A8 (MiDbgCopyMemory.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1406803F0 (MiDbgTranslatePhysicalAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDbgPatchIdentity(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // rdx

  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0
    || (*(_BYTE *)(a1 + 34) & 2) == 0 && (*(_BYTE *)(a1 + 34) & 7) != 4 )
  {
    return 0LL;
  }
  if ( *(__int64 *)(a1 + 40) >= 0 )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  if ( (v6 & 0x400) == 0 )
    return 0LL;
  if ( qword_140E2DCC0 && (v6 & 0x10) == 0 )
    v6 &= ~qword_140E2DCC0;
  v7 = v6 >> 16;
  v8 = *(_QWORD *)v7;
  if ( (*(_DWORD *)(*(_QWORD *)v7 + 56LL) & 0x20) == 0 )
    return 0LL;
  v9 = *(_QWORD *)(v7 + 8);
  v10 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  if ( v10 < v9 || v10 >= v9 + 8LL * *(unsigned int *)(v7 + 44) )
    return 0LL;
  if ( a2 )
    *a2 = v8;
  if ( a3 )
    *a3 = (__int64)(v10 - *(_QWORD *)(v8 + 136)) >> 3;
  return 1LL;
}
