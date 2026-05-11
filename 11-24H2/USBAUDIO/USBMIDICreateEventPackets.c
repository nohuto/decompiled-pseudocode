/*
 * XREFs of USBMIDICreateEventPackets @ 0x14003CC14
 * Callers:
 *     USBMidiOutCreateBulkUrbs @ 0x1400092AC (USBMidiOutCreateBulkUrbs.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_DDDD @ 0x14000BB54 (WPP_RECORDER_AND_TRACE_SF_DDDD.c)
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 *     USBMidiOutCreateFirstByte @ 0x14003EE60 (USBMidiOutCreateFirstByte.c)
 *     USBMidiOutCreateSecondByte @ 0x14003EF60 (USBMidiOutCreateSecondByte.c)
 *     USBMidiOutCreateThirdByte @ 0x14003F1C0 (USBMidiOutCreateThirdByte.c)
 */

char __fastcall USBMIDICreateEventPackets(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int *v3; // r11
  __int64 v4; // r13
  __int64 v5; // r10
  _DWORD *v6; // r15
  __int64 v7; // r8
  unsigned int v8; // eax
  __int64 v9; // rdi
  char v10; // r12
  unsigned int v11; // ebp
  unsigned int v12; // edx
  unsigned int v13; // ebx
  unsigned int v14; // r14d
  int v15; // esi
  __int64 v16; // rax
  __int64 v17; // r8
  char v18; // dl
  char v19; // r8
  int v21; // [rsp+20h] [rbp-98h]
  int v22; // [rsp+28h] [rbp-90h]
  int v23; // [rsp+30h] [rbp-88h]
  unsigned int v24; // [rsp+60h] [rbp-58h]
  char v28; // [rsp+D8h] [rbp+20h]

  v3 = a3;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = a2;
  v6 = *(_DWORD **)(a2 + 48);
  v7 = a1;
  v8 = *(_DWORD *)(a2 + 36) >> 2;
  v24 = v8;
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 152LL);
  v10 = 0;
  v28 = 0;
  if ( !*(_DWORD *)(v9 + 72) )
    goto LABEL_2;
  if ( (*(_BYTE *)(v4 + 8) & 0xF8) == 0xF8 )
  {
    v8 = *(_DWORD *)(a2 + 36) >> 2;
    v28 = 1;
    *(_BYTE *)(v9 + 68) = 0;
LABEL_2:
    v11 = 0;
    goto LABEL_3;
  }
  *v6 = *(_DWORD *)(v9 + 76);
  v11 = *(_DWORD *)(v9 + 72);
  v28 = 0;
LABEL_3:
  v12 = *(_DWORD *)(v4 + 4);
  v13 = 0;
  v14 = 0;
  if ( v12 )
  {
    do
    {
      if ( v14 >= v8 )
        break;
      v10 = 0;
      if ( v11 )
      {
        v15 = 1;
      }
      else
      {
        if ( !*(_BYTE *)(v9 + 69) || (v15 = 0, *(char *)(v13 + v4 + 8) < 0) )
          v15 = 1;
        *(_BYTE *)v6 = 16 * *(_BYTE *)(v9 + 20);
      }
      do
      {
        if ( v13 >= *(_DWORD *)(v4 + 4) )
          break;
        v16 = v11;
        v17 = v13;
        ++v11;
        LOBYTE(v17) = *(_BYTE *)(v13 + v4 + 8);
        v13 += v15;
        v10 = ((__int64 (__fastcall *)(__int64, _DWORD *, __int64))USBMidiOutCreateByte[v16])(v9, v6, v17);
        v15 = 1;
      }
      while ( !v10 );
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 )
      {
        v18 = 1;
        if ( BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
          continue;
      }
      v18 = 0;
      if ( *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v19 = 1;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          continue;
      }
      v19 = 0;
      if ( v18 || v19 )
        WPP_RECORDER_AND_TRACE_SF_DDDD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v18,
          v19,
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v21,
          v22,
          v23,
          (__int64)&WPP_fa662056b2b03602895c9f649188a03a_Traceguids);
      if ( v10 )
        v11 = 0;
      else
        *(_DWORD *)(v9 + 76) = *v6;
      v12 = *(_DWORD *)(v4 + 4);
      ++v6;
      v8 = v24;
      ++v14;
    }
    while ( v13 < v12 );
    v5 = a2;
    v3 = a3;
    if ( v10 )
    {
      if ( v13 == v12 )
        v13 = *(_DWORD *)(a1 + 44);
      else
        *(_DWORD *)(v13 + *(_QWORD *)(a1 + 32) + 4LL) = v12 - v13;
      goto LABEL_24;
    }
    v7 = a1;
  }
  v13 = *(_DWORD *)(v7 + 44);
  --v14;
LABEL_24:
  *v3 = v13;
  if ( v28 )
    *(_BYTE *)(v9 + 68) = 1;
  else
    *(_DWORD *)(v9 + 72) = v11;
  *(_DWORD *)(*(_QWORD *)(v5 + 24) + 36LL) += 4 * v14;
  return v10;
}
