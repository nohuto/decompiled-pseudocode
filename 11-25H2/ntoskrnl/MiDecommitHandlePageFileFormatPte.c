/*
 * XREFs of MiDecommitHandlePageFileFormatPte @ 0x140382A54
 * Callers:
 *     MiDeleteVa @ 0x1402B1A90 (MiDeleteVa.c)
 *     MiDecommitPages @ 0x140381AE0 (MiDecommitPages.c)
 * Callees:
 *     MiTransferSoftwarePte @ 0x1402280C0 (MiTransferSoftwarePte.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402CE090 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiReleasePageFileSpace @ 0x1403E1160 (MiReleasePageFileSpace.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14040EC84 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDecommitHandlePageFileFormatPte(__int64 a1, ULONG_PTR a2)
{
  unsigned int v2; // ebp
  ULONG_PTR v3; // rbx
  int v5; // ecx
  unsigned __int64 v6; // rdi
  unsigned int v7; // r15d
  __int64 v8; // r14
  int v9; // eax
  unsigned __int64 v10; // r8
  unsigned __int64 i; // rcx
  ULONG_PTR v13; // [rsp+68h] [rbp+10h] BYREF

  v13 = a2;
  v2 = *(_DWORD *)(a1 + 192);
  v3 = a2;
  if ( v2 != 1 && *(_DWORD *)(a1 + 96) )
    v2 = 1;
  v5 = *(_DWORD *)(a1 + 156);
  if ( (v5 & 8) == 0 )
  {
    v6 = *(_QWORD *)(a1 + 176);
    v7 = 1;
    v8 = *(_QWORD *)(a1 + 8);
    if ( (v5 & 0x20) != 0 )
    {
      if ( ((a2 >> 5) & 0x1F) == 0 )
        KeBugCheckEx(0x1Au, 0x41792uLL, *(_QWORD *)(a1 + 72), a2, 0LL);
      if ( *(_DWORD *)(a1 + 40) )
      {
        if ( ((a2 >> 5) & 0x1F) != 0x10 )
        {
          *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL) += v2;
          if ( *(_DWORD *)(a1 + 40) != 3 )
            **(_QWORD **)(a1 + 24) += v2;
        }
        goto LABEL_27;
      }
      if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(a2) )
      {
LABEL_27:
        MiReleasePageFileSpace(v8, v3, v7);
        for ( i = 0LL; i < v2; *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * i++) = v6 )
          ;
        if ( !v6 )
          *(_DWORD *)(a1 + 112) += v2;
        return v2;
      }
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 40) )
      {
        if ( ((a2 >> 5) & 0x1F) == 0x10 )
        {
          *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL) += *(_QWORD *)(a1 + 144);
          return v2;
        }
        if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(a2) )
        {
          _InterlockedAdd64((volatile signed __int64 *)KeGetCurrentThread()->ApcState.Process[1].Padding, -(__int64)v2);
          v3 = v13;
        }
        if ( (v3 & 2) != 0 )
        {
          v9 = MI_IS_PTE_IN_WS_SWAP_SET(v8, &v13);
          v3 = v13;
          if ( !v9 )
          {
            v7 = 0;
            v10 = v13;
            if ( qword_140E2D940 && (v13 & 0x10) == 0 )
              v10 = v13 & ~qword_140E2D940;
            v6 = MiTransferSoftwarePte(
                   *(_QWORD *)(a1 + 168),
                   *(_QWORD *)(v8 + 8LL * ((unsigned __int16)v13 >> 12) + 18528),
                   (_KPROCESS *)HIDWORD(v10),
                   2);
          }
        }
        goto LABEL_27;
      }
      if ( ((a2 >> 5) & 0x1F) == 0 )
      {
        if ( (v5 & 0x10) != 0 )
          return v2;
        goto LABEL_27;
      }
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL) += v2;
    goto LABEL_27;
  }
  return v2;
}
