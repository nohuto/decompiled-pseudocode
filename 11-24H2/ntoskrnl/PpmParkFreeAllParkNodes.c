/*
 * XREFs of PpmParkFreeAllParkNodes @ 0x14075D778
 * Callers:
 *     PpmParkRegisterParking @ 0x1405D72D0 (PpmParkRegisterParking.c)
 *     PpmParkRegisterParkingEx @ 0x1405E1218 (PpmParkRegisterParkingEx.c)
 * Callees:
 *     PpmParkFreeParkNodes @ 0x14075D868 (PpmParkFreeParkNodes.c)
 */

__int64 __fastcall PpmParkFreeAllParkNodes(char *P, unsigned int a2, _BYTE *a3, __int64 a4, char a5)
{
  _QWORD *v7; // r9
  __int64 v8; // rsi
  __int64 v9; // r8
  unsigned __int8 v10; // cl
  unsigned int v11; // edi
  __int64 v12; // r11
  __int64 v13; // r14
  __int64 result; // rax

  if ( P && a3 && a2 )
  {
    v7 = P + 1104;
    v8 = a2;
    v9 = a3 - P;
    do
    {
      if ( *(_QWORD *)((char *)v7 + v9) == *v7 )
        *v7 = 0LL;
      v10 = *((_BYTE *)v7 + v9 - 1092);
      if ( v10 >= *((_BYTE *)v7 - 1092) )
        v10 = *((_BYTE *)v7 - 1092);
      v11 = 0;
      if ( v10 )
      {
        v12 = 0LL;
        do
        {
          v13 = v7[23];
          if ( *(_QWORD *)(v12 + *(_QWORD *)((char *)v7 + v9 + 184) + 568) == *(_QWORD *)(v12 + v13 + 568) )
            *(_QWORD *)(v12 + v13 + 568) = 0LL;
          ++v11;
          v12 += 640LL;
        }
        while ( v11 < v10 );
      }
      v7 += 162;
      --v8;
    }
    while ( v8 );
  }
  result = PpmParkFreeParkNodes(P);
  if ( !a5 )
    return PpmParkFreeParkNodes(a3);
  return result;
}
