/*
 * XREFs of ?DxgkEngBltViaGDIApiExt@@YAHPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEBUtagRECT@@2QEAXIIIEEIP6AX22PEAU3@2II@ZP6AH4422@Z@Z @ 0x14011C210
 * Callers:
 *     <none>
 * Callees:
 *     DxgkEngBltViaGDI @ 0x14011C300 (DxgkEngBltViaGDI.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkEngBltViaGDIApiExt(
        const struct _D3DKMT_PRESENT *a1,
        HDC a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        void *const a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        char a9,
        char a10,
        unsigned int a11,
        void (*a12)(const struct tagRECT *, const struct tagRECT *, struct tagRECT *, const struct tagRECT *, unsigned int, unsigned int),
        int (*a13)(struct tagRECT *, struct tagRECT *, const struct tagRECT *, const struct tagRECT *))
{
  int v13; // edi
  int v14; // esi
  int v15; // ebp
  int v16; // r14d
  unsigned int v17; // ebx
  int (*v18)(void); // rax

  v13 = (int)a4;
  v14 = (int)a3;
  v15 = (int)a2;
  v16 = (int)a1;
  v17 = 0;
  v18 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 240LL);
  if ( v18 && v18() >= 0 )
    return (unsigned int)DxgkEngBltViaGDI(
                           v16,
                           v15,
                           v14,
                           v13,
                           (__int64)a5,
                           a6,
                           a7,
                           a8,
                           a9,
                           a10,
                           a11,
                           (__int64)a12,
                           (__int64)a13);
  return v17;
}
