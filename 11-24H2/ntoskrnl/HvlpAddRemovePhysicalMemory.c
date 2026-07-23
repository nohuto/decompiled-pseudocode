/*
 * XREFs of HvlpAddRemovePhysicalMemory @ 0x1406A1D78
 * Callers:
 *     HvlConfigureDynamicMemory @ 0x1406A1C38 (HvlConfigureDynamicMemory.c)
 * Callees:
 *     HvlpHvToNtStatus @ 0x14039CC08 (HvlpHvToNtStatus.c)
 *     HvcallFastExtended @ 0x14039DBD0 (HvcallFastExtended.c)
 *     HvlpDepositPages @ 0x1405814B4 (HvlpDepositPages.c)
 *     HvlpWithdrawPages @ 0x140582CD0 (HvlpWithdrawPages.c)
 */

__int64 __fastcall HvlpAddRemovePhysicalMemory(char a1, char a2, __int64 a3, unsigned __int64 a4, _QWORD *a5)
{
  int v9; // edi
  int v10; // eax
  int v11; // ebx
  char v12; // r12
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int128 v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+90h] [rbp+28h]

  v9 = 0;
  *a5 = 0LL;
  v17 = 0LL;
  LOBYTE(v17) = a2;
  if ( a1 )
    v10 = 65724;
  else
    v10 = 65783;
  v11 = 0;
  LODWORD(v18) = v10;
  while ( a4 )
  {
    v12 = 0;
    if ( a4 <= 0xFFF )
    {
      LOWORD(v13) = a4;
LABEL_14:
      v11 = v11 & 0xFFFFF000 | v13 & 0xFFF;
      goto LABEL_15;
    }
    if ( (a3 & 0x1FF) == 0 )
    {
      LOWORD(v13) = 4095;
      v12 = 1;
      if ( a4 >> 9 < 0xFFF )
        v13 = a4 >> 9;
      goto LABEL_14;
    }
    v11 |= 0xFFFu;
    HIDWORD(v18) = v11;
    if ( a4 > 0x1FFE )
    {
      v11 ^= (v11 ^ ~(a3 & 0x1FF)) & 0xFFF;
LABEL_15:
      HIDWORD(v18) = v11;
    }
    *((_QWORD *)&v17 + 1) = a3;
    BYTE1(v17) = v12;
    v14 = HvcallFastExtended(v18, (__int64)&v17, 0x10u, 0LL, 0);
    v15 = (unsigned __int64)(WORD2(v14) & 0xFFF) << 9;
    if ( !v12 )
      v15 = WORD2(v14) & 0xFFF;
    *a5 += v15;
    a4 -= v15;
    a3 += v15;
    if ( (_WORD)v14 == 11 )
    {
      v9 = HvlpDepositPages(0, WORD2(v14) & 0xFFF, 0, 0);
      if ( v9 < 0 )
      {
        v9 = -1073741670;
        break;
      }
    }
    else if ( (_WORD)v14 )
    {
      v9 = HvlpHvToNtStatus(v14);
      break;
    }
  }
  if ( !a1 && *a5 )
    HvlpWithdrawPages();
  return (unsigned int)v9;
}
