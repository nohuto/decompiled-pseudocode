/*
 * XREFs of USBHwSelectStreamingMIDIInterface @ 0x14003658C
 * Callers:
 *     USBParseGetMIDIStreamingDatarange @ 0x140037DB4 (USBParseGetMIDIStreamingDatarange.c)
 *     USBDeviceSetPowerState @ 0x1400406B0 (USBDeviceSetPowerState.c)
 * Callees:
 *     memmove @ 0x14001C740 (memmove.c)
 *     USBHwAllocateAndBag @ 0x14002D688 (USBHwAllocateAndBag.c)
 *     USBMidiInPipePrimer @ 0x140039F88 (USBMidiInPipePrimer.c)
 *     USBHwSubmitUrbToUsbdSynch @ 0x14003C81C (USBHwSubmitUrbToUsbdSynch.c)
 */

__int64 __fastcall USBHwSelectStreamingMIDIInterface(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  _QWORD *v6; // r13
  __int64 v8; // rax
  __int64 v9; // rsi
  USHORT v10; // bp
  struct _URB *v11; // r15
  int i; // ebx
  __int64 v13; // rcx
  unsigned int v14; // edx
  __int64 v15; // r10
  USBD_CONFIGURATION_HANDLE *p_ConfigurationHandle; // r14
  __int64 v17; // rdx
  ULONG *p_MaximumTransferSize; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // r9
  ULONG NumberOfPipes; // eax
  unsigned int v24; // esi
  __int64 v25; // rcx
  __int64 v26; // r8
  _QWORD *v27; // rcx
  struct _URB *Pool2; // [rsp+78h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD **)(v3 + 72);
  if ( *(_BYTE *)(v3 + 64) )
    return 3221226166LL;
  if ( *(_BYTE *)(a2 + 16) )
    return 0LL;
  v8 = *(_QWORD *)(a2 + 24);
  v9 = *(unsigned __int8 *)(v8 + 4);
  if ( !*(_BYTE *)(v8 + 4) )
    return 3221225858LL;
  v10 = 24 * (v9 + 1);
  Pool2 = (struct _URB *)ExAllocatePool2(64LL, (unsigned int)(24 * v9 + 56), 1096972357LL);
  v11 = Pool2;
  i = -1073741670;
  if ( Pool2 )
  {
    v13 = v6[5];
    v14 = 0;
    for ( i = -1073741808; v14 < *(unsigned __int8 *)(v13 + 4); ++v14 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v6[2] + 16LL * v14) + 2LL) == *(_BYTE *)(*(_QWORD *)(a2 + 24) + 2LL) )
        break;
    }
    v15 = v6[2];
    if ( *(_BYTE *)(*(_QWORD *)(v15 + 16LL * v14) + 2LL) != *(_BYTE *)(*(_QWORD *)(a2 + 24) + 2LL) )
      goto LABEL_29;
    p_ConfigurationHandle = &Pool2->UrbSelectConfiguration.ConfigurationHandle;
    memmove(&Pool2->UrbOSFeatureDescriptorRequest.Reserved0, *(const void **)(v15 + 16LL * v14 + 8), v10);
    Pool2->UrbSelectInterface.Interface.Length = v10;
    Pool2->UrbSelectInterface.Interface.AlternateSetting = *(_BYTE *)(*(_QWORD *)(a2 + 24) + 3LL);
    if ( (_DWORD)v9 )
    {
      v17 = 0LL;
      p_MaximumTransferSize = &Pool2->UrbSelectInterface.Interface.Pipes[0].MaximumTransferSize;
      v19 = v9;
      do
      {
        v20 = *(_QWORD *)(v17 + *(_QWORD *)(a2 + 48));
        v17 += 8LL;
        *p_MaximumTransferSize = *(unsigned __int16 *)(v20 + 4);
        p_MaximumTransferSize += 6;
        --v19;
      }
      while ( v19 );
    }
    Pool2->UrbHeader.Length = 24 * v9 + 56;
    Pool2->UrbHeader.Function = 1;
    Pool2->UrbSelectInterface.ConfigurationHandle = (USBD_CONFIGURATION_HANDLE)v6[3];
    v21 = USBHwSubmitUrbToUsbdSynch(*(PDEVICE_OBJECT *)(a1 + 40), Pool2, 0LL);
    i = v21;
    if ( Pool2->UrbHeader.Status >= 0 )
    {
      if ( v21 < 0 )
      {
LABEL_29:
        ExFreePool(v11);
        return (unsigned int)i;
      }
      if ( Pool2->UrbSelectInterface.Interface.NumberOfPipes <= (unsigned int)v9 )
      {
        *(_BYTE *)(a2 + 16) = 1;
        NumberOfPipes = Pool2->UrbSelectInterface.Interface.NumberOfPipes;
        if ( a3 )
        {
          *(_DWORD *)(a2 + 32) = NumberOfPipes;
          i = USBHwAllocateAndBag((PVOID *)(a2 + 40), 168 * NumberOfPipes, 64LL, *(void **)(a1 + 8));
          if ( i < 0 )
            goto LABEL_29;
        }
        else if ( *(_DWORD *)(a2 + 32) != NumberOfPipes )
        {
          i = -1073741438;
          goto LABEL_29;
        }
        v24 = 0;
        if ( *(_DWORD *)(a2 + 32) )
        {
          do
          {
            if ( i < 0 )
              break;
            v25 = *(_QWORD *)(a2 + 40);
            v26 = 168LL * v24;
            *(_OWORD *)(v26 + v25) = *(_OWORD *)&p_ConfigurationHandle[3 * v24 + 3];
            *(_QWORD *)(v26 + v25 + 16) = p_ConfigurationHandle[3 * v24 + 5];
            if ( a3 )
            {
              v27 = (_QWORD *)(v26 + *(_QWORD *)(a2 + 40) + 48LL);
              v27[1] = v27;
              *v27 = v27;
            }
            if ( *(char *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) + 8LL * v24) + 2LL) < 0 )
            {
              LOBYTE(v22) = a3;
              i = USBMidiInPipePrimer(a1, a2, v24, v22);
            }
            ++v24;
          }
          while ( v24 < *(_DWORD *)(a2 + 32) );
          v11 = Pool2;
        }
        goto LABEL_29;
      }
    }
    i = -1073741668;
    goto LABEL_29;
  }
  return (unsigned int)i;
}
