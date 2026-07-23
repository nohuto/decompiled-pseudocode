/*
 * XREFs of RtlpLookupUserFunctionTableInverted @ 0x140236FB0
 * Callers:
 *     RtlpLookupUserFunctionTable @ 0x140236130 (RtlpLookupUserFunctionTable.c)
 *     RtlGetImageBaseAndLoadConfig @ 0x14045A364 (RtlGetImageBaseAndLoadConfig.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpLookupUserFunctionTableInverted(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // r11
  unsigned __int64 v5; // rdx
  int v6; // eax
  int v7; // r8d
  int v8; // r9d
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r10
  __int64 v11; // rcx
  signed __int32 v13[8]; // [rsp+0h] [rbp-58h] BYREF
  int v14; // [rsp+20h] [rbp-38h]
  int v15; // [rsp+24h] [rbp-34h]
  __int64 v16; // [rsp+28h] [rbp-30h]
  int v17; // [rsp+70h] [rbp+18h]

  v3 = qword_140FC7518;
  v17 = *(_DWORD *)(qword_140FC7518 + 8);
  v14 = 0;
  v15 = 0;
  v4 = qword_140FC7518 + 16;
  v5 = *(_QWORD *)(qword_140FC7518 + 24);
  if ( a1 < v5 || a1 >= v5 + *(unsigned int *)(qword_140FC7518 + 32) )
  {
    v6 = *(_DWORD *)qword_140FC7518 - 1;
    if ( (unsigned int)v6 <= 0x200 && *(_DWORD *)qword_140FC7518 != 1 )
    {
      v7 = 1;
      v15 = 1;
      v14 = v6;
      while ( v6 >= v7 )
      {
        v8 = (v7 + v6) >> 1;
        v4 = qword_140FC7518 + 8 * (3LL * v8 + 2);
        v9 = *(_QWORD *)(v4 + 8);
        v10 = v9 + *(unsigned int *)(v4 + 16);
        if ( v10 < v9 )
          break;
        if ( a1 < v9 )
        {
          if ( !v8 )
            return 0LL;
          v6 = v8 - 1;
          v14 = v8 - 1;
        }
        else
        {
          if ( a1 < v10 )
            goto LABEL_13;
          v7 = v8 + 1;
          v15 = v8 + 1;
        }
      }
    }
    return 0LL;
  }
LABEL_13:
  if ( !v4 )
    return 0LL;
  v11 = *(_QWORD *)v4;
  v16 = v11;
  *(_QWORD *)a2 = v11;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(v4 + 8);
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(v4 + 20);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(v4 + 16);
  if ( *(_DWORD *)(a2 + 20) && (v11 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int16)*(_QWORD *)(a2 + 8) )
    ExRaiseDatatypeMisalignment();
  _InterlockedOr(v13, 0);
  if ( *(_DWORD *)(v3 + 8) != v17 || (v17 & 1) != 0 )
    return 0LL;
  else
    return v16;
}
