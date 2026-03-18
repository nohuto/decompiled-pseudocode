/*
 * XREFs of ?bAllocPFEData@PFFMEMOBJ@@AEAAHK@Z @ 0x1400FEBEC
 * Callers:
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1400FECC0 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAUHDEV__@@I@Z @ 0x14030EA30 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAUHDEV__@@I@Z.c)
 * Callees:
 *     PALLOCMEM @ 0x1400FEC9C (PALLOCMEM.c)
 */

__int64 __fastcall PFFMEMOBJ::bAllocPFEData(PFFMEMOBJ *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  unsigned int v5; // ebx
  unsigned int v6; // ecx

  v3 = a2;
  v5 = 0;
  *(_DWORD *)(*(_QWORD *)this + 220LL) = *(_DWORD *)(*(_QWORD *)(W32GetSessionState(this, a2, a3) + 96) + 19704LL) + 140;
  *(_DWORD *)(*(_QWORD *)this + 220LL) = (*(_DWORD *)(*(_QWORD *)this + 220LL) + 7) & 0xFFFFFFF8;
  v6 = *(_DWORD *)(*(_QWORD *)this + 220LL);
  if ( v3 > 0xFFFFFFFF / v6 )
    *(_QWORD *)(*(_QWORD *)this + 224LL) = 0LL;
  else
    *(_QWORD *)(*(_QWORD *)this + 224LL) = PALLOCMEM(v3 * v6, 1701212231LL);
  LOBYTE(v5) = *(_QWORD *)(*(_QWORD *)this + 224LL) != 0LL;
  return v5;
}
