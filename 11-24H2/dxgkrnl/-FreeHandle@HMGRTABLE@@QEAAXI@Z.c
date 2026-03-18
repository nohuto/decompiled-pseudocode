/*
 * XREFs of ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x140335510
 * Callers:
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x14000D078 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x140043DA0 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?FreeHandleUnsafe@DXGPROCESS@@QEAAXI@Z @ 0x14005D474 (-FreeHandleUnsafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??1DXGCHANNELENDPOINTPROXY@@UEAA@XZ @ 0x14020AC28 (--1DXGCHANNELENDPOINTPROXY@@UEAA@XZ.c)
 *     ?FreeHandle@DXGCHANNELENDPOINTPROXY@@UEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x14020B460 (-FreeHandle@DXGCHANNELENDPOINTPROXY@@UEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ @ 0x14020BB18 (-NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x140337FCC (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14033A190 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x14033A348 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?ScheduleDeferredDestruction@DXGDEVICE@@QEAAXU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@PEAVCOREDEVICEACCESS@@@Z @ 0x14034FAE8 (-ScheduleDeferredDestruction@DXGDEVICE@@QEAAXU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINAT.c)
 *     ?Close@DXGSYNCOBJECT@@QEAAEI@Z @ 0x1403885F8 (-Close@DXGSYNCOBJECT@@QEAAEI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall HMGRTABLE::FreeHandle(HMGRTABLE *this, unsigned int a2)
{
  unsigned int v4; // eax
  unsigned int v5; // r9d
  int v6; // edx
  char v7; // cl
  __int64 v8; // rdx

  if ( *((_DWORD *)this + 5) >= *((_DWORD *)this + 4) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 261;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_FreeCount < m_TableSize", 261LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this + 5) < 0x80u )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 262;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_FreeCount >= HMGRTABLE_MIN_FREE_ENTRIES",
      262LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = (a2 >> 6) & 0xFFFFFF;
  if ( v4 < *((_DWORD *)this + 4) )
  {
    v5 = *(_DWORD *)(*(_QWORD *)this + 16LL * v4 + 8);
    v6 = (v5 >> 5) & 3;
    if ( a2 >> 30 == v6 && (v5 & 0x1F) != 0 )
    {
      v7 = v6 + 1;
      if ( v6 == 3 )
        v7 = 1;
      *(_DWORD *)(*(_QWORD *)this + 16LL * v4 + 8) = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(32 * v7)) & 0x60;
      *(_DWORD *)(*(_QWORD *)this + 16LL * v4 + 8) &= 0xFFFFFFE0;
      *(_DWORD *)(*(_QWORD *)this + 16LL * v4 + 8) &= ~0x2000u;
      v8 = *(_QWORD *)this;
      ++*((_DWORD *)this + 5);
      *(_DWORD *)(v8 + 16LL * v4) = *(_DWORD *)(v8 + 16LL * *((unsigned int *)this + 3));
      *(_DWORD *)(*(_QWORD *)this + 16LL * *((unsigned int *)this + 3)) = v4;
    }
  }
}
