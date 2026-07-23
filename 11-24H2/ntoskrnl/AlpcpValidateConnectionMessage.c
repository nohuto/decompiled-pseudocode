/*
 * XREFs of AlpcpValidateConnectionMessage @ 0x140A1FFE0
 * Callers:
 *     AlpcpFormatConnectionRequest @ 0x14089137C (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x140A1ED20 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpValidateConnectionMessage(__int64 a1, unsigned __int16 *a2, char a3)
{
  __int64 v3; // rcx

  if ( a3 )
  {
    if ( *a2 > (unsigned __int64)(*(_QWORD *)(a1 + 272) - 40LL) )
      *a2 = *(_WORD *)(a1 + 272) - 40;
    return 0LL;
  }
  else
  {
    v3 = *a2;
    if ( (unsigned __int16)v3 >= (unsigned __int16)(v3 + 40) )
      return 3221225485LL;
    else
      return a2[1] != v3 + 40 ? 0xC000000D : 0;
  }
}
