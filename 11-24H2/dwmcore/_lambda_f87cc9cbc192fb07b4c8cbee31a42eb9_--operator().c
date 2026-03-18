/*
 * XREFs of _lambda_f87cc9cbc192fb07b4c8cbee31a42eb9_::operator() @ 0x1800E3954
 * Callers:
 *     ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x1800E38C8 (-ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ.c)
 * Callees:
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1800E3A18 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x1800E3ACC (-BoundaryFromValue@CInteractionTracker@@QEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x1800E3B58 (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 *     ?ChainToParent@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N@Z @ 0x180213BD0 (-ChainToParent@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N@Z.c)
 *     ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z @ 0x180214908 (-ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z.c)
 */

__int64 __fastcall lambda_f87cc9cbc192fb07b4c8cbee31a42eb9_::operator()(__int64 **a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned int v6; // eax
  __int64 v7; // r9
  __int64 *v8; // rbx
  unsigned int v9; // r14d
  __int64 v10; // rax
  __int64 *v11; // rcx
  __int64 result; // rax
  __int64 *v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // r9

  v3 = (int)a2;
  v4 = **a1;
  CInteractionTracker::GetCurrentValue(v4, a2);
  v6 = CInteractionTracker::BoundaryFromValue(v4, v5, (unsigned int)v3);
  v8 = a1[1];
  v9 = v6;
  if ( v6
    && (v13 = a1[2],
        LOBYTE(v7) = 1,
        v14 = *v13,
        (unsigned __int8)CInteractionTracker::ShouldChainForAxis(v13, (unsigned int)v3, *v13, v7)) )
  {
    LOBYTE(v16) = CInteractionTracker::ShouldChainAllForAxis(v15, (unsigned int)v3, v14);
    CChainingHelper::ChainToParent(v8, (unsigned int)v3, v9, v16);
  }
  else
  {
    v10 = 3 * v3;
    *((_BYTE *)v8 + 4 * v10) &= 0xFCu;
    *((_DWORD *)v8 + v10 + 1) = 0;
    *((_BYTE *)v8 + 36) |= 1u;
  }
  v11 = a1[1];
  result = 3 * v3;
  *((_BYTE *)v11 + 4 * result) &= 0xFAu;
  *((_DWORD *)v11 + result + 2) = 0;
  *((_BYTE *)v11 + 36) |= 2u;
  return result;
}
