/*
 * XREFs of MiInPageSingleKernelStack @ 0x14047BE44
 * Callers:
 *     MmInPageKernelStack @ 0x1402DCBD0 (MmInPageKernelStack.c)
 * Callees:
 *     MiKernelStackVaToStackNode @ 0x14020CE1C (MiKernelStackVaToStackNode.c)
 *     MiReleaseWsSwapReservationPfn @ 0x140215E44 (MiReleaseWsSwapReservationPfn.c)
 *     MiSetPfnKernelStack @ 0x140216AB0 (MiSetPfnKernelStack.c)
 *     MiSetPfnIdentity @ 0x140216B00 (MiSetPfnIdentity.c)
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     MiPrefetchVirtualMemory @ 0x140351B80 (MiPrefetchVirtualMemory.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiLogKernelStackEvent @ 0x1404C5C18 (MiLogKernelStackEvent.c)
 *     MiFlushAllFilesystemPages @ 0x1404CFFDC (MiFlushAllFilesystemPages.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiDeleteKernelStackNode @ 0x140676480 (MiDeleteKernelStackNode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  unsigned __int64 v20; // rbx
  char v21; // al
  __int64 v22; // r15
  __int64 v23; // rcx
  unsigned __int64 v24; // rbx
  __int64 v25; // r9
  _QWORD *result; // rax
  unsigned __int8 v27; // [rsp+30h] [rbp-D0h]
  int v28; // [rsp+34h] [rbp-CCh]
  __int64 v30; // [rsp+40h] [rbp-C0h]
  _BOOL8 BugCheckParameter1; // [rsp+50h] [rbp-B0h]
  ULONG *v32; // [rsp+58h] [rbp-A8h]
  __int16 v34; // [rsp+70h] [rbp-90h] BYREF
  signed __int64 *v35; // [rsp+78h] [rbp-88h]
  __int64 v36; // [rsp+80h] [rbp-80h]
  __int64 v37; // [rsp+88h] [rbp-78h]
  __int64 v38; // [rsp+90h] [rbp-70h]
  int v39; // [rsp+98h] [rbp-68h]
  ULONG_PTR v40; // [rsp+A0h] [rbp-60h]
  signed __int64 v41; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v42; // [rsp+F8h] [rbp-8h] BYREF

  v3 = BugCheckParameter3;
  memset_0(&v34, 0, 0x78uLL);
  v4 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(v3 + 588)] + 192) + 138LL) + 1;
  v5 = *a2;
  v30 = (((unsigned __int64)a2[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = (((unsigned __int64)(*a2 - 4096) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = 0LL;
  v32 = (ULONG *)*((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(*(_QWORD *)(v3 + 544) + 1198LL));
  if ( v32 == &MiSystemPartition )
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
    v16 = &v42;
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
      MiPrefetchVirtualMemory(v7, (__int64)&v41, 1LL, 45);
    v14 = (_QWORD *)v30;
  }
  v18 = 0LL;
  v42 = 4096LL;
  v19 = (__int64)(v6 << 25) >> 16;
LABEL_13:
  while ( v6 >= (unsigned __int64)v14 )
  {
    if ( (*(_QWORD *)v6 & 0x3E0LL) != 0x3E0 )
      KeBugCheckEx(0x1Au, 0x3451uLL, v6, v3, 0LL);
    v37 = 0LL;
    v38 = 0LL;
    v41 = v19;
    v34 = 4;
    v35 = &v41;
    v36 = 1LL;
    v40 = v3;
    v39 = v4;
    MmAccessFault(2uLL, v19, 0, (ULONG_PTR)&v34 + 1);
    while ( 1 )
    {
      v20 = *(_QWORD *)v6;
      v3 = BugCheckParameter3;
      v14 = (_QWORD *)v30;
      if ( (*(_QWORD *)v6 & 1) == 0 )
        break;
      v21 = MiSafeLockPage((v20 >> 12) & 0xFFFFFFFFFFLL);
      v27 = v21;
      if ( v21 != 17 )
      {
        v22 = 48 * ((v20 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        if ( v20 == *(_QWORD *)v6 )
        {
          MiSetPfnKernelStack((__int64 *)v22, BugCheckParameter3);
          MiSetPfnIdentity(v23, 2u);
          v28 = *(_DWORD *)(v22 + 32);
          HIBYTE(v28) = HIBYTE(v28) & 0xF8 | 5;
          *(_DWORD *)(v22 + 32) = v28;
          v24 = MiReleaseWsSwapReservationPfn(v22);
          MiUnlockPage(v22, v27);
          if ( v24 )
            MiReleasePageFileInfo((__int64)v32, v24, 0LL, v25);
          v6 -= 8LL;
          v3 = BugCheckParameter3;
          v19 -= 4096LL;
          v14 = (_QWORD *)v30;
          ++v18;
          goto LABEL_13;
        }
        MiUnlockPage(v22, v21);
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
