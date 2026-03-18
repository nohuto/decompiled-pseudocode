/*
 * XREFs of ?LogPermissionChange@DMMVIDPNTOPOLOGY@@UEAAXEW4ActionPermission_T@ProtectableFromChange@@_KE@Z @ 0x140394660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DMMVIDPNTOPOLOGY::LogPermissionChange(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v7; // rcx
  _QWORD *result; // rax
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rsi

  if ( (_DWORD)a3 == 1 )
  {
    if ( (_BYTE)a2 )
    {
      if ( (unsigned __int8)a2 == 1 )
      {
        result = (_QWORD *)WdLogNewEntry5_WdTrace((unsigned int)(unsigned __int8)a2 - 1, a2, a3, a4);
        result[3] = a4;
        result[4] = a1 - 56;
        WdLogGlobalForLineNumber = 1424;
      }
      else
      {
        v7 = (unsigned int)(unsigned __int8)a2 - 2;
        if ( (unsigned __int8)a2 == 2 )
        {
          result = (_QWORD *)WdLogNewEntry5_WdTrace(v7, a2, a3, a4);
          result[4] = a5;
          result[5] = a1 - 56;
          result[3] = a4;
          WdLogGlobalForLineNumber = 1431;
        }
        else if ( (unsigned __int8)a2 == 3 )
        {
          result = (_QWORD *)WdLogNewEntry5_WdTrace(v7, a2, a3, a4);
          result[3] = a4;
          result[4] = a1 - 56;
          WdLogGlobalForLineNumber = 1438;
        }
        else
        {
          result = (_QWORD *)WdLogSingleEntry1(2LL, (unsigned __int8)a2);
          WdLogGlobalForLineNumber = 1445;
        }
      }
    }
    else
    {
      result = (_QWORD *)WdLogNewEntry5_WdTrace((unsigned __int8)a2, a2, a3, a4);
      result[3] = a4;
      result[4] = a1 - 56;
      WdLogGlobalForLineNumber = 1417;
    }
  }
  else if ( (_DWORD)a3 == 2 )
  {
    v9 = (unsigned __int8)a2;
    if ( (_BYTE)a2 )
    {
      if ( (unsigned __int8)a2 == 1 )
      {
        v13 = WdLogNewEntry5_WdTrace((unsigned int)(unsigned __int8)a2 - 1, a2, a3, a4);
        *(_QWORD *)(v13 + 24) = a1 - 56;
        if ( v9 >= *(_QWORD *)(a1 + 80) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 74;
        }
        result = *(_QWORD **)(a1 + 88);
        *(_QWORD *)(v13 + 32) = result[v9];
        WdLogGlobalForLineNumber = 1467;
      }
      else
      {
        v10 = (unsigned int)(unsigned __int8)a2 - 2;
        if ( (unsigned __int8)a2 == 2 )
        {
          v12 = WdLogNewEntry5_WdTrace(v10, a2, a3, a4);
          *(_QWORD *)(v12 + 24) = a1 - 56;
          if ( v9 >= *(_QWORD *)(a1 + 80) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 74;
          }
          result = *(_QWORD **)(a1 + 88);
          *(_QWORD *)(v12 + 32) = result[v9];
          WdLogGlobalForLineNumber = 1474;
        }
        else if ( (unsigned __int8)a2 == 3 )
        {
          v11 = WdLogNewEntry5_WdTrace(v10, a2, a3, a4);
          *(_QWORD *)(v11 + 24) = a1 - 56;
          if ( v9 >= *(_QWORD *)(a1 + 80) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 74;
          }
          result = *(_QWORD **)(a1 + 88);
          *(_QWORD *)(v11 + 32) = result[v9];
          WdLogGlobalForLineNumber = 1481;
        }
        else
        {
          result = (_QWORD *)WdLogSingleEntry1(2LL, (unsigned __int8)a2);
          WdLogGlobalForLineNumber = 1488;
        }
      }
    }
    else
    {
      v14 = WdLogNewEntry5_WdTrace((unsigned __int8)a2, a2, a3, a4);
      *(_QWORD *)(v14 + 24) = a1 - 56;
      if ( v9 >= *(_QWORD *)(a1 + 80) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 74;
      }
      result = *(_QWORD **)(a1 + 88);
      *(_QWORD *)(v14 + 32) = result[v9];
      WdLogGlobalForLineNumber = 1460;
    }
  }
  else
  {
    result = (_QWORD *)WdLogSingleEntry1(2LL, (int)a3);
    WdLogGlobalForLineNumber = 1499;
  }
  return result;
}
