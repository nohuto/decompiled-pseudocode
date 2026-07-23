/*
 * XREFs of MiMakeDriverPageStayResident @ 0x140429E6C
 * Callers:
 *     MiMakeDriverPagesPrivate @ 0x140429928 (MiMakeDriverPagesPrivate.c)
 *     MiProtectDriverSectionPte @ 0x14066C5D0 (MiProtectDriverSectionPte.c)
 * Callees:
 *     MiRemoveSystemImagePage @ 0x14020070C (MiRemoveSystemImagePage.c)
 *     MiGetWsleContents @ 0x140344BE0 (MiGetWsleContents.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 */

unsigned __int8 __fastcall MiMakeDriverPageStayResident(__int64 a1, int a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r9
  unsigned __int8 result; // al
  _QWORD *v7; // rdi
  __int64 v8; // rbx
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = (a3 - *(_QWORD *)(a1 + 48)) >> 12;
  result = _bittest64(*(const signed __int64 **)(a1 + 312), (unsigned int)v4);
  if ( !result )
  {
    *(_BYTE *)(((unsigned __int64)(unsigned int)v4 >> 3) + *(_QWORD *)(a1 + 312)) |= 1 << (v4 & 7);
    result = MiGetWsleContents(a1, a3) & 0xF;
    if ( result != 9 )
    {
      v7 = (_QWORD *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v8 = 48 * ((*v7 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v9 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v9);
        while ( *(__int64 *)(v8 + 24) < 0 );
      }
      MiRemoveSystemImagePage(a2, (__int64)v7, v8);
      result = -1;
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return result;
}
