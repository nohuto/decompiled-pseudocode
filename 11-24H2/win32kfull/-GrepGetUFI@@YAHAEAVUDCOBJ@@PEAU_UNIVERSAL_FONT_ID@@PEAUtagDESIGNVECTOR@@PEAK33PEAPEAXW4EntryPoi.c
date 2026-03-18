/*
 * XREFs of ?GrepGetUFI@@YAHAEAVUDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@PEAUtagDESIGNVECTOR@@PEAK33PEAPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1401DA444
 * Callers:
 *     NtGdiGetUFI @ 0x140261040 (NtGdiGetUFI.c)
 *     NtGdiGetEmbUFI @ 0x140337750 (NtGdiGetEmbUFI.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DB50 (-vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ComputeFileviewCheckSum @ 0x140114610 (ComputeFileviewCheckSum.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall GrepGetUFI(
        struct UDCOBJ *a1,
        _QWORD *a2,
        void *a3,
        _DWORD *a4,
        _DWORD *a5,
        __int64 a6,
        _QWORD *a7,
        int a8)
{
  _DWORD *v8; // r14
  unsigned int v9; // ebx
  _QWORD *v10; // r12
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 *v17; // rdi
  __int64 v18; // rsi

  v8 = (_DWORD *)a6;
  v9 = 0;
  v10 = a7;
  *(_DWORD *)a6 = 0;
  if ( v10 )
    *v10 = 0LL;
  LODWORD(a7) = a8;
  HIDWORD(a7) = *(unsigned __int16 *)(*(_QWORD *)a1 + 12LL);
  a6 = 0LL;
  RFONTOBJ::vInit((RFONTOBJ *)&a6, a1, 0, 2u, (const struct RFONTOBJ::Tag *)&a7);
  v15 = a6;
  if ( a6 )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(a6 + 120) + 84LL);
    *a2 = v16;
    v17 = *(__int64 **)(v15 + 120);
    if ( v17 )
    {
      v18 = *v17;
      if ( *v17 )
      {
        if ( *(_QWORD *)(v18 + 136) == *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v16, v14) + 96) + 20408LL) )
        {
          *v8 |= 1u;
          if ( v10 )
            *v10 = *(unsigned int *)(*v17 + 148);
        }
        if ( (*(_DWORD *)(v18 + 52) & 0x10) != 0 )
          *v8 |= 4u;
        if ( *(_QWORD *)(v18 + 40) )
        {
          *v8 |= 2u;
          if ( a3 )
            memmove(a3, *(const void **)(v18 + 40), *(unsigned int *)(v18 + 48));
          if ( a4 )
            *a4 = *(_DWORD *)(v18 + 48);
          if ( a5 )
          {
            *a5 = *(_DWORD *)(v18 + 144);
            *a5 -= ComputeFileviewCheckSum(*(_DWORD **)(v18 + 40), *(unsigned int *)(v18 + 48));
          }
        }
        else
        {
          if ( a3 )
            memset(a3, 0, 0x48uLL);
          if ( a4 )
            *a4 = 0;
          if ( a5 )
            *a5 = 0;
        }
        v9 = 1;
      }
    }
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a6);
  return v9;
}
