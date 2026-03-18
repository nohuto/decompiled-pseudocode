/*
 * XREFs of MiCombineCandidate @ 0x140210C20
 * Callers:
 *     MiComputeCombineHash @ 0x140210ED0 (MiComputeCombineHash.c)
 *     MiMapArbitraryPage @ 0x14022492C (MiMapArbitraryPage.c)
 *     MiRecheckCombineVm @ 0x140224E0C (MiRecheckCombineVm.c)
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 *     MiCrcStillIntact @ 0x140239824 (MiCrcStillIntact.c)
 *     MiCapturePfnVm @ 0x14045C04C (MiCapturePfnVm.c)
 *     MiCombinePte @ 0x140679840 (MiCombinePte.c)
 *     MiCombineAllPhysicalMemory @ 0x1409F3FBC (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140208510 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MiGetSystemRegionType @ 0x140219770 (MiGetSystemRegionType.c)
 *     MiGetPagePrivilege @ 0x140230BA0 (MiGetPagePrivilege.c)
 *     MiInvalidPteConforms @ 0x1402343E0 (MiInvalidPteConforms.c)
 *     MiIsPfnCommitNotCharged @ 0x14033E4E0 (MiIsPfnCommitNotCharged.c)
 *     MI_IS_RESET_PTE @ 0x1403FB340 (MI_IS_RESET_PTE.c)
 *     MiValidCombineProtection @ 0x14042E980 (MiValidCombineProtection.c)
 */

__int64 __fastcall MiCombineCandidate(_QWORD *a1, char a2, _QWORD *a3)
{
  _QWORD *v3; // rax
  __int64 v4; // r9
  unsigned __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r11
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  int SystemRegionType; // eax
  unsigned int v12; // edx
  char v13; // cl
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  __int128 v16; // [rsp+30h] [rbp-28h]
  __int128 v17; // [rsp+40h] [rbp-18h]

  v3 = a3;
  v15 = 0LL;
  v16 = 0LL;
  v4 = 6LL;
  v17 = 0LL;
  do
  {
    *(_QWORD *)((char *)v3 + (char *)&v15 - (char *)a3) = *v3;
    ++v3;
    --v4;
  }
  while ( v4 );
  if ( (BYTE2(v17) & 7u) <= 1 )
    return 0LL;
  v5 = *((_QWORD *)&v15 + 1);
  if ( *((_QWORD *)qword_140E2FD48 + ((*((_QWORD *)&v17 + 1) >> 43) & 0x3FFLL)) != *a1 && (a2 & 1) == 0 )
    return 0LL;
  if ( v17 < 0 )
    return 0LL;
  if ( (*((_QWORD *)&v17 + 1) & 0x10000000000LL) != 0 )
    return 0LL;
  if ( (BYTE3(v17) & 8) != 0 )
    return 0LL;
  if ( *((_QWORD *)&v15 + 1) < 0xFFFFF68000000000uLL )
    return 0LL;
  if ( *((_QWORD *)&v15 + 1) > 0xFFFFF6FFFFFFFFFFuLL )
    return 0LL;
  if ( (*((_QWORD *)&v16 + 1) & 0x4000000000000000LL) != 0 )
    return 0LL;
  if ( ((*((_QWORD *)&v17 + 1) >> 60) & 7) == 4 )
    return 0LL;
  if ( (unsigned int)MiIsPfnCommitNotCharged(&v15) )
    return 0LL;
  if ( (unsigned int)MiGetPfnSlabType(v8, v6, v7) != 9 )
    return 0LL;
  v9 = v16;
  if ( !(unsigned int)MiInvalidPteConforms(v16)
    || !(unsigned int)MiValidCombineProtection((v10 >> 5) & 0x1F)
    || (unsigned int)MiGetPagePrivilege((ULONG_PTR)&v15) )
  {
    return 0LL;
  }
  SystemRegionType = MiGetSystemRegionType((__int64)(v5 << 25) >> 16);
  if ( v5 > 0xFFFFF6BFFFFFFF78uLL )
  {
    if ( SystemRegionType != 5 )
      return 0LL;
    v12 = 2;
  }
  else
  {
    v12 = 1;
  }
  v13 = BYTE2(v17);
  if ( (unsigned __int8)((BYTE2(v17) & 7) - 2) <= 1u )
  {
    if ( (_WORD)v17 )
    {
      v13 = BYTE2(v17);
      goto LABEL_20;
    }
    if ( v12 != 1 || !(unsigned int)MI_IS_RESET_PTE(v9) && !(unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(v9) )
      return v12;
    return 0LL;
  }
LABEL_20:
  if ( (v13 & 7) != 6
    || (v15 & 1) == 0
    || (*((_QWORD *)&v17 + 1) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL
    || (_WORD)v17 != 1
    || (*((_QWORD *)&v16 + 1) & 0x3FFFFFFFFFFFFFFFLL) != 1
    || v12 == 1 && ((unsigned int)MI_IS_RESET_PTE(v9) || (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(v9)) )
  {
    return 0LL;
  }
  return v12;
}
