/*
 * XREFs of ?HampActVerify@@YA?AW4_HAM_ACTIVITY_VERIFY_STATUS@@PEAU_HAM_ACTIVITY@@K@Z @ 0x180082338
 * Callers:
 *     ?HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180081D00 (-HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     CempListEntryIsNull @ 0x18000C00C (CempListEntryIsNull.c)
 */

__int64 __fastcall HampActVerify(__int64 a1)
{
  __int64 v1; // r9
  unsigned int v2; // r8d
  __int64 v3; // rax
  unsigned int v4; // r11d
  __int64 v5; // r10
  __int64 v6; // rcx
  int v7; // edx
  __int64 v9; // r9
  char v10; // dl
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // r8
  int v16; // eax
  int v17; // eax

  v1 = a1;
  v2 = 1;
  if ( ((*(_QWORD *)(a1 + 40) >> 57) & 7) != 5 )
    return v2;
  v3 = *(_QWORD *)(a1 + 88);
  LOBYTE(v4) = 2;
  v5 = 0LL;
  if ( !v3
    || (v6 = *(_QWORD *)(v3 + 8), (*(_BYTE *)(v6 + 552) & 1) != 0)
    || (*(_QWORD *)(v3 + 16) != -1LL) == (unsigned __int8)(*(_BYTE *)(v6 + 562) - 2) <= 1u )
  {
    v7 = *(_DWORD *)(v1 + 552);
    if ( (v7 & 3) == 2 )
      return 10LL;
    if ( *(_BYTE *)(v1 + 562) )
    {
      switch ( *(_BYTE *)(v1 + 562) )
      {
        case 1:
          if ( (v7 & 0x300) != 0 )
            return 8;
          if ( (v7 & 0x40) != 0 || *(_QWORD *)(v1 + 536) )
            return 9;
          break;
        case 2:
          if ( (v7 & 1) == 0 && !*(_QWORD *)(v1 + 528) )
            return 12;
          break;
        case 3:
          if ( (v7 & 4) == 0 )
            return 6;
          break;
        case 4:
          if ( (v7 & 1) == 0
            && (!(unsigned int)CempListEntryIsNull((_QWORD *)(v1 + 48))
             || !(unsigned int)CempListEntryIsNull((_QWORD *)(v9 + 96))) )
          {
            return v4;
          }
          break;
        default:
          return 5;
      }
    }
    else
    {
      v2 = 4;
      if ( (v7 & 4) != 0 )
        return v2;
    }
    v10 = *(_BYTE *)(v1 + 562);
    v11 = v5;
    v12 = v5;
    LOBYTE(v11) = *(_BYTE *)(v1 + 563) != 6;
    LOBYTE(v12) = v10 == (char)v4;
    if ( v12 == v11 )
    {
      if ( v10 == (_BYTE)v4 || *(_QWORD *)(v1 + 528) == v5 )
      {
        v13 = *(_QWORD *)(v1 + 544);
        v14 = v5;
        v15 = *(_QWORD *)(v1 + 536);
        v16 = v5;
        LOBYTE(v14) = v13 == 0;
        LOBYTE(v16) = v15 == 0;
        if ( v16 != v14 )
          return 14;
        v17 = *(_DWORD *)(v1 + 552);
        if ( (v17 & 0x40) != 0 && (v15 || v13) )
        {
          return 14;
        }
        else if ( (v17 & 0x3C00) != 0
               || (v17 & 0x300) == 0 && *(_WORD *)(v1 + 560) == (_WORD)v5 && *(_DWORD *)(v1 + 556) == (_DWORD)v5 )
        {
          return (unsigned int)v5;
        }
        else
        {
          return 15;
        }
      }
      else
      {
        return 13;
      }
    }
    else
    {
      return 7;
    }
  }
  return 3;
}
