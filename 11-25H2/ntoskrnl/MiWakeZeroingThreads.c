/*
 * XREFs of MiWakeZeroingThreads @ 0x140437060
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiWorkingSetManager @ 0x1403B36E0 (MiWorkingSetManager.c)
 *     MiWakePageZeroing @ 0x140436E60 (MiWakePageZeroing.c)
 *     MiZeroNodeExiting @ 0x140684D94 (MiZeroNodeExiting.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14020E620 (KeSetActualBasePriorityThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140299100 (ObReferenceObjectSafeWithTag.c)
 *     MiAddZeroingThreads @ 0x140437118 (MiAddZeroingThreads.c)
 *     MiLogZeroPageDecision @ 0x140437720 (MiLogZeroPageDecision.c)
 *     MiIncrementZeroEngineThread @ 0x1404378CC (MiIncrementZeroEngineThread.c)
 */

char __fastcall MiWakeZeroingThreads(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbp
  int v4; // ebx
  _QWORD **v5; // rbx
  _QWORD *i; // rdi
  _QWORD *v7; // rsi
  int v8; // r14d
  void *v9; // r15
  int v11; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v3 = 3LL;
  if ( *(_DWORD *)(v1 + 92) )
  {
    v5 = (_QWORD **)(a1 + 328);
    do
    {
      if ( *((_BYTE *)v5 - 161) )
      {
        for ( i = *v5; i != v5; i = (_QWORD *)*i )
        {
          v7 = i - 52;
          v8 = *((_DWORD *)i - 8);
          if ( (v8 & 1) != 0 )
          {
            if ( (v8 & 4) == 0 )
            {
              v9 = (void *)v7[41];
              LOBYTE(v1) = ObReferenceObjectSafeWithTag((__int64)v9, 0x655A6D4Du);
              if ( (_BYTE)v1 )
              {
                *((_DWORD *)v7 + 96) |= 8u;
                KeSetActualBasePriorityThread((ULONG_PTR)v9, 12);
                LOBYTE(v1) = ObfDereferenceObjectWithTag(v9, 0x655A6D4Du);
              }
            }
            if ( (v8 & 2) != 0 )
              LOBYTE(v1) = MiIncrementZeroEngineThread(i - 52);
          }
          else
          {
            LODWORD(v1) = *((_DWORD *)v7 + 96) | 0x10;
            *((_DWORD *)v7 + 96) = v1;
          }
        }
      }
      v5 += 38;
      --v3;
    }
    while ( v3 );
  }
  else
  {
    v11 = 0;
    do
    {
      v4 = MiAddZeroingThreads(a1, 3LL, &v11);
      LOBYTE(v1) = MiLogZeroPageDecision((int)a1 + 304 * v11 + 136, v11, 0, 0, 0, v4);
    }
    while ( !v4 );
  }
  return v1;
}
