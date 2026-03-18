/*
 * XREFs of ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1403A1F60
 * Callers:
 *     DxgkOpenKeyedMutexFromNtHandle @ 0x1401DDE30 (DxgkOpenKeyedMutexFromNtHandle.c)
 *     DxgkCreateKeyedMutex @ 0x1401EF230 (DxgkCreateKeyedMutex.c)
 *     DxgkOpenKeyedMutex @ 0x1401EF650 (DxgkOpenKeyedMutex.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402DE70C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1402FF140 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1403A1D0C (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 *     DxgkOpenKeyedMutex2 @ 0x1403B7B10 (DxgkOpenKeyedMutex2.c)
 *     DxgkCreateKeyedMutex2 @ 0x1403C77A0 (DxgkCreateKeyedMutex2.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14003583C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1400427F4 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?FreeHandleUnsafe@DXGPROCESS@@QEAAXI@Z @ 0x14005DA14 (-FreeHandleUnsafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z @ 0x1401820FC (-GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z.c)
 *     ?FreeHostHandle@DXGKEYEDMUTEX@@QEAAXI@Z @ 0x1401EE828 (-FreeHostHandle@DXGKEYEDMUTEX@@QEAAXI@Z.c)
 *     ?VmBusSendDestroyKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x140223CC8 (-VmBusSendDestroyKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

unsigned __int8 __fastcall DXGKEYEDMUTEX::DestroyHandle(__int64 a1)
{
  unsigned int v1; // esi
  struct DXGPROCESS *Current; // rbx
  unsigned int v3; // eax
  __int64 v4; // r8
  DXGKEYEDMUTEX *v5; // rdi
  int HostHandle; // ebp
  int v8; // ebx
  struct DXGGLOBAL *Global; // rax
  _BYTE v10[32]; // [rsp+50h] [rbp-28h] BYREF

  v1 = a1;
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4387;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pProcess != NULL", 4387LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v10, Current);
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
        v8 = *((_DWORD *)Current + 122);
        Global = DXGGLOBAL::GetGlobal();
        DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroyKeyedMutex(*((DXG_GUEST_GLOBAL_VMBUS **)Global + 206), v8, HostHandle);
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
