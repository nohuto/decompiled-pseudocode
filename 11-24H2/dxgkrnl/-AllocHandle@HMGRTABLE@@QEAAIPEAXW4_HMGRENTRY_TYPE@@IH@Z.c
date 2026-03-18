/*
 * XREFs of ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402B64B0
 * Callers:
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1400391D4 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x14004324C (-CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x140047A60 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?Initialize@DXGDOORBELL@@IEAAJPEAU_D3DKMT_CREATE_DOORBELL@@@Z @ 0x1401D9E74 (-Initialize@DXGDOORBELL@@IEAAJPEAU_D3DKMT_CREATE_DOORBELL@@@Z.c)
 *     ?InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1401DAA6C (-InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 *     ?DxgkpCreateSharedVmObjectsForExistingResource@@YAJPEAVDXGPROCESSVMWP@@PEAXPEAU_DXGSHAREDALLOCOBJECT@@PEAPEAVDXGSHAREDVMOBJECT@@PEAI@Z @ 0x1401E1028 (-DxgkpCreateSharedVmObjectsForExistingResource@@YAJPEAVDXGPROCESSVMWP@@PEAXPEAU_DXGSHAREDALLOCOB.c)
 *     ?Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z @ 0x1401F0228 (-Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@PEAVDXGPAGINGQUEUE@@PEAE77@Z @ 0x1401F4640 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1401F5EEC (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
 *     ?AllocateHandle@DXGCHANNELENDPOINTPROXY@@UEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x14020B240 (-AllocateHandle@DXGCHANNELENDPOINTPROXY@@UEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402212C0 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1402B601C (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1402CFD80 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x140330650 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1403321F0 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x14034F628 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x14035AC38 (-DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1403973B4 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1404253E0 (-VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x140382F24 (-ExpandTable@HMGRTABLE@@QEAAEXZ.c)
 */

__int64 __fastcall HMGRTABLE::AllocHandle(unsigned int *a1, __int64 a2, int a3, __int16 a4, int a5)
{
  __int64 v10; // rsi
  __int64 v11; // rdx
  unsigned int v12; // ecx
  __int64 v13; // rax
  unsigned int v14; // r8d
  int v15; // r8d
  int v16; // eax

  if ( a3 <= 31 )
  {
    if ( a3 <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 151;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"Type > HMGRENTRY_TYPE_FREE", 151LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 150;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"Type <= HMGRENTRY_TYPE_LIMIT", 150LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a1[5] <= 0x80 && !HMGRTABLE::ExpandTable((HMGRTABLE *)a1) )
    return 0LL;
  v10 = a1[2];
  if ( (unsigned int)v10 >= a1[4] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 169;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"Index < m_TableSize", 169LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 16 * v10 + 8) & 0x1F) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 170;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_pEntryTable[Index].Type == HMGRENTRY_TYPE_FREE",
      170LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v11 = *(_QWORD *)a1;
  v12 = *(_DWORD *)(*(_QWORD *)a1 + 16LL * a1[2]);
  v13 = 2LL * a1[3];
  a1[2] = v12;
  a1[3] = *(_DWORD *)(v11 + 8 * v13);
  if ( v12 >= a1[4] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 177;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_FreeHandleListHead < m_TableSize",
      177LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a1[3] >= a1[4] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 178;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_FreeHandleListTail < m_TableSize",
      178LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v14 = *(_DWORD *)(*(_QWORD *)a1 + 16 * v10 + 8);
  *(_QWORD *)(*(_QWORD *)a1 + 16 * v10) = a2;
  v15 = (v14 >> 5) & 3;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v10 + 8) ^= ((unsigned __int8)a3 ^ (unsigned __int8)*(_DWORD *)(*(_QWORD *)a1
                                                                                                 + 16 * v10
                                                                                                 + 8)) & 0x1F;
  v16 = *(_DWORD *)(*(_QWORD *)a1 + 16 * v10 + 8);
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v10 + 8) = v16 ^ ((unsigned __int16)v16 ^ (unsigned __int16)(a4 << 7)) & 0x1F80;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v10 + 8) = *(_DWORD *)(*(_QWORD *)a1 + 16 * v10 + 8) & 0xFFFFDFFF | (a5 != 0 ? 0x2000 : 0);
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v10 + 8) &= ~0x4000u;
  if ( (unsigned int)(a3 - 4) <= 1 )
    *(_DWORD *)(*(_QWORD *)a1 + 16 * v10 + 8) |= 0x4000u;
  --a1[5];
  return (*(_DWORD *)(*(_QWORD *)a1 + 16 * v10 + 8) >> 7) & 0x3F | (((v15 << 24) | (unsigned int)v10 & 0xFFFFFF) << 6);
}
