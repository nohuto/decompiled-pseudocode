/*
 * XREFs of ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1403473B0
 * Callers:
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x14001C658 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x140043B6C (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?FreeResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x140045664 (-FreeResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?FreeHandleUnsafe@DXGPROCESS@@QEAAXI@Z @ 0x14005DA14 (-FreeHandleUnsafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??1DXGCHANNELENDPOINTPROXY@@UEAA@XZ @ 0x1402044F4 (--1DXGCHANNELENDPOINTPROXY@@UEAA@XZ.c)
 *     ?FreeHandle@DXGCHANNELENDPOINTPROXY@@UEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x140204D30 (-FreeHandle@DXGCHANNELENDPOINTPROXY@@UEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ @ 0x14020544C (-NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ.c)
 *     ?Close@DXGSYNCOBJECT@@QEAAEI@Z @ 0x14033DE0C (-Close@DXGSYNCOBJECT@@QEAAEI@Z.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x140349F40 (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1403502AC (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?ScheduleDeferredDestruction@DXGDEVICE@@QEAAXU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@PEAVCOREDEVICEACCESS@@@Z @ 0x14036617C (-ScheduleDeferredDestruction@DXGDEVICE@@QEAAXU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINAT.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
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
    WdLogGlobalForLineNumber = 265;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_FreeCount < m_TableSize", 265LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this + 5) < 0x80u )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 266;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_FreeCount >= HMGRTABLE_MIN_FREE_ENTRIES",
      266LL,
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
