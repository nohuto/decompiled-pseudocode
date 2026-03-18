/*
 * XREFs of UnpackPenSettings @ 0x140213DC4
 * Callers:
 *     ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x140217380 (-ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     RIMIsDefaultUILanguageRTL @ 0x140132240 (RIMIsDefaultUILanguageRTL.c)
 *     GetUserHandedness @ 0x140152738 (GetUserHandedness.c)
 *     EditionxxxBroadcastSPIChange @ 0x14023B278 (EditionxxxBroadcastSPIChange.c)
 */

__int64 __fastcall UnpackPenSettings(_DWORD *a1, __int64 a2)
{
  int v2; // esi
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // rcx

  v2 = a1[3];
  if ( v2 != (unsigned int)GetUserHandedness((__int64)a1, a2) )
  {
    v6 = 0;
    if ( RIMIsDefaultUILanguageRTL() )
      LOBYTE(v6) = v2 == 0;
    else
      LOBYTE(v6) = v2 != 0;
    *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v5) + 19928) + 2056LL) = v6;
    EditionxxxBroadcastSPIChange(8229LL, v7, 0LL);
  }
  v8 = a1[4];
  if ( v8 != *(_DWORD *)(W32GetUserSessionState(v4) + 67328) )
  {
    *(_DWORD *)(W32GetUserSessionState(v9) + 67328) = v8;
    EditionxxxBroadcastSPIChange(8223LL, v10, 0LL);
  }
  result = W32GetUserSessionState(v9);
  v12 = *(unsigned int *)(result + 67392);
  if ( a1[5] != (_DWORD)v12 )
  {
    result = W32GetUserSessionState(v12);
    *(_DWORD *)(result + 67392) = a1[5];
  }
  return result;
}
