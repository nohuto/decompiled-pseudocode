/*
 * XREFs of MiMakeDriverPageStayResident @ 0x1403F48C4
 * Callers:
 *     MiMakeDriverPagesPrivate @ 0x1403F4388 (MiMakeDriverPagesPrivate.c)
 *     MiProtectDriverSectionPte @ 0x14065F8C0 (MiProtectDriverSectionPte.c)
 * Callees:
 *     MiGetWsleContents @ 0x140239750 (MiGetWsleContents.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     MiRemoveSystemImagePage @ 0x1403FF714 (MiRemoveSystemImagePage.c)
 */

unsigned __int8 __fastcall MiMakeDriverPageStayResident(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r9
  unsigned __int8 result; // al
  _QWORD *v7; // rdi
  __int64 v8; // rbx
  int v9; // [rsp+30h] [rbp+8h] BYREF

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
      MiRemoveSystemImagePage(a2, v7, v8);
      result = -1;
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return result;
}
