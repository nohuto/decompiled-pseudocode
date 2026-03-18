/*
 * XREFs of SeShouldCheckForAccessRightsFromParent @ 0x1409B0CE0
 * Callers:
 *     <none>
 * Callees:
 *     SepLocateTokenTrustLevel @ 0x1403581B0 (SepLocateTokenTrustLevel.c)
 *     RtlSidDominatesForTrust @ 0x140359950 (RtlSidDominatesForTrust.c)
 *     SepFilterCheck @ 0x14035B6A0 (SepFilterCheck.c)
 *     SeGetTrustLabelAce @ 0x1403613D0 (SeGetTrustLabelAce.c)
 */

bool __fastcall SeShouldCheckForAccessRightsFromParent(__int64 a1, __int64 a2, __int64 a3)
{
  bool v5; // bp
  __int64 TrustLabelAce; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 TokenTrustLevel; // rax
  __int64 v10; // r8
  bool v12; // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  v5 = 1;
  TrustLabelAce = SeGetTrustLabelAce(a2);
  v8 = TrustLabelAce + 8;
  if ( !TrustLabelAce )
    v8 = 0LL;
  if ( v8 )
  {
    v12 = 0;
    TokenTrustLevel = SepLocateTokenTrustLevel((_QWORD *)(a3 + 32), v7);
    RtlSidDominatesForTrust(TokenTrustLevel, v8, &v12);
    v5 = v12;
  }
  v10 = *(_QWORD *)(a3 + 32);
  if ( !v10 )
    v10 = *(_QWORD *)(a3 + 48);
  SepFilterCheck(a2, 0LL, v10, 1, (__int64)&v13);
  return v5 && ((unsigned int)v13 & *(_DWORD *)(a3 + 16)) == *(_DWORD *)(a3 + 16);
}
