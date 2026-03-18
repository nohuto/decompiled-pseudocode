/*
 * XREFs of RecordCommandTimingHistory @ 0x140016DB0
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x140012F10 (NVMeCompletionDpcRoutine.c)
 * Callees:
 *     CalculateTimeDurationIn100ns @ 0x14000C8D0 (CalculateTimeDurationIn100ns.c)
 */

void __fastcall RecordCommandTimingHistory(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8)
{
  unsigned int v8; // r10d
  unsigned __int64 v9; // r11
  __int64 v11; // r8
  unsigned int v12; // r9d
  __int64 v13; // rax
  _DWORD *v14; // rdi
  int v15; // eax
  unsigned __int64 v16; // r10
  int v17; // eax
  int v18; // eax
  int v19; // r10d
  int v20; // eax
  unsigned __int64 v21; // r10
  int v22; // eax
  int v23; // eax

  v8 = *(_DWORD *)(a1 + 3804);
  v9 = a4;
  if ( v8 )
  {
    v11 = *(_QWORD *)(a1 + 3816);
    if ( v11 )
    {
      if ( a3 )
      {
        v12 = *(_DWORD *)(a1 + 3808);
        *(_DWORD *)(a1 + 3808) = v12 + 1;
        if ( v12 + 1 >= v8 )
          *(_DWORD *)(a1 + 3808) = 0;
        v13 = 0LL;
        if ( v12 < v8 )
          v13 = v12;
        *(_DWORD *)(v11 + 24 * v13) = a2;
        v14 = (_DWORD *)(v11 + 24 * v13);
        if ( v9 < a3 )
          v15 = 195935983;
        else
          v15 = CalculateTimeDurationIn100ns(v9 - a3, a8);
        v16 = a5;
        v14[1] = v15;
        if ( a5 )
        {
          if ( a5 < v9 )
          {
            v17 = 195935983;
            if ( v9 - a5 <= 0x100 )
              v17 = 0;
          }
          else
          {
            v17 = CalculateTimeDurationIn100ns(a5 - v9, a8);
          }
          v14[2] = v17;
          if ( v16 < a3 )
            v18 = 195935983;
          else
            v18 = CalculateTimeDurationIn100ns(v16 - a3, a8);
          v14[3] = v18;
          if ( a6 < v16 )
          {
            v20 = 195935983;
            if ( v16 - a6 <= 0x100 )
              v20 = 0;
            v19 = v20;
          }
          else
          {
            v19 = CalculateTimeDurationIn100ns(a6 - v16, a8);
          }
        }
        else
        {
          v21 = a6 - v9;
          if ( a6 < v9 )
            v22 = 195935983;
          else
            v22 = CalculateTimeDurationIn100ns(a6 - v9, a8);
          v14[2] = v22;
          if ( a6 < a3 )
            v23 = 195935983;
          else
            v23 = CalculateTimeDurationIn100ns(a6 - a3, a8);
          v14[3] = v23;
          if ( a6 < v9 )
            v19 = 195935983;
          else
            v19 = CalculateTimeDurationIn100ns(v21, a8);
        }
        v14[4] = v19;
        if ( a7 < a6 )
          v14[5] = 195935983;
        else
          v14[5] = CalculateTimeDurationIn100ns(a7 - a6, a8);
      }
    }
  }
}
