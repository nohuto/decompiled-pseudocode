/*
 * XREFs of PpmParkEvalualteSmtUnparkPolicy @ 0x1404BB1C8
 * Callers:
 *     PpmParkApplyPolicy @ 0x1404E9D84 (PpmParkApplyPolicy.c)
 * Callees:
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x140405FA0 (KeEnumerateNextProcessor.c)
 */

char __fastcall PpmParkEvalualteSmtUnparkPolicy(unsigned __int8 a1)
{
  _UNKNOWN **v1; // rax
  int v2; // ebx
  int v3; // edi
  int v4; // ecx
  __int64 v5; // r9
  _BYTE *v6; // r8
  unsigned __int16 *v8[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+32h] [rbp-16h]
  __int16 v11; // [rsp+36h] [rbp-12h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF

  v1 = &retaddr;
  v2 = a1;
  v10 = 0;
  v11 = 0;
  v13 = 0;
  if ( PpmParkSmtUnparkingPolicy != a1 )
  {
    PpmParkGranularity = 1;
    PpmParkUnparkCores = 0;
    LOBYTE(v1) = a1 < 2u;
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
      v6 = (_BYTE *)(PpmParkNodes + 119);
      do
      {
        LOBYTE(v1) = *(v6 - 109) / (PpmParkMultiparkGranularity != 0);
        *v6 = (_BYTE)v1;
        if ( (unsigned __int8)v1 < (unsigned __int8)PpmParkGranularity )
          *v6 = PpmParkGranularity;
        v6 += 208;
        --v5;
      }
      while ( v5 );
    }
    PpmParkSmtUnparkingPolicy = v2;
    KeSoftParkSmtPolicy = v2;
  }
  return (char)v1;
}
