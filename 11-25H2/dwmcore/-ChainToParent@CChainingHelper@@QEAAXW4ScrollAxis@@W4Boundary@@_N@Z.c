/*
 * XREFs of ?ChainToParent@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N@Z @ 0x18021EEF0
 * Callers:
 *     _lambda_f87cc9cbc192fb07b4c8cbee31a42eb9_::operator() @ 0x18003D720 (_lambda_f87cc9cbc192fb07b4c8cbee31a42eb9_--operator().c)
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1800F3724 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@Z @ 0x180211A70 (-RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CChainingHelper::ChainToParent(__int64 a1, int a2, int a3, char a4)
{
  int v4; // eax
  int v7; // r8d
  char v8; // bl
  __int64 result; // rax
  int v10; // ecx
  int v11; // r8d

  v4 = 0;
  v7 = 0;
  v8 = a4 | *(_BYTE *)(a1 + 12LL * a2) & 0xFE;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      if ( ((a3 - 1) & 0xFFFFFFFD) == 0 )
        v4 = 4;
      if ( (unsigned int)(a3 - 2) <= 1 )
        v4 |= 8u;
      v7 = 12;
    }
    else if ( a2 == 2 )
    {
      if ( ((a3 - 1) & 0xFFFFFFFD) == 0 )
        v4 = 32;
      if ( (unsigned int)(a3 - 2) <= 1 )
        v4 |= 0x10u;
      v7 = 48;
    }
  }
  else
  {
    v4 = ((a3 - 1) & 0xFFFFFFFD) == 0;
    if ( (unsigned int)(a3 - 2) <= 1 )
      v4 |= 2u;
    v7 = 3;
  }
  if ( a4 )
  {
    v10 = 63;
    v11 = ~v7;
    if ( a2 != 2 )
      v10 = 15;
    v4 |= v11 & v10;
  }
  *(_BYTE *)(a1 + 12LL * a2) = v8 | 2;
  result = ~v4 & 0xCFFFFFFF;
  *(_DWORD *)(a1 + 12LL * a2 + 4) = result;
  *(_BYTE *)(a1 + 36) |= 1u;
  return result;
}
