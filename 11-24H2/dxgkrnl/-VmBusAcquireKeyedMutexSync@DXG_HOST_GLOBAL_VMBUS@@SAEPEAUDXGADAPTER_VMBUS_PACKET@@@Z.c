/*
 * XREFs of ?VmBusAcquireKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021EE10
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1400422B4 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1400584FC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEY.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z @ 0x1402B513C (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z.c)
 *     DxgkpAcquireKeyedMutexFromHandle @ 0x1403E58E8 (DxgkpAcquireKeyedMutexFromHandle.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusAcquireKeyedMutexSync(struct DXGPROCESS **a1)
{
  union _LARGE_INTEGER *v2; // rbx
  __int64 v3; // rax
  unsigned int *v4; // rdi
  unsigned int v5; // ebp
  unsigned __int64 *v6; // r14
  union _LARGE_INTEGER *v8; // r9
  union _LARGE_INTEGER v9; // [rsp+78h] [rbp+10h] BYREF

  v2 = (union _LARGE_INTEGER *)CastToVmBusCommand<DXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC>((__int64)a1);
  if ( !v2 )
    return 0;
  v3 = DxgkpAcquireKeyedMutexFromHandle(a1[12]);
  v4 = (unsigned int *)v3;
  if ( !v3 )
    return 0;
  v5 = *(_DWORD *)(v3 + 168) + 24;
  v6 = (unsigned __int64 *)operator new[](v5, 0x4B677844u, 64LL);
  if ( !v6 )
  {
    DXGKEYEDMUTEX::ReleaseReference((DXGKEYEDMUTEX *)v4);
    return 0;
  }
  v9.QuadPart = 0LL;
  v8 = 0LL;
  if ( (v2[7].LowPart & 1) == 0 )
  {
    v8 = &v9;
    v9 = v2[6];
  }
  *(_DWORD *)v6 = DXGKEYEDMUTEX::AcquireSync(
                    v2[3].HighPart,
                    v2[4].QuadPart,
                    v2[5].LowPart,
                    v8,
                    (DXGKEYEDMUTEX *)(v6 + 2),
                    v6 + 3,
                    v4[42],
                    v6 + 1,
                    0);
  VmBusCompletePacket(a1[16], v6, v5);
  DXGKEYEDMUTEX::ReleaseReference((DXGKEYEDMUTEX *)v4);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v6);
  return 1;
}
