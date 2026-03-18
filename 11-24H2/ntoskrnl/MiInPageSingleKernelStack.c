/*
 * XREFs of MiInPageSingleKernelStack @ 0x14046A150
 * Callers:
 *     MmInPageKernelStack @ 0x14046A04C (MmInPageKernelStack.c)
 * Callees:
 *     MiSafeLockPage @ 0x140216290 (MiSafeLockPage.c)
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiKernelStackVaToStackNode @ 0x14024468C (MiKernelStackVaToStackNode.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiPrefetchVirtualMemory @ 0x1402A98D0 (MiPrefetchVirtualMemory.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiReleaseWsSwapReservationPfn @ 0x1402E46AC (MiReleaseWsSwapReservationPfn.c)
 *     MiSetPfnKernelStack @ 0x1403A0080 (MiSetPfnKernelStack.c)
 *     MiSetPfnIdentity @ 0x1403A00D0 (MiSetPfnIdentity.c)
 *     MiLogKernelStackEvent @ 0x1404CC844 (MiLogKernelStackEvent.c)
 *     MiFlushAllFilesystemPages @ 0x1404D6B8C (MiFlushAllFilesystemPages.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     MiDeleteKernelStackNode @ 0x1406752B0 (MiDeleteKernelStackNode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

_QWORD *__fastcall MiInPageSingleKernelStack(ULONG_PTR BugCheckParameter3, __int64 *a2)
{
  ULONG_PTR v3; // r15
  int v4; // edi
  __int64 v5; // rdx
  ULONG_PTR v6; // r14
  unsigned __int64 v7; // rbx
  void *v8; // r12
  __int64 DemandZeroPte; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD *v14; // r9
  unsigned __int64 v15; // r10
  __int64 *v16; // r11
  __int64 v17; // rcx
  __int64 v18; // r13
  signed __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int64 v22; // rbx
  char v23; // al
  __int64 v24; // r15
  __int64 v25; // rcx
  unsigned __int64 v26; // rbx
  _QWORD *result; // rax
  unsigned __int8 v28; // [rsp+30h] [rbp-D0h]
  int v29; // [rsp+34h] [rbp-CCh]
  __int64 v31; // [rsp+40h] [rbp-C0h]
  _BOOL8 BugCheckParameter1; // [rsp+50h] [rbp-B0h]
  ULONG *v33; // [rsp+58h] [rbp-A8h]
  __int16 v35; // [rsp+70h] [rbp-90h] BYREF
  signed __int64 *v36; // [rsp+78h] [rbp-88h]
  __int64 v37; // [rsp+80h] [rbp-80h]
  __int64 v38; // [rsp+88h] [rbp-78h]
  __int64 v39; // [rsp+90h] [rbp-70h]
  int v40; // [rsp+98h] [rbp-68h]
  ULONG_PTR v41; // [rsp+A0h] [rbp-60h]
  signed __int64 v42; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v43; // [rsp+F8h] [rbp-8h] BYREF

  v3 = BugCheckParameter3;
  memset_0(&v35, 0, 0x78uLL);
  v4 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(v3 + 588)] + 192) + 138LL) + 1;
  v5 = *a2;
  v31 = (((unsigned __int64)a2[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = (((unsigned __int64)(*a2 - 4096) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = 0LL;
  v33 = (ULONG *)*((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(*(_QWORD *)(v3 + 544) + 1198LL));
  if ( v33 == &MiSystemPartition )
  {
    v8 = 0LL;
  }
  else
  {
    result = MiKernelStackVaToStackNode(v5 - 1, 0);
    v8 = result;
    if ( !result )
      return result;
  }
  DemandZeroPte = MiMakeDemandZeroPte(4);
  BugCheckParameter1 = 0LL;
  if ( v10 != DemandZeroPte )
  {
    BugCheckParameter1 = (v10 & 0x800) == 0;
    v3 = BugCheckParameter3;
  }
  MiMakeDemandZeroPte(24);
  v11 = MiMakeDemandZeroPte(31);
  v15 = (unsigned __int64)v14;
  if ( (unsigned __int64)v14 <= v6 )
  {
    v16 = &v43;
    do
    {
      v17 = *(_QWORD *)v15;
      if ( *(_QWORD *)v15 != v11 && v17 != v13 && v17 != v12 && (v17 & 0x800) == 0 )
      {
        ++v7;
        *v16 = 4096LL;
        *(v16 - 1) = (__int64)(v15 << 25) >> 16;
        v16 += 2;
        if ( v7 == 36 )
          break;
      }
      v15 += 8LL;
    }
    while ( v15 <= v6 );
    v3 = BugCheckParameter3;
    if ( v7 > 1 )
      MiPrefetchVirtualMemory(v7, (unsigned __int64)&v42, 1LL, 45);
    v14 = (_QWORD *)v31;
  }
  v18 = 0LL;
  v43 = 4096LL;
  v19 = (__int64)(v6 << 25) >> 16;
LABEL_13:
  while ( v6 >= (unsigned __int64)v14 )
  {
    if ( (*(_QWORD *)v6 & 0x3E0LL) != 0x3E0 )
      KeBugCheckEx(0x1Au, 0x3451uLL, v6, v3, 0LL);
    v38 = 0LL;
    v39 = 0LL;
    v42 = v19;
    v35 = 4;
    v36 = &v42;
    v37 = 1LL;
    v41 = v3;
    v40 = v4;
    MmAccessFault(2uLL, v19, 0, (ULONG_PTR)&v35 + 1);
    while ( 1 )
    {
      v22 = *(_QWORD *)v6;
      v3 = BugCheckParameter3;
      v14 = (_QWORD *)v31;
      if ( (*(_QWORD *)v6 & 1) == 0 )
        break;
      v23 = MiSafeLockPage((v22 >> 12) & 0xFFFFFFFFFFLL, v20, v21);
      v28 = v23;
      if ( v23 != 17 )
      {
        v24 = 48 * ((v22 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        if ( v22 == *(_QWORD *)v6 )
        {
          MiSetPfnKernelStack((__int64 *)v24, BugCheckParameter3);
          MiSetPfnIdentity(v25, 2u);
          v29 = *(_DWORD *)(v24 + 32);
          HIBYTE(v29) = HIBYTE(v29) & 0xF8 | 5;
          *(_DWORD *)(v24 + 32) = v29;
          v26 = MiReleaseWsSwapReservationPfn(v24);
          MiUnlockPage(v24, v28);
          if ( v26 )
            MiReleasePageFileInfo((__int64)v33, v26, 0LL);
          v6 -= 8LL;
          v3 = BugCheckParameter3;
          v19 -= 4096LL;
          v14 = (_QWORD *)v31;
          ++v18;
          goto LABEL_13;
        }
        MiUnlockPage(v24, v23);
      }
    }
  }
  if ( v8 )
    MiDeleteKernelStackNode(v8);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogKernelStackEvent(v19 + 4096, v18, 1LL);
  result = (_QWORD *)a2[2];
  if ( *(result - 1) != v3 )
  {
    MiFlushAllFilesystemPages(1LL);
    KeBugCheckEx(0x77u, BugCheckParameter1, *(_QWORD *)(a2[2] - 8), 0LL, a2[2]);
  }
  return result;
}
