/*
 * XREFs of EtwpTraceStackWalk @ 0x1403DDBA0
 * Callers:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     EtwpStackWalkApc @ 0x1403DD480 (EtwpStackWalkApc.c)
 *     EtwpStackTraceDispatcher @ 0x1403DD620 (EtwpStackTraceDispatcher.c)
 *     EtwpApcPoolThunk @ 0x1403DD840 (EtwpApcPoolThunk.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x140232D30 (KeExpandKernelStackAndCalloutInternal.c)
 *     RtlWalkFrameChain @ 0x140233100 (RtlWalkFrameChain.c)
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     KeAreInterruptsEnabled @ 0x140288430 (KeAreInterruptsEnabled.c)
 *     KeQueryCurrentStackInformationEx @ 0x14028A1E0 (KeQueryCurrentStackInformationEx.c)
 *     Feature_ETWStackExpandedStackwalks__private_IsEnabledDeviceUsageNoInline @ 0x1403DE574 (Feature_ETWStackExpandedStackwalks__private_IsEnabledDeviceUsageNoInline.c)
 *     EtwpTraceStackKey @ 0x1403DE5B0 (EtwpTraceStackKey.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KeGetCurrentStackPointer @ 0x1406AB330 (KeGetCurrentStackPointer.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     PsPicoWalkUserStack @ 0x140AA1E90 (PsPicoWalkUserStack.c)
 */

char __fastcall EtwpTraceStackWalk(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  unsigned int v5; // r14d
  unsigned __int64 CurrentStackPointer; // rax
  int v8; // eax
  int v9; // ecx
  PSLIST_ENTRY v10; // rsi
  int v11; // edx
  unsigned int v12; // r12d
  _SLIST_ENTRY *v13; // r13
  unsigned int v14; // edi
  ULONG v15; // r12d
  ULONG_PTR v16; // r13
  struct _KTHREAD *CurrentThread; // r12
  int v18; // eax
  ULONG v19; // r12d
  volatile signed __int32 *v20; // r9
  unsigned int v21; // edi
  ULONG_PTR v22; // r8
  __int64 Next_low; // rcx
  _SLIST_HEADER *v24; // rcx
  unsigned int v25; // r14d
  bool v26; // zf
  unsigned int v27; // r8d
  __int64 v28; // rdx
  ULONG_PTR v29; // rdi
  int v30; // ecx
  struct _KTHREAD *v31; // rdi
  int v32; // eax
  ULONG v33; // eax
  __int64 BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  ULONG Count; // [rsp+30h] [rbp-D0h]
  int Counta; // [rsp+30h] [rbp-D0h]
  ULONG Countb; // [rsp+30h] [rbp-D0h]
  int Flags; // [rsp+34h] [rbp-CCh]
  unsigned int v40; // [rsp+38h] [rbp-C8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-C0h]
  ULONG_PTR v42; // [rsp+48h] [rbp-B8h]
  PVOID *Callers; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v44; // [rsp+58h] [rbp-A8h] BYREF
  char *v45; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+68h] [rbp-98h]
  _QWORD *v47; // [rsp+70h] [rbp-90h]
  ULONG_PTR *v48; // [rsp+78h] [rbp-88h]
  __int128 v49; // [rsp+80h] [rbp-80h] BYREF
  __int64 v50; // [rsp+90h] [rbp-70h]
  ULONG_PTR BugCheckParameter3[3]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v52; // [rsp+B0h] [rbp-50h]
  ULONG v53; // [rsp+B4h] [rbp-4Ch]
  __int64 v54; // [rsp+B8h] [rbp-48h]
  ULONG_PTR v55[3]; // [rsp+C0h] [rbp-40h] BYREF
  int v56; // [rsp+D8h] [rbp-28h]
  int v57; // [rsp+DCh] [rbp-24h]
  __int64 v58; // [rsp+E0h] [rbp-20h]
  _QWORD v59[3]; // [rsp+E8h] [rbp-18h] BYREF
  int v60; // [rsp+100h] [rbp+0h]
  int v61; // [rsp+104h] [rbp+4h]

  v4 = 0LL;
  v47 = a4;
  v40 = 0;
  v45 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v5 = a2;
  v44 = 0LL;
  v46 = a3;
  CurrentStackPointer = KeGetCurrentStackPointer(a1, a2);
  LOBYTE(v8) = KeQueryCurrentStackInformationEx(CurrentStackPointer, &v40, &v45, &v44);
  if ( !(_BYTE)v8 )
    return v8;
  LOBYTE(v8) = v40;
  if ( v40 <= 9 )
  {
    v9 = 929;
    if ( _bittest(&v9, v40) )
      return v8;
  }
  v10 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)KeGetCurrentPrcb()->EtwSupport + 24);
  if ( v10 )
  {
LABEL_5:
    v11 = 0;
    v12 = 0;
    v13 = v10 + 2;
    if ( (*(_DWORD *)(a1 + 816) & 0x40000000) != 0 && (v5 & 0x800) != 0 )
    {
      v12 = 1;
      v13->Next = (_SLIST_ENTRY *)PsNtosImageBase;
      v5 &= ~0x800u;
    }
    if ( (v5 & 0x800) != 0 )
    {
      v14 = (v5 >> 20) & 0xF;
      v15 = v14 << 8;
      if ( (v5 & 0x2000000) != 0 )
        v15 |= 2u;
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 1024));
      BugCheckParameter2 = *((_QWORD *)&v10[1].Next + 1);
      if ( KeAreInterruptsEnabled()
        && KeGetCurrentIrql() <= 2u
        && (unsigned int)Feature_ETWStackExpandedStackwalks__private_IsEnabledDeviceUsageNoInline() )
      {
        v52 = v14 + 256;
        v16 = BugCheckParameter2;
        BugCheckParameter3[0] = (ULONG_PTR)&v10[2];
        BugCheckParameter3[1] = BugCheckParameter2;
        v54 = 0LL;
        v53 = v15;
        CurrentThread = KeGetCurrentThread();
        BugCheckParameter3[2] = (ULONG_PTR)CurrentThread;
        BugCheckParameter4 = BugCheckParameter2;
        v18 = CurrentThread->SameThreadTransientFlags & 1;
        CurrentThread[1].Spare18 = (unsigned __int64)v10;
        Count = v18;
        v8 = KeExpandKernelStackAndCalloutInternal(
               (EXPAND_STACK_CALLOUT *)EtwpExpandedStackWalk,
               (ULONG_PTR)BugCheckParameter3,
               24576,
               1073741832,
               BugCheckParameter4);
        if ( (*(_BYTE *)(v16 + 7) & 2) != 0 || Count != (CurrentThread->SameThreadTransientFlags & 1) )
          KeBugCheckEx(0x11Du, 0xAuLL, v16, 0LL, 0LL);
        if ( v8 < 0 )
          goto LABEL_53;
        v19 = v54;
        v13 = v10 + 2;
      }
      else
      {
        v13 = v10 + 2;
        v19 = RtlWalkFrameChain((PVOID *)&v10[2].Next, v14 + 256, v15);
      }
      v11 = 0;
      if ( v19 <= v14 )
        v12 = 0;
      else
        v12 = v19 - v14;
    }
    v48 = (ULONG_PTR *)(&v10[1].Next + 1);
    v20 = (volatile signed __int32 *)(a1 + 1024);
    if ( (v5 & 0x1000) == 0 )
      goto LABEL_20;
    if ( KeGetCurrentThread()->ApcState.Process[3].Padding[5] )
    {
      v11 = PsPicoWalkUserStack((char *)v13 + 8 * v12, 256 - v12, a1, v20);
LABEL_20:
      v21 = v11 + v12;
      if ( v11 + v12 )
      {
        v25 = v5 & 0xFFFFE600 | 2;
        v59[1] = 16LL;
        v26 = (*(_DWORD *)(a1 + 816) & 0x1000000) == 0;
        DWORD2(v49) = *(_DWORD *)(v46 + 1288);
        HIDWORD(v49) = *(_DWORD *)(v46 + 1296);
        *(_QWORD *)&v49 = *v47;
        v59[0] = &v49;
        if ( v26
          || v21 < 4
          || !(unsigned __int8)EtwpTraceStackKey(
                                 a1,
                                 v25,
                                 (unsigned __int16)((v12 == 0) + 6181),
                                 (unsigned int)v59,
                                 (__int64)v13,
                                 v11 + v12) )
        {
          v27 = *(_DWORD *)a1;
          v28 = *(_QWORD *)(a1 + 1360);
          v60 = 8 * v21;
          v59[2] = v13;
          v61 = 0;
          EtwpLogKernelEvent((__int64)v59, v28, v27, 2u, 6176, v25);
        }
      }
      v22 = *v48;
      if ( *v48 && (*(_BYTE *)(v22 + 7) & 2) != 0 )
        KeBugCheckEx(0x11Du, 0xAuLL, v22, (ULONG_PTR)v10, 0LL);
      Next_low = LODWORD(v10[1].Next);
      if ( (_DWORD)Next_low == -1 )
      {
        _InterlockedDecrement(&dword_140E28FDC);
        v24 = &EtwpStackLookAsideList;
      }
      else
      {
        if ( (unsigned int)Next_low < (unsigned int)KeNumberProcessors_0 )
        {
          _mm_lfence();
          v4 = KiProcessorBlock[Next_low];
        }
        v24 = (_SLIST_HEADER *)(*(_QWORD *)(v4 + 35752) + 384LL);
      }
      LOBYTE(v8) = (unsigned __int8)RtlpInterlockedPushEntrySList(v24, v10);
      return v8;
    }
    LODWORD(BugCheckParameter2) = HIWORD(v5) & 0xF;
    _InterlockedIncrement(v20);
    v29 = *((_QWORD *)&v10[1].Next + 1);
    v30 = HIWORD(v5) & 0xF;
    v42 = v29;
    Counta = v30 - v12 + 256;
    Flags = (v30 << 8) | 1;
    Callers = (PVOID *)(&v13->Next + v12);
    if ( !KeAreInterruptsEnabled()
      || KeGetCurrentIrql() > 2u
      || !(unsigned int)Feature_ETWStackExpandedStackwalks__private_IsEnabledDeviceUsageNoInline() )
    {
      v33 = RtlWalkFrameChain(Callers, Counta, Flags);
      v11 = v33 - BugCheckParameter2;
      if ( v33 <= (unsigned int)BugCheckParameter2 )
        v11 = 0;
      goto LABEL_20;
    }
    v55[0] = (ULONG_PTR)Callers;
    v56 = Counta;
    v57 = Flags;
    v58 = 0LL;
    v55[1] = v29;
    v31 = KeGetCurrentThread();
    v55[2] = (ULONG_PTR)v31;
    v32 = v31->SameThreadTransientFlags & 1;
    v31[1].Spare18 = (unsigned __int64)v10;
    Countb = v32;
    v8 = KeExpandKernelStackAndCalloutInternal(
           (EXPAND_STACK_CALLOUT *)EtwpExpandedStackWalk,
           (ULONG_PTR)v55,
           24576,
           1073741832,
           v42);
    if ( (*(_BYTE *)(v42 + 7) & 2) != 0 || Countb != (v31->SameThreadTransientFlags & 1) )
      KeBugCheckEx(0x11Du, 0xAuLL, v42, 0LL, 0LL);
    if ( v8 >= 0 )
    {
      v11 = v58 - BugCheckParameter2;
      if ( (unsigned int)v58 <= (unsigned int)BugCheckParameter2 )
        v11 = 0;
      goto LABEL_20;
    }
LABEL_53:
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 1028));
    return v8;
  }
  v10 = RtlpInterlockedPopEntrySList(&EtwpStackLookAsideList);
  if ( v10 )
  {
    _InterlockedIncrement(&dword_140E28FDC);
    if ( dword_140E28FDC > dword_140E28FE0 )
      _InterlockedExchange(&dword_140E28FE0, dword_140E28FDC);
    goto LABEL_5;
  }
  LOBYTE(v8) = dword_140E28FD0;
  if ( dword_140E28FD0 > 0 )
    _InterlockedIncrement(&dword_140E28FE4);
  return v8;
}
