/*
 * XREFs of ?bMatchRealization@RFONTOBJ@@AEAAHPEAU_FD_XFORM@@KKPEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1401542F0
 * Callers:
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKPEAUHDEV__@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x14005D5B0 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKPEAUHDEV__@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RFONTOBJ::bMatchRealization(
        RFONTOBJ *this,
        struct _FD_XFORM *a2,
        int a3,
        int a4,
        struct EXFORMOBJ *a5,
        struct PFE *a6,
        int a7,
        int a8,
        int a9,
        unsigned int a10)
{
  __int64 v11; // rdx
  int v14; // eax
  int v15; // r8d
  int v16; // r8d
  __int64 v17; // rcx

  v11 = *(_QWORD *)this;
  if ( *(struct PFE **)(*(_QWORD *)this + 120LL) != a6 )
    return 0LL;
  if ( a10 != (*(_DWORD *)(v11 + 84) & 6) )
    return 0LL;
  v14 = *(_DWORD *)(v11 + 12);
  v15 = a3 ^ v14;
  if ( (v15 & 0xE000) != 0 )
    return 0LL;
  v16 = v15 & 0x50010000;
  if ( v16 )
  {
    if ( (a3 & 0x10000) != 0 && (v14 & 0x20000) != 0 )
      v16 &= 0x50000000u;
    if ( ((v14 & 0x12000000) != 0x2000000 || (a3 & 0x10000000) == 0) && v16 )
      return 0LL;
  }
  if ( *(_DWORD *)(v11 + 40) != a4 )
    return 0LL;
  v17 = *(_QWORD *)&a2->eXX - *(_QWORD *)(v11 + 136);
  if ( *(_QWORD *)&a2->eXX == *(_QWORD *)(v11 + 136) )
    v17 = *(_QWORD *)&a2->eYX - *(_QWORD *)(v11 + 144);
  if ( v17
    || a7 != *(_DWORD *)(v11 + 664)
    || a5 && !EXFORMOBJ::bEqualExceptTranslations(a5, (const struct MATRIX *)(v11 + 172))
    || *(_DWORD *)(*(_QWORD *)this + 208LL) != a8 )
  {
    return 0LL;
  }
  if ( a9 )
    return 1LL;
  return *(_DWORD *)(*(_QWORD *)this + 648LL) == 0;
}
