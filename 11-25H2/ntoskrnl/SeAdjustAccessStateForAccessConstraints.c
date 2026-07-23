/*
 * XREFs of SeAdjustAccessStateForAccessConstraints @ 0x1409A7210
 * Callers:
 *     <none>
 * Callees:
 *     SepLocateTokenTrustLevel @ 0x14035FEB0 (SepLocateTokenTrustLevel.c)
 *     RtlSidDominatesForTrust @ 0x140361640 (RtlSidDominatesForTrust.c)
 *     SepFilterCheck @ 0x140363580 (SepFilterCheck.c)
 *     SeGetTrustLabelAce @ 0x1403CE100 (SeGetTrustLabelAce.c)
 */

__int64 __fastcall SeAdjustAccessStateForAccessConstraints(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  int v4; // esi
  __int64 result; // rax
  int v8; // ebp
  int v9; // eax
  int v10; // r15d
  __int64 v11; // r8
  __int64 TrustLabelAce; // rax
  __int64 v13; // r14
  int v14; // ebx
  int v15; // r15d
  int v16; // ecx
  void *v17; // r13
  _DWORD *TokenTrustLevel; // rax
  BOOLEAN DominatesTrust; // [rsp+80h] [rbp+18h] BYREF
  __int64 v20; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  DominatesTrust = 0;
  v20 = 0LL;
  v4 = -1;
  result = *(unsigned int *)(a3 + 12);
  v8 = -1;
  if ( (result & 6) != 0 )
  {
    v9 = *(_DWORD *)(a1 + 68);
    if ( v9 == 1 )
    {
      v3 = 17957001;
      v10 = 18809110;
    }
    else if ( v9 == 256 )
    {
      v3 = 16908313;
      v10 = 17760262;
    }
    else
    {
      v10 = 0;
    }
    v11 = *(_QWORD *)(a3 + 32);
    if ( !v11 )
      v11 = *(_QWORD *)(a3 + 48);
    SepFilterCheck(a2, 0LL, v11, 1, (__int64)&v20);
    if ( BYTE4(v20) )
      v4 = v20;
    TrustLabelAce = SeGetTrustLabelAce(a2);
    v13 = TrustLabelAce;
    if ( TrustLabelAce )
    {
      v17 = (void *)(TrustLabelAce + 8);
      if ( TrustLabelAce == -8
        || (TokenTrustLevel = SepLocateTokenTrustLevel((_QWORD *)(a3 + 32)),
            RtlSidDominatesForTrust(TokenTrustLevel, v17, &DominatesTrust),
            !DominatesTrust) )
      {
        v8 = *(_DWORD *)(v13 + 4);
      }
    }
    result = ~(v4 & (unsigned int)v8);
    v14 = result & v3;
    v15 = result & v10;
    if ( v4 != -1 || v8 != -1 )
    {
      v16 = *(_DWORD *)(a3 + 12);
      result = *(unsigned int *)(a3 + 20);
      if ( (v16 & 2) != 0 )
        result = ~v14 & (unsigned int)result;
      if ( (v16 & 4) != 0 )
        result = ~v15 & (unsigned int)result;
      *(_DWORD *)(a3 + 20) = result;
    }
  }
  return result;
}
