/*
 * XREFs of AuthzBasepCompareIntegerOperands @ 0x140697E34
 * Callers:
 *     AuthzBasepEvaluateExpression @ 0x140324EE0 (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepValueInSet @ 0x140325148 (AuthzBasepValueInSet.c)
 * Callees:
 *     AuthzBasepCompareUnsigned @ 0x14044CEB8 (AuthzBasepCompareUnsigned.c)
 */

__int64 __fastcall AuthzBasepCompareIntegerOperands(unsigned __int8 a1, __int64 a2)
{
  unsigned int v2; // r8d
  int v3; // r9d
  signed __int64 **v4; // rdx
  __int64 v5; // rcx
  __int16 v6; // r10
  signed __int64 *v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  unsigned int v10; // eax
  bool v11; // al
  bool v12; // zf
  signed __int64 v14; // [rsp+20h] [rbp-10h]
  signed __int64 v15; // [rsp+28h] [rbp-8h]

  v14 = -1LL;
  v2 = 0;
  v15 = -1LL;
  v3 = a1;
  v4 = (signed __int64 **)(a2 + 32);
  v5 = 0LL;
  v6 = 2;
  do
  {
    if ( *((_DWORD *)v4 - 5) == 1 )
    {
      v7 = *v4;
    }
    else
    {
      v6 = *((_WORD *)v4 - 16);
      v7 = (signed __int64 *)(*(v4 - 2))[6];
    }
    v4 += 5;
    *(&v14 + v5++) = *v7;
  }
  while ( v5 < 2 );
  switch ( v6 )
  {
    case 1:
      if ( v3 == 128 )
      {
        v12 = v14 == v15;
      }
      else
      {
        switch ( v3 )
        {
          case 129:
            v11 = v14 != v15;
            break;
          case 130:
            v11 = v14 < v15;
            break;
          case 131:
            v11 = v14 <= v15;
            break;
          case 132:
            v11 = v14 > v15;
            break;
          case 133:
            v11 = v14 >= v15;
            break;
          default:
            return v2;
        }
        v12 = v11;
      }
      if ( v12 )
        return 1;
      break;
    case 2:
      v9 = v15;
      v8 = v14;
      goto LABEL_13;
    case 6:
      v8 = v14;
      if ( (unsigned __int64)v14 > 1 )
        return (unsigned int)-1;
      v9 = v15;
      if ( (unsigned __int64)v15 >= 2 )
        return (unsigned int)-1;
LABEL_13:
      LOBYTE(v10) = AuthzBasepCompareUnsigned(v3, v8, v9);
      return v10;
  }
  return v2;
}
