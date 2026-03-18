/*
 * XREFs of ?VmBusAcquireKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140218890
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1400427F4 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140058A7C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEY.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z @ 0x1402FE4BC (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z.c)
 *     DxgkpAcquireKeyedMutexFromHandle @ 0x1403EBFD8 (DxgkpAcquireKeyedMutexFromHandle.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusAcquireKeyedMutexSync(struct DXGPROCESS **a1)
{
  union _LARGE_INTEGER *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r9
  unsigned int *v5; // rdi
  unsigned int v6; // ebp
  unsigned __int64 *v7; // r14
  union _LARGE_INTEGER *v9; // r9
  union _LARGE_INTEGER v10; // [rsp+78h] [rbp+10h] BYREF

  v2 = (union _LARGE_INTEGER *)CastToVmBusCommand<DXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC>((__int64)a1);
  if ( !v2 )
    return 0;
  v3 = DxgkpAcquireKeyedMutexFromHandle(a1[12]);
  v5 = (unsigned int *)v3;
  if ( !v3 )
    return 0;
  v6 = *(_DWORD *)(v3 + 168) + 24;
  v7 = (unsigned __int64 *)operator new[](v6, 0x4B677844u, 64LL, v4);
  if ( !v7 )
  {
    DXGKEYEDMUTEX::ReleaseReference((DXGKEYEDMUTEX *)v5);
    return 0;
  }
  v10.QuadPart = 0LL;
  v9 = 0LL;
  if ( (v2[7].LowPart & 1) == 0 )
  {
    v9 = &v10;
    v10 = v2[6];
  }
  *(_DWORD *)v7 = DXGKEYEDMUTEX::AcquireSync(
                    v2[3].HighPart,
                    v2[4].QuadPart,
                    v2[5].LowPart,
                    v9,
                    (DXGKEYEDMUTEX *)(v7 + 2),
                    v7 + 3,
                    v5[42],
                    v7 + 1,
                    0);
  VmBusCompletePacket(a1[16], v7, v6);
  DXGKEYEDMUTEX::ReleaseReference((DXGKEYEDMUTEX *)v5);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v7);
  return 1;
}
