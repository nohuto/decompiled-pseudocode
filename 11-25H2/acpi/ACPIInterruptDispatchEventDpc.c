/*
 * XREFs of ACPIInterruptDispatchEventDpc @ 0x140019BA0
 * Callers:
 *     <none>
 * Callees:
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 *     GetNameSpaceObjectNoLock @ 0x14000AA30 (GetNameSpaceObjectNoLock.c)
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     GetObjectPath @ 0x140011F58 (GetObjectPath.c)
 *     AsyncEvalObject @ 0x1400120D0 (AsyncEvalObject.c)
 *     WPP_RECORDER_SF_D @ 0x140017C78 (WPP_RECORDER_SF_D.c)
 *     ACPIGpeIndexToByteIndex @ 0x140019870 (ACPIGpeIndexToByteIndex.c)
 *     ACPIGpeEnableDisableEvents @ 0x14001A570 (ACPIGpeEnableDisableEvents.c)
 *     ACPICheckForInterruptStorm @ 0x14001A65C (ACPICheckForInterruptStorm.c)
 *     GetBaseObject @ 0x14001A7A0 (GetBaseObject.c)
 *     CreateObjectHandle @ 0x14001A7CC (CreateObjectHandle.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x140031A38 (OSNotifyDeviceWakeByGPEEvent.c)
 *     Simulator_AllocAndInitTestData @ 0x140052074 (Simulator_AllocAndInitTestData.c)
 *     AMLIDebugger @ 0x1400564EC (AMLIDebugger.c)
 *     Simulator_Copy_Arguments @ 0x14006B0E4 (Simulator_Copy_Arguments.c)
 *     Simulator_Free_Arguments @ 0x14006B1AC (Simulator_Free_Arguments.c)
 *     Simulator_TestNotify @ 0x14006B5BC (Simulator_TestNotify.c)
 *     Simulator_TestNotifyRet @ 0x14006B5F4 (Simulator_TestNotifyRet.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     memmove @ 0x140070C40 (memmove.c)
 */

void __fastcall ACPIInterruptDispatchEventDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  size_t v4; // r14
  size_t v5; // rax
  __int64 v6; // rdx
  size_t v7; // r8
  char v8; // cl
  char *v9; // rax
  char *v10; // rcx
  __int64 v11; // rbx
  unsigned __int8 v12; // r15
  char v13; // si
  unsigned __int8 v14; // r12
  __int64 v15; // rcx
  unsigned int v16; // esi
  __int64 v17; // rbx
  unsigned __int8 v18; // di
  int v19; // r9d
  unsigned int v20; // ecx
  unsigned int v21; // r13d
  char v22; // al
  char v23; // cl
  unsigned __int64 v24; // rax
  size_t v25; // r13
  _BYTE *Pool2; // rax
  int NameSpaceObjectNoLock; // r13d
  __int64 v28; // rdx
  __int64 v29; // rdx
  _BYTE *v30; // rcx
  __int64 BaseObject; // rax
  __int64 v32; // r13
  int v33; // r13d
  int (__fastcall *v34)(__int64); // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned int v37; // edx
  __int64 v38; // rcx
  _DWORD *v39; // rcx
  PVOID v40; // rax
  __int64 v41; // rax
  bool v42; // zf
  void *ObjectPath; // rax
  struct _KTHREAD *CurrentThread; // rdx
  int v45; // eax
  PVOID v46; // rcx
  __int64 v47; // [rsp+28h] [rbp-D8h]
  char v48[8]; // [rsp+40h] [rbp-C0h] BYREF
  KIRQL v49; // [rsp+48h] [rbp-B8h]
  unsigned int v50; // [rsp+4Ch] [rbp-B4h]
  unsigned int v51; // [rsp+50h] [rbp-B0h]
  PVOID *ObjectHandle; // [rsp+58h] [rbp-A8h]
  PVOID P; // [rsp+60h] [rbp-A0h]
  PVOID v54; // [rsp+68h] [rbp-98h] BYREF
  PVOID Argument1; // [rsp+70h] [rbp-90h]
  __int64 v56; // [rsp+78h] [rbp-88h] BYREF
  __int64 (__fastcall *v57)(); // [rsp+80h] [rbp-80h]
  __int64 v58; // [rsp+88h] [rbp-78h]
  size_t v59; // [rsp+90h] [rbp-70h]
  __int64 v60; // [rsp+98h] [rbp-68h]
  char v61; // [rsp+A7h] [rbp-59h]
  __int128 v62; // [rsp+A8h] [rbp-58h]
  _OWORD v63[5]; // [rsp+B8h] [rbp-48h]
  _BYTE v64[40]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v65[128]; // [rsp+130h] [rbp+30h] BYREF

  v50 = 0;
  v4 = *((unsigned __int16 *)AcpiInformation + 51);
  KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
  AcpiGpeDpcScheduled = 0;
  if ( AcpiGpeDpcRunning )
  {
    KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
  }
  else
  {
    v5 = (unsigned int)v4;
    AcpiGpeDpcRunning = 1;
    v62 = 0LL;
    v59 = (unsigned int)v4;
    v63[0] = 0LL;
    while ( 1 )
    {
      AcpiGpeWorkDone = 0;
      if ( (_DWORD)v4 )
      {
        v6 = 0LL;
        v7 = v4;
        do
        {
          v8 = *((char *)GpeRunMethod + v6++);
          *((char *)GpeRunMethod + v6 - 1) = 0;
          v9 = (char *)GpeIsLevel;
          *((_BYTE *)&v63[2] + v6 + 15) = v8;
          *((_BYTE *)v63 + v6 + 15) = v9[v6 - 1];
          v10 = (char *)GpeComplete;
          *(&v61 + v6) |= *((char *)GpeComplete + v6 - 1);
          v10[v6 - 1] = 0;
          --v7;
        }
        while ( v7 );
        v5 = v4;
        v59 = v4;
      }
      memmove(v64, GpeWakeEnable, v5);
      KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
      v11 = 0LL;
      if ( (_DWORD)v4 )
      {
        while ( 1 )
        {
          v12 = *((_BYTE *)&v63[3] + v11);
          v13 = 0;
          v14 = *((_BYTE *)&v63[1] + v11);
          if ( v12 )
            break;
LABEL_9:
          *((_BYTE *)&v63[-1] + v11) |= v13;
          v11 = (unsigned int)(v11 + 1);
          if ( (unsigned int)v11 >= (unsigned int)v4 )
            goto LABEL_10;
        }
        while ( 1 )
        {
          v19 = FirstSetLeftBit[v12];
          v20 = *((unsigned __int16 *)AcpiInformation + 43);
          v51 = 1 << FirstSetLeftBit[v12];
          v12 &= ~(_BYTE)v51;
          if ( (unsigned int)v11 >= v20 + *((unsigned __int16 *)AcpiInformation + 49) )
            KeBugCheckEx(0xA5u, 0x17uLL, (unsigned int)(v19 + 8 * v11), 2uLL, 0LL);
          if ( (unsigned int)v11 >= v20 )
            v21 = v19 + *((unsigned __int16 *)AcpiInformation + 50) + 8 * (v11 - v20);
          else
            v21 = v19 + 8 * v11;
          ACPICheckForInterruptStorm(v21);
          if ( ((unsigned __int8)v51 & *((_BYTE *)GpeHandlerType + v11)) == 0 )
          {
            if ( ((unsigned __int8)v51 & v64[v11]) != 0 )
            {
              OSNotifyDeviceWakeByGPEEvent(v21, (unsigned int)v11, v51);
              v13 |= v51;
            }
            else
            {
              v37 = *(unsigned __int8 *)((unsigned int)ACPIGpeIndexToByteIndex() + GpeMap);
              if ( v37 < GpeVectorTableSize )
              {
                _mm_lfence();
                v38 = *((_QWORD *)GpeVectorTable + 2 * v37 + 1);
                if ( v38 )
                {
                  (*(void (__fastcall **)(__int64, _QWORD))(v38 + 8))(v38, *(_QWORD *)(v38 + 16));
                }
                else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v47) = v21;
                  WPP_RECORDER_SF_D(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    2u,
                    0x16u,
                    0xAu,
                    (__int64)&WPP_87274692d92b3c10bf5c12577f577a30_Traceguids,
                    v47);
                }
                v13 |= v51;
              }
            }
            goto LABEL_50;
          }
          ObjectHandle = 0LL;
          v22 = 76;
          if ( (v14 & (unsigned __int8)v51) == 0 )
            v22 = 69;
          v23 = v21;
          byte_14008844F = v22;
          v24 = v21;
          v25 = -1LL;
          byte_140088450 = HexDigit[v24 >> 4];
          byte_140088451 = HexDigit[v23 & 0xF];
          do
            ++v25;
          while ( byte_140088448[v25] );
          if ( v25 + 1 < 0x80 )
            break;
          Pool2 = (_BYTE *)ExAllocatePool2(64LL, v25 + 1, 1768973121LL);
          P = Pool2;
          if ( Pool2 )
            goto LABEL_26;
          BYTE1(v50) = v51;
          LOBYTE(v50) = v11;
          BYTE2(v50) = v14;
LABEL_50:
          if ( !v12 )
            goto LABEL_9;
        }
        Pool2 = v65;
        P = v65;
LABEL_26:
        memmove(Pool2, byte_140088448, v25);
        *((_BYTE *)P + v25) = 0;
        v49 = ExAcquireSpinLockShared(&ACPINamespaceLock);
        v54 = 0LL;
        dword_140089138 = 0;
        pszDest = 0;
        if ( (gDebugger & 0x1000) != 0 )
        {
          ConPrintf("\nProcess AML Debugger Request.\n");
          _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
          AMLIDebugger();
        }
        if ( *(_BYTE *)P )
        {
          NameSpaceObjectNoLock = GetNameSpaceObjectNoLock((const char *)P, 0LL, (__int64 *)&v54, 0);
          if ( NameSpaceObjectNoLock >= 0 && v54 )
          {
            ObjectHandle = (PVOID *)CreateObjectHandle(v54);
            DereferenceObjectEx(v28);
          }
          if ( NameSpaceObjectNoLock == 32772 )
            NameSpaceObjectNoLock = 259;
        }
        else
        {
          NameSpaceObjectNoLock = -1073741810;
        }
        ExReleaseSpinLockShared(&ACPINamespaceLock, v49);
        if ( v65 != P )
          ExFreePoolWithTag(P, 0);
        BYTE1(v50) = v51;
        LOBYTE(v50) = v11;
        BYTE2(v50) = v14;
        if ( NameSpaceObjectNoLock < 0 )
          goto LABEL_50;
        P = (PVOID)v50;
        v57 = ACPIInterruptEventCompletion;
        v58 = 0LL;
        Argument1 = 0LL;
        dword_140089138 = 0;
        pszDest = 0;
        if ( (gDebugger & 0x1000) != 0 )
        {
          ConPrintf("\nProcess AML Debugger Request.\n");
          _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
          AMLIDebugger();
        }
        v29 = (__int64)ObjectHandle;
        v30 = *ObjectHandle;
        v54 = *ObjectHandle;
        if ( !g_SimulatorCallbackObject )
          goto LABEL_40;
        v56 = 0LL;
        Argument1 = (PVOID)Simulator_AllocAndInitTestData();
        if ( Argument1 )
        {
          v33 = Simulator_Copy_Arguments(0LL, 0LL, &v56);
          if ( v33 >= 0 )
          {
            v39 = Argument1;
            v40 = v54;
            *(_DWORD *)Argument1 = 1;
            v39[1] = 2;
            v39[2] = 1;
            *((_QWORD *)v39 + 2) = v40;
            v41 = v56;
            *((_QWORD *)v39 + 3) = 0LL;
            *((_QWORD *)v39 + 4) = 0LL;
            *((_QWORD *)v39 + 5) = v41;
            *((_QWORD *)v39 + 6) = ACPIInterruptEventCompletion;
            *((_QWORD *)v39 + 7) = P;
            v57 = (__int64 (__fastcall *)())&Simulator_AsyncEvalObjectCallBack;
            *((_QWORD *)v39 + 8) = 0LL;
            v33 = Simulator_TestNotify(v39);
            P = Argument1;
            if ( v33 >= 0 )
            {
              v42 = *((_QWORD *)Argument1 + 8) == 1LL;
              P = Argument1;
              if ( v42 )
              {
                v58 = *((_QWORD *)Argument1 + 5);
                P = Argument1;
              }
            }
          }
          if ( !v33 )
          {
            v30 = v54;
            v29 = (__int64)ObjectHandle;
LABEL_40:
            if ( (v30[64] & 4) != 0 )
            {
              v33 = -1073741738;
              ObjectHandle = (PVOID *)v29;
            }
            else
            {
              BaseObject = GetBaseObject(v30);
              v32 = BaseObject;
              v60 = BaseObject;
              if ( (gDebugger & 8) != 0 )
              {
                ObjectPath = (void *)GetObjectPath(BaseObject);
                CurrentThread = KeGetCurrentThread();
                v54 = ObjectPath;
                if ( ObjectPath )
                {
                  PrintDebugMessage(0xBu, CurrentThread, ObjectPath, 0LL, 0LL);
                  ExFreePoolWithTag(v54, 0);
                }
                else
                {
                  PrintDebugMessage(0xBu, CurrentThread, byte_140075488, 0LL, 0LL);
                }
              }
              v33 = AsyncEvalObject(v32, 0LL, 0, v58, (__int64)v57, (__int64)P, 1);
              DereferenceObjectEx(v60);
              v29 = (__int64)ObjectHandle;
              if ( v33 == 32772 )
                v33 = 259;
            }
            if ( g_SimulatorCallbackObject && v33 != 259 )
            {
              if ( Argument1 )
              {
                v45 = Simulator_TestNotifyRet(Argument1);
                v46 = Argument1;
                v33 = v45;
                if ( (unsigned int)(*((_DWORD *)Argument1 + 1) - 1) <= 2 )
                {
                  Simulator_Free_Arguments(*((unsigned int *)Argument1 + 8), *((_QWORD *)Argument1 + 5));
                  v46 = Argument1;
                }
                ExFreePoolWithTag(v46, 0);
                v29 = (__int64)ObjectHandle;
              }
              else
              {
                v33 = -1073741823;
              }
            }
            goto LABEL_45;
          }
        }
        else
        {
          v33 = -1073741670;
        }
        v29 = (__int64)ObjectHandle;
LABEL_45:
        AMLIDereferenceHandleEx(v29);
        if ( v33 < 0 )
        {
          KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
          *((_BYTE *)GpeRunMethod + v11) |= v51;
          if ( !AcpiGpeDpcScheduled )
          {
            AcpiGpeDpcScheduled = 1;
            KeSetTimer(&AcpiGpeTimer, (LARGE_INTEGER)-20000000LL, &AcpiGpeDpc);
          }
          KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
        }
        else if ( v33 != 259 )
        {
          v13 |= v51;
        }
        goto LABEL_50;
      }
LABEL_10:
      KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
      if ( !AcpiGpeWorkDone )
        break;
      v5 = v59;
    }
    v16 = 0;
    if ( (_DWORD)v4 )
    {
      v17 = 0LL;
      do
      {
        v18 = *((_BYTE *)&v63[-1] + v17);
        if ( (v18 & *((_BYTE *)&v63[1] + v17)) != 0 )
        {
          v48[0] = v18 & *((_BYTE *)&v63[1] + v17);
          v34 = *(int (__fastcall **)(__int64))(PmHalDispatchTable + 120);
          if ( v16 >= *((unsigned __int16 *)AcpiInformation + 43) )
          {
            if ( v34(7LL) < 0 )
              goto LABEL_14;
            v35 = v16 - *((unsigned __int16 *)AcpiInformation + 43);
            v36 = 7LL;
            goto LABEL_56;
          }
          if ( v34(6LL) >= 0 )
          {
            v35 = v16;
            v36 = 6LL;
LABEL_56:
            (*(void (__fastcall **)(__int64, __int64, char *, __int64, _QWORD))(PmHalDispatchTable + 136))(
              v36,
              v35,
              v48,
              1LL,
              0LL);
          }
        }
LABEL_14:
        ++v16;
        *((_BYTE *)GpePending + v17) &= ~v18;
        v15 = *((unsigned __int8 *)GpeWakeHandler + v17);
        *((_BYTE *)GpeCurEnable + v17) |= v18 & (*((_BYTE *)GpeWakeEnable + v17) | *((_BYTE *)GpeEnable + v17) & ~(_BYTE)v15);
        ++v17;
      }
      while ( v16 < (unsigned int)v4 );
    }
    LOBYTE(v15) = 1;
    AcpiGpeDpcRunning = 0;
    ACPIGpeEnableDisableEvents(v15);
    KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
  }
}
