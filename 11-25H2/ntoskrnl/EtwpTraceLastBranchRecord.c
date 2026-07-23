/*
 * XREFs of EtwpTraceLastBranchRecord @ 0x140257020
 * Callers:
 *     EtwpLogKernelEvent @ 0x1402561B0 (EtwpLogKernelEvent.c)
 *     EtwpLogContextSwapEvent @ 0x14042A060 (EtwpLogContextSwapEvent.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1402561B0 (EtwpLogKernelEvent.c)
 *     KeQueryCurrentStackInformationEx @ 0x1402571F0 (KeQueryCurrentStackInformationEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     KeGetCurrentStackPointer @ 0x14069F0C0 (KeGetCurrentStackPointer.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     _alloca_probe @ 0x1406A89B0 (_alloca_probe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
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
  _SLIST_ENTRY *v15; // r15
  __int64 v16; // rax
  void *v17; // rsp
  __int64 v18; // rax
  int v19; // ecx
  unsigned int v20; // r8d
  __int64 v21; // rdx
  __int16 v23; // [rsp+20h] [rbp-10h]
  unsigned int v24; // [rsp+28h] [rbp-8h]
  int v25; // [rsp+30h] [rbp+0h] BYREF
  unsigned int v26; // [rsp+34h] [rbp+4h] BYREF
  __int64 v27; // [rsp+38h] [rbp+8h] BYREF
  __int64 v28; // [rsp+40h] [rbp+10h] BYREF
  __int128 v29; // [rsp+48h] [rbp+18h] BYREF
  __int128 v30; // [rsp+58h] [rbp+28h]
  __int128 v31; // [rsp+68h] [rbp+38h]
  _QWORD v32[3]; // [rsp+78h] [rbp+48h] BYREF
  int v33; // [rsp+90h] [rbp+60h]
  int v34; // [rsp+94h] [rbp+64h]

  v25 = 0;
  v29 = 0LL;
  v28 = 0LL;
  v30 = 0LL;
  v27 = 0LL;
  v6 = a3;
  v31 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v26 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->IdleThread != CurrentThread && (a4 & 0x1800) != 0 )
  {
    if ( !a3 )
      v6 = CurrentThread;
    CurrentStackPointer = KeGetCurrentStackPointer();
    LODWORD(CurrentPrcb) = KeQueryCurrentStackInformationEx(CurrentStackPointer, &v26, &v27, &v28);
    if ( (_BYTE)CurrentPrcb )
    {
      LODWORD(CurrentPrcb) = v26;
      if ( v26 > 9 || (v11 = 929, !_bittest(&v11, v26)) )
      {
        v12 = 0;
        v13 = (unsigned int)(24 * EtwpLastBranchStackSize);
        v14 = RtlpInterlockedPopEntrySList(&EtwpLastBranchLookAsideList);
        if ( !v14 || (v15 = v14 + 1, v14 == (PSLIST_ENTRY)-16LL) )
        {
          CurrentPrcb = (struct _KPRCB *)(KeGetCurrentStackPointer() - v27);
          if ( (unsigned __int64)CurrentPrcb <= v13 + 3632 )
            return (int)CurrentPrcb;
          v16 = v13 + 15;
          if ( v13 + 15 <= (unsigned __int64)(unsigned int)v13 )
            v16 = 0xFFFFFFFFFFFFFF0LL;
          v17 = alloca(v16 & 0xFFFFFFFFFFFFFFF0uLL);
          v12 = 1;
          v15 = (_SLIST_ENTRY *)&v25;
        }
        LODWORD(CurrentPrcb) = guard_dispatch_icall_no_overrides((unsigned int)v13, v15);
        if ( (int)CurrentPrcb >= 0 && v25 )
        {
          DWORD2(v29) = v6[1].CycleTime;
          HIDWORD(v29) = v6[1].CurrentRunTime;
          *(_QWORD *)&v29 = *a2;
          v18 = *(_QWORD *)(a1 + 1072);
          v24 = a4 & 0xFFFFE600 | 2;
          v23 = 3104;
          v19 = *(_DWORD *)(v18 + 4);
          v20 = *(_DWORD *)a1;
          v21 = *(_QWORD *)(a1 + 1360);
          v32[0] = &v29;
          LODWORD(v30) = v19;
          v33 = v25;
          v32[1] = 24LL;
          v32[2] = v15;
          v34 = 0;
          LODWORD(CurrentPrcb) = EtwpLogKernelEvent((struct _KTHREAD *)v32, v21, v20, 2u, 0xC20u, v24);
        }
        if ( !v12 )
          LODWORD(CurrentPrcb) = (unsigned int)RtlpInterlockedPushEntrySList(&EtwpLastBranchLookAsideList, v15 - 1);
      }
    }
  }
  return (int)CurrentPrcb;
}
