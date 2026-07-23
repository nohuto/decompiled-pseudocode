/*
 * XREFs of CmpDumpKeyBodyList @ 0x1407DB190
 * Callers:
 *     CmpFreeAllMemory @ 0x1407D56E0 (CmpFreeAllMemory.c)
 *     CmpSearchAndCountWorker @ 0x1407DB7F0 (CmpSearchAndCountWorker.c)
 *     CmpSearchForOpenSubKeys @ 0x140AB65E8 (CmpSearchForOpenSubKeys.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     CmpDumpOneKeyBody @ 0x1407DB2CC (CmpDumpOneKeyBody.c)
 *     CmpConstructName @ 0x14087A710 (CmpConstructName.c)
 */

void __fastcall CmpDumpKeyBodyList(_QWORD *a1, _DWORD *a2, __int64 a3)
{
  unsigned int v4; // ebx
  char v6; // r8
  unsigned int i; // ecx
  _QWORD **v9; // rsi
  __int64 v10; // rcx
  void *v11; // r15
  _QWORD *v12; // r14
  signed __int64 *v13; // rsi
  signed __int64 v14; // r14

  v4 = 0;
  v6 = 1;
  if ( *a1 )
  {
    for ( i = 0; i < 4; ++i )
    {
      if ( a1[i + 17] )
      {
        v6 = 0;
        break;
      }
    }
    v9 = (_QWORD **)(a1 + 15);
    if ( *v9 != v9 || v6 != 1 )
    {
      v11 = (void *)CmpConstructName(a1);
      if ( v11 )
      {
        v12 = *v9;
        if ( *v9 != v9 )
        {
          do
          {
            CmpDumpOneKeyBody(v10, v12 - 4, v11, a3);
            ++*a2;
            v12 = (_QWORD *)*v12;
          }
          while ( v12 != v9 );
          v4 = 0;
        }
        v13 = a1 + 17;
        do
        {
          v14 = *v13;
          if ( (unsigned __int64)*v13 >= 3 && v14 == _InterlockedCompareExchange64(&a1[v4 + 17], 1LL, v14) )
          {
            CmpDumpOneKeyBody(1LL, v14, v11, a3);
            ++*a2;
            _InterlockedCompareExchange64(&a1[v4 + 17], v14, 1LL);
          }
          ++v4;
          ++v13;
        }
        while ( v4 < 4 );
        CmpFreeTransientPoolWithTag(v11, 0x624E4D43u);
      }
      else if ( a3 )
      {
        *(_DWORD *)(a3 + 20) = -1073741670;
      }
    }
  }
}
