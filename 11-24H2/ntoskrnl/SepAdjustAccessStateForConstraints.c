/*
 * XREFs of SepAdjustAccessStateForConstraints @ 0x1409175B0
 * Callers:
 *     SeAdjustAccessStateForTrustLabel @ 0x14078FCF0 (SeAdjustAccessStateForTrustLabel.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140852140 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpSetAccessStateForBackupRestore @ 0x1409174CC (CmpSetAccessStateForBackupRestore.c)
 * Callees:
 *     SepLocateTokenTrustLevel @ 0x1403581B0 (SepLocateTokenTrustLevel.c)
 *     RtlSidDominatesForTrust @ 0x140359950 (RtlSidDominatesForTrust.c)
 *     SepFilterCheck @ 0x14035B6A0 (SepFilterCheck.c)
 *     SeGetTrustLabelAce @ 0x1403613D0 (SeGetTrustLabelAce.c)
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
  __int64 v15; // rdx
  __int64 v16; // r14
  int v17; // ebx
  int v18; // r15d
  int v19; // ecx
  __int64 v20; // r13
  __int64 TokenTrustLevel; // rax
  __int64 v22; // [rsp+30h] [rbp-38h] BYREF
  bool v23; // [rsp+88h] [rbp+20h] BYREF

  result = *(unsigned int *)(a4 + 12);
  v5 = 0;
  v23 = 0;
  v6 = -1;
  v22 = 0LL;
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
    SepFilterCheck(a2, 0LL, v13, 1, (__int64)&v22);
    if ( BYTE4(v22) && a3 )
      v6 = v22;
    TrustLabelAce = SeGetTrustLabelAce(a2);
    v16 = TrustLabelAce;
    if ( TrustLabelAce )
    {
      v20 = TrustLabelAce + 8;
      if ( TrustLabelAce == -8
        || (TokenTrustLevel = SepLocateTokenTrustLevel((_QWORD *)(a4 + 32), v15),
            RtlSidDominatesForTrust(TokenTrustLevel, v20, &v23),
            !v23) )
      {
        v10 = *(_DWORD *)(v16 + 4);
      }
    }
    result = ~(v6 & (unsigned int)v10);
    v17 = result & v5;
    v18 = result & v12;
    if ( v6 != -1 || v10 != -1 )
    {
      v19 = *(_DWORD *)(a4 + 12);
      result = *(unsigned int *)(a4 + 20);
      if ( (v19 & 2) != 0 )
        result = ~v17 & (unsigned int)result;
      if ( (v19 & 4) != 0 )
        result = ~v18 & (unsigned int)result;
      *(_DWORD *)(a4 + 20) = result;
    }
  }
  return result;
}
