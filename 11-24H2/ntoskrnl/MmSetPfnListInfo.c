/*
 * XREFs of MmSetPfnListInfo @ 0x140308064
 * Callers:
 *     PfpPfnPrioRequest @ 0x1409334C4 (PfpPfnPrioRequest.c)
 * Callees:
 *     MiGetPfnPriority @ 0x1402141E0 (MiGetPfnPriority.c)
 *     MiSafeLockPage @ 0x140216290 (MiSafeLockPage.c)
 *     MiRelinkStandbyPage @ 0x14022C848 (MiRelinkStandbyPage.c)
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiIdentifyPfn @ 0x140307510 (MiIdentifyPfn.c)
 *     MiSetActivePfnHeat @ 0x140403070 (MiSetActivePfnHeat.c)
 *     MiAddPageToHeatRanges @ 0x14043F904 (MiAddPageToHeatRanges.c)
 *     MiIssuePageHeatList @ 0x14043F9FC (MiIssuePageHeatList.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MmSetPfnListInfo(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // r12d
  _QWORD *v9; // r13
  ULONG_PTR v10; // r15
  __int64 v11; // rdi
  unsigned __int8 v12; // al
  unsigned __int64 v13; // r14
  char v14; // cl
  int PfnPriority; // eax
  int v16; // r10d
  int v17; // r11d
  __int64 v18; // xmm1_8
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD v23[3]; // [rsp+28h] [rbp-89h] BYREF
  __int64 v24; // [rsp+40h] [rbp-71h]
  _QWORD v25[2]; // [rsp+48h] [rbp-69h] BYREF
  _BYTE v26[128]; // [rsp+58h] [rbp-59h] BYREF

  HIDWORD(v23[0]) = a3;
  v24 = 0LL;
  *(_OWORD *)&v23[1] = 0LL;
  memset_0(v26, 0, sizeof(v26));
  if ( a3 && (HvlEnlightenments & 0x8400000) == 0 )
    return 3221225659LL;
  v8 = 0;
  v25[1] = qword_140E2EBF8;
  v9 = &a2[3 * a1];
  v25[0] = 130LL;
  while ( a2 < v9 )
  {
    v10 = a2[1];
    v11 = 48 * v10 - 0x220000000000LL;
    v12 = MiSafeLockPage(v10, v6, v7);
    v13 = v12;
    if ( v12 == 17 )
      goto LABEL_23;
    if ( v10 > qword_140E2DBE0 || ((*(_QWORD *)(48 * v10 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
    {
      MiUnlockPage(48 * v10 - 0x220000000000LL, v12);
LABEL_23:
      v8 = -1073741584;
      goto LABEL_18;
    }
    MiIdentifyPfn(v10, &v23[1]);
    if ( v24 != a2[2] )
      goto LABEL_20;
    if ( ((v23[1] ^ *a2) & 0x1FFFFFFFFFFFE00LL) != 0 )
      goto LABEL_20;
    v14 = *(_BYTE *)(v11 + 34) & 7;
    if ( v14 != 6 && (unsigned __int8)(v14 - 2) > 2u )
      goto LABEL_20;
    if ( HIDWORD(v23[0]) )
    {
      if ( (*a2 & 0x80u) == 0LL || v14 != 2 || (unsigned __int16)*(_DWORD *)(v11 + 32) )
        goto LABEL_20;
      v20 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v11 + 40) >> 43) & 0x3FFLL));
      v21 = *(_QWORD *)(v20 + 16) + 57216LL * (unsigned int)MiPageToNode(v10);
      if ( ((HvlEnlightenments & 0x8400000) == 0
         || (HvlEnlightenments & 0x8000000) != 0
         || v21 && (*(_DWORD *)(v21 + 15184) & 2) != 0)
        && !_bittest64((const signed __int64 *)(v11 + 40), 0x35u) )
      {
        goto LABEL_20;
      }
      v22 = *(_QWORD *)(v11 + 16) >> 3;
      if ( (*(_QWORD *)(v11 + 16) & 0x400LL) != 0 )
        LOBYTE(v22) = *(_QWORD *)(v11 + 16) >> 11;
      if ( (v22 & 1) != 0 )
      {
LABEL_20:
        MiUnlockPage(48 * v10 - 0x220000000000LL, v13);
        v24 |= 2uLL;
        v8 = -1073741788;
        v18 = v24;
        *(_OWORD *)a2 = *(_OWORD *)&v23[1];
        a2[2] = v18;
        goto LABEL_18;
      }
      MiSetActivePfnHeat(48 * v10 - 0x220000000000LL, 1LL);
      MiUnlockPage(48 * v10 - 0x220000000000LL, v13);
      if ( (unsigned int)MiAddPageToHeatRanges(v25, v10, 3LL) )
        MiIssuePageHeatList(v25);
    }
    else
    {
      PfnPriority = MiGetPfnPriority(48 * v10 - 0x220000000000LL);
      if ( v16 != PfnPriority )
      {
        if ( (*(_BYTE *)(v11 + 34) & 7) == 2 )
        {
          MiRelinkStandbyPage(48 * v10 - 0x220000000000LL, v16);
          v17 = 0;
        }
        else
        {
          LODWORD(v23[0]) = *(_DWORD *)(v11 + 32);
          BYTE3(v23[0]) = v16 | BYTE3(v23[0]) & 0xF8;
          *(_DWORD *)(v11 + 32) = v23[0];
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (unsigned __int8)v13 < 2u )
      {
        if ( KiIrqlFlags != v17 )
        {
          LOBYTE(v6) = v13;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
        }
        __writecr8(v13);
      }
    }
LABEL_18:
    a2 += 3;
  }
  if ( HIDWORD(v25[0]) )
    MiIssuePageHeatList(v25);
  return v8;
}
