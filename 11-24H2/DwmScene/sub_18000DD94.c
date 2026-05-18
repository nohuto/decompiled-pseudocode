/*
 * XREFs of sub_18000DD94 @ 0x18000DD94
 * Callers:
 *     sub_18000DE70 @ 0x18000DE70 (sub_18000DE70.c)
 * Callees:
 *     sub_18000E29C @ 0x18000E29C (sub_18000E29C.c)
 *     sub_18000E440 @ 0x18000E440 (sub_18000E440.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall sub_18000DD94(__int64 a1, _BYTE *a2, __int64 a3))(_QWORD, _QWORD)
{
  __int64 v5; // rsi
  char v6; // bl
  char v7; // bp
  __int64 *v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rdi
  char v11; // al
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  v5 = a1;
  v6 = 0;
  *a2 = 0;
  v7 = 0;
  if ( qword_1801C4318 )
  {
    v8 = (__int64 *)sub_18000E29C();
    v9 = v8;
    if ( v8 )
    {
      if ( *v8 )
      {
        *a2 = 0;
        if ( (unsigned __int8)sub_18000E440(v5, *v8, a2, a3) )
          *(_QWORD *)(v5 + 72) = a2;
        v10 = *v9;
        do
        {
          v11 = *(_BYTE *)(v10 + 40);
          *(_BYTE *)(v10 + 40) = 1;
          if ( !v11 )
          {
            v7 |= (***(__int64 (__fastcall ****)(_QWORD, __int64))(v10 + 8))(*(_QWORD *)(v10 + 8), v5);
            *(_BYTE *)(v10 + 40) = 0;
          }
          v10 = *(_QWORD *)(v10 + 16);
        }
        while ( v10 );
      }
    }
  }
  result = qword_1801C4328;
  if ( qword_1801C4328 )
  {
    if ( v7 || (*(_BYTE *)(v5 + 4) & 2) != 0 )
      v6 = 1;
    LOBYTE(a1) = v6;
    return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_1801C4328(a1, v5);
  }
  return result;
}
