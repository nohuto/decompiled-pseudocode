/*
 * XREFs of MiDecommitHandlePageFileFormatPte @ 0x140298E70
 * Callers:
 *     MiDeleteVa @ 0x14023D060 (MiDeleteVa.c)
 *     MiDecommitPages @ 0x140297F00 (MiDecommitPages.c)
 * Callees:
 *     MiTransferSoftwarePte @ 0x140215AA0 (MiTransferSoftwarePte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x140269980 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiReleasePageFileSpace @ 0x1403D2B30 (MiReleasePageFileSpace.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDecommitHandlePageFileFormatPte(__int64 a1, ULONG_PTR a2)
{
  unsigned int v2; // r14d
  unsigned int v3; // r15d
  ULONG_PTR v4; // rbx
  int v6; // ecx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  __int64 v9; // r12
  unsigned __int16 v10; // ax
  __int16 v11; // dx
  __int64 v12; // r8
  ULONG_PTR v14; // [rsp+68h] [rbp+10h] BYREF

  v14 = a2;
  v2 = *(_DWORD *)(a1 + 192);
  v3 = 1;
  v4 = a2;
  if ( v2 != 1 && *(_DWORD *)(a1 + 96) )
    v2 = 1;
  v6 = *(_DWORD *)(a1 + 156);
  if ( (v6 & 8) == 0 )
  {
    v7 = *(_QWORD *)(a1 + 176);
    v8 = 0LL;
    v9 = *(_QWORD *)(a1 + 8);
    if ( (v6 & 0x20) != 0 )
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
      }
      else if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(a2) )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL) += v2;
      }
    }
    else if ( *(_DWORD *)(a1 + 40) )
    {
      if ( ((a2 >> 5) & 0x1F) != 0 )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL) += v2;
      }
      else if ( (v6 & 0x10) != 0 )
      {
        return v2;
      }
    }
    else
    {
      if ( ((a2 >> 5) & 0x1F) == 0x10 )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL) += *(_QWORD *)(a1 + 144);
        return v2;
      }
      if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(a2) )
      {
        _InterlockedAdd64((volatile signed __int64 *)KeGetCurrentThread()->ApcState.Process[1].Padding, -(__int64)v2);
        v4 = v14;
      }
      if ( (v4 & 2) != 0 )
      {
        v10 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v14);
        v11 = *(_WORD *)(*(_QWORD *)(v9 + 8LL * (v10 >> 12) + 18528) + 172LL);
        if ( (v11 & 0x10) != 0 || (v11 & 0x20) != 0 && (v10 & 2) != 0 )
        {
          v4 = v14;
        }
        else
        {
          v4 = v14;
          v3 = 0;
          HIDWORD(v12) = HIDWORD(v14);
          if ( qword_140E2DCC0 && (v14 & 0x10) == 0 )
            v12 = v14 & ~qword_140E2DCC0;
          v7 = MiTransferSoftwarePte(
                 *(_QWORD *)(a1 + 168),
                 *(_QWORD *)(v9 + 8LL * ((unsigned __int16)v14 >> 12) + 18528),
                 HIDWORD(v12),
                 2);
        }
      }
    }
    MiReleasePageFileSpace(v9, v4, v3);
    if ( v2 )
    {
      do
        *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * v8++) = v7;
      while ( v8 < v2 );
    }
    if ( !v7 )
      *(_DWORD *)(a1 + 112) += v2;
  }
  return v2;
}
