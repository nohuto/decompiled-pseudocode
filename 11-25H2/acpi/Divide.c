/*
 * XREFs of Divide @ 0x14002EC90
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x140007F70 (ValidateArgTypes.c)
 *     PushFrame @ 0x140009A30 (PushFrame.c)
 *     ValidateTarget @ 0x14002F550 (ValidateTarget.c)
 */

__int64 __fastcall Divide(_QWORD *a1, __int64 a2)
{
  unsigned int v4; // r8d
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  v4 = ValidateArgTypes((__int64)a1, *(_QWORD *)(a2 + 80), 0, "II");
  if ( !v4 )
  {
    v4 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 80LL, 135LL, &v8);
    if ( !v4 )
    {
      v4 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 120LL, 135LL, &v9);
      if ( !v4 )
      {
        v5 = *(_QWORD *)(a2 + 88);
        v8 = 0LL;
        v4 = PushFrame(a1, 1414745936, 0x38u, (__int64)ProcessDivide, &v8);
        if ( !v4 )
        {
          v6 = v8;
          *(_QWORD *)(v8 + 32) = a2;
          *(_QWORD *)(v6 + 40) = 0LL;
          *(_QWORD *)(v6 + 48) = v5;
        }
      }
    }
  }
  return v4;
}
