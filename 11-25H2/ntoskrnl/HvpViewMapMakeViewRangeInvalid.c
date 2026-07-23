/*
 * XREFs of HvpViewMapMakeViewRangeInvalid @ 0x140A40614
 * Callers:
 *     HvpViewMapShrinkStorage @ 0x1407CF774 (HvpViewMapShrinkStorage.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x14088274C (HvpViewMapPromoteRangeToMapping.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x14046BB00 (CmSiProtectViewOfSection.c)
 *     HvpViewMapReleaseChargesAndUnlockViewPages @ 0x140A40714 (HvpViewMapReleaseChargesAndUnlockViewPages.c)
 */

__int64 __fastcall HvpViewMapMakeViewRangeInvalid(ULONG_PTR a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v7; // r15
  __int64 i; // r14
  ULONG_PTR v9; // rbp
  __int64 j; // rcx
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  LODWORD(v13) = 0;
  v7 = a1;
  for ( i = a3; i < a4; i += 4096LL )
  {
    if ( !a2[8] )
      break;
    a1 = a2[3];
    v9 = (i - a1) >> 12;
    if ( (*((_BYTE *)a2 + v9 + 72) & 0x10) != 0 )
    {
      HvpViewMapReleaseChargesAndUnlockViewPages(a1, *(_QWORD *)(v7 + 24), i + a2[7] - a1, 4096LL);
      *((_BYTE *)a2 + v9 + 72) &= ~0x10u;
      --a2[8];
    }
  }
  CmSiProtectViewOfSection(a1, *(void ***)(v7 + 24), (void *)(a3 + a2[7] - a2[3]), a4 - a3, 0x80000001, (ULONG *)&v13);
  for ( j = a3; j < a4; *((_BYTE *)a2 + ((unsigned __int64)(v12 - a2[3]) >> 12) + 72) = 0 )
  {
    v12 = j;
    j += 4096LL;
  }
  result = a2[6];
  if ( a2[5] == a3 )
  {
    if ( result == a4 )
    {
      a2[5] = 0LL;
      a2[6] = 0LL;
    }
    else
    {
      a2[5] = a4;
    }
  }
  else if ( result == a4 )
  {
    a2[6] = a3;
  }
  return result;
}
