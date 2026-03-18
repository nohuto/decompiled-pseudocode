/*
 * XREFs of AuthzBasepValueInSet @ 0x14036A008
 * Callers:
 *     AuthzBasepEvaluateSetRelationship @ 0x14036A228 (AuthzBasepEvaluateSetRelationship.c)
 * Callees:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1403100CC (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepCompareFQBNOperands @ 0x1403113F0 (AuthzBasepCompareFQBNOperands.c)
 *     AuthzBasepOperandValueTypesCompatible @ 0x140369F30 (AuthzBasepOperandValueTypesCompatible.c)
 *     AuthzBasepRestartOperandValueEnumeration @ 0x14036A1E4 (AuthzBasepRestartOperandValueEnumeration.c)
 *     AuthzBasepGetNextValue @ 0x14036B02C (AuthzBasepGetNextValue.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x1404B35A8 (AuthzBasepCompareOctetStringOperands.c)
 *     AuthzBasepCompareIntegerOperands @ 0x14068BA64 (AuthzBasepCompareIntegerOperands.c)
 */

__int64 __fastcall AuthzBasepValueInSet(__int128 *a1, __int16 *a2, BOOL *a3, char a4)
{
  __int128 v4; // xmm1
  __int128 v8; // xmm0
  __int64 v9; // r12
  int NextValue; // eax
  int v11; // ebx
  unsigned __int16 v12; // r14
  unsigned __int16 v13; // r15
  __int64 v14; // rcx
  int v15; // eax
  int v17; // eax
  char v18; // al
  int v19; // eax
  _OWORD v20[2]; // [rsp+28h] [rbp-49h] BYREF
  int v21; // [rsp+48h] [rbp-29h]
  __int16 v22; // [rsp+4Ch] [rbp-25h]
  _OWORD v23[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v24; // [rsp+78h] [rbp+7h]
  _WORD v25[2]; // [rsp+80h] [rbp+Fh] BYREF
  char v26; // [rsp+84h] [rbp+13h]
  int v27; // [rsp+88h] [rbp+17h]
  __int64 v28; // [rsp+90h] [rbp+1Fh]
  int v29; // [rsp+98h] [rbp+27h]
  __int64 v30; // [rsp+A0h] [rbp+2Fh]

  v4 = a1[1];
  *a3 = 0;
  memset(v20, 0, sizeof(v20));
  v21 = 0;
  v8 = *a1;
  v22 = 0;
  v23[1] = v4;
  v23[0] = v8;
  v24 = *((_QWORD *)a1 + 4);
  do
  {
    while ( 1 )
    {
      v9 = *((unsigned int *)a2 + 2);
      NextValue = AuthzBasepGetNextValue(a2, v25);
      v11 = NextValue;
      if ( NextValue == -2147483622 )
      {
LABEL_24:
        v11 = 0;
        goto LABEL_15;
      }
      if ( NextValue < 0 )
        goto LABEL_14;
      v12 = v23[0];
      if ( LOWORD(v23[0]) == 4 )
      {
        v17 = AuthzBasepGetNextValue(a2, v20);
        v11 = v17;
        if ( v17 == -2147483622 )
          goto LABEL_24;
        if ( v17 < 0 )
          goto LABEL_14;
        v18 = *((_BYTE *)a2 + 4);
        v27 = 0;
        v13 = *a2;
        v26 = v18;
        v28 = *((_QWORD *)a2 + 2);
        v29 = *((_DWORD *)a2 + 2);
        v30 = *((_QWORD *)a2 + 4) + v9;
        v25[0] = v13;
      }
      else
      {
        v13 = v25[0];
      }
      if ( AuthzBasepOperandValueTypesCompatible((__int16 *)v23) )
        break;
      if ( !a4 )
      {
        v11 = -1073741406;
LABEL_14:
        *a3 = -1;
        goto LABEL_15;
      }
    }
    if ( HIDWORD(v23[0]) == 1 )
      v12 = v13;
    v14 = (unsigned int)v12 - 1;
    if ( v12 == 1 )
      goto LABEL_31;
    v14 = (unsigned int)v12 - 2;
    if ( v12 == 2 )
      goto LABEL_31;
    if ( v12 == 3 )
    {
      v15 = AuthzBasepCompareUnicodeStringOperands(0x80u, (__int64)v23, a3);
      goto LABEL_13;
    }
    if ( v12 != 4 )
    {
      v14 = (unsigned int)v12 - 5;
      if ( v12 != 5 )
      {
        v14 = (unsigned int)v12 - 6;
        if ( v12 == 6 )
        {
LABEL_31:
          LOBYTE(v14) = 0x80;
          v19 = AuthzBasepCompareIntegerOperands(v14, v23);
          goto LABEL_32;
        }
        if ( v12 != 16 )
          continue;
      }
      LOBYTE(v14) = 0x80;
      v19 = AuthzBasepCompareOctetStringOperands(v14, v23);
LABEL_32:
      *a3 = v19;
      continue;
    }
    v15 = AuthzBasepCompareFQBNOperands(128, (__int64)v23, a3);
LABEL_13:
    v11 = v15;
    if ( v15 < 0 )
      goto LABEL_14;
  }
  while ( !*a3 );
  if ( v11 < 0 )
    goto LABEL_14;
LABEL_15:
  AuthzBasepRestartOperandValueEnumeration(a2);
  return (unsigned int)v11;
}
