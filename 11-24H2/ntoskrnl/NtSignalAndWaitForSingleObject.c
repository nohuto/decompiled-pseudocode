/*
 * XREFs of NtSignalAndWaitForSingleObject @ 0x1403B1560
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseMutantEx @ 0x1402DEAA0 (KeReleaseMutantEx.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     KeReleaseSemaphoreEx @ 0x1403AB4BC (KeReleaseSemaphoreEx.c)
 *     KeAreAllApcsDisabled @ 0x1403B2000 (KeAreAllApcsDisabled.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1403B2040 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ObpRemoveObjectRoutine @ 0x140842AF0 (ObpRemoveObjectRoutine.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140847A60 (ObReferenceObjectByHandleWithTag.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409C2750 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409C2898 (ObpDeregisterObject.c)
 */

NTSTATUS __cdecl NtSignalAndWaitForSingleObject(
        HANDLE SignalHandle,
        HANDLE WaitHandle,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  int v6; // esi
  KPROCESSOR_MODE PreviousMode; // bl
  LARGE_INTEGER *v8; // r15
  NTSTATUS result; // eax
  char *v10; // rdi
  struct _OBJECT_TYPE *v11; // r8
  __int64 DefaultObject; // r14
  POBJECT_TYPE *v13; // rax
  unsigned __int8 v14; // r14
  signed __int64 v15; // rax
  bool v16; // cc
  signed __int64 v17; // rax
  char *v18; // rdi
  signed __int64 v19; // rbx
  signed __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  NTSTATUS v24; // eax
  NTSTATUS v25; // [rsp+40h] [rbp-78h]
  __int64 v26; // [rsp+48h] [rbp-70h]
  PVOID SystemArgument1; // [rsp+50h] [rbp-68h] BYREF
  PVOID Object; // [rsp+58h] [rbp-60h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v30[3]; // [rsp+68h] [rbp-50h] BYREF
  unsigned __int8 *v31; // [rsp+80h] [rbp-38h]

  v6 = 0;
  HandleInformation = 0LL;
  SystemArgument1 = 0LL;
  v30[0] = 0LL;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = Timeout;
  if ( Timeout && PreviousMode )
  {
    v21 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Timeout < 0x7FFFFFFF0000LL )
      v21 = (__int64)Timeout;
    v30[0] = *(_QWORD *)v21;
    v8 = (LARGE_INTEGER *)v30;
  }
  result = ObReferenceObjectByHandleWithTag(
             SignalHandle,
             0,
             0LL,
             PreviousMode,
             0x7457624Fu,
             &SystemArgument1,
             &HandleInformation);
  if ( result >= 0 )
  {
    v25 = ObReferenceObjectByHandleWithTag(WaitHandle, 0x100000u, 0LL, PreviousMode, 0x7457624Fu, &Object, 0LL);
    if ( v25 < 0 )
    {
LABEL_16:
      v18 = (char *)SystemArgument1 - 48;
      if ( ObpTraceFlags )
        ObpPushStackInfo((__int64)SystemArgument1 - 48, 0, 1u, 0x7457624Fu);
      v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)v18, 0xFFFFFFFFFFFFFFFFuLL);
      v16 = v19 <= 1;
      v20 = v19 - 1;
      if ( v16 )
      {
        if ( *((_QWORD *)v18 + 1) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v18[24] ^ (unsigned __int64)BYTE1(v18)],
            (ULONG_PTR)SystemArgument1,
            1uLL,
            *((_QWORD *)v18 + 1));
        if ( v20 < 0 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)SystemArgument1, 2uLL, v20);
        if ( KeAreAllApcsDisabled() )
        {
          ObpDeferObjectDeletion(v18);
        }
        else
        {
          v22 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v18);
          if ( v22 )
            ObpHandleRevocationBlockRemoveObject(v22);
          LOBYTE(v6) = ObpTraceFlags != 0;
          if ( v6 )
            ObpDeregisterObject(v18);
          ObpRemoveObjectRoutine(v18, 0LL);
        }
      }
      return v25;
    }
    v10 = (char *)Object - 48;
    v30[2] = (char *)Object - 48;
    v26 = (unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
    v31 = (unsigned __int8 *)Object - 24;
    v11 = (struct _OBJECT_TYPE *)ObTypeIndexTable[*v31 ^ v26 ^ (unsigned __int8)ObHeaderCookie];
    DefaultObject = (__int64)v11->DefaultObject;
    if ( (DefaultObject & 1) == 0 )
    {
      if ( DefaultObject < 0 )
        goto LABEL_7;
      goto LABEL_6;
    }
    if ( (DefaultObject & 2) != 0 )
    {
      if ( (*(_DWORD *)((_BYTE *)Object + v11->TypeInfo.WaitObjectFlagOffset) & v11->TypeInfo.WaitObjectFlagMask) != v11->TypeInfo.WaitObjectFlagMask )
      {
        DefaultObject -= 3LL;
LABEL_6:
        DefaultObject += (__int64)Object;
        goto LABEL_7;
      }
      DefaultObject = *(_QWORD *)((char *)Object + v11->TypeInfo.WaitObjectPointerOffset);
    }
    else
    {
      DefaultObject = *(_QWORD *)((char *)Object + DefaultObject - 1);
    }
LABEL_7:
    if ( ExCrossVmMutantObjectType != v11 )
    {
      v13 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)SystemArgument1
                                                                                                - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)SystemArgument1 - 48) >> 8)];
      v25 = -1073741790;
      if ( v13 == ExEventObjectType )
      {
        if ( !PreviousMode || (~LOBYTE(HandleInformation.GrantedAccess) & 2) == 0 )
        {
          KeSetEvent((PRKEVENT)SystemArgument1, 1, 1u);
LABEL_12:
          v25 = KeWaitForSingleObject((PVOID)DefaultObject, UserRequest, PreviousMode, Alertable, v8);
          v14 = v26;
LABEL_13:
          if ( ObpTraceFlags )
            ObpPushStackInfo((__int64)v10, 0, 1u, 0x7457624Fu);
          v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL);
          v16 = v15 <= 1;
          v17 = v15 - 1;
          if ( v16 )
          {
            if ( *((_QWORD *)v10 + 1) )
              KeBugCheckEx(
                0x18u,
                ObTypeIndexTable[*v31 ^ (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)v14],
                (ULONG_PTR)Object,
                1uLL,
                *((_QWORD *)v10 + 1));
            if ( v17 < 0 )
              KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v17);
            if ( KeAreAllApcsDisabled() )
            {
              ObpDeferObjectDeletion(v10);
            }
            else
            {
              v23 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v10);
              if ( v23 )
                ObpHandleRevocationBlockRemoveObject(v23);
              if ( ObpTraceFlags )
                ObpDeregisterObject(v10);
              ObpRemoveObjectRoutine(v10, 0LL);
            }
          }
          goto LABEL_16;
        }
LABEL_62:
        v14 = v26;
        goto LABEL_13;
      }
      if ( v13 == (POBJECT_TYPE *)ExMutantObjectType )
      {
        v24 = KeReleaseMutantEx((ULONG_PTR)SystemArgument1, 1u, 2, 0LL);
        v25 = v24;
        if ( v24 != 128 && v24 != -1073741754 )
          goto LABEL_12;
        goto LABEL_62;
      }
      if ( v13 == ExSemaphoreObjectType )
      {
        if ( !PreviousMode || (~LOBYTE(HandleInformation.GrantedAccess) & 2) == 0 )
        {
          v25 = KeReleaseSemaphoreEx((volatile signed __int32 *)SystemArgument1, 1LL, 1, (__int64)Object, 1u, 0LL);
          if ( v25 != -1073741753 )
            goto LABEL_12;
        }
        goto LABEL_62;
      }
    }
    v25 = -1073741788;
    goto LABEL_62;
  }
  return result;
}
