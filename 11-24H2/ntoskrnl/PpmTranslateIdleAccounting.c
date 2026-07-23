/*
 * XREFs of PpmTranslateIdleAccounting @ 0x1404369F0
 * Callers:
 *     PpmEventTraceProcessorIdleAccounting @ 0x140436770 (PpmEventTraceProcessorIdleAccounting.c)
 *     PpmWmiFireIdleAccountingEvent @ 0x1405D5500 (PpmWmiFireIdleAccountingEvent.c)
 * Callees:
 *     PpmConvertTimeTo @ 0x140370A00 (PpmConvertTimeTo.c)
 *     PpmUpdateProcessorIdleAccounting @ 0x1404371A8 (PpmUpdateProcessorIdleAccounting.c)
 */

ULONGLONG __fastcall PpmTranslateIdleAccounting(__int64 a1, __int64 a2, ULONGLONG *a3)
{
  int *v6; // rcx
  unsigned int v7; // edx
  ULONGLONG result; // rax
  unsigned __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // r15
  _DWORD *v12; // rdi
  _DWORD *v13; // rsi
  _DWORD *v14; // r14
  __int64 v15; // rbp
  int v16; // eax
  _DWORD *v17; // rsi
  __int64 v18; // rbp
  int v19; // eax
  __int64 v20; // r9
  _DWORD *v21; // r8
  unsigned int v22; // r14d
  unsigned int v23; // eax

  PpmUpdateProcessorIdleAccounting();
  v6 = *(int **)(a1 + 8);
  v7 = *v6;
  *(_DWORD *)a2 = *v6;
  *(_DWORD *)(a2 + 4) = v6[1];
  *(_DWORD *)(a2 + 8) = v6[2];
  *(_DWORD *)(a2 + 12) = v6[3];
  result = *((_QWORD *)v6 + 2);
  *(_QWORD *)(a2 + 16) = result;
  v9 = *((_QWORD *)v6 + 3);
  if ( v7 )
  {
    v10 = a2 + 32;
    v11 = v7;
    v12 = v6 + 222;
    do
    {
      v9 += *((_QWORD *)v12 - 106);
      *(_DWORD *)v10 = *(v12 - 210) + *(v12 - 209) + *(v12 - 208);
      *(_DWORD *)(v10 + 4) = *(v12 - 209);
      *(_DWORD *)(v10 + 20) = *(v12 - 210);
      *(_DWORD *)(v10 + 8) = *(v12 - 207);
      *(_QWORD *)(v10 - 8) = PpmConvertTimeTo(*((_QWORD *)v12 - 106), 0xF4240uLL);
      *(_DWORD *)(v10 + 12) = PpmConvertTimeTo(*((_QWORD *)v12 - 103), 0xF4240uLL);
      *(_DWORD *)(v10 + 16) = PpmConvertTimeTo(*((_QWORD *)v12 - 102), 0xF4240uLL);
      v13 = v12 - 130;
      v14 = (_DWORD *)(v10 + 36);
      v15 = 16LL;
      do
      {
        *(_QWORD *)(v14 - 3) = PpmConvertTimeTo(*((_QWORD *)v13 - 2), 0xF4240uLL);
        *(v14 - 1) = PpmConvertTimeTo(*((_QWORD *)v13 - 1), 0xF4240uLL);
        *v14 = PpmConvertTimeTo(*(_QWORD *)v13, 0xF4240uLL);
        v14 += 6;
        v16 = v13[2];
        v13 += 8;
        *(v14 - 5) = v16;
        --v15;
      }
      while ( v15 );
      v17 = v12 - 164;
      v18 = 4LL;
      do
      {
        v19 = v17[4];
        if ( v19 )
        {
          *(_DWORD *)(v10 + 40) += v19;
          *(_QWORD *)(v10 + 24) += PpmConvertTimeTo(*((_QWORD *)v17 - 1), 0xF4240uLL);
          v22 = PpmConvertTimeTo(*(_QWORD *)v17, 0xF4240uLL);
          v23 = PpmConvertTimeTo(*((_QWORD *)v17 + 1), 0xF4240uLL);
          if ( *(_DWORD *)(v10 + 32) > v22 )
            *(_DWORD *)(v10 + 32) = v22;
          if ( *(_DWORD *)(v10 + 36) < v23 )
            *(_DWORD *)(v10 + 36) = v23;
        }
        v17 += 8;
        --v18;
      }
      while ( v18 );
      LODWORD(result) = *(_DWORD *)(v10 + 8);
      v20 = 6LL;
      v21 = v12;
      do
      {
        result = (unsigned int)(*v21 + result);
        v21 += 8;
        *(_DWORD *)(v10 + 8) = result;
        --v20;
      }
      while ( v20 );
      v10 += 416LL;
      v12 += 254;
      --v11;
    }
    while ( v11 );
  }
  if ( a3 )
  {
    result = PpmConvertTimeTo(v9, 0xF4240uLL);
    *a3 = result;
  }
  return result;
}
