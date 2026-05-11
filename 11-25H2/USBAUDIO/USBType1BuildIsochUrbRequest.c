/*
 * XREFs of USBType1BuildIsochUrbRequest @ 0x140002940
 * Callers:
 *     USBType1ProcessStreamPointer @ 0x1400026F0 (USBType1ProcessStreamPointer.c)
 *     USBType1LockDelay @ 0x140041418 (USBType1LockDelay.c)
 * Callees:
 *     KsGateTurnInputOff @ 0x140003EE0 (KsGateTurnInputOff.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x14000E1B4 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     memmove @ 0x14001C740 (memmove.c)
 *     memset @ 0x14001CA40 (memset.c)
 */

__int64 __fastcall USBType1BuildIsochUrbRequest(PKSSTREAM_POINTER StreamPointer, __int64 (__fastcall *a2)())
{
  _QWORD *p_Entry; // rbx
  char v3; // r12
  PKSSTREAM_POINTER v4; // r10
  char *Context; // r14
  bool v6; // cl
  ULONG Remaining; // r15d
  __int64 v8; // r13
  NTSTATUS v9; // eax
  unsigned int v10; // esi
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  unsigned int v13; // r12d
  _QWORD *v14; // rax
  _WORD *v15; // rcx
  _WORD *v16; // rdx
  __int64 v17; // rbx
  ULONG v18; // edi
  int v19; // r8d
  unsigned int v20; // ecx
  KIRQL v21; // dl
  NTSTATUS v22; // eax
  bool v23; // zf
  __int64 (__fastcall *v24)(); // r15
  __int64 v25; // rax
  IRP *v26; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  int v28; // edx
  int v29; // r8d
  struct _IO_STACK_LOCATION *v30; // rax
  KIRQL v31; // al
  PVOID *v32; // r8
  KIRQL v34; // al
  __int64 v35; // rdi
  KIRQL v36; // al
  __int64 v37; // rdi
  void *v38; // rcx
  int v39; // eax
  KIRQL v40; // al
  __int64 *v41; // rdi
  __int64 v42; // r8
  _QWORD *v43; // rdx
  __int64 v44; // rax
  KIRQL v45; // bl
  struct _KSGATE *v46; // rax
  int Timeout; // [rsp+20h] [rbp-69h]
  int v48; // [rsp+28h] [rbp-61h]
  int v49; // [rsp+30h] [rbp-59h]
  int v50; // [rsp+38h] [rbp-51h]
  unsigned int v51; // [rsp+60h] [rbp-29h]
  _WORD *v52; // [rsp+68h] [rbp-21h]
  _QWORD *v53; // [rsp+70h] [rbp-19h]
  __int64 v54; // [rsp+78h] [rbp-11h]
  PKSPIN Pin; // [rsp+80h] [rbp-9h]
  _QWORD *Entry; // [rsp+88h] [rbp-1h] BYREF
  _QWORD **v57; // [rsp+90h] [rbp+7h]
  __int64 (__fastcall *v59)(); // [rsp+F8h] [rbp+6Fh]
  bool v60; // [rsp+100h] [rbp+77h]
  __int64 v61; // [rsp+100h] [rbp+77h]
  char v62; // [rsp+108h] [rbp+7Fh]

  v59 = a2;
  Pin = StreamPointer->Pin;
  p_Entry = &Entry;
  v3 = 0;
  v4 = StreamPointer;
  Context = (char *)Pin->Context;
  v6 = 0;
  v62 = 0;
  v60 = 0;
  Remaining = v4->OffsetIn.Remaining;
  v8 = *((_QWORD *)Context + 19);
  v54 = *((_QWORD *)Context + 2);
  v9 = 0;
  v10 = *(_DWORD *)(v8 + 8)
      * (*(_DWORD *)(v8 + 132) + (((*(_DWORD *)(v8 + 136) + *(_DWORD *)(v8 + 128)) & 0xFFFFC000) >= 0xFA0000));
  v57 = &Entry;
  v51 = 0;
  Entry = &Entry;
  if ( Remaining < v10 )
    goto LABEL_22;
  while ( v9 >= 0 && !v3 )
  {
    if ( a2 == USBType1MsCompleteCallback )
    {
      v12 = v4->Context;
      v13 = 1;
    }
    else
    {
      v11 = ExAllocateFromNPagedLookasideList(*(PNPAGED_LOOKASIDE_LIST *)(v8 + 144));
      v4 = StreamPointer;
      v12 = v11;
      v13 = 32;
      v9 = v51;
    }
    v53 = v12;
    if ( !v12 )
      goto LABEL_63;
    v14 = v57;
    v15 = (_WORD *)v12[3];
    v52 = v15;
    if ( *v57 != &Entry )
      goto LABEL_76;
    v12[1] = v57;
    *v12 = &Entry;
    *v14 = v12;
    v57 = (_QWORD **)v12;
    memset(v15, 0, 12LL * v13 + 152);
    v16 = v52;
    v52[1] = 10;
    *((_QWORD *)v52 + 3) = *(_QWORD *)(v8 + 64);
    *((_QWORD *)v52 + 5) = StreamPointer->OffsetIn.Data;
    if ( *(_BYTE *)(v8 + 112) )
      *((_DWORD *)v52 + 32) = *(_DWORD *)(v8 + 920);
    else
      *((_DWORD *)v52 + 8) = 4;
    v17 = 0LL;
    v18 = 0;
    do
    {
      if ( Remaining < v10 || v62 )
        break;
      Remaining -= v10;
      *(_DWORD *)&v16[6 * v17 + 70] = v18;
      v18 += v10;
      v19 = *(_DWORD *)(v8 + 136);
      v20 = (v19 + *(_DWORD *)(v8 + 128)) % 0xFA0000u;
      *(_DWORD *)(v8 + 128) = v20;
      v10 = *(_DWORD *)(v8 + 8) * (*(_DWORD *)(v8 + 132) + (((v19 + v20) & 0xFFFFC000) >= 0xFA0000));
      v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
      if ( *(_BYTE *)(v8 + 112) )
      {
        v23 = (*(_DWORD *)(v8 + 924))-- == 1;
        if ( v23 )
        {
          v39 = *(_DWORD *)(v8 + 916);
          ++*(_DWORD *)(v8 + 920);
          *(_DWORD *)(v8 + 924) = v39;
          v62 = 1;
        }
        else
        {
          ++*(_DWORD *)(v8 + 920);
          v62 = 0;
        }
      }
      KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v21);
      v16 = v52;
      v17 = (unsigned int)(v17 + 1);
    }
    while ( (unsigned int)v17 < v13 );
    *((_DWORD *)v16 + 33) = v17;
    *((_DWORD *)v16 + 9) = v18;
    *v16 = 12 * v17 + 152;
    a2 = v59;
    *((_DWORD *)v53 + 9) = v18;
    if ( v59 == USBType1MsCompleteCallback || (char *)v59 == (char *)&USBType1LockDelayCompleteCallback )
    {
      v4 = StreamPointer;
      v6 = v60;
      v53[5] = StreamPointer;
      StreamPointer->OffsetIn.Data += v18;
      StreamPointer->OffsetIn.Remaining -= v18;
      v9 = v51;
      goto LABEL_20;
    }
    v53[5] = 0LL;
    v9 = KsStreamPointerClone(StreamPointer, 0LL, 0, (PKSSTREAM_POINTER *)v53 + 5);
    v51 = v9;
    if ( v9 < 0 )
    {
      v4 = StreamPointer;
LABEL_63:
      v6 = v60;
      goto LABEL_19;
    }
    v22 = KsStreamPointerAdvanceOffsets(StreamPointer, v18, 0, 0);
    v4 = StreamPointer;
    v23 = v22 == 0;
    v9 = v51;
    v6 = v23;
    v60 = v23;
LABEL_19:
    a2 = v59;
LABEL_20:
    v3 = v62;
    if ( Remaining < v10 )
      goto LABEL_21;
  }
  v6 = v60;
LABEL_21:
  p_Entry = Entry;
LABEL_22:
  if ( (char *)a2 == (char *)&USBType1LockDelayCompleteCallback )
    goto LABEL_27;
  if ( !Remaining )
  {
    if ( v6 )
    {
      KsStreamPointerUnlock(v4, 0);
      goto LABEL_26;
    }
    goto LABEL_27;
  }
  if ( !v3 )
  {
    v35 = *((_QWORD *)Context + 19);
    v61 = v35;
    if ( a2 == USBType1MsCompleteCallback && Remaining == v4->OffsetIn.Count )
    {
      *(_DWORD *)(v35 + 140) = v10 - Remaining;
      v40 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
      v41 = (__int64 *)(v35 + 152);
      v42 = *v41;
      v43 = StreamPointer->Context;
      if ( *(__int64 **)(*v41 + 8) != v41 )
LABEL_76:
        __fastfail(3u);
      *v43 = v42;
      v43[1] = v41;
      *(_QWORD *)(v42 + 8) = v43;
      *v41 = (__int64)v43;
      KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v40);
      ExFreePool(StreamPointer);
    }
    else
    {
      KeWaitForSingleObject((PVOID)(v35 + 168), Executive, 0, 0, 0LL);
      v36 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
      v37 = *(_QWORD *)(v35 + 152);
      KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v36);
      v38 = *(void **)(v37 + 48);
      *(_DWORD *)(v37 + 36) = Remaining;
      memmove(v38, StreamPointer->OffsetIn.Data, Remaining);
      *(_DWORD *)(v61 + 140) = v10 - Remaining;
      if ( v59 != USBType1MsCompleteCallback )
        KsStreamPointerAdvanceOffsetsAndUnlock(StreamPointer, Remaining, 0, 0);
    }
LABEL_26:
    p_Entry = Entry;
LABEL_27:
    v24 = v59;
    goto LABEL_28;
  }
  v24 = v59;
  if ( v59 != USBType1MsCompleteCallback )
  {
    KsStreamPointerUnlock(v4, 0);
    p_Entry = Entry;
  }
LABEL_28:
  while ( p_Entry != &Entry && p_Entry[5] )
  {
    if ( (_QWORD **)p_Entry[1] != &Entry )
      goto LABEL_76;
    v25 = *p_Entry;
    if ( *(_QWORD **)(*p_Entry + 8LL) != p_Entry )
      goto LABEL_76;
    Entry = (_QWORD *)*p_Entry;
    *(_QWORD *)(v25 + 8) = &Entry;
    v26 = (IRP *)p_Entry[2];
    CurrentStackLocation = v26->Tail.Overlay.CurrentStackLocation;
    IoInitializeIrp(v26, 72 * *(char *)(*(_QWORD *)(v54 + 40) + 76LL) + 208, *(_BYTE *)(*(_QWORD *)(v54 + 40) + 76LL));
    CurrentStackLocation[-1].MajorFunction = 15;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = p_Entry[3];
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
    v30 = v26->Tail.Overlay.CurrentStackLocation;
    v30[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)v24;
    v30[-1].Context = p_Entry;
    v30[-1].Control = -32;
    _InterlockedIncrement((volatile signed __int32 *)Context + 14);
    if ( (char *)v24 != (char *)&USBType1LockDelayCompleteCallback )
    {
      v31 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
      *((_QWORD *)Context + 10) += *((unsigned int *)p_Entry + 9);
      v32 = (PVOID *)*((_QWORD *)Context + 9);
      if ( *v32 != Context + 64 )
        goto LABEL_76;
      *p_Entry = Context + 64;
      p_Entry[1] = v32;
      *v32 = p_Entry;
      *((_QWORD *)Context + 9) = p_Entry;
      KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v31);
    }
    LOBYTE(v28) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    LOBYTE(v29) = *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
               && LOWORD(WPP_GLOBAL_Control->DeviceType);
    if ( (_BYTE)v28 || (_BYTE)v29 )
      WPP_RECORDER_AND_TRACE_SF_qqd(
        WPP_GLOBAL_Control->AttachedDevice,
        v28,
        v29,
        WPP_GLOBAL_Control->DeviceExtension,
        Timeout,
        v48,
        v49,
        v50,
        (char)p_Entry,
        (char)StreamPointer,
        *((_DWORD *)Context + 14));
    if ( IofCallDriver(*(PDEVICE_OBJECT *)(v54 + 40), (PIRP)p_Entry[2]) >= 0
      && (char *)v24 != (char *)&USBType1LockDelayCompleteCallback )
    {
      v34 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
      Context[45] = 1;
      KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v34);
    }
    p_Entry = Entry;
    v51 = 0;
  }
  while ( p_Entry != &Entry )
  {
    if ( (_QWORD **)p_Entry[1] != &Entry )
      goto LABEL_76;
    v44 = *p_Entry;
    if ( *(_QWORD **)(*p_Entry + 8LL) != p_Entry )
      goto LABEL_76;
    Entry = (_QWORD *)*p_Entry;
    *(_QWORD *)(v44 + 8) = &Entry;
    ExFreeToNPagedLookasideList(*(PNPAGED_LOOKASIDE_LIST *)(v8 + 144), p_Entry);
    p_Entry = Entry;
  }
  if ( v3 )
  {
    v45 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
    Context[44] = 1;
    v46 = KsPinGetAndGate(Pin);
    KsGateTurnInputOff(v46);
    KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v45);
  }
  return v51;
}
