/*
 * XREFs of ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x14016A8FC
 * Callers:
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x140060CE0 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 * Callees:
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1400415C0 (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x140062510 (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x140092CF0 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     EtwTraceUserDestroyHandle @ 0x1400D64AC (EtwTraceUserDestroyHandle.c)
 *     ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x140107CDC (--1IdentifyPrimaryDestroyTarget@@QEAA@XZ.c)
 *     HMRemoveHandleForObjectWorker @ 0x140134F1C (HMRemoveHandleForObjectWorker.c)
 *     HMCleanupGrantedHandle @ 0x14014A694 (HMCleanupGrantedHandle.c)
 *     ?HMDoubleFree@@YAXPEAX@Z @ 0x14014C2E0 (-HMDoubleFree@@YAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1401A9280 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?RemoveHandle@Win32JobObject@@YAXPEAXPEAU_HANDLEENTRY@@@Z @ 0x1401AA150 (-RemoveHandle@Win32JobObject@@YAXPEAXPEAU_HANDLEENTRY@@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall HMDestroyUnlockedObjectWorkerAtomic(struct _HANDLEENTRY *a1)
{
  __int64 v2; // rcx
  __int64 UserSessionState; // rbx
  int v4; // r13d
  __int64 v5; // rbp
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rcx
  unsigned int EtwUserHandleType; // eax
  __int64 v14; // r9
  struct _HANDLEENTRY *v15; // r8
  char v16; // al
  void *v17; // rcx
  int v18; // [rsp+60h] [rbp+8h] BYREF
  int v19; // [rsp+68h] [rbp+10h]

  UserSessionState = W32GetUserSessionState(a1);
  if ( !*(_DWORD *)(UserSessionState + 19816) && !(unsigned int)AtomicExecutionCheck::GetCount(v2) )
  {
    v18 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3925LL);
  }
  LOBYTE(v18) = 0;
  IdentifyPrimaryDestroyTarget::Identify((Identify *)&v18, a1);
  v4 = *(_DWORD *)(UserSessionState + 19844);
  v5 = 0LL;
  v6 = *(_QWORD *)(UserSessionState + 19824);
  *(_DWORD *)(UserSessionState + 19844) = v4 + 1;
  v8 = W32GetUserSessionState(v7);
  v9 = (__int64)a1 - *(_QWORD *)(v8 + 19944);
  v10 = *(_QWORD *)(v8 + 19888);
  *((_BYTE *)a1 + 25) |= 2u;
  v11 = 5LL * (unsigned int)(v9 >> 5);
  v12 = *((unsigned __int8 *)a1 + 24);
  if ( (_BYTE)v12 == 19 || (_BYTE)v12 == 22 )
  {
    EtwUserHandleType = GetEtwUserHandleType(v12);
    EtwTraceUserDestroyHandle(**(_QWORD **)(v10 + 8 * v11), EtwUserHandleType, 0LL, v14);
    if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
    {
      Win32JobObject::RemoveHandle(**(Win32JobObject ***)(v10 + 8 * v11), a1, v15);
    }
    else if ( (*((_BYTE *)a1 + 25) & 0x20) != 0 )
    {
      HMCleanupGrantedHandle(**(_QWORD **)(v10 + 8 * v11));
      *((_BYTE *)a1 + 25) &= ~0x20u;
    }
    v16 = *((_BYTE *)a1 + 24);
    if ( v16 == 19 )
    {
      v17 = *(void **)(*(_QWORD *)(v10 + 8 * v11) + 32LL);
    }
    else
    {
      if ( v16 != 22 )
      {
LABEL_16:
        HMRemoveHandleForObjectWorker((__int64)a1);
        goto LABEL_17;
      }
      v5 = *(_QWORD *)(*(_QWORD *)(v10 + 8 * v11) + 16LL);
      v17 = *(void **)(v5 + 32);
    }
    ObfDereferenceObject(v17);
    goto LABEL_16;
  }
  (*(&gahti + 3 * v12))(*(_QWORD *)(v10 + 8 * v11));
LABEL_17:
  if ( !*(_DWORD *)(UserSessionState + 19816) && v5 )
    HMUnlockObject((int *)v5);
  *(_DWORD *)(UserSessionState + 19844) = v4;
  if ( v6 )
  {
    if ( *(_QWORD *)(UserSessionState + 19824) != v6 )
    {
      v19 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4020LL);
    }
    *(_QWORD *)(UserSessionState + 19824) = v6;
  }
  IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v18);
}
