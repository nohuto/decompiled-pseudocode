/*
 * XREFs of PiControlGetSetDeviceStatus @ 0x1408CED40
 * Callers:
 *     NtPlugPlayControl @ 0x1408CD400 (NtPlugPlayControl.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     RtlLookupElementGenericTableAvl @ 0x1403FA3F0 (RtlLookupElementGenericTableAvl.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     PnpRequestDeviceAction @ 0x140467508 (PnpRequestDeviceAction.c)
 *     PnpCancelDeviceActionRequest @ 0x1405A41C0 (PnpCancelDeviceActionRequest.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x1405A4270 (PnpRemoveDeviceActionRequestFromQueue.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1408CDC30 (PiControlCopyUserModeCallersBuffer.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1408CEFD8 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PnpDeleteDeviceActionRequest @ 0x1409ECFD4 (PnpDeleteDeviceActionRequest.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiControlGetSetDeviceStatus(__int64 a1, unsigned __int16 *a2, unsigned int a3, char a4)
{
  unsigned int v4; // ecx
  ULONG_PTR v5; // r15
  unsigned __int16 *v8; // r12
  const void *v9; // rbx
  unsigned int v10; // edi
  _QWORD *v11; // rbx
  _QWORD **v12; // rax
  __int64 v13; // rcx
  _DWORD *v14; // rdi
  int v15; // eax
  int v16; // r14d
  int v17; // eax
  int v18; // edi
  void *Pool2; // rax
  PVOID v21; // rcx
  ULONG v22; // edx
  int v23; // eax
  int v24; // eax
  NTSTATUS v25; // eax
  PVOID v26; // rsi
  unsigned __int16 *v27; // rax
  __int64 *v28; // rdx
  __int64 *v29; // rcx
  struct _KEVENT *p_Event; // rax
  PVOID v31; // [rsp+48h] [rbp-19h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-11h] BYREF
  __int64 v33; // [rsp+60h] [rbp-1h] BYREF
  unsigned __int16 *v34; // [rsp+68h] [rbp+7h]
  _QWORD Buffer[2]; // [rsp+70h] [rbp+Fh] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v37; // [rsp+D0h] [rbp+6Fh] BYREF

  v4 = *a2;
  v5 = a3;
  *(_OWORD *)P = 0LL;
  v31 = 0LL;
  LODWORD(v37) = 0;
  WORD1(P[0]) = v4;
  LOWORD(P[0]) = v4;
  v8 = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( (unsigned __int16)(v4 - 1) <= 0x18Fu && (v4 & 1) == 0 )
  {
    v9 = (const void *)*((_QWORD *)a2 + 1);
    v10 = v4;
    if ( a4 )
    {
      Pool2 = (void *)ExAllocatePool2(0x101uLL, v4, 0x20207050u);
      P[1] = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      v18 = PiControlCopyUserModeCallersBuffer((char *)Pool2, v9, v10, 2, a4, 1);
      if ( v18 < 0 )
      {
        v21 = P[1];
        v22 = 0;
LABEL_22:
        ExFreePoolWithTag(v21, v22);
        return (unsigned int)v18;
      }
    }
    else
    {
      P[1] = *((PVOID *)a2 + 1);
    }
    Buffer[0] = 0LL;
    Buffer[1] = P;
    v11 = 0LL;
    ExAcquireFastMutex(&PnpDeviceReferenceTableLock);
    v12 = (_QWORD **)RtlLookupElementGenericTableAvl(&PnpDeviceReferenceTable, Buffer);
    if ( v12 )
    {
      v11 = *v12;
      if ( *v12 )
      {
        if ( *(_WORD *)v11 == 3 && (v13 = *(_QWORD *)(v11[39] + 40LL)) != 0 && *(_QWORD **)(v13 + 32) == v11 )
          ObfReferenceObjectWithTag(v11, 0x53706E50u);
        else
          v11 = 0LL;
      }
    }
    KeReleaseGuardedMutex(&PnpDeviceReferenceTableLock);
    if ( a4 && P[1] )
      ExFreePoolWithTag(P[1], 0);
    if ( !v11 )
      return (unsigned int)-1073741810;
    v14 = *(_DWORD **)(v11[39] + 40LL);
    if ( !v14 )
    {
      v18 = -1073741810;
      goto LABEL_17;
    }
    if ( v14 == IopRootDeviceNode && *((_DWORD *)a2 + 4) )
    {
      v18 = -1073741790;
      goto LABEL_17;
    }
    v15 = *((_DWORD *)a2 + 4);
    v16 = *((_DWORD *)a2 + 7) & 1;
    if ( !v15 )
    {
      PiControlGetUserFlagsFromDeviceNode(v14, a2 + 10);
      *((_DWORD *)a2 + 6) = v14[101];
      v17 = v14[102];
      v18 = 0;
      *((_DWORD *)a2 + 8) = v17;
      goto LABEL_17;
    }
    v23 = v15 - 1;
    if ( v23 )
    {
      if ( v23 != 1 )
      {
        v18 = -1073741808;
        goto LABEL_17;
      }
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v24 = PnpRequestDeviceAction(v11, 1u, 0, 0LL, (__int64)&Event, (__int64)&v37, (__int64 *)&v31);
      v18 = v24;
    }
    else
    {
      if ( v16 )
      {
        v27 = (unsigned __int16 *)ExAllocatePool2(0x100uLL, v5, 0x55706E50u);
        v8 = v27;
        if ( !v27 )
        {
          v18 = -1073741670;
LABEL_17:
          ObfDereferenceObjectWithTag(v11, 0x53706E50u);
          if ( v18 >= 0 || !v8 )
            return (unsigned int)v18;
          v22 = 1433431632;
          v21 = v8;
          goto LABEL_22;
        }
        memmove(v27, a2, v5);
        v34 = v8;
      }
      else
      {
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v34 = a2;
      }
      v33 = 0LL;
      v28 = (__int64 *)&v31;
      if ( v16 )
        v28 = 0LL;
      v29 = &v37;
      if ( v16 )
        v29 = 0LL;
      p_Event = &Event;
      if ( v16 )
        p_Event = 0LL;
      v24 = PnpRequestDeviceAction(v11, 0xFu, 0, &v33, (__int64)p_Event, (__int64)v29, v28);
      v18 = v24;
      if ( v16 )
        goto LABEL_57;
    }
    if ( v24 >= 0 )
    {
      v25 = KeWaitForSingleObject(&Event, Executive, 0, 1u, 0LL);
      v26 = v31;
      v18 = v25;
      if ( v25 == 257 )
      {
        if ( (unsigned int)PnpRemoveDeviceActionRequestFromQueue(v31) )
        {
          v18 = -1073741536;
          goto LABEL_58;
        }
        PnpCancelDeviceActionRequest((__int64)v26);
        v18 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      }
      if ( !v18 )
        v18 = v37;
      goto LABEL_58;
    }
LABEL_57:
    v26 = v31;
LABEL_58:
    if ( v26 )
      PnpDeleteDeviceActionRequest(v26);
    goto LABEL_17;
  }
  return 3221225485LL;
}
