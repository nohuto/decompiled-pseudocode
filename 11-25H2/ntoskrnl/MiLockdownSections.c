/*
 * XREFs of MiLockdownSections @ 0x140A8EA10
 * Callers:
 *     MiConstructLoaderEntry @ 0x140A8E4EC (MiConstructLoaderEntry.c)
 * Callees:
 *     RtlSetBits @ 0x140339430 (RtlSetBits.c)
 *     RtlImageNtHeader @ 0x14043DFA0 (RtlImageNtHeader.c)
 *     MiGetBaseLoaderPortion @ 0x1404D0B80 (MiGetBaseLoaderPortion.c)
 *     MiGetExtendedLoaderBitmap @ 0x1404F8A74 (MiGetExtendedLoaderBitmap.c)
 */

void __fastcall MiLockdownSections(__int64 a1)
{
  void *v1; // rbp
  int v2; // ebx
  int v4; // ebx
  PIMAGE_NT_HEADERS v5; // rax
  __int64 v6; // rdi
  __int64 ExtendedLoaderBitmap; // rax
  __int64 v8; // rdx
  int v9; // esi
  _RTL_BITMAP *v10; // r14
  BOOL v11; // ecx
  int v12; // edx
  unsigned int v13; // ecx

  v1 = *(void **)(a1 + 48);
  v2 = 0;
  if ( (MiFlags & 0x8000) != 0
    && (!*(_QWORD *)(a1 + 112) || (*(_DWORD *)(MiGetBaseLoaderPortion(a1) + 184) & 0x10) != 0) )
  {
    v2 = 2;
  }
  v4 = v2 | 1;
  v5 = RtlImageNtHeader(v1);
  v6 = (__int64)&v5->OptionalHeader + v5->FileHeader.SizeOfOptionalHeader;
  ExtendedLoaderBitmap = MiGetExtendedLoaderBitmap(a1);
  v9 = *(unsigned __int16 *)(v8 + 6);
  v10 = (_RTL_BITMAP *)ExtendedLoaderBitmap;
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
          ((((unsigned __int64)v1 + *(unsigned int *)(v6 + 12) + v13 + 4095) & 0xFFFFFFFFFFFFF000uLL)
         - ((unsigned __int64)v1
          + *(unsigned int *)(v6 + 12))) >> 12);
      }
      --v9;
      v6 += 40LL;
    }
    while ( v9 > 0 );
  }
}
