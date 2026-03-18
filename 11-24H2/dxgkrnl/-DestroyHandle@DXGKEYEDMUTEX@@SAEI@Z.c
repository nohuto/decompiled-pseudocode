/*
 * XREFs of ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x140394DD0
 * Callers:
 *     DxgkOpenKeyedMutexFromNtHandle @ 0x1401E3000 (DxgkOpenKeyedMutexFromNtHandle.c)
 *     DxgkCreateKeyedMutex @ 0x1401F5480 (DxgkCreateKeyedMutex.c)
 *     DxgkOpenKeyedMutex @ 0x1401F58A0 (DxgkOpenKeyedMutex.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1402B5DC0 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14034D4E0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x140394B7C (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 *     DxgkOpenKeyedMutex2 @ 0x1403AB880 (DxgkOpenKeyedMutex2.c)
 *     DxgkCreateKeyedMutex2 @ 0x1403BBDF0 (DxgkCreateKeyedMutex2.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1400422B4 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?FreeHandleUnsafe@DXGPROCESS@@QEAAXI@Z @ 0x14005D474 (-FreeHandleUnsafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z @ 0x1401845C4 (-GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z.c)
 *     ?FreeHostHandle@DXGKEYEDMUTEX@@QEAAXI@Z @ 0x1401F4434 (-FreeHostHandle@DXGKEYEDMUTEX@@QEAAXI@Z.c)
 *     ?VmBusSendDestroyKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x14022A5B4 (-VmBusSendDestroyKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

unsigned __int8 __fastcall DXGKEYEDMUTEX::DestroyHandle(__int64 a1)
{
  unsigned int v1; // esi
  struct DXGPROCESS *Current; // rbx
  unsigned int v3; // eax
  __int64 v4; // r8
  DXGKEYEDMUTEX *v5; // rdi
  int HostHandle; // ebp
  int v7; // ebx
  struct DXGGLOBAL *Global; // rax
  _BYTE v10[8]; // [rsp+50h] [rbp-28h] BYREF
  char *v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+60h] [rbp-18h]

  v1 = a1;
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4392;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pProcess != NULL", 4392LL, 0LL, 0LL, 0LL, 0LL);
  }
  v11 = (char *)Current + 248;
  if ( Current != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)Current + 32) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1512LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
  v12 = 2;
  v3 = (v1 >> 6) & 0xFFFFFF;
  if ( v3 < *((_DWORD *)Current + 74)
    && (v4 = *((_QWORD *)Current + 35), ((v1 >> 25) & 0x60) == (*(_BYTE *)(v4 + 16LL * v3 + 8) & 0x60))
    && (*(_DWORD *)(v4 + 16LL * v3 + 8) & 0x1F) == 9
    && (v5 = *(DXGKEYEDMUTEX **)(v4 + 16LL * v3)) != 0LL )
  {
    DXGPROCESS::FreeHandleUnsafe(Current, v1);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
    if ( *((_BYTE *)v5 + 176) )
    {
      HostHandle = DXGKEYEDMUTEX::GetHostHandle(v5, v1);
      if ( HostHandle )
      {
        v7 = *((_DWORD *)Current + 122);
        Global = DXGGLOBAL::GetGlobal();
        DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroyKeyedMutex(*((DXG_GUEST_GLOBAL_VMBUS **)Global + 210), v7, HostHandle);
        DXGKEYEDMUTEX::FreeHostHandle(v5, v1);
      }
    }
    DXGKEYEDMUTEX::ReleaseReference(v5);
    return 1;
  }
  else
  {
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
    return 0;
  }
}
