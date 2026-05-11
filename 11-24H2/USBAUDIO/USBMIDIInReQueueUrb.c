/*
 * XREFs of USBMIDIInReQueueUrb @ 0x140008D70
 * Callers:
 *     <none>
 * Callees:
 *     USBMidiInAddEventToPinQueue @ 0x140002238 (USBMidiInAddEventToPinQueue.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDDD @ 0x14000BB54 (WPP_RECORDER_AND_TRACE_SF_DDDD.c)
 *     USBMidiInInitializeUrbAndIrp @ 0x1400411B0 (USBMidiInInitializeUrbAndIrp.c)
 */

void __fastcall USBMIDIInReQueueUrb(PDEVICE_OBJECT DeviceObject, char *Context)
{
  KSPIN_LOCK *v2; // r12
  struct _DEVICE_OBJECT *v3; // rbp
  KIRQL v5; // si
  unsigned int v6; // ecx
  unsigned __int64 v7; // rdi
  bool v8; // zf
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r15
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rax
  char *v14; // rsi
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r13
  int v17; // ebp
  char v18; // r11
  int v19; // r8d
  KIRQL v20; // al
  KIRQL v21; // al
  unsigned int v22; // ecx
  int v23; // [rsp+20h] [rbp-78h]
  int v24; // [rsp+28h] [rbp-70h]
  int v25; // [rsp+30h] [rbp-68h]
  unsigned int v27; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v28; // [rsp+B0h] [rbp+18h]

  v2 = (KSPIN_LOCK *)(Context + 104);
  v3 = DeviceObject;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 13);
  v6 = 16 * *((_DWORD *)Context + 6);
  v7 = (unsigned __int64)*((unsigned int *)Context + 17) << 6;
  v8 = *((_QWORD *)Context + 20) + v7 == 0;
  v9 = *((_QWORD *)Context + 20) + v7;
  v28 = v9;
  v27 = v6;
  if ( !v8 )
  {
    do
    {
      if ( Context[41] )
        break;
      *(_BYTE *)(v9 + 48) = 0;
      v10 = *((_QWORD *)Context + 20) + ((unsigned __int64)((*((_DWORD *)Context + 17) + 1) % v6) << 6);
      KeReleaseSpinLock(v2, v5);
      if ( *(int *)(*(_QWORD *)(v9 + 24) + 48LL) >= 0 )
      {
        v12 = *(_QWORD *)(v9 + 32);
        if ( *(int *)(v12 + 4) >= 0 )
        {
          v13 = *(unsigned int *)(v12 + 36);
          v14 = *(char **)(v9 + 40);
          if ( (unsigned int)v13 >= 4 )
          {
            v15 = v13 - 4;
            v16 = (unsigned __int64)(unsigned int)v13 >> 2;
            do
            {
              v17 = 0;
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
                || (v18 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
              {
                v18 = 0;
              }
              if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                || (LOBYTE(v11) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
              {
                LOBYTE(v11) = 0;
              }
              if ( v18 || (_BYTE)v11 )
              {
                v19 = (unsigned __int8)v14[2];
                LOBYTE(v19) = v11;
                LOBYTE(v11) = v18;
                WPP_RECORDER_AND_TRACE_SF_DDDD(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v11,
                  v19,
                  WPP_GLOBAL_Control->DeviceExtension,
                  v23,
                  v24,
                  v25,
                  (__int64)&WPP_369361e543b533a4d737f009439bac31_Traceguids,
                  *v14,
                  v14[1],
                  v14[2],
                  v14[3]);
              }
              if ( v15 < 4 )
              {
                if ( *(_BYTE *)(v10 + 48)
                  && *(_DWORD *)(*(_QWORD *)(v10 + 32) + 36LL) >= 4u
                  && (((unsigned __int8)*v14 ^ **(_BYTE **)(v10 + 40)) & 0xF0) == 0 )
                {
                  v17 = 1;
                }
              }
              else
              {
                LOBYTE(v17) = (((unsigned __int8)*v14 ^ (unsigned __int8)v14[4]) & 0xF0) == 0;
              }
              USBMidiInAddEventToPinQueue((__int64)Context, v14, v17);
              v14 += 4;
              v15 -= 4LL;
              --v16;
            }
            while ( v16 );
            v9 = v28;
            v2 = (KSPIN_LOCK *)(Context + 104);
            v3 = DeviceObject;
          }
        }
      }
      if ( !Context[41] )
      {
        USBMidiInInitializeUrbAndIrp(v9);
        v20 = KeAcquireSpinLockRaiseToDpc(v2);
        _InterlockedAdd((volatile signed __int32 *)Context + 16, 1u);
        KeReleaseSpinLock(v2, v20);
        IofCallDriver(v3, *(PIRP *)(v9 + 24));
      }
      v21 = KeAcquireSpinLockRaiseToDpc(v2);
      ++*((_DWORD *)Context + 17);
      v5 = v21;
      v22 = *((_DWORD *)Context + 17);
      if ( 16 * *((_DWORD *)Context + 6) == v22 )
      {
        *((_DWORD *)Context + 17) = 0;
        v22 = 0;
      }
      v9 = *((_QWORD *)Context + 20) + ((unsigned __int64)v22 << 6);
      v28 = v9;
      if ( !*(_BYTE *)(v9 + 48) )
        break;
      v6 = v27;
    }
    while ( v9 );
  }
  Context[72] = 0;
  KeSetEvent((PRKEVENT)(Context + 112), 0, 0);
  KeReleaseSpinLock(v2, v5);
}
