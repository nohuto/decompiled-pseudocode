/*
 * XREFs of MiCombineCandidate @ 0x14020C0F0
 * Callers:
 *     MiComputeCombineHash @ 0x14020C3A0 (MiComputeCombineHash.c)
 *     MiCrcStillIntact @ 0x1402FA610 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x1402FA880 (MiSharePages.c)
 *     MiMapArbitraryPage @ 0x140313BE8 (MiMapArbitraryPage.c)
 *     MiRecheckCombineVm @ 0x1403140D4 (MiRecheckCombineVm.c)
 *     MiCapturePfnVm @ 0x14045B3C4 (MiCapturePfnVm.c)
 *     MiCombinePte @ 0x1406850D0 (MiCombinePte.c)
 *     MiCombineAllPhysicalMemory @ 0x1409F24E8 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x14021CE30 (MiGetPagePrivilege.c)
 *     MiGetSystemRegionType @ 0x14022AD20 (MiGetSystemRegionType.c)
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiIsPfnCommitNotCharged @ 0x14023C210 (MiIsPfnCommitNotCharged.c)
 *     MiInvalidPteConforms @ 0x140302590 (MiInvalidPteConforms.c)
 *     MI_IS_RESET_PTE @ 0x140368EE0 (MI_IS_RESET_PTE.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140397A50 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiValidCombineProtection @ 0x140426AC0 (MiValidCombineProtection.c)
 */

__int64 __fastcall MiCombineCandidate(_QWORD *a1, unsigned int a2, _QWORD *a3)
{
  _QWORD *v3; // rax
  __int64 v4; // r9
  unsigned __int64 v5; // rdi
  __int64 v6; // r11
  __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  int SystemRegionType; // eax
  unsigned int v10; // edx
  char v11; // cl
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+30h] [rbp-28h]
  __int128 v15; // [rsp+40h] [rbp-18h]

  v3 = a3;
  v13 = 0LL;
  v14 = 0LL;
  v4 = 6LL;
  v15 = 0LL;
  do
  {
    *(_QWORD *)((char *)v3 + (char *)&v13 - (char *)a3) = *v3;
    ++v3;
    --v4;
  }
  while ( v4 );
  if ( (BYTE2(v15) & 7u) <= 1 )
    return 0LL;
  v5 = *((_QWORD *)&v13 + 1);
  if ( *((_QWORD *)qword_140E2FF88 + ((*((_QWORD *)&v15 + 1) >> 43) & 0x3FFLL)) != *a1 && (a2 & 1) == 0 )
    return 0LL;
  if ( v15 < 0 )
    return 0LL;
  if ( (*((_QWORD *)&v15 + 1) & 0x10000000000LL) != 0 )
    return 0LL;
  if ( (BYTE3(v15) & 8) != 0 )
    return 0LL;
  if ( *((_QWORD *)&v13 + 1) < 0xFFFFF68000000000uLL )
    return 0LL;
  if ( *((_QWORD *)&v13 + 1) > 0xFFFFF6FFFFFFFFFFuLL )
    return 0LL;
  if ( (*((_QWORD *)&v14 + 1) & 0x4000000000000000LL) != 0 )
    return 0LL;
  if ( ((*((_QWORD *)&v15 + 1) >> 60) & 7) == 4 )
    return 0LL;
  if ( (unsigned int)MiIsPfnCommitNotCharged(&v13, *a1, a2) )
    return 0LL;
  if ( (unsigned int)MiGetPfnSlabType(v6) != 9 )
    return 0LL;
  v7 = v14;
  if ( !(unsigned int)MiInvalidPteConforms(v14)
    || !(unsigned int)MiValidCombineProtection((v8 >> 5) & 0x1F)
    || (unsigned int)MiGetPagePrivilege((ULONG_PTR)&v13) )
  {
    return 0LL;
  }
  SystemRegionType = MiGetSystemRegionType((__int64)(v5 << 25) >> 16);
  if ( v5 > 0xFFFFF6BFFFFFFF78uLL )
  {
    if ( SystemRegionType != 5 )
      return 0LL;
    v10 = 2;
  }
  else
  {
    v10 = 1;
  }
  v11 = BYTE2(v15);
  if ( (unsigned __int8)((BYTE2(v15) & 7) - 2) <= 1u )
  {
    if ( (_WORD)v15 )
    {
      v11 = BYTE2(v15);
      goto LABEL_20;
    }
    if ( v10 != 1 || !(unsigned int)MI_IS_RESET_PTE(v7) && !(unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(v7) )
      return v10;
    return 0LL;
  }
LABEL_20:
  if ( (v11 & 7) != 6
    || (v13 & 1) == 0
    || (*((_QWORD *)&v15 + 1) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL
    || (_WORD)v15 != 1
    || (*((_QWORD *)&v14 + 1) & 0x3FFFFFFFFFFFFFFFLL) != 1
    || v10 == 1 && ((unsigned int)MI_IS_RESET_PTE(v7) || (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(v7)) )
  {
    return 0LL;
  }
  return v10;
}
