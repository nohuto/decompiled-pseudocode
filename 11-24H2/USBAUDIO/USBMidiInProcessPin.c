/*
 * XREFs of USBMidiInProcessPin @ 0x140009030
 * Callers:
 *     <none>
 * Callees:
 *     USBMidiInCopyEvent @ 0x140040954 (USBMidiInCopyEvent.c)
 */

__int64 __fastcall USBMidiInProcessPin(PKSPIN Pin)
{
  _QWORD *Context; // rbx
  unsigned int v2; // r12d
  int v3; // r13d
  __int64 v4; // rsi
  KSPIN_LOCK *v5; // r15
  PKSSTREAM_POINTER LeadingEdgeStreamPointer; // rbp
  KIRQL v7; // bl
  __int64 **v8; // r14
  int *v9; // rdi
  __int64 *v10; // rax
  int v11; // r8d
  KIRQL v12; // al
  __int64 *v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r8
  PUCHAR Data; // rcx
  int **v17; // rcx
  int v18; // r8d
  ULONG Remaining; // [rsp+78h] [rbp+10h] BYREF

  Context = Pin->Context;
  v2 = 0;
  v3 = 1;
  v4 = Context[19];
  v5 = Context + 14;
  LeadingEdgeStreamPointer = KsPinGetLeadingEdgeStreamPointer(Pin, KSSTREAM_POINTER_STATE_LOCKED);
  v7 = KeAcquireSpinLockRaiseToDpc(Context + 14);
  v8 = (__int64 **)(v4 + 64);
  while ( 1 )
  {
    v9 = (int *)*v8;
    if ( *v8 == (__int64 *)v8 )
      break;
    if ( !LeadingEdgeStreamPointer )
      goto LABEL_25;
    if ( *((__int64 ***)v9 + 1) != v8 || (v10 = *(__int64 **)v9, *(int **)(*(_QWORD *)v9 + 8LL) != v9) )
LABEL_18:
      __fastfail(3u);
    *v8 = v10;
    v10[1] = (__int64)v8;
    v3 = v9[7];
    KeReleaseSpinLock(v5, v7);
    if ( (*((_BYTE *)v9 + 25) & 0xF8) == 0xF8
      && (v11 = *(_DWORD *)(v4 + 48)) != 0
      && (KsStreamPointerAdvanceOffsetsAndUnlock(LeadingEdgeStreamPointer, 0, (v11 + 3) & 0xFFFFFFFC, 1u),
          *(_DWORD *)(v4 + 48) = 0,
          (LeadingEdgeStreamPointer = KsPinGetLeadingEdgeStreamPointer(Pin, KSSTREAM_POINTER_STATE_LOCKED)) == 0LL) )
    {
      v12 = KeAcquireSpinLockRaiseToDpc(v5);
      v13 = *v8;
      if ( (__int64 **)(*v8)[1] != v8 )
        goto LABEL_18;
      *(_QWORD *)v9 = v13;
      *((_QWORD *)v9 + 1) = v8;
      v13[1] = (__int64)v9;
      *v8 = (__int64 *)v9;
      v9 = 0LL;
      KeReleaseSpinLock(v5, v12);
    }
    else
    {
      v14 = *((_QWORD *)v9 + 2);
      v15 = *(_QWORD *)(v4 + 56);
      Data = LeadingEdgeStreamPointer->OffsetOut.Data;
      Remaining = LeadingEdgeStreamPointer->OffsetOut.Remaining;
      USBMidiInCopyEvent((_DWORD)Data, (_DWORD)v9 + 24, v15, v14, (__int64)&Remaining);
      if ( (v9[6] & 0xF) == 4 && Remaining + 3 <= LeadingEdgeStreamPointer->OffsetOut.Remaining )
      {
        *(_DWORD *)(v4 + 48) = Remaining;
      }
      else
      {
        KsStreamPointerAdvanceOffsetsAndUnlock(LeadingEdgeStreamPointer, 0, (Remaining + 3) & 0xFFFFFFFC, 1u);
        *(_DWORD *)(v4 + 48) = 0;
        LeadingEdgeStreamPointer = KsPinGetLeadingEdgeStreamPointer(Pin, KSSTREAM_POINTER_STATE_LOCKED);
      }
    }
    v7 = KeAcquireSpinLockRaiseToDpc(v5);
    if ( v9 )
    {
      v17 = *(int ***)(v4 + 88);
      if ( *v17 != (int *)(v4 + 80) )
        goto LABEL_18;
      *(_QWORD *)v9 = v4 + 80;
      *((_QWORD *)v9 + 1) = v17;
      *v17 = v9;
      *(_QWORD *)(v4 + 88) = v9;
    }
  }
  if ( LeadingEdgeStreamPointer )
  {
    if ( v3 || (v18 = *(_DWORD *)(v4 + 48)) == 0 )
    {
      KsStreamPointerUnlock(LeadingEdgeStreamPointer, 0);
    }
    else
    {
      KsStreamPointerAdvanceOffsetsAndUnlock(LeadingEdgeStreamPointer, 0, (v18 + 3) & 0xFFFFFFFC, 1u);
      *(_DWORD *)(v4 + 48) = 0;
    }
  }
  v2 = 259;
LABEL_25:
  *(_BYTE *)(v4 + 33) = 0;
  KeReleaseSpinLock(v5, v7);
  return v2;
}
