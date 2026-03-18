/*
 * XREFs of MiLockdownSections @ 0x140A93500
 * Callers:
 *     MiConstructLoaderEntry @ 0x140A92FE4 (MiConstructLoaderEntry.c)
 * Callees:
 *     RtlSetBits @ 0x14024BCC0 (RtlSetBits.c)
 *     RtlImageNtHeader @ 0x14043E310 (RtlImageNtHeader.c)
 *     MiGetBaseLoaderPortion @ 0x1404D0508 (MiGetBaseLoaderPortion.c)
 *     MiGetExtendedLoaderBitmap @ 0x1404FB0FC (MiGetExtendedLoaderBitmap.c)
 */

void __fastcall MiLockdownSections(__int64 a1)
{
  unsigned __int64 v1; // rbp
  int v2; // ebx
  int v4; // ebx
  unsigned __int64 v5; // rax
  __int64 v6; // rdi
  __int64 ExtendedLoaderBitmap; // rax
  __int64 v8; // rdx
  int v9; // esi
  RTL_BITMAP *v10; // r14
  BOOL v11; // ecx
  int v12; // edx
  unsigned int v13; // ecx

  v1 = *(_QWORD *)(a1 + 48);
  v2 = 0;
  if ( (MiFlags & 0x8000) != 0
    && (!*(_QWORD *)(a1 + 112) || (*(_DWORD *)(MiGetBaseLoaderPortion(a1) + 184) & 0x10) != 0) )
  {
    v2 = 2;
  }
  v4 = v2 | 1;
  v5 = RtlImageNtHeader(v1);
  v6 = *(unsigned __int16 *)(v5 + 20) + v5 + 24;
  ExtendedLoaderBitmap = MiGetExtendedLoaderBitmap(a1);
  v9 = *(unsigned __int16 *)(v8 + 6);
  v10 = (RTL_BITMAP *)ExtendedLoaderBitmap;
  if ( *(_WORD *)(v8 + 6) )
  {
    do
    {
      v11 = 0;
      if ( *(_DWORD *)v6 == 1987011374 )
        v11 = *(_WORD *)(v6 + 4) == 29285;
      v12 = v11 | 2;
      if ( (*(_DWORD *)(v6 + 36) & 0x20000000) == 0 )
        v12 = v11;
      if ( (v12 & v4) != 0 )
      {
        v13 = *(_DWORD *)(v6 + 16);
        if ( v13 < *(_DWORD *)(v6 + 8) )
          v13 = *(_DWORD *)(v6 + 8);
        RtlSetBits(
          v10,
          *(_DWORD *)(v6 + 12) >> 12,
          (((*(unsigned int *)(v6 + 12) + v1 + v13 + 4095LL) & 0xFFFFFFFFFFFFF000uLL) - (*(unsigned int *)(v6 + 12) + v1)) >> 12);
      }
      --v9;
      v6 += 40LL;
    }
    while ( v9 > 0 );
  }
}
