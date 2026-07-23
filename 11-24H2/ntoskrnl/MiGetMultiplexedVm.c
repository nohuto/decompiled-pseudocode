/*
 * XREFs of MiGetMultiplexedVm @ 0x140208168
 * Callers:
 *     MmSetAddressRangeModifiedEx @ 0x140208750 (MmSetAddressRangeModifiedEx.c)
 *     MiMakeSystemCacheRangeValid @ 0x14020BFD0 (MiMakeSystemCacheRangeValid.c)
 *     MiSynchronizeSystemVa @ 0x1402FDFC8 (MiSynchronizeSystemVa.c)
 *     MiTrimSharedPageFromViews @ 0x140362D10 (MiTrimSharedPageFromViews.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetMultiplexedVm(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx

  v3 = 48 * ((*(_QWORD *)(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v4 = *(_QWORD *)v3 >> 1;
  LODWORD(v4) = v4 & 0x7FFFFFFF;
  v5 = v4 | ((unsigned __int64)(*(_DWORD *)(v3 + 36) & 0x3FF0000) << 15);
  if ( v5 )
  {
    if ( (unsigned __int64)(v5 - 0x10000000000LL) <= 1 )
    {
      if ( v5 == 0x10000000001LL && PsInitialSystemProcess )
        v5 = (__int64)PsInitialSystemProcess;
    }
    else
    {
      v5 = qword_140E38BF8 + 16 * (v5 - 1);
    }
    if ( v5 )
      v5 += 40 * ((a2 >> 18) & 7);
  }
  else
  {
    v5 = 0LL;
  }
  v6 = *(_QWORD *)(v5 + 24);
  v7 = v6 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v6 & 1) == 0 )
    v7 = v6;
  return *((_QWORD *)qword_140E300C8 + (*(_WORD *)(*(_QWORD *)v7 + 60LL) & 0x3FF)) + 18816LL;
}
