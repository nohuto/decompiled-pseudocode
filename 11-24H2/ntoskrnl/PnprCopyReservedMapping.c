/*
 * XREFs of PnprCopyReservedMapping @ 0x1405A46F4
 * Callers:
 *     PnprRecopyMirrorPages @ 0x1405A4E2C (PnprRecopyMirrorPages.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x14041D8B0 (MmMapLockedPagesWithReservedMapping.c)
 *     MmUnmapReservedMapping @ 0x140433320 (MmUnmapReservedMapping.c)
 *     PnprGetPageDestination @ 0x1405A4A60 (PnprGetPageDestination.c)
 *     MmContainingPageForReservedMapping @ 0x1406703E4 (MmContainingPageForReservedMapping.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 PnprCopyReservedMapping()
{
  __int64 v0; // r15
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r8
  __int64 v4; // rsi
  unsigned int v5; // edi
  PHYSICAL_ADDRESS PhysicalAddress; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r12
  __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rsi
  PHYSICAL_ADDRESS v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // r12
  __int64 v21; // rbx
  unsigned __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v26; // rcx
  __int64 v27; // rsi
  size_t v28; // rbx
  char *v29; // rdi
  char *v30; // rax
  __int64 v31; // rcx
  int v32; // eax
  int v33; // eax
  _QWORD v34[2]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD Src[16]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v36[16]; // [rsp+B8h] [rbp-50h] BYREF

  v34[0] = 0LL;
  v0 = *(_QWORD *)(PnprContext + 144);
  v1 = *(unsigned int *)(PnprContext + 180);
  v2 = 3 * v1;
  v3 = *(_QWORD *)(v0 + 24 * v1);
  v4 = v0 + 24 * v1;
  if ( (*(_BYTE *)(v3 + 10) & 1) != 0 )
    MmUnmapReservedMapping(*(PVOID *)(v4 + 8), 0x51706E50u, (PMDL)v3);
  memset_0(Src, 0, sizeof(Src));
  memset_0(v36, 0, sizeof(v36));
  v5 = 0;
  PhysicalAddress = MmGetPhysicalAddress((PVOID)(*(_QWORD *)(v0 + 8 * v2) & 0xFFFFFFFFFFFFF000uLL));
  if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD))PnprGetPageDestination)(
              (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart,
              v34) >= 0
    && v34[0] != 0x7FFFFFFFFFFFFFFFLL )
  {
    v5 = 1;
    v36[0] = v34[0] >> 12;
    Src[0] = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
  }
  v7 = *(_QWORD *)(v4 + 8);
  v8 = v7 + 0x10000;
  while ( v7 < v8 )
  {
    v9 = MmContainingPageForReservedMapping(v7);
    if ( !v5 || v9 != Src[v5 - 1] )
    {
      v10 = v9 << 12;
      if ( (int)PnprGetPageDestination(v10, v34) >= 0 && v34[0] != 0x7FFFFFFFFFFFFFFFLL )
      {
        if ( v5 >= 0x10 )
          return 3221225485LL;
        v11 = v5;
        v12 = v34[0] >> 12;
        ++v5;
        Src[v11] = v10 >> 12;
        v36[v11] = v12;
      }
    }
    v7 += 4096LL;
  }
  v13 = *(unsigned int *)(PnprContext + 180);
  v14 = *(_QWORD *)(PnprContext + 136);
  v15 = 3 * v13;
  v16 = MmGetPhysicalAddress((PVOID)(*(_QWORD *)(v14 + 24 * v13) & 0xFFFFFFFFFFFFF000uLL));
  if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD))PnprGetPageDestination)((PHYSICAL_ADDRESS)v16.QuadPart, v34) >= 0
    && v34[0] != 0x7FFFFFFFFFFFFFFFLL )
  {
    if ( v5 >= 0x10 )
      return 3221225485LL;
    v17 = v5;
    v18 = v34[0] >> 12;
    ++v5;
    Src[v17] = (unsigned __int64)v16.QuadPart >> 12;
    v36[v17] = v18;
  }
  v19 = *(_QWORD *)(v14 + 8 * v15 + 8);
  v20 = v19 + 0x10000;
  while ( v19 < v20 )
  {
    v21 = MmContainingPageForReservedMapping(v19);
    if ( v5 > 0x10 )
      return 3221225485LL;
    if ( !v5 || v21 != Src[v5 - 1] )
    {
      v22 = v21 << 12;
      if ( (int)PnprGetPageDestination(v22, v34) >= 0 && v34[0] != 0x7FFFFFFFFFFFFFFFLL )
      {
        if ( v5 >= 0x10 )
          return 3221225485LL;
        v23 = v5;
        v24 = v34[0] >> 12;
        ++v5;
        Src[v23] = v22 >> 12;
        v36[v23] = v24;
      }
    }
    v19 += 4096LL;
  }
  if ( !v5 )
    return 0LL;
  v26 = *(_QWORD *)(v0 + 8 * v2);
  v27 = v5;
  *(_DWORD *)(v26 + 40) = v5 << 13;
  *(_QWORD *)v26 = 0LL;
  *(_WORD *)(v26 + 10) = 0;
  v28 = 8LL * v5;
  *(_QWORD *)(v26 + 32) = 0LL;
  *(_DWORD *)(v26 + 44) = 0;
  *(_WORD *)(v26 + 8) = 8 * (2 * v5 + 6);
  v29 = (char *)(*(_QWORD *)(v0 + 8 * v2) + 48LL);
  memmove(v29, Src, v28);
  memmove(&v29[v28], v36, v28);
  *(_WORD *)(*(_QWORD *)(v0 + 8 * v2) + 10LL) |= *(_WORD *)(v0 + 8 * v2 + 16);
  v30 = (char *)MmMapLockedPagesWithReservedMapping(
                  *(PVOID *)(v0 + 8 * v2 + 8),
                  0x51706E50u,
                  *(PMDL *)(v0 + 8 * v2),
                  MmCached);
  if ( v30 )
  {
    memmove(&v30[4096 * v27], v30, v27 << 12);
    return 0LL;
  }
  v31 = PnprContext;
  v32 = *(_DWORD *)(PnprContext + 33288);
  if ( !v32 )
    v32 = 5984;
  *(_DWORD *)(PnprContext + 33288) = v32;
  v33 = *(_DWORD *)(v31 + 33292);
  if ( !v33 )
    v33 = 10;
  *(_DWORD *)(v31 + 33292) = v33;
  return 3221225626LL;
}
