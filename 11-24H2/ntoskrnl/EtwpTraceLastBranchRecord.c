/*
 * XREFs of EtwpTraceLastBranchRecord @ 0x140259A00
 * Callers:
 *     EtwpLogContextSwapEvent @ 0x140421EE0 (EtwpLogContextSwapEvent.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140257180 (EtwpLogKernelEvent.c)
 *     KeQueryCurrentStackInformationEx @ 0x140259BD0 (KeQueryCurrentStackInformationEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     KeGetCurrentStackPointer @ 0x1406AA390 (KeGetCurrentStackPointer.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _alloca_probe @ 0x1406B3C80 (_alloca_probe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

int __fastcall EtwpTraceLastBranchRecord(__int64 a1, _QWORD *a2, struct _KTHREAD *a3, int a4)
{
  struct _KTHREAD *v6; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 CurrentStackPointer; // rax
  int v11; // ecx
  char v12; // r14
  __int64 v13; // rbx
  PSLIST_ENTRY v14; // rax
  __int64 v15; // r9
  struct _SLIST_ENTRY *v16; // r15
  __int64 v17; // rax
  void *v18; // rsp
  __int64 v19; // rax
  int v20; // ecx
  unsigned int v21; // r8d
  __int64 v22; // rdx
  __int16 v24; // [rsp+20h] [rbp-10h]
  unsigned int v25; // [rsp+28h] [rbp-8h]
  int v26; // [rsp+30h] [rbp+0h] BYREF
  unsigned int v27; // [rsp+34h] [rbp+4h] BYREF
  __int64 v28; // [rsp+38h] [rbp+8h] BYREF
  __int64 v29; // [rsp+40h] [rbp+10h] BYREF
  __int128 v30; // [rsp+48h] [rbp+18h] BYREF
  __int128 v31; // [rsp+58h] [rbp+28h]
  __int128 v32; // [rsp+68h] [rbp+38h]
  _QWORD v33[3]; // [rsp+78h] [rbp+48h] BYREF
  int v34; // [rsp+90h] [rbp+60h]
  int v35; // [rsp+94h] [rbp+64h]

  v26 = 0;
  v30 = 0LL;
  v29 = 0LL;
  v31 = 0LL;
  v28 = 0LL;
  v6 = a3;
  v32 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v27 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->IdleThread != CurrentThread && (a4 & 0x1800) != 0 )
  {
    if ( !a3 )
      v6 = CurrentThread;
    CurrentStackPointer = KeGetCurrentStackPointer();
    LODWORD(CurrentPrcb) = KeQueryCurrentStackInformationEx(CurrentStackPointer, &v27, &v28, &v29);
    if ( (_BYTE)CurrentPrcb )
    {
      LODWORD(CurrentPrcb) = v27;
      if ( v27 > 9 || (v11 = 929, !_bittest(&v11, v27)) )
      {
        v12 = 0;
        v13 = (unsigned int)(24 * EtwpLastBranchStackSize);
        v14 = RtlpInterlockedPopEntrySList(&EtwpLastBranchLookAsideList);
        if ( !v14 || (v16 = v14 + 1, v14 == (PSLIST_ENTRY)-16LL) )
        {
          CurrentPrcb = (struct _KPRCB *)(KeGetCurrentStackPointer() - v28);
          if ( (unsigned __int64)CurrentPrcb <= v13 + 3632 )
            return (int)CurrentPrcb;
          v17 = v13 + 15;
          if ( v13 + 15 <= (unsigned __int64)(unsigned int)v13 )
            v17 = 0xFFFFFFFFFFFFFF0LL;
          v18 = alloca(v17 & 0xFFFFFFFFFFFFFFF0uLL);
          v12 = 1;
          v16 = (struct _SLIST_ENTRY *)&v26;
        }
        LODWORD(CurrentPrcb) = guard_dispatch_icall_no_overrides((unsigned int)v13, v16, &v26, v15);
        if ( (int)CurrentPrcb >= 0 && v26 )
        {
          DWORD2(v30) = v6[1].CycleTime;
          HIDWORD(v30) = v6[1].CurrentRunTime;
          *(_QWORD *)&v30 = *a2;
          v19 = *(_QWORD *)(a1 + 1072);
          v25 = a4 & 0xFFFFE600 | 2;
          v24 = 3104;
          v20 = *(_DWORD *)(v19 + 4);
          v21 = *(_DWORD *)a1;
          v22 = *(_QWORD *)(a1 + 1360);
          v33[0] = &v30;
          LODWORD(v31) = v20;
          v34 = v26;
          v33[1] = 24LL;
          v33[2] = v16;
          v35 = 0;
          LODWORD(CurrentPrcb) = EtwpLogKernelEvent((__int64)v33, v22, v21, 2u, 3104, v25);
        }
        if ( !v12 )
          LODWORD(CurrentPrcb) = (unsigned int)RtlpInterlockedPushEntrySList(&EtwpLastBranchLookAsideList, v16 - 1);
      }
    }
  }
  return (int)CurrentPrcb;
}
