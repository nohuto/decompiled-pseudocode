/*
 * XREFs of USBMidiInPipePrimer @ 0x140039C68
 * Callers:
 *     USBHwSelectStreamingMIDIInterface @ 0x14003626C (USBHwSelectStreamingMIDIInterface.c)
 * Callees:
 *     USBHwAllocateAndBag @ 0x14002D688 (USBHwAllocateAndBag.c)
 *     USBParseGetMIDIStreamingEndpointDescriptor @ 0x140037D58 (USBParseGetMIDIStreamingEndpointDescriptor.c)
 *     USBMidiInInitializeUrbAndIrp @ 0x1400411B0 (USBMidiInInitializeUrbAndIrp.c)
 */

__int64 __fastcall USBMidiInPipePrimer(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v5; // edx
  int v8; // ebx
  __int64 v9; // r15
  __int64 v11; // r12
  unsigned int v12; // esi
  __int64 v13; // r10
  __int64 v14; // rdi
  _QWORD *v15; // rcx
  void *v16; // rdx
  NTSTATUS v17; // eax
  __int64 v18; // r14
  __int64 MIDIStreamingEndpointDescriptor; // rax
  int v20; // esi
  __int64 v21; // r14
  unsigned __int64 v22; // r8
  __int64 v23; // r15
  __int64 v24; // rsi
  PIRP Irp; // rax
  __int64 v26; // rax
  __int64 v27; // rbx
  _BYTE *v28; // r15
  unsigned int v29; // esi
  unsigned int v30; // r15d
  PIRP *v31; // r14
  NTSTATUS v32; // eax
  unsigned __int64 v33; // [rsp+20h] [rbp-48h]
  unsigned int v34; // [rsp+78h] [rbp+10h]
  int v35; // [rsp+80h] [rbp+18h]

  v5 = *(_DWORD *)(a2 + 32);
  v8 = -1073741438;
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 40LL);
  if ( a3 >= v5 )
    return 3221225485LL;
  LODWORD(v11) = 0;
  v12 = 0;
  if ( v5 )
  {
    v13 = *(_QWORD *)(a2 + 40);
    v14 = 168LL * a3;
    while ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) + 8LL * v12) + 2LL) != *(_BYTE *)(v13 + v14 + 2) )
    {
      if ( ++v12 >= v5 )
        return (unsigned int)v8;
    }
    *(_BYTE *)(v13 + v14 + 41) = 0;
    v8 = -1073741670;
    *(_BYTE *)(*(_QWORD *)(a2 + 40) + v14 + 72) = 0;
    *(_DWORD *)(*(_QWORD *)(a2 + 40) + v14 + 64) = 0;
    *(_DWORD *)(*(_QWORD *)(a2 + 40) + v14 + 68) = 0;
    *(_BYTE *)(*(_QWORD *)(a2 + 40) + v14 + 40) = 0;
    KeInitializeEvent((PRKEVENT)(v14 + *(_QWORD *)(a2 + 40) + 136LL), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(v14 + *(_QWORD *)(a2 + 40) + 112LL), NotificationEvent, 0);
    KeInitializeSpinLock((PKSPIN_LOCK)(v14 + *(_QWORD *)(a2 + 40) + 104LL));
    v15 = (_QWORD *)(v14 + *(_QWORD *)(a2 + 40) + 80LL);
    v15[1] = v15;
    *v15 = v15;
    if ( !a4 )
    {
      _mm_lfence();
      v26 = *(_QWORD *)(a2 + 40);
      v20 = *(_DWORD *)(v14 + v26 + 24);
      v21 = *(_QWORD *)(v14 + v26 + 160);
      if ( 16 * v20 )
      {
        v27 = *(_QWORD *)(v14 + v26 + 160);
        v11 = (unsigned int)(16 * v20);
        v28 = (_BYTE *)(v21 + 48);
        do
        {
          *v28 = 0;
          USBMidiInInitializeUrbAndIrp(v27);
          v27 += 64LL;
          v28 += 64;
          --v11;
        }
        while ( v11 );
      }
      v8 = v11;
LABEL_32:
      if ( v21 )
      {
        v29 = 16 * v20;
        v30 = v11;
        if ( v29 )
        {
          v31 = (PIRP *)(v21 + 24);
          while ( v8 >= 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v14 + *(_QWORD *)(a2 + 40) + 64));
            v32 = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 40), *v31);
            ++v30;
            v31 += 8;
            v8 = v32;
            if ( v30 >= v29 )
              goto LABEL_37;
          }
        }
        else
        {
LABEL_37:
          if ( v8 >= 0 )
            return (unsigned int)v11;
        }
      }
      return (unsigned int)v8;
    }
    *(_QWORD *)(v14 + *(_QWORD *)(a2 + 40) + 96) = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 40));
    v16 = *(void **)(*(_QWORD *)(a2 + 40) + v14 + 96);
    if ( v16 )
    {
      v17 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v16, (PFNKSFREE)IoFreeWorkItem);
      v18 = *(_QWORD *)(a2 + 40);
      v8 = v17;
      if ( v17 < 0 )
      {
        ExFreePool(*(PVOID *)(v14 + v18 + 96));
      }
      else
      {
        MIDIStreamingEndpointDescriptor = USBParseGetMIDIStreamingEndpointDescriptor(v9, a2, v12);
        if ( MIDIStreamingEndpointDescriptor )
        {
          *(_QWORD *)(v14 + v18 + 32) = MIDIStreamingEndpointDescriptor + 4;
          v20 = *(unsigned __int8 *)(MIDIStreamingEndpointDescriptor + 3);
        }
        else
        {
          *(_QWORD *)(v14 + v18 + 32) = 0LL;
          v20 = 0;
        }
        v8 = -1073741438;
        *(_DWORD *)(*(_QWORD *)(a2 + 40) + v14 + 24) = v20;
        if ( v20 )
        {
          v8 = USBHwAllocateAndBag(
                 (PVOID *)(v14 + *(_QWORD *)(a2 + 40) + 160LL),
                 16 * v20 * ((unsigned int)*(unsigned __int16 *)(*(_QWORD *)(a2 + 40) + v14) + 192),
                 64LL,
                 *(void **)(a1 + 8));
          if ( v8 >= 0 )
          {
            _mm_lfence();
            v21 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + v14 + 160);
            v22 = v21 + ((unsigned __int64)(unsigned int)(16 * v20) << 6) + (unsigned int)(v20 << 11);
            v34 = 16 * v20;
            v33 = v22;
            if ( 16 * v20 )
            {
              v35 = v20;
              v23 = v21 + 48;
              v24 = v21 + ((unsigned __int64)(unsigned int)(16 * v20) << 6);
              do
              {
                if ( v8 < 0 )
                  break;
                *(_QWORD *)(v23 - 32) = a1;
                *(_BYTE *)v23 = 0;
                *(_QWORD *)(v23 + 8) = v14 + *(_QWORD *)(a2 + 40);
                *(_QWORD *)(v23 - 16) = v24 + (unsigned int)((_DWORD)v11 << 7);
                *(_QWORD *)(v23 - 8) = v22 + (unsigned int)v11 * *(unsigned __int16 *)(*(_QWORD *)(a2 + 40) + v14);
                Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(a1 + 40) + 76LL), 0);
                *(_QWORD *)(v23 - 24) = Irp;
                if ( Irp )
                {
                  v8 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), Irp, (PFNKSFREE)IoFreeIrp);
                  if ( v8 < 0 )
                    IoFreeIrp(*(PIRP *)(v23 - 24));
                  else
                    USBMidiInInitializeUrbAndIrp(v21 + ((unsigned __int64)(unsigned int)v11 << 6));
                }
                else
                {
                  v8 = -1073741670;
                }
                v22 = v33;
                LODWORD(v11) = v11 + 1;
                v23 += 64LL;
              }
              while ( (unsigned int)v11 < v34 );
              v20 = v35;
            }
            LODWORD(v11) = 0;
            goto LABEL_32;
          }
        }
      }
    }
  }
  return (unsigned int)v8;
}
