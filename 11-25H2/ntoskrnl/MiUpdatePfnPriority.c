/*
 * XREFs of MiUpdatePfnPriority @ 0x140389C80
 * Callers:
 *     MiCombineWithStandbyExisting @ 0x140224A84 (MiCombineWithStandbyExisting.c)
 *     MiActOnPte @ 0x140237188 (MiActOnPte.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402A2C38 (MiDeprioritizeVirtualAddresses.c)
 *     MiPfPutPagesInTransition @ 0x14033A50C (MiPfPutPagesInTransition.c)
 *     NtLockVirtualMemory @ 0x140388E00 (NtLockVirtualMemory.c)
 *     MiUpdatePrefetchPriority @ 0x1403898E0 (MiUpdatePrefetchPriority.c)
 *     MiCombineWithExisting @ 0x14038A898 (MiCombineWithExisting.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MiRelinkStandbyPage @ 0x14021A0E8 (MiRelinkStandbyPage.c)
 *     MiIsDecayPfn @ 0x140241130 (MiIsDecayPfn.c)
 */

__int64 __fastcall MiUpdatePfnPriority(unsigned __int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // r11d
  ULONG_PTR v4; // r10
  unsigned __int8 v5; // bl
  unsigned int v6; // ecx
  char v8; // al
  char v9; // r9d^2
  __int64 v10; // rax
  int v11; // [rsp+38h] [rbp+10h]
  int v12; // [rsp+38h] [rbp+10h]

  v3 = a2;
  v4 = a1;
  v5 = -1;
  v11 = *(_DWORD *)(a1 + 32);
  if ( (v11 & 0x8000000) != 0
    && (a1 < 0xFFFFDE0000000000uLL
     || a1 >= 48 * qword_140E2D9A0 - 0x21FFFFFFFFD0LL
     || MiIsDecayPfn(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4))
     || (v9 & 7) != 6 && (unsigned int)MiGetPfnSlabType(v4) == 9) )
  {
    v6 = 5;
  }
  else
  {
    v6 = HIBYTE(v11) & 7;
  }
  if ( v3 == v6 || v3 < v6 && (!a3 || v6 > 5 && *(__int64 *)(v4 + 40) < 0) )
    return v5;
  v8 = *(_BYTE *)(v4 + 34) & 7;
  if ( v8 != 2 )
  {
    if ( v8 != 6 || (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 || v3 >= v6 )
    {
      v12 = *(_DWORD *)(v4 + 32);
      HIBYTE(v12) ^= (v3 ^ HIBYTE(v12)) & 7;
      *(_DWORD *)(v4 + 32) = v12;
      if ( v6 < 5 )
      {
        v5 = -1;
        if ( v3 == 5 )
          return 0;
      }
      else if ( v3 < 5 )
      {
        return 7LL;
      }
    }
    return v5;
  }
  if ( !v6
    && (*(_DWORD *)(v4 + 16) & 0x400LL) == 0
    && (*(_DWORD *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) == 0 )
  {
    v10 = *(_QWORD *)(v4 + 16);
    if ( (v10 & 4) != 0
      && (unsigned __int16)v10 >> 12 == *(_DWORD *)(*((_QWORD *)qword_140E2FD48
                                                    + ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL))
                                                  + 1204LL) )
    {
      return v5;
    }
  }
  MiRelinkStandbyPage(v4, v3);
  return 255LL;
}
