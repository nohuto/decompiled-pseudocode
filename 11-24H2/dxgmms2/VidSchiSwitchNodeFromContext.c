/*
 * XREFs of VidSchiSwitchNodeFromContext @ 0x1400B8040
 * Callers:
 *     ?VidSchiSwitchNodeFromDevice@@YAXPEAX@Z @ 0x140021DE0 (-VidSchiSwitchNodeFromDevice@@YAXPEAX@Z.c)
 *     VidSchiSwitchFromSuspendedDevices @ 0x14003B1A0 (VidSchiSwitchFromSuspendedDevices.c)
 * Callees:
 *     VidSchWaitForEvents @ 0x140048CFC (VidSchWaitForEvents.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     VidSchiAllocateDmaPacket @ 0x1400B67D0 (VidSchiAllocateDmaPacket.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1400B71FC (VidSchiSendToExecutionQueueWithWait.c)
 */

__int64 __fastcall VidSchiSwitchNodeFromContext(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rsi
  __int64 v3; // rdi
  _QWORD *DmaPacket; // rbx
  __int64 v5; // rax
  __int64 *v6; // rcx
  __int64 v7; // rax
  void (__fastcall *v8)(_QWORD); // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  struct _KEVENT *p_Event; // [rsp+60h] [rbp+8h] BYREF

  result = *(_QWORD *)(a1 + 96);
  if ( a1 == *(_QWORD *)(result + 224) )
  {
    result = *(unsigned int *)(result + 3016);
    if ( !(_DWORD)result )
    {
      v2 = *(_QWORD *)(a1 + 96);
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL);
      DmaPacket = VidSchiAllocateDmaPacket(v2);
      *((_DWORD *)DmaPacket + 22) = 0;
      *(_DWORD *)DmaPacket = 912353622;
      DmaPacket[10] = MEMORY[0xFFFFF78000000320];
      *((_DWORD *)DmaPacket + 18) = 7;
      DmaPacket[6] = *(_QWORD *)(v2 + 32);
      v5 = *(unsigned __int16 *)(v2 + 4);
      v6 = *(__int64 **)(v3 + 688);
      if ( (unsigned int)v5 < *(_DWORD *)(v3 + 760) )
        v6 += v5;
      v7 = *v6;
      DmaPacket[13] = ++*(_QWORD *)(v7 + 48);
      memset(&Event, 0, sizeof(Event));
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      *((_DWORD *)DmaPacket + 23) |= 0x1000u;
      DmaPacket[25] = &Event;
      *(_BYTE *)(v3 + 54) = 1;
      if ( *(_DWORD *)(v2 + 16520) != -1 )
      {
        v8 = *(void (__fastcall **)(_QWORD))(v3 + 3288);
        if ( v8 )
          v8(*(_QWORD *)(v3 + 3352));
      }
      *(_BYTE *)(v3 + 54) = 0;
      *((_DWORD *)DmaPacket + 23) |= 0x400u;
      VidSchiSendToExecutionQueueWithWait((__int64)DmaPacket, 0);
      p_Event = &Event;
      return VidSchWaitForEvents(v3, 1u, (PVOID *)&p_Event, 0LL, 0);
    }
  }
  return result;
}
