/*
 * XREFs of SdbpCheckAttribute @ 0x180096D80
 * Callers:
 *     SdbpCheckAllAttributes @ 0x180096ABC (SdbpCheckAllAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledPreCheck @ 0x180096A54 (Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledPreCheck.c)
 *     SdbpCheckFromStringVersion @ 0x180096FE4 (SdbpCheckFromStringVersion.c)
 *     SdbpCheckFromVersion @ 0x18009710C (SdbpCheckFromVersion.c)
 *     SdbpCheckUptoStringVersion @ 0x180097154 (SdbpCheckUptoStringVersion.c)
 *     SdbpCheckUptoVersion @ 0x180097288 (SdbpCheckUptoVersion.c)
 *     SdbpCheckVersion @ 0x1800972D0 (SdbpCheckVersion.c)
 *     AslStringPatternMatchExW @ 0x18009E3B8 (AslStringPatternMatchExW.c)
 */

__int64 __fastcall SdbpCheckAttribute(_DWORD *a1, unsigned __int16 a2, _QWORD *a3, unsigned int a4, __int64 a5)
{
  int v5; // ebx
  int v9; // eax
  __int64 result; // rax
  int v11; // r9d
  bool v12; // zf

  v5 = 0;
  *a1 = 0;
  if ( a2 > 0x5012u )
  {
    if ( a2 != 20499 )
    {
      if ( a2 == 24644 || a2 == 24645 )
      {
        Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledPreCheck();
        if ( a4 >= 2 )
        {
          v9 = SdbpCheckUptoStringVersion(a3, *(_QWORD *)(a5 + 16));
          goto LABEL_38;
        }
        goto LABEL_12;
      }
      if ( (unsigned int)a2 - 24646 < 2 )
      {
        Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledPreCheck();
        if ( a4 >= 2 )
        {
          v9 = SdbpCheckFromStringVersion(a3, *(_QWORD *)(a5 + 16));
          goto LABEL_38;
        }
        goto LABEL_12;
      }
      goto LABEL_22;
    }
LABEL_36:
    if ( a4 >= 8 )
    {
      v9 = SdbpCheckFromVersion(*a3, *(_QWORD *)(a5 + 16));
      goto LABEL_38;
    }
    goto LABEL_12;
  }
  switch ( a2 )
  {
    case 0x5012u:
      goto LABEL_36;
    case 0x401Eu:
      if ( a4 < 4 )
        goto LABEL_12;
      LOBYTE(v5) = *(_DWORD *)a3 >= *(_DWORD *)(a5 + 16);
      goto LABEL_39;
    case 0x4033u:
      if ( a4 < 4 )
        goto LABEL_12;
      LOBYTE(v5) = *(_DWORD *)a3 <= *(_DWORD *)(a5 + 16);
      goto LABEL_39;
    case 0x5002u:
    case 0x5003u:
      if ( a4 >= 8 )
      {
        v9 = SdbpCheckVersion(*a3, *(_QWORD *)(a5 + 16));
        goto LABEL_38;
      }
LABEL_12:
      AslLogCallPrintf(1LL);
      return 0LL;
    case 0x5006u:
    case 0x500Du:
      if ( a4 >= 8 )
      {
        v9 = SdbpCheckUptoVersion(*a3, *(_QWORD *)(a5 + 16));
LABEL_38:
        v5 = v9;
        goto LABEL_39;
      }
      goto LABEL_12;
  }
LABEL_22:
  v11 = a2 & 0xF000;
  switch ( v11 )
  {
    case 16384:
      if ( a4 < 4 )
        goto LABEL_12;
      v12 = *(_DWORD *)a3 == *(_DWORD *)(a5 + 16);
LABEL_31:
      LOBYTE(v5) = v12;
      break;
    case 20480:
      if ( a4 < 8 )
        goto LABEL_12;
      v12 = *a3 == *(_QWORD *)(a5 + 16);
      goto LABEL_31;
    case 24576:
      if ( a4 >= 2 )
      {
        v9 = AslStringPatternMatchExW(a3, *(_QWORD *)(a5 + 16));
        goto LABEL_38;
      }
      goto LABEL_12;
  }
LABEL_39:
  result = 1LL;
  *a1 = v5;
  return result;
}
