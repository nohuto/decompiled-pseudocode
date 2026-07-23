/*
 * XREFs of MmSetPfnListInfo @ 0x140311F44
 * Callers:
 *     PfpPfnPrioRequest @ 0x1408F5FDC (PfpPfnPrioRequest.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiRelinkStandbyPage @ 0x140300158 (MiRelinkStandbyPage.c)
 *     MiIdentifyPfn @ 0x1403113F0 (MiIdentifyPfn.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     MiGetPfnPriority @ 0x140335630 (MiGetPfnPriority.c)
 *     MiSetActivePfnHeat @ 0x1403FD670 (MiSetActivePfnHeat.c)
 *     MiAddPageToHeatRanges @ 0x140435BC4 (MiAddPageToHeatRanges.c)
 *     MiIssuePageHeatList @ 0x140435CBC (MiIssuePageHeatList.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MmSetPfnListInfo(__int64 a1, _QWORD *a2, int a3)
{
  unsigned int v6; // r12d
  _QWORD *v7; // r13
  unsigned __int64 v8; // r15
  __int64 v9; // rdi
  unsigned __int8 v10; // al
  unsigned __int64 v11; // r14
  char v12; // cl
  int PfnPriority; // eax
  __int64 v14; // rdx
  int v15; // r10d
  int v16; // r11d
  __int64 v17; // xmm1_8
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD v22[3]; // [rsp+28h] [rbp-89h] BYREF
  __int64 v23; // [rsp+40h] [rbp-71h]
  _QWORD v24[2]; // [rsp+48h] [rbp-69h] BYREF
  _BYTE v25[128]; // [rsp+58h] [rbp-59h] BYREF

  HIDWORD(v22[0]) = a3;
  v23 = 0LL;
  *(_OWORD *)&v22[1] = 0LL;
  memset_0(v25, 0, sizeof(v25));
  if ( a3 && (HvlEnlightenments & 0x8400000) == 0 )
    return 3221225659LL;
  v6 = 0;
  v24[1] = qword_140E2ED38;
  v7 = &a2[3 * a1];
  v24[0] = 130LL;
  while ( a2 < v7 )
  {
    v8 = a2[1];
    v9 = 48 * v8 - 0x220000000000LL;
    v10 = MiSafeLockPage(v8);
    v11 = v10;
    if ( v10 == 17 )
      goto LABEL_23;
    if ( v8 > qword_140E2DD20 || ((*(_QWORD *)(48 * v8 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
    {
      MiUnlockPage(48 * v8 - 0x220000000000LL, v10);
LABEL_23:
      v6 = -1073741584;
      goto LABEL_18;
    }
    MiIdentifyPfn(v8, &v22[1]);
    if ( v23 != a2[2] )
      goto LABEL_20;
    if ( ((v22[1] ^ *a2) & 0x1FFFFFFFFFFFE00LL) != 0 )
      goto LABEL_20;
    v12 = *(_BYTE *)(v9 + 34) & 7;
    if ( v12 != 6 && (unsigned __int8)(v12 - 2) > 2u )
      goto LABEL_20;
    if ( HIDWORD(v22[0]) )
    {
      if ( (*a2 & 0x80u) == 0LL || v12 != 2 || (unsigned __int16)*(_DWORD *)(v9 + 32) )
        goto LABEL_20;
      v19 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
      v20 = *(_QWORD *)(v19 + 16) + 57216LL * (unsigned int)MiPageToNode(v8);
      if ( ((HvlEnlightenments & 0x8400000) == 0
         || (HvlEnlightenments & 0x8000000) != 0
         || v20 && (*(_DWORD *)(v20 + 15184) & 2) != 0)
        && !_bittest64((const signed __int64 *)(v9 + 40), 0x35u) )
      {
        goto LABEL_20;
      }
      v21 = *(_QWORD *)(v9 + 16) >> 3;
      if ( (*(_QWORD *)(v9 + 16) & 0x400LL) != 0 )
        LOBYTE(v21) = *(_QWORD *)(v9 + 16) >> 11;
      if ( (v21 & 1) != 0 )
      {
LABEL_20:
        MiUnlockPage(48 * v8 - 0x220000000000LL, v11);
        v23 |= 2uLL;
        v6 = -1073741788;
        v17 = v23;
        *(_OWORD *)a2 = *(_OWORD *)&v22[1];
        a2[2] = v17;
        goto LABEL_18;
      }
      MiSetActivePfnHeat(48 * v8 - 0x220000000000LL, 1LL);
      MiUnlockPage(48 * v8 - 0x220000000000LL, v11);
      if ( (unsigned int)MiAddPageToHeatRanges(v24, v8, 3LL) )
        MiIssuePageHeatList(v24);
    }
    else
    {
      PfnPriority = MiGetPfnPriority(48 * v8 - 0x220000000000LL);
      if ( v15 != PfnPriority )
      {
        if ( (*(_BYTE *)(v9 + 34) & 7) == 2 )
        {
          MiRelinkStandbyPage(48 * v8 - 0x220000000000LL, v15);
          v16 = 0;
        }
        else
        {
          LODWORD(v22[0]) = *(_DWORD *)(v9 + 32);
          BYTE3(v22[0]) = v15 | BYTE3(v22[0]) & 0xF8;
          *(_DWORD *)(v9 + 32) = v22[0];
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (unsigned __int8)v11 < 2u )
      {
        if ( KiIrqlFlags != v16 )
        {
          LOBYTE(v14) = v11;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
        }
        __writecr8(v11);
      }
    }
LABEL_18:
    a2 += 3;
  }
  if ( HIDWORD(v24[0]) )
    MiIssuePageHeatList(v24);
  return v6;
}
