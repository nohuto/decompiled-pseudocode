/*
 * XREFs of MiInitializeHardFaultPfn @ 0x140339E34
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x140339828 (MiBuildMdlForMappedFileFault.c)
 * Callees:
 *     MiFinalizePageAttribute @ 0x14024DDE0 (MiFinalizePageAttribute.c)
 *     MiGetContainingPageTable @ 0x1402C3750 (MiGetContainingPageTable.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSetPfnContainingFrame @ 0x14033BD00 (MiSetPfnContainingFrame.c)
 */

__int64 __fastcall MiInitializeHardFaultPfn(__int64 a1, __int64 a2, unsigned __int64 a3, int a4, unsigned int a5)
{
  int v9; // edi
  __int64 ContainingPageTable; // r15
  unsigned int v11; // eax
  unsigned int v12; // eax
  __int64 result; // rax
  int v14; // [rsp+68h] [rbp+20h]
  int v15; // [rsp+68h] [rbp+20h]
  int v16; // [rsp+68h] [rbp+20h]
  int v17; // [rsp+68h] [rbp+20h]

  v9 = 0;
  ContainingPageTable = MiGetContainingPageTable(a3);
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v9 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait();
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  *(_QWORD *)(a1 + 24) &= 0xFFFFFF0000000000uLL;
  *(_QWORD *)(a1 + 40) |= 0x8000000000000000uLL;
  HIWORD(v14) = HIWORD(*(_DWORD *)(a1 + 32));
  LOWORD(v14) = 1;
  *(_DWORD *)(a1 + 32) = v14;
  v15 = *(_DWORD *)(a1 + 32);
  BYTE2(v15) |= 0x20u;
  *(_DWORD *)(a1 + 32) = v15;
  *(_QWORD *)a1 = (a2 + 32) & -(__int64)(a2 != 0);
  v11 = *(_DWORD *)(a2 + 192);
  v16 = *(_DWORD *)(a1 + 32);
  if ( a4 )
    v12 = v11 >> 11;
  else
    v12 = v11 >> 14;
  HIBYTE(v16) ^= (HIBYTE(v16) ^ v12) & 7;
  *(_DWORD *)(a1 + 32) = v16;
  MiSetPfnContainingFrame(a1, ContainingPageTable);
  *(_QWORD *)(a1 + 8) = a3;
  v17 = *(_DWORD *)(a1 + 32);
  BYTE2(v17) = BYTE2(v17) & 0xF8 | 2;
  *(_DWORD *)(a1 + 32) = v17;
  MiFinalizePageAttribute(a1, a5, 1LL);
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
