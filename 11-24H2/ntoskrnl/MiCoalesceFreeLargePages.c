/*
 * XREFs of MiCoalesceFreeLargePages @ 0x140312724
 * Callers:
 *     MiProcessLargeCoalesceBitmapCandidates @ 0x140313370 (MiProcessLargeCoalesceBitmapCandidates.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiSafeLockPageAtDpc @ 0x140311180 (MiSafeLockPageAtDpc.c)
 *     MiLargePfnPromoteCandidate @ 0x1403126B0 (MiLargePfnPromoteCandidate.c)
 *     MiLargePagePromote @ 0x140423C14 (MiLargePagePromote.c)
 *     MiAddPageToHeatList @ 0x140435B9C (MiAddPageToHeatList.c)
 *     MiIssuePageHeatList @ 0x140435CBC (MiIssuePageHeatList.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x14049DD64 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MiCoalesceFreeLargePages(__int64 a1, ULONG_PTR a2, unsigned int a3, unsigned __int8 a4)
{
  unsigned __int8 v4; // si
  __int64 v5; // r14
  unsigned __int64 v7; // r13
  __int64 v8; // r15
  unsigned __int64 v9; // r12
  int v10; // ebx
  unsigned __int64 v11; // r13
  ULONG_PTR v12; // rsi
  __int64 v13; // rdi
  unsigned __int64 v14; // r15
  int v15; // eax
  unsigned int v16; // r8d
  unsigned int *v17; // r10
  int v18; // edx
  unsigned int v19; // r11d
  __int64 v20; // r9
  unsigned int v21; // ecx
  unsigned int v22; // eax
  ULONG_PTR v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 CurrentIrql; // rcx
  unsigned __int64 v27; // rbx
  __int64 v28; // r12
  unsigned int v29; // edi
  ULONG_PTR v30; // r14
  unsigned int v31; // r13d
  __int64 v32; // rax
  __int64 v34; // rdi
  unsigned __int64 i; // rbx
  unsigned int v37; // [rsp+34h] [rbp-45h]
  int v40; // [rsp+48h] [rbp-31h]
  int v41; // [rsp+4Ch] [rbp-2Dh] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-29h]
  unsigned __int64 v43; // [rsp+58h] [rbp-21h]
  __int64 v44; // [rsp+60h] [rbp-19h]
  __int64 v45; // [rsp+68h] [rbp-11h]
  __int128 v46; // [rsp+70h] [rbp-9h] BYREF
  __int64 v47; // [rsp+80h] [rbp+7h]
  __int128 v48; // [rsp+88h] [rbp+Fh] BYREF

  v47 = 0LL;
  v4 = a4;
  v44 = a1;
  v5 = MiPageSizes[a3];
  v40 = MiLargePageShifts[a3];
  v48 = 0LL;
  v37 = a3 - 1;
  v7 = MiPageSizes[a3 - 1];
  v46 = 0LL;
  v8 = 48 * a2 - 0x220000000000LL;
  v45 = v8;
  v9 = 0LL;
  v41 = 0;
  v10 = MiPageToNode(a2);
  v11 = v7 >> v40;
  BugCheckParameter2 = a2;
  v43 = v11;
  if ( v11 )
  {
    v12 = BugCheckParameter2;
    v13 = v8;
    v14 = v43;
    do
    {
      if ( !MiLargePfnPromoteCandidate(v44, v13, a3) )
        break;
      if ( v10 != (unsigned int)MiPageToNode(v12) )
        break;
      v12 += v5;
      v15 = HIWORD(*(_DWORD *)(v13 + 32));
      v13 += 48 * v5;
      ++v9;
      ++*((_DWORD *)&v48 + ((unsigned __int64)(unsigned __int8)v15 >> 6));
    }
    while ( v9 < v14 );
    v4 = a4;
    v8 = v45;
    v11 = v43;
  }
  if ( v9 != v11 )
    return 0LL;
  v16 = 0;
  v17 = (unsigned int *)&v48;
  v18 = 0;
  v19 = 1;
  LODWORD(v20) = 0;
  do
  {
    v21 = *v17;
    if ( *v17 && v16 )
      v18 = 1;
    v22 = v20;
    if ( v16 >= v21 )
      v22 = v19;
    ++v17;
    v19 = v22;
    v20 = (unsigned int)(v20 + 1);
    if ( v16 >= v21 )
      v21 = v16;
    v16 = v21;
  }
  while ( (unsigned int)v20 < 4 );
  LODWORD(BugCheckParameter2) = v22;
  if ( v18 )
  {
    v34 = v8;
    for ( i = 0LL; i < v11; ++i )
    {
      LOBYTE(v20) = v4;
      if ( !(unsigned int)MiChangePageAttributeLargeFreeZeroPage(v34, a3, v19, v20) )
        return 0LL;
      v19 = BugCheckParameter2;
      v34 += 48 * v5;
    }
  }
  v23 = a2;
  v24 = 2LL;
  v25 = v8;
  if ( v4 < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  }
  v27 = 0LL;
  v28 = 48 * v5;
  while ( 1 )
  {
    if ( v27 >= v43 )
    {
      v46 = 0LL;
      LODWORD(v46) = v4 < 2u ? 10 : 8;
      if ( v4 < 2u )
        *((_QWORD *)&v46 + 1) = qword_140E2ED38;
      v30 = a2;
      v31 = v37;
      MiLargePagePromote(a2, v37, v16, 0, (__int64)&v41);
      goto LABEL_49;
    }
    if ( v25 != v8 )
    {
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
        goto LABEL_23;
      v29 = 1;
LABEL_27:
      v30 = a2;
      v31 = v37;
      goto LABEL_28;
    }
    if ( MiSafeLockPageAtDpc(v23) == 17 )
    {
LABEL_26:
      v29 = 0;
      goto LABEL_27;
    }
LABEL_23:
    ++v27;
    if ( !MiLargePfnPromoteCandidate(v44, v25, a3) )
      goto LABEL_26;
    if ( (unsigned __int8)BYTE2(*(_DWORD *)(v25 + 32)) >> 6 != (_DWORD)BugCheckParameter2 )
      break;
    v25 += v28;
    v23 += v5;
  }
  v30 = a2;
  v31 = v37;
LABEL_49:
  v29 = 0;
LABEL_28:
  v32 = v8 + 48 * (v27 << v40);
  do
  {
    v32 -= v28;
    _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  while ( v32 != v8 );
  if ( v4 < 2u )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v24) = v4;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v24);
    }
    __writecr8(v4);
  }
  if ( v41 )
  {
    MiAddPageToHeatList(&v46, v30, v31);
    if ( DWORD1(v46) )
      MiIssuePageHeatList(&v46);
  }
  return v29;
}
