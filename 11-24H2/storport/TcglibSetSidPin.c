/*
 * XREFs of TcglibSetSidPin @ 0x14013CD8C
 * Callers:
 *     RaidSetTcgSpAuthorityKey @ 0x14008E83C (RaidSetTcgSpAuthorityKey.c)
 * Callees:
 *     TcglibEalLogInfo @ 0x140085CB8 (TcglibEalLogInfo.c)
 *     TcglibpCheckContext @ 0x14013D280 (TcglibpCheckContext.c)
 *     TcglibpCheckError @ 0x14013D2CC (TcglibpCheckError.c)
 *     TcglibpGetTableColumnData @ 0x14013F300 (TcglibpGetTableColumnData.c)
 *     TcglibpSetPin @ 0x14014091C (TcglibpSetPin.c)
 *     TcglibpAuthenticateSession @ 0x14014147C (TcglibpAuthenticateSession.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall TcglibSetSidPin(int **a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // ebx
  __int64 v8; // rdx
  _OWORD *v9; // r10
  int TableColumnData; // eax
  _OWORD v12[2]; // [rsp+40h] [rbp-58h] BYREF
  int v13; // [rsp+60h] [rbp-38h]

  v13 = 0;
  memset(v12, 0, sizeof(v12));
  if ( a4 )
  {
    v7 = TcglibpCheckContext(a1, a2);
    if ( !v7 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 28), 1, 0) == 1 )
      {
        return (unsigned int)-2147483631;
      }
      else
      {
        if ( (v9
           || (TableColumnData = TcglibpGetTableColumnData((_DWORD)a1, v8, 33794, 3, (__int64)v12 + 4, 32, (__int64)v12),
               v9 = v12,
               v7 = TableColumnData,
               TableColumnData >= 0))
          && (v7 = TcglibpAuthenticateSession(a1, a2, 0x900000006LL, v9), v7 >= 0)
          && (v7 = TcglibpSetPin(a1, a2, 0xB00000001LL, a4), v7 >= 0) )
        {
          TcglibEalLogInfo(*a1, "TcglibSetSidPin success", 0, 0, 0LL);
        }
        else
        {
          v7 = TcglibpCheckError(a1, a2, (unsigned int)v7);
        }
        _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
