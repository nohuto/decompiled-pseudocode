/*
 * XREFs of IfElse @ 0x140007D60
 * Callers:
 *     <none>
 * Callees:
 *     PushScope @ 0x1400050C0 (PushScope.c)
 *     ValidateArgTypes @ 0x140007F70 (ValidateArgTypes.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 */

__int64 __fastcall IfElse(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  _BYTE **v5; // rdx
  _BYTE *v6; // rcx
  _BYTE *v7; // rcx
  unsigned __int8 *v8; // rax
  unsigned int v9; // r9d
  unsigned __int8 *v10; // r10
  unsigned int v11; // r8d
  _BYTE *v12; // r8
  __int64 v13; // rdx
  unsigned int v14; // r11d
  _BYTE *v15; // rdx
  unsigned int v16; // r10d
  unsigned __int8 *v17; // r9
  unsigned __int8 v18; // r11
  unsigned __int8 v19; // cl
  unsigned __int8 v20; // si
  int v21; // eax
  unsigned __int8 v22; // cl

  if ( **(_BYTE **)(a2 + 32) == 0xA0 )
  {
    result = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0LL, "I");
    if ( !(_DWORD)result )
    {
      v5 = (_BYTE **)(a2 + 40);
      if ( *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL) )
      {
        v12 = *v5;
        if ( (unsigned __int64)*v5 < *(_QWORD *)(a2 + 48) && *v12 == 0xA1 )
        {
          v14 = (unsigned __int8)v12[1];
          v15 = v12 + 1;
          v16 = v14 >> 6;
          v17 = v12 + 2;
          if ( v12[1] >> 6 )
          {
            v14 &= 0xFu;
            v20 = 0;
            do
            {
              v21 = *v17++;
              v22 = v20++;
              v14 |= v21 << (8 * v22 + 4);
            }
            while ( v20 < (unsigned __int8)v16 );
            v12 = *(_BYTE **)(a2 + 40);
          }
          v13 = (__int64)&v15[v14];
        }
        else
        {
          v13 = 0LL;
        }
        return PushScope(a1, a1[15], (__int64)v12, v13, a1[10], a1[11], a1[40], *(_QWORD *)(a2 + 88));
      }
      else
      {
        v6 = *v5;
        a1[15] = *v5;
        if ( (unsigned __int64)v6 < *(_QWORD *)(a2 + 48) && *v6 == 0xA1 )
        {
          v7 = v6 + 1;
          a1[15] = v7;
          if ( a2 != -40 )
            *v5 = v7;
          v8 = (unsigned __int8 *)a1[15];
          v9 = *v8;
          v10 = v8 + 1;
          a1[15] = v8 + 1;
          v11 = v9 >> 6;
          if ( (unsigned __int8)(v9 >> 6) )
          {
            v9 &= 0xFu;
            v18 = 0;
            do
            {
              v19 = v18++;
              v9 |= *v10++ << (8 * v19 + 4);
              a1[15] = v10;
            }
            while ( v18 < (unsigned __int8)v11 );
          }
          if ( a2 != -40 )
            *v5 += v9;
          return PushScope(a1, a1[15], *(_QWORD *)(a2 + 40), 0LL, a1[10], a1[11], a1[40], *(_QWORD *)(a2 + 88));
        }
      }
    }
  }
  else
  {
    LogError(3222536193LL);
    AcpiDiagTraceAmlError(a1, 3222536193LL);
    PrintDebugMessage(59, 0, 0, 0, 0LL);
    return 3222536193LL;
  }
  return result;
}
