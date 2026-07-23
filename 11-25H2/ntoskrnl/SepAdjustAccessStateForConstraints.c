/*
 * XREFs of SepAdjustAccessStateForConstraints @ 0x1408F6170
 * Callers:
 *     SeAdjustAccessStateForTrustLabel @ 0x140780A30 (SeAdjustAccessStateForTrustLabel.c)
 *     CmpSetAccessStateForBackupRestore @ 0x1408F6088 (CmpSetAccessStateForBackupRestore.c)
 * Callees:
 *     SepLocateTokenTrustLevel @ 0x14035FEB0 (SepLocateTokenTrustLevel.c)
 *     RtlSidDominatesForTrust @ 0x140361640 (RtlSidDominatesForTrust.c)
 *     SepFilterCheck @ 0x140363580 (SepFilterCheck.c)
 *     SeGetTrustLabelAce @ 0x1403CE100 (SeGetTrustLabelAce.c)
 */

__int64 __fastcall SepAdjustAccessStateForConstraints(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 result; // rax
  int v5; // ebx
  int v6; // esi
  int v10; // ebp
  int v11; // eax
  int v12; // r15d
  __int64 v13; // r8
  __int64 TrustLabelAce; // rax
  __int64 v15; // r14
  int v16; // ebx
  int v17; // r15d
  int v18; // ecx
  void *v19; // r13
  _DWORD *TokenTrustLevel; // rax
  __int64 v21; // [rsp+30h] [rbp-38h] BYREF
  BOOLEAN DominatesTrust; // [rsp+88h] [rbp+20h] BYREF

  result = *(unsigned int *)(a4 + 12);
  v5 = 0;
  DominatesTrust = 0;
  v6 = -1;
  v21 = 0LL;
  v10 = -1;
  if ( (result & 6) != 0 )
  {
    v11 = *(_DWORD *)(a1 + 68);
    if ( v11 == 1 )
    {
      v5 = 17957001;
      v12 = 18809110;
    }
    else if ( v11 == 256 )
    {
      v5 = 16908313;
      v12 = 17760262;
    }
    else
    {
      v12 = 0;
    }
    v13 = *(_QWORD *)(a4 + 32);
    if ( !v13 )
      v13 = *(_QWORD *)(a4 + 48);
    SepFilterCheck(a2, 0LL, v13, 1, (__int64)&v21);
    if ( BYTE4(v21) && a3 )
      v6 = v21;
    TrustLabelAce = SeGetTrustLabelAce(a2);
    v15 = TrustLabelAce;
    if ( TrustLabelAce )
    {
      v19 = (void *)(TrustLabelAce + 8);
      if ( TrustLabelAce == -8
        || (TokenTrustLevel = SepLocateTokenTrustLevel((_QWORD *)(a4 + 32)),
            RtlSidDominatesForTrust(TokenTrustLevel, v19, &DominatesTrust),
            !DominatesTrust) )
      {
        v10 = *(_DWORD *)(v15 + 4);
      }
    }
    result = ~(v6 & (unsigned int)v10);
    v16 = result & v5;
    v17 = result & v12;
    if ( v6 != -1 || v10 != -1 )
    {
      v18 = *(_DWORD *)(a4 + 12);
      result = *(unsigned int *)(a4 + 20);
      if ( (v18 & 2) != 0 )
        result = ~v16 & (unsigned int)result;
      if ( (v18 & 4) != 0 )
        result = ~v17 & (unsigned int)result;
      *(_DWORD *)(a4 + 20) = result;
    }
  }
  return result;
}
