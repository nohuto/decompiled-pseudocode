/*
 * XREFs of SeShouldCheckForAccessRightsFromParent @ 0x14099A7A0
 * Callers:
 *     <none>
 * Callees:
 *     SepFilterCheck @ 0x1403B9AB0 (SepFilterCheck.c)
 *     SepLocateTokenTrustLevel @ 0x1403E3620 (SepLocateTokenTrustLevel.c)
 *     RtlSidDominatesForTrust @ 0x1403E3BC0 (RtlSidDominatesForTrust.c)
 *     SeGetTrustLabelAce @ 0x1403F9950 (SeGetTrustLabelAce.c)
 */

bool __fastcall SeShouldCheckForAccessRightsFromParent(__int64 a1, __int64 a2, __int64 a3)
{
  BOOLEAN v5; // bp
  __int64 TrustLabelAce; // rax
  void *v7; // rsi
  _DWORD *TokenTrustLevel; // rax
  __int64 v9; // r8
  BOOLEAN DominatesTrust; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  v5 = 1;
  TrustLabelAce = SeGetTrustLabelAce(a2);
  v7 = (void *)(TrustLabelAce + 8);
  if ( !TrustLabelAce )
    v7 = 0LL;
  if ( v7 )
  {
    DominatesTrust = 0;
    TokenTrustLevel = SepLocateTokenTrustLevel((_QWORD *)(a3 + 32));
    RtlSidDominatesForTrust(TokenTrustLevel, v7, &DominatesTrust);
    v5 = DominatesTrust;
  }
  v9 = *(_QWORD *)(a3 + 32);
  if ( !v9 )
    v9 = *(_QWORD *)(a3 + 48);
  SepFilterCheck(a2, 0LL, v9, 1, (__int64)&v12);
  return v5 && ((unsigned int)v12 & *(_DWORD *)(a3 + 16)) == *(_DWORD *)(a3 + 16);
}
