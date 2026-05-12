/*
 * XREFs of TcglibActivateLockingSpEx @ 0x14013B87C
 * Callers:
 *     RaidActivateTcgLocking @ 0x14008A8E4 (RaidActivateTcgLocking.c)
 * Callees:
 *     TcglibEalLogInfo @ 0x140085CB8 (TcglibEalLogInfo.c)
 *     TcglibpCheckContext @ 0x14013D280 (TcglibpCheckContext.c)
 *     TcglibpCheckError @ 0x14013D2CC (TcglibpCheckError.c)
 *     TcglibpGetTableColumnData @ 0x14013F300 (TcglibpGetTableColumnData.c)
 *     TcglibpSetTableColumnData @ 0x14013F4F0 (TcglibpSetTableColumnData.c)
 *     TcglibpActivateLockingSp @ 0x14013F7B4 (TcglibpActivateLockingSp.c)
 *     TcglibpAuthenticateSession @ 0x14014147C (TcglibpAuthenticateSession.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall TcglibActivateLockingSpEx(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  int v8; // ecx
  _OWORD *v9; // r10
  int TableColumnData; // eax
  char v12[8]; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v13[2]; // [rsp+48h] [rbp-70h] BYREF
  int v14; // [rsp+68h] [rbp-50h]

  if ( *(_DWORD *)(a1 + 32) == 512 && a3 <= 1 )
  {
    v6 = TcglibpCheckContext(a1, a2);
    if ( !v6 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 28), 1, 0) == 1 )
      {
        return (unsigned int)-2147483631;
      }
      else
      {
        v14 = 0;
        memset(v13, 0, sizeof(v13));
        if ( (v9
           || (TableColumnData = TcglibpGetTableColumnData(v8, v7, 33794, 3, (__int64)v13 + 4, 32, (__int64)v13),
               v9 = v13,
               TableColumnData >= 0))
          && (TableColumnData = TcglibpAuthenticateSession(a1, a2, 0x900000006LL, v9), TableColumnData >= 0)
          && (TableColumnData = TcglibpActivateLockingSp(a1, a2, a3), TableColumnData >= 0)
          || (v6 = TcglibpCheckError(a1, a2, (unsigned int)TableColumnData), v6 >= 0) )
        {
          v12[0] = 1;
          v6 = TcglibpSetTableColumnData(a1, a2, 196609, 8, (__int64)v12, 1, 8);
          if ( v6 >= 0 )
            TcglibEalLogInfo(*(int **)a1, "TcglibActivateLockingSpEx success", a3, 0, 0LL);
        }
        _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v6;
}
