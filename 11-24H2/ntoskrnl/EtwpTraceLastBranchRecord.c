/*
 * XREFs of EtwpTraceLastBranchRecord @ 0x14028A010
 * Callers:
 *     EtwpLogContextSwapEvent @ 0x140415D90 (EtwpLogContextSwapEvent.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     KeQueryCurrentStackInformationEx @ 0x14028A1E0 (KeQueryCurrentStackInformationEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KeGetCurrentStackPointer @ 0x1406AB330 (KeGetCurrentStackPointer.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     _alloca_probe @ 0x1406B4C20 (_alloca_probe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
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
  __int64 v15; // rdx
  __int64 v16; // rcx
  _SLIST_ENTRY *v17; // r15
  __int64 v18; // rax
  __int64 v19; // rax
  void *v20; // rsp
  __int64 v21; // rax
  int v22; // ecx
  unsigned int v23; // r8d
  __int64 v24; // rdx
  __int16 v26; // [rsp+20h] [rbp-10h]
  unsigned int v27; // [rsp+28h] [rbp-8h]
  int v28; // [rsp+30h] [rbp+0h] BYREF
  unsigned int v29; // [rsp+34h] [rbp+4h] BYREF
  __int64 v30; // [rsp+38h] [rbp+8h] BYREF
  __int64 v31; // [rsp+40h] [rbp+10h] BYREF
  __int128 v32; // [rsp+48h] [rbp+18h] BYREF
  __int128 v33; // [rsp+58h] [rbp+28h]
  __int128 v34; // [rsp+68h] [rbp+38h]
  _QWORD v35[3]; // [rsp+78h] [rbp+48h] BYREF
  int v36; // [rsp+90h] [rbp+60h]
  int v37; // [rsp+94h] [rbp+64h]

  v28 = 0;
  v32 = 0LL;
  v31 = 0LL;
  v33 = 0LL;
  v30 = 0LL;
  v6 = a3;
  v34 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v29 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->IdleThread != CurrentThread && (a4 & 0x1800) != 0 )
  {
    if ( !a3 )
      v6 = CurrentThread;
    CurrentStackPointer = KeGetCurrentStackPointer(CurrentThread, a2);
    LODWORD(CurrentPrcb) = KeQueryCurrentStackInformationEx(CurrentStackPointer, &v29, &v30, &v31);
    if ( (_BYTE)CurrentPrcb )
    {
      LODWORD(CurrentPrcb) = v29;
      if ( v29 > 9 || (v11 = 929, !_bittest(&v11, v29)) )
      {
        v12 = 0;
        v13 = (unsigned int)(24 * EtwpLastBranchStackSize);
        v14 = RtlpInterlockedPopEntrySList(&EtwpLastBranchLookAsideList);
        if ( !v14 || (v17 = v14 + 1, v14 == (PSLIST_ENTRY)-16LL) )
        {
          v18 = KeGetCurrentStackPointer(v16, v15);
          CurrentPrcb = (struct _KPRCB *)(v18 - v30);
          if ( (unsigned __int64)CurrentPrcb <= v13 + 3632 )
            return (int)CurrentPrcb;
          v19 = v13 + 15;
          if ( v13 + 15 <= (unsigned __int64)(unsigned int)v13 )
            v19 = 0xFFFFFFFFFFFFFF0LL;
          v20 = alloca(v19 & 0xFFFFFFFFFFFFFFF0uLL);
          v12 = 1;
          v17 = (_SLIST_ENTRY *)&v28;
        }
        LODWORD(CurrentPrcb) = guard_dispatch_icall_no_overrides((unsigned int)v13, v17);
        if ( (int)CurrentPrcb >= 0 && v28 )
        {
          DWORD2(v32) = v6[1].CycleTime;
          HIDWORD(v32) = v6[1].CurrentRunTime;
          *(_QWORD *)&v32 = *a2;
          v21 = *(_QWORD *)(a1 + 1072);
          v27 = a4 & 0xFFFFE600 | 2;
          v26 = 3104;
          v22 = *(_DWORD *)(v21 + 4);
          v23 = *(_DWORD *)a1;
          v24 = *(_QWORD *)(a1 + 1360);
          v35[0] = &v32;
          LODWORD(v33) = v22;
          v36 = v28;
          v35[1] = 24LL;
          v35[2] = v17;
          v37 = 0;
          LODWORD(CurrentPrcb) = EtwpLogKernelEvent((__int64)v35, v24, v23, 2u, 3104, v27);
        }
        if ( !v12 )
          LODWORD(CurrentPrcb) = (unsigned int)RtlpInterlockedPushEntrySList(&EtwpLastBranchLookAsideList, v17 - 1);
      }
    }
  }
  return (int)CurrentPrcb;
}
