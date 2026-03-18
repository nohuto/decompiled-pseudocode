/*
 * XREFs of MmSetPfnListInfo @ 0x140221CC4
 * Callers:
 *     PfpPfnPrioRequest @ 0x140933094 (PfpPfnPrioRequest.c)
 * Callees:
 *     MiRelinkStandbyPage @ 0x14021A0E8 (MiRelinkStandbyPage.c)
 *     MiIdentifyPfn @ 0x140221170 (MiIdentifyPfn.c)
 *     MiGetPfnPriority @ 0x140230FB0 (MiGetPfnPriority.c)
 *     MiSafeLockPage @ 0x140231E30 (MiSafeLockPage.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     MiSetActivePfnHeat @ 0x1403FA970 (MiSetActivePfnHeat.c)
 *     MiAddPageToHeatRanges @ 0x1404404A4 (MiAddPageToHeatRanges.c)
 *     MiIssuePageHeatList @ 0x14044059C (MiIssuePageHeatList.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MmSetPfnListInfo(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r12d
  _QWORD *v10; // r13
  unsigned __int64 v11; // r15
  __int64 v12; // rdi
  unsigned __int8 v13; // al
  unsigned __int64 v14; // r14
  __int64 v15; // rdx
  char v16; // cl
  int PfnPriority; // eax
  int v18; // r10d
  int v19; // r11d
  __int64 v20; // xmm1_8
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  _QWORD v26[3]; // [rsp+28h] [rbp-89h] BYREF
  __int64 v27; // [rsp+40h] [rbp-71h]
  _QWORD v28[2]; // [rsp+48h] [rbp-69h] BYREF
  _BYTE v29[128]; // [rsp+58h] [rbp-59h] BYREF

  HIDWORD(v26[0]) = a3;
  v27 = 0LL;
  *(_OWORD *)&v26[1] = 0LL;
  memset_0(v29, 0, sizeof(v29));
  if ( a3 && (HvlEnlightenments & 0x8400000) == 0 )
    return 3221225659LL;
  v9 = 0;
  v28[1] = qword_140E2E9B8;
  v10 = &a2[3 * a1];
  v28[0] = 130LL;
  while ( a2 < v10 )
  {
    v11 = a2[1];
    v12 = 48 * v11 - 0x220000000000LL;
    v13 = MiSafeLockPage(v11, v6, v7, v8);
    v14 = v13;
    if ( v13 == 17 )
      goto LABEL_23;
    if ( v11 > qword_140E2D9A0 || ((*(_QWORD *)(48 * v11 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
    {
      LOBYTE(v6) = v13;
      MiUnlockPage(48 * v11 - 0x220000000000LL, v6);
LABEL_23:
      v9 = -1073741584;
      goto LABEL_18;
    }
    MiIdentifyPfn(v11, &v26[1]);
    if ( v27 != a2[2] )
      goto LABEL_20;
    if ( ((v26[1] ^ *a2) & 0x1FFFFFFFFFFFE00LL) != 0 )
      goto LABEL_20;
    v16 = *(_BYTE *)(v12 + 34) & 7;
    if ( v16 != 6 && (unsigned __int8)(v16 - 2) > 2u )
      goto LABEL_20;
    if ( HIDWORD(v26[0]) )
    {
      if ( (*a2 & 0x80u) == 0LL || v16 != 2 || (unsigned __int16)*(_DWORD *)(v12 + 32) )
        goto LABEL_20;
      v22 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v12 + 40) >> 43) & 0x3FFLL));
      v23 = *(_QWORD *)(v22 + 16) + 57216LL * (unsigned int)MiPageToNode(v11);
      if ( ((HvlEnlightenments & 0x8400000) == 0
         || (HvlEnlightenments & 0x8000000) != 0
         || v23 && (*(_DWORD *)(v23 + 15184) & 2) != 0)
        && !_bittest64((const signed __int64 *)(v12 + 40), 0x35u) )
      {
        goto LABEL_20;
      }
      v24 = *(_QWORD *)(v12 + 16) >> 3;
      if ( (*(_QWORD *)(v12 + 16) & 0x400LL) != 0 )
        LOBYTE(v24) = *(_QWORD *)(v12 + 16) >> 11;
      if ( (v24 & 1) != 0 )
      {
LABEL_20:
        LOBYTE(v15) = v14;
        MiUnlockPage(48 * v11 - 0x220000000000LL, v15);
        v27 |= 2uLL;
        v9 = -1073741788;
        v20 = v27;
        *(_OWORD *)a2 = *(_OWORD *)&v26[1];
        a2[2] = v20;
        goto LABEL_18;
      }
      MiSetActivePfnHeat(48 * v11 - 0x220000000000LL, 1LL);
      LOBYTE(v25) = v14;
      MiUnlockPage(48 * v11 - 0x220000000000LL, v25);
      if ( (unsigned int)MiAddPageToHeatRanges(v28, v11, 3LL) )
        MiIssuePageHeatList(v28);
    }
    else
    {
      PfnPriority = MiGetPfnPriority(48 * v11 - 0x220000000000LL);
      if ( v18 != PfnPriority )
      {
        if ( (*(_BYTE *)(v12 + 34) & 7) == 2 )
        {
          MiRelinkStandbyPage(48 * v11 - 0x220000000000LL, v18);
          v19 = 0;
        }
        else
        {
          LODWORD(v26[0]) = *(_DWORD *)(v12 + 32);
          BYTE3(v26[0]) = v18 | BYTE3(v26[0]) & 0xF8;
          *(_DWORD *)(v12 + 32) = v26[0];
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (unsigned __int8)v14 < 2u )
      {
        if ( KiIrqlFlags != v19 )
        {
          LOBYTE(v6) = v14;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
        }
        __writecr8(v14);
      }
    }
LABEL_18:
    a2 += 3;
  }
  if ( HIDWORD(v28[0]) )
    MiIssuePageHeatList(v28);
  return v9;
}
