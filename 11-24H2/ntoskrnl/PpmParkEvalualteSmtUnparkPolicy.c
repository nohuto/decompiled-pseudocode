/*
 * XREFs of PpmParkEvalualteSmtUnparkPolicy @ 0x1404B3B5C
 * Callers:
 *     PpmParkApplyPolicy @ 0x1404E4B18 (PpmParkApplyPolicy.c)
 *     PpmParkApplyPolicyEx @ 0x1405DE964 (PpmParkApplyPolicyEx.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 */

char __fastcall PpmParkEvalualteSmtUnparkPolicy(unsigned __int8 a1)
{
  _UNKNOWN **v1; // rax
  int v2; // ebx
  int v3; // edi
  int v4; // ecx
  __int64 v5; // r9
  _WORD *v6; // r8
  unsigned __int16 *v8[2]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v9; // [rsp+30h] [rbp-28h]
  int v10; // [rsp+32h] [rbp-26h]
  __int16 v11; // [rsp+36h] [rbp-22h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  unsigned int v13; // [rsp+60h] [rbp+8h] BYREF

  v1 = &retaddr;
  v2 = a1;
  v10 = 0;
  v11 = 0;
  v13 = 0;
  if ( PpmParkSmtUnparkingPolicy != a1 )
  {
    PpmParkUnparkCores = 0;
    LOBYTE(v1) = a1 < 2u;
    PpmParkGranularity = 1;
    PpmParkCoreMask = a1 < 2u;
    if ( a1 < 2u )
    {
      v3 = 0;
      v8[1] = (unsigned __int16 *)PpmCheckRegistered.Bitmap[0];
      v8[0] = (unsigned __int16 *)&PpmCheckRegistered;
      v9 = 0;
      while ( 1 )
      {
        LODWORD(v1) = KeEnumerateNextProcessor(&v13, v8);
        if ( (_DWORD)v1 )
          break;
        v4 = __popcnt(*(_QWORD *)(KeGetPrcb(v13) + 36448));
        if ( v3 )
        {
          if ( v3 != v4 )
            PpmParkCoreMask = 0;
        }
        else
        {
          v3 = v4;
        }
      }
      if ( PpmParkCoreMask )
      {
        PpmParkGranularity = v3;
        PpmParkUnparkCores = (_BYTE)v2 == 1;
      }
    }
    if ( PpmParkNumNodes )
    {
      v5 = (unsigned int)PpmParkNumNodes;
      v6 = (_WORD *)(PpmParkNodes + 1182);
      do
      {
        LOWORD(v1) = (unsigned int)*(v6 - 586) / (PpmParkMultiparkGranularity != 0);
        *v6 = (_WORD)v1;
        if ( (unsigned __int16)v1 < (unsigned __int16)PpmParkGranularity )
          *v6 = PpmParkGranularity;
        v6 += 648;
        --v5;
      }
      while ( v5 );
    }
    PpmParkSmtUnparkingPolicy = v2;
    KeSoftParkSmtPolicy = v2;
  }
  return (char)v1;
}
