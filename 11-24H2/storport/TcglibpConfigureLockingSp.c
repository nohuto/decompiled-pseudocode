/*
 * XREFs of TcglibpConfigureLockingSp @ 0x14013F864
 * Callers:
 *     TcglibConfigureLockingSpEx @ 0x14013BC78 (TcglibConfigureLockingSpEx.c)
 * Callees:
 *     TcglibEalLogError @ 0x140085AEC (TcglibEalLogError.c)
 *     TcglibEalLogInfo @ 0x140085CB8 (TcglibEalLogInfo.c)
 *     TcglibpSetACEBooleanExpr @ 0x14013FA60 (TcglibpSetACEBooleanExpr.c)
 */

__int64 __fastcall TcglibpConfigureLockingSp(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbx
  int v5; // edi
  unsigned int i; // r14d
  __int64 v8; // r13

  v3 = 0LL;
  v5 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 48); ++i )
  {
    v5 = TcglibpSetACEBooleanExpr(a1, a2, i + 0x800043000LL, 0x900000001LL);
    if ( v5 < 0 )
      break;
    v8 = 2 * i;
    v5 = TcglibpSetACEBooleanExpr(a1, a2, v8 + 0x80003FC00LL, 0x900000001LL);
    if ( v5 < 0 )
      break;
    v5 = TcglibpSetACEBooleanExpr(a1, a2, v8 + 0x80003FC01LL, i + 0x900030001LL);
    if ( v5 < 0 )
      break;
  }
  if ( a3 )
  {
    if ( v5 < 0 )
    {
LABEL_12:
      LOBYTE(v3) = a3 != 0;
      TcglibEalLogError(*(int **)a1, "TcglibConfigureLockingSp failed", v5, *(_DWORD *)(a1 + 48), i, v3);
      return (unsigned int)v5;
    }
    v5 = TcglibpSetACEBooleanExpr(a1, a2, 0x800038002LL, 0x900000001LL);
  }
  if ( v5 < 0 )
    goto LABEL_12;
  TcglibEalLogInfo(*(int **)a1, "TcglibConfigureLockingSp success", *(_DWORD *)(a1 + 48), a3 != 0, 0LL);
  return (unsigned int)v5;
}
