/*
 * XREFs of HUBCONNECTOR_MapExternalHubPorts @ 0x140085F78
 * Callers:
 *     HUBCONNECTOR_MapHubPorts @ 0x14008605C (HUBCONNECTOR_MapHubPorts.c)
 * Callees:
 *     HUBCONNECTOR_RegisterPort @ 0x1400865D4 (HUBCONNECTOR_RegisterPort.c)
 */

void __fastcall HUBCONNECTOR_MapExternalHubPorts(__int64 a1)
{
  unsigned __int16 v2; // bx
  _QWORD **v3; // rsi
  _QWORD *i; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rax

  v2 = 1;
  if ( *(_WORD *)(a1 + 48) )
  {
    v3 = (_QWORD **)(a1 + 2368);
LABEL_3:
    for ( i = *v3; ; i = (_QWORD *)*i )
    {
      v5 = i - 31;
      if ( v3 == i )
        break;
      if ( *((_WORD *)v5 + 100) == v2 )
      {
        if ( i != (_QWORD *)248 )
        {
          v6 = *(_QWORD *)(a1 + 288);
          *(_OWORD *)(v5 + 171) = *(_OWORD *)v6;
          *(_OWORD *)(v5 + 173) = *(_OWORD *)(v6 + 16);
          *(_OWORD *)(v5 + 175) = *(_OWORD *)(v6 + 32);
          v5[177] = *(_QWORD *)(v6 + 48);
          *((_DWORD *)v5 + (unsigned __int16)++*((_WORD *)v5 + 694) + 348) = v2;
          if ( ((*((_DWORD *)v5 + 51) & 1) == 0 || (int)HUBCONNECTOR_RegisterPort() >= 0) && ++v2 <= *(_WORD *)(a1 + 48) )
            goto LABEL_3;
        }
        return;
      }
    }
  }
}
