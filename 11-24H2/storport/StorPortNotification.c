/*
 * XREFs of StorPortNotification @ 0x14004B4F0
 * Callers:
 *     StorPortNotificationVrfy @ 0x1401C1480 (StorPortNotificationVrfy.c)
 * Callees:
 *     RaidAdapterRequestTimer @ 0x140001350 (RaidAdapterRequestTimer.c)
 *     RaidUnitSubmitIrpRequest @ 0x14000AA60 (RaidUnitSubmitIrpRequest.c)
 *     RaUnitFillIrpData @ 0x14000AE80 (RaUnitFillIrpData.c)
 *     RaidUnitCompleteIrpRequest @ 0x14000B1C0 (RaidUnitCompleteIrpRequest.c)
 *     RaidQueueDeferredItem @ 0x140014EC4 (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x140015470 (DbgLogRequest.c)
 *     RaidAdapterAcquireInterruptLock @ 0x14001A910 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterFindUnit @ 0x14001BA70 (RaidAdapterFindUnit.c)
 *     RaidSrbStatusToNtStatus @ 0x14001EF94 (RaidSrbStatusToNtStatus.c)
 *     RaidAdapterRequestComplete @ 0x140025020 (RaidAdapterRequestComplete.c)
 *     RaidLogMiniportCompletion @ 0x140025210 (RaidLogMiniportCompletion.c)
 *     RaidAdapterReleaseStartIoLock @ 0x1400276F0 (RaidAdapterReleaseStartIoLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1400277E0 (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireStartIoLock @ 0x140029420 (RaidAdapterAcquireStartIoLock.c)
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     StorEtwLogoRequestServiceTimeEventData @ 0x14003F518 (StorEtwLogoRequestServiceTimeEventData.c)
 *     StorEtwIORequestServiceTimeEventData @ 0x14003F900 (StorEtwIORequestServiceTimeEventData.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140053FF0 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     WPP_SF_ @ 0x14005585C (WPP_SF_.c)
 *     RaidAllocateDeferredItem @ 0x14006AFA8 (RaidAllocateDeferredItem.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140071A58 (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0pqquuuqpp_EtwWriteTransfer @ 0x140071B88 (McTemplateK0pqquuuqpp_EtwWriteTransfer.c)
 *     StorPortPause @ 0x140074390 (StorPortPause.c)
 *     StorPortResume @ 0x1400749D0 (StorPortResume.c)
 *     StorpMarkDeviceFailed @ 0x140075234 (StorpMarkDeviceFailed.c)
 *     RaidHandleTraceNotifyType @ 0x140085F08 (RaidHandleTraceNotifyType.c)
 *     RaProcessMFNDChildControllerEvent @ 0x14008A178 (RaProcessMFNDChildControllerEvent.c)
 *     RaProcessStorageEventNotification @ 0x14008A428 (RaProcessStorageEventNotification.c)
 *     StorLogNVMeErrorRecoveryInfo @ 0x14008FB98 (StorLogNVMeErrorRecoveryInfo.c)
 *     RaidUnitProcessAsyncNotification @ 0x14009FB50 (RaidUnitProcessAsyncNotification.c)
 *     StorEtwIOIrpRequestServiceTimeEventData @ 0x1400A7DD0 (StorEtwIOIrpRequestServiceTimeEventData.c)
 *     StorEtwLogoIrpRequestServiceTimeEventData @ 0x1400A804C (StorEtwLogoIrpRequestServiceTimeEventData.c)
 *     NvmeAdapterRequestDirectComplete @ 0x1400D6AF8 (NvmeAdapterRequestDirectComplete.c)
 *     NvmeDbgLogCriticalEvent @ 0x1400F5DA0 (NvmeDbgLogCriticalEvent.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

void StorPortNotification(int a1, _QWORD *a2, ...)
{
  int v2; // r15d
  int *v3; // rsi
  int *v4; // rdi
  int **v5; // rax
  int v6; // r8d
  int v7; // ecx
  void *DeferredContext; // rdx
  struct _SLIST_ENTRY *v9; // r14
  _SLIST_ENTRY *Next; // rcx
  const wchar_t *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  bool v15; // zf
  int v16; // eax
  char v17; // al
  const wchar_t *v18; // rax
  int v19; // ecx
  int v20; // ecx
  int v21; // r8d
  unsigned int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  void *v26; // rdx
  struct _KDPC *v27; // rcx
  PKDPC v28; // r14
  unsigned int v29; // edi
  char v30; // r15
  char v31; // r12
  PKDPC v32; // r14
  char v33; // r13
  struct _SLIST_ENTRY *DeferredItem; // rax
  struct _SLIST_ENTRY *v35; // rdi
  PKDPC v36; // r14
  int **v37; // rax
  KDEFERRED_ROUTINE *v38; // r14
  int *v39; // rcx
  int v40; // edx
  PDEVICE_OBJECT v41; // rcx
  __int64 v42; // rdx
  unsigned int *SystemArgument2; // rdi
  KIRQL CurrentIrql; // al
  ULONG_PTR v45; // r14
  __int64 v46; // rcx
  __int64 v47; // rax
  PKDPC v49; // rdi
  struct _KDPC *v50; // rdi
  KDPC_IMPORTANCE v51; // r14d
  KDPC_IMPORTANCE v52; // edx
  char v53; // r14
  _DWORD *v54; // rdi
  __int64 v55; // rax
  _DWORD *v56; // r9
  int v57; // r8d
  KDEFERRED_ROUTINE *v58; // r10
  _DWORD *v59; // rdi
  int v60; // r8d
  int v61; // r8d
  __int64 v62; // rax
  _DWORD *v63; // r9
  unsigned int TargetInfoAsUlong; // ecx
  unsigned int v65; // ecx
  unsigned int v66; // ecx
  unsigned int v67; // ecx
  unsigned int v68; // ecx
  PKDPC v69; // r14
  _QWORD *v70; // rdi
  __int64 v71; // rax
  KDEFERRED_ROUTINE *v72; // r14
  __int64 v73; // r10
  __int64 v74; // r11
  int v75; // r9d
  int v76; // r15d
  _DWORD *v77; // rdi
  unsigned __int8 v78; // r12
  unsigned __int8 v79; // r13
  int v80; // ecx
  KDEFERRED_ROUTINE *v81; // r12
  _DWORD *v82; // r14
  unsigned int v83; // edi
  __int64 *Unit; // rax
  __int64 *v85; // r13
  __int64 *v86; // r15
  _DWORD *v87; // rdi
  PKDPC v88; // r14
  volatile unsigned __int16 Number; // ax
  _DWORD *v90; // rdi
  int SystemArgument1; // r15d
  __int64 v92; // rdx
  __int64 v93; // rdi
  PKDPC v94; // r14
  __int64 v95; // r13
  int DpcData; // edi
  int LockArray_high; // r9d
  unsigned __int64 v98; // rax
  unsigned __int64 v99; // rcx
  int v100; // eax
  struct _SLIST_ENTRY *v101; // r14
  unsigned __int16 Group; // ax
  unsigned __int8 v103; // r8
  void *v104; // rdx
  struct _KDPC *v105; // rcx
  __int64 v106; // rdx
  KDEFERRED_ROUTINE *v107; // rdi
  PKDPC v108; // r15
  __int64 v109; // r14
  signed __int32 v110[8]; // [rsp+0h] [rbp-100h] BYREF
  va_list v111; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v112; // [rsp+68h] [rbp-98h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v114; // [rsp+70h] [rbp-90h]
  int v115; // [rsp+74h] [rbp-8Ch]
  char v116; // [rsp+78h] [rbp-88h] BYREF
  int v117; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v118; // [rsp+80h] [rbp-80h] BYREF
  __int64 v119; // [rsp+88h] [rbp-78h]
  __int64 v120; // [rsp+90h] [rbp-70h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+A8h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C0h] [rbp-40h] BYREF
  void *v124; // [rsp+D0h] [rbp-30h]
  int v125; // [rsp+D8h] [rbp-28h]
  int v126; // [rsp+DCh] [rbp-24h]
  __int64 *v127; // [rsp+E0h] [rbp-20h]
  __int64 v128; // [rsp+E8h] [rbp-18h]
  _DWORD *v129; // [rsp+F0h] [rbp-10h]
  __int64 v130; // [rsp+F8h] [rbp-8h]
  int *v131; // [rsp+100h] [rbp+0h]
  __int64 v132; // [rsp+108h] [rbp+8h]
  const wchar_t *v133; // [rsp+110h] [rbp+10h]
  int v134; // [rsp+118h] [rbp+18h]
  int v135; // [rsp+11Ch] [rbp+1Ch]
  char *v136; // [rsp+120h] [rbp+20h]
  __int64 v137; // [rsp+128h] [rbp+28h]
  const wchar_t *v138; // [rsp+130h] [rbp+30h]
  int v139; // [rsp+138h] [rbp+38h]
  int v140; // [rsp+13Ch] [rbp+3Ch]
  __int64 retaddr; // [rsp+198h] [rbp+98h]
  _QWORD *v142; // [rsp+1A8h] [rbp+A8h]
  PKDPC v143; // [rsp+1B0h] [rbp+B0h] BYREF
  va_list va; // [rsp+1B0h] [rbp+B0h]
  unsigned __int64 v145; // [rsp+1B8h] [rbp+B8h] BYREF
  va_list va1; // [rsp+1B8h] [rbp+B8h]
  _DWORD *v147; // [rsp+1C0h] [rbp+C0h]
  _DWORD *v148; // [rsp+1C8h] [rbp+C8h]
  __int64 v149; // [rsp+1D0h] [rbp+D0h]
  _DWORD *v150; // [rsp+1D8h] [rbp+D8h]
  __int64 v151; // [rsp+1E0h] [rbp+E0h]
  __int64 v152; // [rsp+1E8h] [rbp+E8h]
  _DWORD *v153; // [rsp+1F0h] [rbp+F0h]
  va_list va2; // [rsp+1F8h] [rbp+F8h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v143 = va_arg(va1, PKDPC);
  va_copy(va2, va1);
  v145 = va_arg(va2, _QWORD);
  v147 = va_arg(va2, _DWORD *);
  v148 = va_arg(va2, _DWORD *);
  v149 = va_arg(va2, _QWORD);
  v150 = va_arg(va2, _DWORD *);
  v151 = va_arg(va2, _QWORD);
  v152 = va_arg(va2, _QWORD);
  v153 = va_arg(va2, _DWORD *);
  v142 = a2;
  v2 = a1;
  v115 = a1;
  v3 = 0LL;
  v111 = 0LL;
  v4 = 0LL;
  if ( !a2 )
    goto LABEL_18;
  v5 = (int **)*(a2 - 2);
  if ( !v5 || !*v5 )
    goto LABEL_18;
  v6 = **v5;
  if ( ((_BYTE)v5[31] & 1) != 0 )
  {
    if ( v6 == 1314275652 )
      v4 = *v5;
    goto LABEL_18;
  }
  if ( v6 != 1094997074 )
    goto LABEL_18;
  v3 = *v5;
  va_copy(v111, va);
  v7 = -1073741822;
  if ( !DisableExtensionDriver )
  {
    if ( EnableExtensionCalls )
    {
      _InterlockedIncrement(&ExtRefCount);
      v7 = ((__int64 (__fastcall *)(int *, _QWORD, int *))ExtNotificationReplace)(
             &dword_1401701E8,
             (unsigned int)v2,
             v3);
      _InterlockedDecrement(&ExtRefCount);
    }
    a2 = v142;
  }
  v111 = 0LL;
  if ( v7 == -1073741822 )
  {
    va_copy(v111, va);
    if ( !DisableExtensionDriver )
    {
      if ( EnableExtensionCalls )
      {
        _InterlockedIncrement(&ExtRefCount);
        ((void (__fastcall *)(int *, _QWORD, int *))ExtNotificationPre)(&dword_1401701E8, (unsigned int)v2, v3);
        _InterlockedDecrement(&ExtRefCount);
      }
      a2 = v142;
    }
    v111 = 0LL;
LABEL_18:
    va_copy(v111, va);
    if ( v2 <= 4096 )
    {
      if ( v2 != 4096 )
      {
        switch ( v2 )
        {
          case 0:
            va_copy(v111, va1);
            if ( !v3 || !v143 )
            {
              if ( !v4 || !v143 )
                break;
              v9 = (struct _SLIST_ENTRY *)(LOBYTE(v143->Number) == 40 ? v143[1].DeferredContext : v143->SystemArgument2);
              if ( !v9 )
                break;
              if ( (qword_140170460 & 8) != 0 )
                RaidLogMiniportCompletion(v9);
              Next = v9[10].Next;
              if ( Next )
              {
                if ( *((_BYTE *)&Next[8].Next + 13) == 0xAB || *((_BYTE *)&Next[8].Next + 13) == 0xAC )
                {
                  if ( (unsigned int)dword_140170178 > 5
                    && (qword_140170188 & 0x400000000000LL) != 0
                    && (qword_140170190 & 0x400000000000LL) == qword_140170190 )
                  {
                    v12 = (const wchar_t *)*((_QWORD *)v4 + 127);
                    v127 = &v118;
                    v129 = v4 + 258;
                    v13 = -1LL;
                    v117 = v4[14];
                    v131 = &v117;
                    v118 = 0x1000000LL;
                    v128 = 8LL;
                    v130 = 16LL;
                    v132 = 4LL;
                    if ( v12 )
                    {
                      v14 = -1LL;
                      do
                        v15 = v12[++v14] == 0;
                      while ( !v15 );
                      v16 = 2 * v14 + 2;
                    }
                    else
                    {
                      v12 = &word_140150F48;
                      v16 = 2;
                    }
                    v15 = (v4[36] & 1) == 0;
                    v134 = v16;
                    v17 = 20;
                    v133 = v12;
                    if ( v15 )
                      v17 = 17;
                    v135 = 0;
                    v116 = v17;
                    v136 = &v116;
                    v18 = (const wchar_t *)*((_QWORD *)v4 + 128);
                    v137 = 1LL;
                    if ( v18 )
                    {
                      do
                        v15 = v18[++v13] == 0;
                      while ( !v15 );
                      v19 = 2 * v13 + 2;
                    }
                    else
                    {
                      v18 = &word_140150F48;
                      v19 = 2;
                    }
                    v138 = v18;
                    *(_DWORD *)&EventDescriptor.Level = 5;
                    UserData.Ptr = (unsigned __int64)off_140170180;
                    v139 = v19;
                    EventDescriptor.Keyword = 0x400000000000LL;
                    v140 = 0;
                    *(_DWORD *)&EventDescriptor.Id = 184549376;
                    UserData.Size = *(unsigned __int16 *)off_140170180;
                    v124 = &unk_140163055;
                    v126 = 1;
                    UserData.Reserved = 2;
                    v125 = 119;
                    v114 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
                    EtwWriteEx(RegHandle, &EventDescriptor, 0LL, 1u, 0LL, 0LL, 8u, &UserData);
                  }
                  break;
                }
                *((_BYTE *)&Next[8].Next + 13) = -85;
              }
              LOBYTE(v9[1].Next) = (__int64)v9[1].Next & 0xE3 | 0x10;
              if ( KeGetCurrentIrql() > 2u )
              {
                ExpInterlockedPushEntrySList((PSLIST_HEADER)v4 + 69, v9 + 2);
                KeInsertQueueDpc((PRKDPC)(*((_QWORD *)v4 + 1) + 200LL), 0LL, 0LL);
              }
              else
              {
                ((void (__fastcall *)(struct _SLIST_ENTRY *))v9[41].Next)(v9);
              }
              break;
            }
            if ( LOBYTE(v143->Number) == 40 )
              DeferredContext = v143[1].DeferredContext;
            else
              DeferredContext = v143->SystemArgument2;
            if ( DeferredContext )
            {
              RaidAdapterRequestComplete((__int64)v3, (__int64)DeferredContext, 0);
              v111 = 0LL;
              goto LABEL_197;
            }
            break;
          case 3:
            if ( !v3 )
              break;
            DbgLogRequest((__int64)v3, 39, (__int64)v3, (unsigned int)v3[14], retaddr, (unsigned int)v3[150], 0LL);
            v22 = v3[150];
            if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
              McTemplateK0pqq_EtwWriteTransfer(
                v20,
                (unsigned int)&EventResetDetected,
                v21,
                (_DWORD)v142,
                v3[14],
                v3[150]);
            if ( !v22 )
              break;
            if ( v22 > 0x3D0900 )
              v22 = 4000000;
            v23 = v22 / 0xF4240 + 1;
            if ( v22 == 1000000 * (v22 / 0xF4240) )
              v23 = v22 / 0xF4240;
            StorPortPause(v142, v23);
            v111 = 0LL;
            goto LABEL_197;
          case 6:
            v28 = v143;
            v29 = v145;
            if ( !v3 )
              break;
            if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
              McTemplateK0pqq_EtwWriteTransfer(
                (unsigned int)va,
                (unsigned int)&EventRequestTimerCall,
                0x40000000u,
                (_DWORD)a2,
                v3[14],
                v145);
            if ( KeGetCurrentIrql() > 2u )
            {
              if ( _InterlockedCompareExchange(v3 + 288, 134684676, 134684677) != 134684677 || v3 == (int *)-1136LL )
              {
                _InterlockedIncrement(&RaidUnloggedErrors);
                v111 = 0LL;
              }
              else
              {
                v3[292] = 1;
                *((_QWORD *)v3 + 147) = v28;
                v3[296] = v29;
                ExpInterlockedPushEntrySList((PSLIST_HEADER)v3 + 69, (PSLIST_ENTRY)v3 + 71);
                v27 = (struct _KDPC *)(v3 + 254);
                v26 = v3 + 252;
LABEL_73:
                KeInsertQueueDpc(v27, v26, 0LL);
                v111 = 0LL;
              }
            }
            else
            {
              RaidAdapterRequestTimer((__int64)v3, (__int64)v28, v29);
              v111 = 0LL;
            }
            goto LABEL_197;
          case 7:
            if ( !v3 )
              break;
            DbgLogRequest((__int64)v3, 38, (__int64)v3, (unsigned int)v3[14], retaddr, (unsigned int)v3[150], 0LL);
            if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
              McTemplateK0pq_EtwWriteTransfer(v24, &EventBusChangeDetected, v25, v142, v3[14]);
            *(_WORD *)((char *)v3 + 105) = 257;
            v26 = 0LL;
            v27 = (struct _KDPC *)(v3 + 478);
            goto LABEL_73;
          case 8:
            v30 = v145;
            v31 = 0;
            v32 = v143;
            v33 = 0;
            if ( (_BYTE)v145 != 0xFF )
            {
              v31 = (char)v147;
              v33 = (char)v148;
            }
            if ( !v143 )
              break;
            if ( v143->TargetInfoAsUlong > 0x80 )
              break;
            if ( !v3 )
              break;
            DeferredItem = (struct _SLIST_ENTRY *)RaidAllocateDeferredItem(v3 + 348);
            v35 = DeferredItem;
            if ( !DeferredItem )
              break;
            LOBYTE(DeferredItem[2].Next) = v30;
            if ( v30 != -1 )
            {
              BYTE1(DeferredItem[2].Next) = v31;
              BYTE2(DeferredItem[2].Next) = v33;
            }
            memmove(&DeferredItem[2].Next + 1, v32, v32->TargetInfoAsUlong);
            RaidQueueDeferredItem((char *)v3 + 1392, v35);
            v111 = 0LL;
            goto LABEL_196;
          case 10:
            if ( !v3 )
              break;
            if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
              McTemplateK0pq_EtwWriteTransfer(
                (PKDPC *)va,
                &EventLinkUp,
                0x140000000uLL,
                *((_QWORD *)v3 + 77) + 16LL,
                v3[14]);
            if ( !(unsigned __int8)StorPortResume(
                                     *((_QWORD *)v3 + 77) + 16LL,
                                     a2,
                                     (unsigned int)_InterlockedExchange(v3 + 519, 1)) )
              break;
            IoInvalidateDeviceRelations(*((PDEVICE_OBJECT *)v3 + 4), BusRelations);
            v111 = 0LL;
            goto LABEL_197;
          case 11:
            if ( !v3 )
              break;
            if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
              McTemplateK0pqq_EtwWriteTransfer(
                (unsigned int)va,
                (unsigned int)&EventLinkDown,
                0x40000000u,
                *((_QWORD *)v3 + 77) + 16,
                v3[14],
                v3[518]);
            if ( !(unsigned __int8)StorPortPause(*((_QWORD *)v3 + 77) + 16LL, (unsigned int)v3[518]) )
              break;
            _InterlockedExchange(v3 + 519, 0);
            v111 = 0LL;
            goto LABEL_197;
          case 12:
            *(_QWORD *)&v143->TargetInfoAsUlong = MEMORY[0xFFFFF78000000320];
            break;
          case 13:
            KeBugCheckEx(0xF7u, 0LL, 0LL, 0LL, 0LL);
          case 14:
            RaidHandleTraceNotifyType((PKDPC *)va, (unsigned int)v143, v145);
            break;
          case 15:
            if ( v4 )
              break;
            v36 = v143;
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
            {
              if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
                WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 10LL, &WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids);
              if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
              {
                if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
                  WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 11LL, &WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids);
                if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
                {
                  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
                    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 12LL, &WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids);
                  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
                  {
                    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
                      WPP_SF_(
                        WPP_GLOBAL_Control->AttachedDevice,
                        13LL,
                        &WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids);
                    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
                    {
                      WPP_SF_(
                        WPP_GLOBAL_Control->AttachedDevice,
                        14LL,
                        &WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids);
                    }
                  }
                }
              }
            }
            if ( !v36 )
            {
              if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
              {
                WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 15LL, &WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids);
              }
              break;
            }
            if ( v3 )
            {
              v111 = 0LL;
              *(_OWORD *)(v3 + 1142) = StorportExtensionTable;
              *(_OWORD *)(v3 + 1146) = xmmword_140171110;
              *(_OWORD *)(v3 + 1150) = xmmword_140171120;
              *(_OWORD *)(v3 + 1154) = xmmword_140171130;
              *(_OWORD *)(v3 + 1158) = xmmword_140171140;
              *((_QWORD *)v3 + 581) = qword_140171150;
              *(_QWORD *)&v36->TargetInfoAsUlong = v3 + 1142;
              goto LABEL_197;
            }
            *(_QWORD *)&v36->TargetInfoAsUlong = &StorportExtensionTable;
            return;
          default:
            break;
        }
LABEL_195:
        v111 = 0LL;
        if ( !v3 )
          return;
        goto LABEL_196;
      }
      v37 = (int **)*(a2 - 2);
      v38 = (KDEFERRED_ROUTINE *)v145;
      if ( v37 )
      {
        v39 = *v37;
        if ( *v37 )
        {
          v40 = *v39;
          if ( ((_BYTE)v37[31] & 1) != 0 )
          {
            if ( v40 == 1314275652 )
            {
              if ( (v39[36] & 0x20) != 0 )
              {
                *((_QWORD *)v39 + 121) = v143;
                *(_DWORD *)v38 = 1;
                goto LABEL_195;
              }
              v41 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) )
              {
                v42 = 24LL;
LABEL_143:
                WPP_SF_(v41->AttachedDevice, v42, &WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids);
              }
            }
          }
          else if ( v40 == 1094997074 )
          {
            if ( (v39[26] & 0x10) != 0 )
            {
              *((_QWORD *)v39 + 541) = v143;
              *(_DWORD *)v38 = 1;
              goto LABEL_195;
            }
            v41 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) )
            {
              v42 = 23LL;
              goto LABEL_143;
            }
          }
        }
      }
      *(_DWORD *)v38 = 0;
      goto LABEL_195;
    }
    if ( v2 <= 0x2000 )
    {
      if ( v2 != 0x2000 )
      {
        switch ( v2 )
        {
          case 4097:
            v49 = v143;
            if ( v143 && v145 )
            {
              KeInitializeDpc(v143, (PKDEFERRED_ROUTINE)v145, a2);
              KeInitializeSpinLock((PKSPIN_LOCK)&v49[1].TargetInfoAsUlong);
            }
            goto LABEL_195;
          case 4098:
            v54 = v148;
            if ( v143 )
              *v54 = KeInsertQueueDpc(v143, (PVOID)v145, v147);
            goto LABEL_195;
          case 4099:
            v55 = *(a2 - 2);
            v56 = 0LL;
            v57 = (int)v143;
            v58 = (KDEFERRED_ROUTINE *)v145;
            v59 = v147;
            if ( v55 && *(_QWORD *)v55 && (*(_BYTE *)(v55 + 248) & 1) == 0 && **(_DWORD **)v55 == 1094997074 )
            {
              v56 = *(_DWORD **)v55;
            }
            else if ( (unsigned int)((_DWORD)v143 - 2) <= 1 )
            {
              goto LABEL_195;
            }
            if ( v147 )
            {
              *v147 = (_DWORD)v143;
              v60 = v57 - 1;
              if ( v60 )
              {
                v61 = v60 - 1;
                if ( v61 )
                {
                  if ( v61 == 1 )
                    *((_BYTE *)v59 + 24) = RaidAdapterAcquireInterruptLock((__int64)v56);
                  else
                    *v59 = 0;
                }
                else
                {
                  RaidAdapterAcquireStartIoLock((__int64)v56, (struct _KLOCK_QUEUE_HANDLE *)(v59 + 2));
                }
              }
              else if ( v58 )
              {
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v58 + 8, (PKLOCK_QUEUE_HANDLE)(v59 + 2));
              }
            }
            goto LABEL_195;
          case 4100:
            v62 = *(a2 - 2);
            v63 = 0LL;
            if ( v62 && *(_QWORD *)v62 && (*(_BYTE *)(v62 + 248) & 1) == 0 && **(_DWORD **)v62 == 1094997074 )
              v63 = *(_DWORD **)v62;
            if ( v143 )
            {
              TargetInfoAsUlong = v143->TargetInfoAsUlong;
              if ( v143->TargetInfoAsUlong )
              {
                if ( v63 || TargetInfoAsUlong - 2 > 1 )
                {
                  v65 = TargetInfoAsUlong - 1;
                  if ( v65 )
                  {
                    v66 = v65 - 1;
                    if ( v66 )
                    {
                      v67 = v66 - 1;
                      if ( v67 )
                      {
                        v68 = v67 - 1;
                        if ( v68 )
                        {
                          if ( v68 == 1 )
                            KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)&v143->DpcListEntry);
                        }
                        else
                        {
                          KeReleaseInStackQueuedSpinLockForDpc((PKLOCK_QUEUE_HANDLE)&v143->DpcListEntry);
                        }
                      }
                      else
                      {
                        RaidAdapterReleaseInterruptLock((__int64)v63, (KIRQL)v143->DeferredRoutine);
                      }
                    }
                    else
                    {
                      RaidAdapterReleaseStartIoLock((__int64)v63, (struct _KLOCK_QUEUE_HANDLE *)&v143->DpcListEntry);
                    }
                  }
                  else
                  {
                    KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)&v143->DpcListEntry);
                  }
                }
              }
            }
            goto LABEL_195;
          case 4101:
            if ( !v3 )
              goto LABEL_195;
            v72 = (KDEFERRED_ROUTINE *)v145;
            v73 = (__int64)v148;
            v74 = v149;
            v75 = (int)v147;
            v76 = (int)v143;
            v77 = v150;
            v114 = (unsigned int)v147;
            v119 = (__int64)v148;
            v120 = v149;
            if ( v145 && *(_WORD *)v145 == 1 )
            {
              v78 = *(_BYTE *)(v145 + 8);
              v79 = *(_BYTE *)(v145 + 9);
              v80 = *(unsigned __int8 *)(v145 + 10);
            }
            else
            {
              v78 = -1;
              v79 = -1;
              v80 = 255;
            }
            v112 = v80;
            if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
            {
              McTemplateK0pqquuuqpp_EtwWriteTransfer(
                v80,
                (_DWORD)a2,
                0,
                (_DWORD)a2,
                v3[14],
                (char)v143,
                v78,
                v79,
                v80,
                (char)v147,
                (char)v148,
                v149,
                v111);
              v75 = v114;
              v73 = v119;
              v74 = v120;
            }
            if ( !v72
              || *(_WORD *)v72 != 1
              || v78 > *((_BYTE *)v3 + 456)
              || (v76 & 3) != 0 && v79 > *((_BYTE *)v3 + 481)
              || (v76 & 1) != 0 && v112 > *((_BYTE *)v3 + 530)
              || (v76 & 7) == 0 )
            {
              if ( v77 )
                *v77 = -1056964602;
LABEL_279:
              v111 = 0LL;
              goto LABEL_196;
            }
            if ( _InterlockedCompareExchange(v3 + 1206, 1, 0) == 1 )
            {
              if ( v77 )
              {
                *v77 = -1056964607;
                v111 = 0LL;
                goto LABEL_196;
              }
              goto LABEL_279;
            }
            _InterlockedOr(v110, 0);
            v3[1207] = v76;
            *((_QWORD *)v3 + 605) = v72;
            v3[1208] = v75;
            *((_QWORD *)v3 + 606) = v73;
            *((_QWORD *)v3 + 607) = v74;
            _InterlockedOr(v110, 0);
            *((_BYTE *)v3 + 104) |= 0x40u;
            *((_BYTE *)v3 + 105) = 1;
            KeInsertQueueDpc((PRKDPC)(v3 + 478), 0LL, 0LL);
            if ( !v77 )
              goto LABEL_195;
            *v77 = 0;
            v111 = 0LL;
            break;
          case 4102:
            if ( !v4 )
            {
              if ( StorEtwLoggingEnabled )
              {
                v69 = v143;
                if ( v145 )
                {
                  v70 = *(_BYTE *)(v145 + 2) == 40 ? *(_QWORD **)(v145 + 96) : *(_QWORD **)(v145 + 48);
                  if ( v70 )
                  {
                    if ( (byte_140171461 & 1) != 0 || (byte_140171463 & 2) != 0 )
                      v70[90] = v143;
                    if ( (byte_140171461 & 1) != 0 )
                      StorEtwIORequestServiceTimeEventData(v70, 1, (unsigned __int64)v69);
                    v71 = v70[28];
                    if ( v71 && *(_DWORD *)(v71 + 1940) && (byte_140171463 & 2) != 0 )
                      StorEtwLogoRequestServiceTimeEventData(v70, 1, (char)v69);
                  }
                }
              }
            }
            goto LABEL_195;
          case 4103:
            v81 = (KDEFERRED_ROUTINE *)v145;
            v82 = v147;
            v114 = 0;
            if ( v3 )
            {
              if ( !v143 || LOWORD(v143->TargetInfoAsUlong) != 1 || (v145 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
              {
                *v147 = -1056964602;
                v111 = 0LL;
                goto LABEL_197;
              }
              LOWORD(v114) = v143->DpcListEntry.Next;
              BYTE2(v114) = BYTE2(v143->DpcListEntry.Next);
              v83 = v114;
              Unit = RaidAdapterFindUnit((__int64)v3, v114);
              v85 = Unit;
              if ( !Unit || (Unit[244] & 4) == 0 )
              {
                *v82 = -1056964601;
                v111 = 0LL;
                goto LABEL_197;
              }
              v86 = Unit + 249;
              if ( _InterlockedCompareExchange((volatile signed __int32 *)Unit + 502, 1, 0) == 1 )
              {
                *v82 = -1056964596;
                v111 = 0LL;
                goto LABEL_196;
              }
              if ( KeGetCurrentIrql() > 2u )
              {
                if ( _InterlockedCompareExchange((volatile signed __int32 *)v85 + 440, 134684676, 134684677) != 134684677
                  || v85 == (__int64 *)-1744LL )
                {
                  *v82 = -1056964596;
                }
                else
                {
                  *((_DWORD *)v85 + 444) = 12;
                  *((_DWORD *)v85 + 445) = v83;
                  v85[223] = (__int64)v86;
                  v86[1] = (__int64)v81;
                  ExpInterlockedPushEntrySList((PSLIST_HEADER)v3 + 69, (PSLIST_ENTRY)v85 + 109);
                  KeInsertQueueDpc((PRKDPC)(v3 + 254), v3 + 252, 0LL);
                  *v82 = 0;
                }
              }
              else
              {
                v86[1] = (__int64)v81;
                *v82 = RaidUnitProcessAsyncNotification(v3, v83, v86);
              }
            }
            else
            {
              *v147 = -1056964602;
            }
            goto LABEL_195;
          case 4104:
            if ( v3 && v143 )
            {
              if ( LOBYTE(v143->Number) == 40 )
                SystemArgument2 = (unsigned int *)v143[1].DeferredContext;
              else
                SystemArgument2 = (unsigned int *)v143->SystemArgument2;
              if ( SystemArgument2 )
              {
                CurrentIrql = KeGetCurrentIrql();
                v45 = CurrentIrql;
                if ( CurrentIrql > 2u )
                {
                  v46 = *((_QWORD *)v3 + 2);
                  *(_OWORD *)BugCheckParameter2 = 0LL;
                  RaidDriverGetName(v46, (__int64)BugCheckParameter2);
                  KeBugCheckEx(0xF0u, 5uLL, BugCheckParameter2[1], *((_QWORD *)SystemArgument2 + 21), v45);
                }
                if ( (v3[156] & 4) != 0 )
                  _InterlockedIncrement(v3 + 1272);
                if ( (qword_140170460 & 8) != 0 )
                  RaidLogMiniportCompletion(SystemArgument2);
                if ( *v3 != 1094997074
                  || (v3[151] & 0x10) == 0
                  || _InterlockedExchange((volatile __int32 *)SystemArgument2 + 194, 4) != 1 )
                {
                  v47 = *((_QWORD *)SystemArgument2 + 20);
                  if ( v47 )
                    *(_BYTE *)(v47 + 141) = -85;
                  v15 = (*((_BYTE *)SystemArgument2 + 17) & 1) == 0;
                  *((_BYTE *)SystemArgument2 + 16) = SystemArgument2[4] & 0xE3 | 0x10;
                  if ( !v15 )
                  {
                    PoFxIdleComponent(**((_QWORD **)v3 + 620), SystemArgument2[187], 0LL);
                    _InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)v3 + 620) + 80LL));
                    _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)v3 + 620) + 96LL));
                    *((_BYTE *)SystemArgument2 + 17) &= ~1u;
                  }
                  if ( *((_QWORD *)SystemArgument2 + 82) )
                  {
                    if ( (unsigned __int8)v45 < 2u )
                      LOBYTE(v45) = KfRaiseIrql(2u);
                    (*((void (__fastcall **)(unsigned int *))SystemArgument2 + 82))(SystemArgument2);
                    if ( (unsigned __int8)v45 < 2u )
                    {
                      KeLowerIrql(v45);
                      v111 = 0LL;
                      goto LABEL_197;
                    }
                  }
                }
              }
            }
            else if ( v4 && v143 )
            {
              if ( LOBYTE(v143->Number) == 40 ? v143[1].DeferredContext : v143->SystemArgument2 )
                NvmeAdapterRequestDirectComplete(v4);
            }
            goto LABEL_195;
          case 4105:
            v50 = v143;
            v51 = (int)v148;
            if ( !v143 )
              goto LABEL_195;
            if ( !v145 )
              goto LABEL_195;
            KeInitializeDpc(v143, (PKDEFERRED_ROUTINE)v145, v147);
            if ( v51 == LowImportance )
              goto LABEL_195;
            v52 = v51;
            goto LABEL_194;
          case 4106:
            v50 = v143;
            v53 = (char)v148;
            if ( !v143 )
              goto LABEL_195;
            if ( !v145 )
              goto LABEL_195;
            KeInitializeThreadedDpc(v143, (PKDEFERRED_ROUTINE)v145, v147);
            if ( !v53 )
              goto LABEL_195;
            v52 = HighImportance;
LABEL_194:
            KeSetImportanceDpc(v50, v52);
            goto LABEL_195;
          case 4107:
            if ( v143 && v145 )
              KeSetTargetProcessorDpcEx(v143, (PPROCESSOR_NUMBER)v145);
            goto LABEL_195;
          case 4108:
            if ( !v3 || !v147 )
              goto LABEL_195;
            StorpMarkDeviceFailed((_DWORD)v3, (_DWORD)v143, v145, 0xFFFF, (__int64)v147, 0, 0LL, 0, 0LL);
            v111 = 0LL;
            goto LABEL_197;
          case 4109:
            v87 = v153;
            if ( v3 && (_WORD)v147 && v148 )
            {
              StorpMarkDeviceFailed(
                (_DWORD)v3,
                (_DWORD)v143,
                v145,
                (unsigned __int16)v147,
                (__int64)v148,
                v149,
                (__int64)v150,
                v151,
                v152);
              *v87 = 0;
            }
            else
            {
              *v153 = -1056964602;
            }
            goto LABEL_195;
          case 4110:
            if ( !v4 )
            {
              if ( v3 )
                _InterlockedDecrement(v3 + 1504);
              PsTerminateSystemThread(0);
            }
            goto LABEL_195;
          case 4111:
            v88 = v143;
            if ( v4 )
            {
              if ( LOWORD(v143->TargetInfoAsUlong) == 1 )
              {
                Number = v143->Number;
                if ( Number >= 0x30u && LODWORD(v143->DpcListEntry.Next) == 2 )
                {
                  v90 = v143->DeferredContext;
                  if ( v90 )
                  {
                    if ( Number >= 0x72u && WORD2(v143->SystemArgument1) >= 0x42u && *v90 == 1314276178 )
                    {
                      SystemArgument1 = (int)v143->SystemArgument1;
                      if ( v90[142] == 2 && _interlockedbittestandset(v90 + 268, 5u) != 1 )
                      {
                        v15 = (v90[340] & 0x20) == 0;
                        v90[142] = 4;
                        v90[298] = 35;
                        if ( !v15 )
                          NvmeDbgLogCriticalEvent((_DWORD)v90, 2, SystemArgument1, 0, 0LL, 0LL);
                        **((_DWORD **)v90 + 13) = SystemArgument1;
                        v92 = *((_QWORD *)v90 + 13);
                        *(_OWORD *)(v92 + 4) = *(_OWORD *)((char *)&v88->SystemArgument1 + 6);
                        *(_OWORD *)(v92 + 20) = *(_OWORD *)((char *)&v88->DpcData + 6);
                        *(_OWORD *)(v92 + 36) = *(_OWORD *)((char *)&v88[1].DpcListEntry.Next + 6);
                        *(_OWORD *)(v92 + 52) = *(_OWORD *)((char *)&v88[1].DeferredRoutine + 6);
                        *(_WORD *)(v92 + 68) = HIWORD(v88[1].SystemArgument1);
                        IoQueueWorkItem(
                          *((PIO_WORKITEM *)v90 + 21),
                          NvmeAdapterNvmeControllerTransportErrorWork,
                          DelayedWorkQueue,
                          v90);
                      }
                    }
                  }
                }
              }
            }
            goto LABEL_195;
          case 4112:
            if ( v4 )
            {
              if ( v143 )
              {
                v93 = *(_QWORD *)&v143[-1].TargetInfoAsUlong;
                if ( ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v93 + 552)) )
                {
                  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v93 + 976), 1, 0) )
                    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v93 + 552));
                  else
                    IoQueueWorkItemEx(
                      *(PIO_WORKITEM *)(v93 + 176),
                      NvmeAdapterStorMQControllerInitializeWorker,
                      DelayedWorkQueue,
                      (PVOID)v93);
                }
              }
            }
            goto LABEL_195;
          default:
            goto LABEL_195;
        }
        goto LABEL_196;
      }
      v94 = v143;
      if ( !v3 || !v143 )
        goto LABEL_195;
      v95 = *(_QWORD *)&v143[1].TargetInfoAsUlong;
      DpcData = (int)v143[-2].DpcData;
      LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
      if ( (_BYTE)v145 == 1 )
      {
        v98 = *(unsigned int *)(v95 + 8);
        if ( DpcData < 0 )
        {
          v99 = *(_QWORD *)&v143[-1].TargetInfoAsUlong + 0x40000LL;
          if ( v99 < v98 )
          {
            *(_QWORD *)&v143[-1].TargetInfoAsUlong = v99;
            RaidUnitSubmitIrpRequest(*(_QWORD *)(*(_QWORD *)(v95 + 40) + 64LL), (__int64)&v94[-2].DpcListEntry, 1);
            v111 = 0LL;
            goto LABEL_197;
          }
        }
        *(_QWORD *)&v143[-1].TargetInfoAsUlong = v98;
        LODWORD(v94[-2].DpcData) = 0;
      }
      else
      {
        v100 = RaidSrbStatusToNtStatus(v145);
        LODWORD(v94[-2].DpcData) = v100;
        *(_QWORD *)&v94[-1].TargetInfoAsUlong = 0LL;
        if ( v100 == -1073741790 && *(_BYTE *)v95 == 4 )
          LODWORD(v94[-2].DpcData) = -1073741662;
      }
      if ( (LockArray_high == (DpcData & 0x7FFFFFFF) || (*((_BYTE *)v3 + 4371) & 2) != 0) && KeGetCurrentIrql() == 2 )
      {
        RaidUnitCompleteIrpRequest((PIRP)&v94[-2].DpcListEntry, DpcData);
        v111 = 0LL;
      }
      else
      {
        *(_DWORD *)(v95 + 24) = DpcData;
        v15 = (v3[156] & 4) == 0;
        ProcNumber = 0;
        if ( !v15 )
          _InterlockedIncrement(v3 + 1272);
        v101 = (struct _SLIST_ENTRY *)(((unsigned __int64)&v94->DpcListEntry.Next + 7) & 0xFFFFFFFFFFFFFFF0uLL);
        if ( KeGetProcessorNumberFromIndex(DpcData & 0x7FFFFFFF, &ProcNumber) < 0 )
          goto LABEL_360;
        if ( (*((_BYTE *)v3 + 4371) & 2) != 0 )
          KeGetCurrentProcessorNumberEx(&ProcNumber);
        if ( ProcNumber.Group >= (unsigned int)g_RaidPerfRedirectGroupCount
          || (unsigned int)ProcNumber.Number >= *((_DWORD *)g_RaidDPCRedirectionProcessors + ProcNumber.Group) )
        {
LABEL_360:
          ExpInterlockedPushEntrySList((PSLIST_HEADER)v3 + 17, v101);
          v105 = (struct _KDPC *)(*((_QWORD *)v3 + 1) + 200LL);
          v104 = 0LL;
        }
        else
        {
          if ( ExpInterlockedPushEntrySList(
                 (PSLIST_HEADER)g_RaidPerProcessorState
               + 8 * (unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6))
               + 5,
                 v101) )
          {
            goto LABEL_195;
          }
          if ( FeatureFixKcsanRacyAccessV2 )
          {
            if ( *((_DWORD *)g_RaidPerProcessorState
                 + 32 * (unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6))
                 + 24) == 2 )
              goto LABEL_195;
            Group = ProcNumber.Group;
            v103 = ProcNumber.Number;
          }
          else
          {
            Group = ProcNumber.Group;
            v103 = ProcNumber.Number;
            if ( *((_DWORD *)g_RaidPerProcessorState
                 + 32 * (unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6))
                 + 24) == 2 )
            {
              v111 = 0LL;
              goto LABEL_196;
            }
          }
          v104 = (void *)*((_QWORD *)v3 + 1);
          v105 = (struct _KDPC *)((char *)g_RaidPerProcessorState + 128 * (unsigned __int64)(v103 + (Group << 6)));
        }
        KeInsertQueueDpc(v105, v104, 0LL);
        v111 = 0LL;
      }
LABEL_196:
      v2 = v115;
      goto LABEL_197;
    }
    if ( v2 == 8193 )
    {
      if ( !v3 || !v143 || !v145 )
        goto LABEL_195;
      RaUnitFillIrpData((__int64)&v143[-2].DpcListEntry, (__int64 *)v145);
      v111 = 0LL;
    }
    else
    {
      v106 = (unsigned int)(v2 - 8194);
      switch ( v2 )
      {
        case 8194:
          if ( !v4 )
          {
            if ( StorEtwLoggingEnabled )
            {
              v107 = (KDEFERRED_ROUTINE *)v145;
              v108 = v143;
              if ( v145 )
              {
                v109 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v145 + 64) + 40LL) + 64LL);
                if ( (byte_140171461 & 1) != 0 )
                {
                  LOBYTE(v106) = 1;
                  StorEtwIOIrpRequestServiceTimeEventData(v145 - 120, v106, v143);
                }
                if ( v109 && *(_DWORD *)(v109 + 1940) && (byte_140171463 & 2) != 0 )
                {
                  LOBYTE(v106) = 1;
                  StorEtwLogoIrpRequestServiceTimeEventData((char *)v107 - 120, v106, v108);
                }
              }
            }
          }
          goto LABEL_195;
        case 32768:
          if ( !v3 )
            goto LABEL_195;
          RaProcessMFNDChildControllerEvent(v3, v143);
          v111 = 0LL;
          break;
        case 32769:
          if ( !v3
            || !v143
            || LOWORD(v143->TargetInfoAsUlong) != 1
            || *((_DWORD *)&v143->0 + 1) < 0x210u
            || HIDWORD(v143->DpcListEntry.Next) < 0x200 )
          {
            goto LABEL_195;
          }
          StorLogNVMeErrorRecoveryInfo(v3, &v143->ProcessorHistory);
          v111 = 0LL;
          break;
        default:
          if ( v2 != 32770 || !v3 )
            goto LABEL_195;
          RaProcessStorageEventNotification(v3, v143);
          v111 = 0LL;
          break;
      }
    }
LABEL_197:
    va_copy(v111, va);
    if ( !DisableExtensionDriver )
    {
      if ( EnableExtensionCalls )
      {
        _InterlockedIncrement(&ExtRefCount);
        ((void (__fastcall *)(int *, _QWORD, int *))ExtNotificationPost)(&dword_1401701E8, (unsigned int)v2, v3);
        _InterlockedDecrement(&ExtRefCount);
      }
    }
  }
}
