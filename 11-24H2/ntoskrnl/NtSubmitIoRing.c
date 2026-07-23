/*
 * XREFs of NtSubmitIoRing @ 0x1404BEE40
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     IopIoRingSetupCompletionWait @ 0x1404BF100 (IopIoRingSetupCompletionWait.c)
 *     IopExceptionFilter @ 0x140593308 (IopExceptionFilter.c)
 *     IopIoRingGetAvailableCqSlots @ 0x140594750 (IopIoRingGetAvailableCqSlots.c)
 *     IopIoRingWaitForCompletionEvent @ 0x14059484C (IopIoRingWaitForCompletionEvent.c)
 *     IopProcessIoRingEntry @ 0x1406F5A58 (IopProcessIoRingEntry.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtSubmitIoRing(HANDLE IoRingHandle, ULONG Flags, ULONG WaitOperations, PLARGE_INTEGER Timeout)
{
  ULONG v4; // r13d
  KPROCESSOR_MODE PreviousMode; // r9
  PVOID v6; // rdi
  char v7; // r12
  __int64 v8; // rax
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  int v11; // r9d
  int *v12; // r15
  unsigned int v13; // r14d
  PVOID v14; // rsi
  int v15; // r14d
  char v16; // al
  int v17; // r13d
  unsigned int v18; // ebx
  unsigned __int64 v19; // rcx
  __int64 v20; // r8
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned int v24; // eax
  char v25; // [rsp+30h] [rbp-A8h] BYREF
  char v26; // [rsp+31h] [rbp-A7h]
  NTSTATUS v27; // [rsp+34h] [rbp-A4h]
  KPROCESSOR_MODE v28; // [rsp+39h] [rbp-9Fh]
  int v29; // [rsp+3Ch] [rbp-9Ch]
  PVOID Object; // [rsp+40h] [rbp-98h] BYREF
  unsigned int v31; // [rsp+48h] [rbp-90h]
  __int64 v32; // [rsp+50h] [rbp-88h] BYREF
  __int128 v33; // [rsp+60h] [rbp-78h]
  __int128 v34; // [rsp+70h] [rbp-68h]
  __int128 v35; // [rsp+80h] [rbp-58h]
  __int128 v36; // [rsp+90h] [rbp-48h]

  v4 = WaitOperations;
  v27 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v28 = PreviousMode;
  v6 = 0LL;
  v7 = 0;
  v32 = 0LL;
  v25 = 0;
  if ( (_WORD)Flags )
  {
    v27 = -1069154303;
    goto LABEL_25;
  }
  if ( WaitOperations && Timeout && PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Timeout < 0x7FFFFFFF0000LL )
      v8 = (__int64)Timeout;
    v32 = *(_QWORD *)v8;
    Timeout = (PLARGE_INTEGER)&v32;
  }
  Object = 0LL;
  v9 = ObReferenceObjectByHandle(IoRingHandle, 0, IoRingObjectType, PreviousMode, &Object, 0LL);
  v6 = Object;
  v27 = v9;
  if ( v9 >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)Object + 24, 1, 0) )
    {
      v27 = -1069154298;
      goto LABEL_25;
    }
    v7 = 1;
    v12 = (int *)*((_QWORD *)v6 + 8);
    v31 = *((_DWORD *)v6 + 6);
    v29 = v12[1];
    v13 = v29 - *v12;
    v14 = Object;
    if ( v13 > *((_DWORD *)Object + 5) )
    {
      v27 = -1069154297;
      goto LABEL_25;
    }
    if ( v4 )
    {
      v27 = IopIoRingSetupCompletionWait((_DWORD)Object, v13, v4, 0, (__int64)&v25);
      if ( v27 < 0 )
        goto LABEL_25;
    }
    else
    {
      v14 = Object;
      v22 = *((_QWORD *)Object + 14)
          + (unsigned int)(*(_DWORD *)(*((_QWORD *)Object + 10) + 4LL) - **((_DWORD **)Object + 10))
          - *((_QWORD *)Object + 15);
      v23 = *((unsigned int *)Object + 7);
      if ( v22 < v23 )
        v24 = v23 - v22;
      else
        v24 = 0;
      if ( v13 > v24 && v13 > (unsigned int)IopIoRingGetAvailableCqSlots(Object) )
      {
        v27 = -1069154296;
        goto LABEL_25;
      }
    }
    v15 = *v12;
    v16 = 0;
    v26 = 0;
    if ( v15 != v29 )
    {
      v17 = v29;
      v18 = v31;
      do
      {
        v19 = (unsigned __int64)(v15 & v18) << 6;
        v33 = *(_OWORD *)((char *)v12 + v19 + 16);
        v34 = *(_OWORD *)((char *)v12 + v19 + 32);
        v35 = *(_OWORD *)((char *)v12 + v19 + 48);
        v36 = *(_OWORD *)((char *)v12 + v19 + 64);
        *v12 = ++v15;
        IopProcessIoRingEntry(v14);
      }
      while ( v15 != v17 );
      v16 = v26;
      v4 = WaitOperations;
    }
    if ( v25 )
    {
      if ( !v16
        || (LOBYTE(v11) = 1, v27 = IopIoRingSetupCompletionWait((_DWORD)v14, 0, v4, v11, (__int64)&v25), v27 >= 0) )
      {
        if ( v25 )
        {
          v20 = Flags;
          LOBYTE(v20) = Flags & 1;
          LOBYTE(v10) = v28;
          v27 = IopIoRingWaitForCompletionEvent(v14, v10, v20, Timeout);
        }
      }
    }
  }
LABEL_25:
  if ( v7 )
    _InterlockedExchange((volatile __int32 *)v6 + 24, 0);
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  return v27;
}
