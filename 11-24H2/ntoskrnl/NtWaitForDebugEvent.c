/*
 * XREFs of NtWaitForDebugEvent @ 0x140A2E240
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     DbgkpOpenHandles @ 0x140A2E57C (DbgkpOpenHandles.c)
 *     DbgkpConvertKernelToUserStateChange @ 0x140A2E698 (DbgkpConvertKernelToUserStateChange.c)
 */

NTSTATUS __cdecl NtWaitForDebugEvent(
        HANDLE DebugObjectHandle,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PDBGUI_WAIT_STATE_CHANGE WaitStateChange)
{
  BOOLEAN v5; // r14
  void *v7; // r12
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v9; // rdx
  NTSTATUS result; // eax
  void *v11; // r15
  char *v12; // rdi
  NTSTATUS v13; // eax
  NTSTATUS v14; // ebx
  unsigned __int64 *v15; // rsi
  char v16; // r14
  __int64 **v17; // r8
  __int64 *i; // rcx
  __int64 *v19; // rbx
  __int64 *j; // rdx
  bool v21; // sf
  LONGLONG QuadPart; // [rsp+38h] [rbp-110h] BYREF
  PVOID Object; // [rsp+40h] [rbp-108h] BYREF
  __int64 v24; // [rsp+48h] [rbp-100h]
  _OWORD v25[11]; // [rsp+60h] [rbp-E8h] BYREF
  unsigned __int64 v26; // [rsp+110h] [rbp-38h]

  v5 = Alertable;
  v7 = 0LL;
  QuadPart = 0LL;
  v24 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset_0(v25, 0, 0xB8uLL);
  v9 = 0x7FFFFFFF0000LL;
  if ( Timeout )
  {
    QuadPart = Timeout->QuadPart;
    Timeout = (PLARGE_INTEGER)&QuadPart;
    v24 = MEMORY[0xFFFFF78000000014];
  }
  if ( PreviousMode )
  {
    if ( (unsigned __int64)WaitStateChange < 0x7FFFFFFF0000LL )
      v9 = (__int64)WaitStateChange;
    *(_BYTE *)v9 = *(_BYTE *)v9;
    *(_BYTE *)(v9 + 183) = *(_BYTE *)(v9 + 183);
  }
  Object = 0LL;
  result = ObReferenceObjectByHandle(DebugObjectHandle, 1u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v11 = 0LL;
    v12 = (char *)Object;
    while ( 1 )
    {
      v13 = KeWaitForSingleObject(v12, Executive, PreviousMode, v5, Timeout);
      v14 = v13;
      if ( v13 <= -1 || v13 == 192 || (unsigned int)(v13 - 257) <= 1 )
        break;
      v16 = 0;
      ExAcquireFastMutex((PKGUARDED_MUTEX)(v12 + 24));
      if ( (*((_DWORD *)v12 + 24) & 1) != 0 )
      {
        v14 = -1073740972;
      }
      else
      {
        v17 = (__int64 **)(v12 + 80);
        for ( i = (__int64 *)*((_QWORD *)v12 + 10); ; i = (__int64 *)*i )
        {
          if ( i == (__int64 *)v17 )
          {
            KeResetEvent((PRKEVENT)v12);
            goto LABEL_26;
          }
          v19 = i;
          if ( (*((_DWORD *)i + 19) & 5) == 0 )
          {
            v16 = 1;
            for ( j = *v17; j != i; j = (__int64 *)*j )
            {
              if ( i[5] == j[5] )
              {
                *((_DWORD *)i + 19) |= 4u;
                i[10] = 0LL;
                v16 = 0;
                break;
              }
            }
            if ( v16 )
              break;
          }
        }
        v11 = (void *)i[7];
        v7 = (void *)i[8];
        ObfReferenceObjectWithTag(v7, 0x4F676244u);
        ObfReferenceObjectWithTag(v11, 0x4F676244u);
        DbgkpConvertKernelToUserStateChange(v25, v19);
        *((_DWORD *)v19 + 19) |= 1u;
LABEL_26:
        v14 = 0;
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 24));
      if ( v14 < 0 )
        break;
      if ( v16 )
      {
        DbgkpOpenHandles(v25, v11, v7);
        ObfDereferenceObjectWithTag(v7, 0x4F676244u);
        ObfDereferenceObjectWithTag(v11, 0x4F676244u);
        break;
      }
      v5 = Alertable;
      if ( QuadPart < 0 )
      {
        v21 = MEMORY[0xFFFFF78000000014] - v24 + QuadPart < 0;
        QuadPart += MEMORY[0xFFFFF78000000014] - v24;
        v24 = MEMORY[0xFFFFF78000000014];
        v12 = (char *)Object;
        if ( !v21 )
        {
          v14 = 258;
          break;
        }
      }
    }
    ObfDereferenceObject(v12);
    *(_OWORD *)&WaitStateChange->NewState = v25[0];
    *(_OWORD *)&WaitStateChange->AppClientId.UniqueThread = v25[1];
    *(_OWORD *)(&WaitStateChange->StateInfo.UnloadDll + 1) = v25[2];
    *(_OWORD *)(&WaitStateChange->StateInfo.UnloadDll + 3) = v25[3];
    *(_OWORD *)(&WaitStateChange->StateInfo.UnloadDll + 5) = v25[4];
    *(_OWORD *)(&WaitStateChange->StateInfo.UnloadDll + 7) = v25[5];
    *(_OWORD *)(&WaitStateChange->StateInfo.UnloadDll + 9) = v25[6];
    v15 = &WaitStateChange->StateInfo.Exception.ExceptionRecord.ExceptionInformation[9];
    *((_OWORD *)v15 - 1) = v25[7];
    *(_OWORD *)v15 = v25[8];
    *((_OWORD *)v15 + 1) = v25[9];
    *((_OWORD *)v15 + 2) = v25[10];
    v15[6] = v26;
    return v14;
  }
  return result;
}
