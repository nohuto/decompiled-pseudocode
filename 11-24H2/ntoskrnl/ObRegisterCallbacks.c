/*
 * XREFs of ObRegisterCallbacks @ 0x1409C5AA0
 * Callers:
 *     <none>
 * Callees:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1404F3DC4 (MmVerifyCallbackFunctionCheckFlags.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ObpInsertCallbackByAltitude @ 0x1409C5CD4 (ObpInsertCallbackByAltitude.c)
 *     ObpUnlockObjectType @ 0x1409C64EC (ObpUnlockObjectType.c)
 *     ObpLockObjectTypeExclusive @ 0x1409C6564 (ObpLockObjectTypeExclusive.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall ObRegisterCallbacks(POB_CALLBACK_REGISTRATION CallbackRegistration, PVOID *RegistrationHandle)
{
  unsigned int v2; // ebx
  NTSTATUS inserted; // esi
  int OperationRegistrationCount; // eax
  unsigned int v7; // ebp
  __int64 Pool2; // rax
  _WORD *v9; // rdi
  unsigned int Length; // edx
  void *v12; // rcx
  unsigned int i; // ebp
  OB_OPERATION_REGISTRATION *v14; // rsi
  __int64 PreOperation; // rcx
  __int16 v16; // ax
  __int64 v17; // rax
  __int64 PostOperation; // rcx
  _WORD *v19; // rdx
  _QWORD *v20; // r14
  __int64 v21; // rcx
  _QWORD *v22; // rax

  v2 = 0;
  inserted = 0;
  if ( (CallbackRegistration->Version & 0xFF00) != 0x100 )
    return -1073741811;
  OperationRegistrationCount = CallbackRegistration->OperationRegistrationCount;
  if ( !(_WORD)OperationRegistrationCount )
    return -1073741811;
  v7 = (OperationRegistrationCount << 6) + CallbackRegistration->Altitude.Length + 32;
  Pool2 = ExAllocatePool2(0x100uLL, v7, 0x6C46624Fu);
  v9 = (_WORD *)Pool2;
  if ( !Pool2 )
    return -1073741670;
  *(_WORD *)Pool2 = 256;
  *(_QWORD *)(Pool2 + 8) = CallbackRegistration->RegistrationContext;
  Length = CallbackRegistration->Altitude.Length;
  *(_WORD *)(Pool2 + 18) = Length;
  *(_WORD *)(Pool2 + 16) = Length;
  v12 = (void *)(Pool2 + v7 - Length);
  *(_QWORD *)(Pool2 + 24) = v12;
  memmove(v12, CallbackRegistration->Altitude.Buffer, Length);
  for ( i = 0; i < CallbackRegistration->OperationRegistrationCount; ++i )
  {
    v14 = &CallbackRegistration->OperationRegistration[i];
    if ( !v14->Operations || ((*v14->ObjectType)->TypeInfo.ObjectTypeFlags & 0x40) == 0 )
    {
LABEL_11:
      inserted = -1073741811;
      break;
    }
    PreOperation = (__int64)v14->PreOperation;
    if ( PreOperation )
    {
      if ( !(unsigned int)MmVerifyCallbackFunctionCheckFlags(PreOperation, 32) )
        goto LABEL_21;
    }
    else if ( !v14->PostOperation )
    {
      goto LABEL_11;
    }
    PostOperation = (__int64)v14->PostOperation;
    if ( PostOperation && !(unsigned int)MmVerifyCallbackFunctionCheckFlags(PostOperation, 32) )
    {
LABEL_21:
      inserted = -1073741790;
      break;
    }
    v19 = &v9[32 * (unsigned __int64)i + 16];
    *((_QWORD *)v19 + 1) = v19;
    *(_QWORD *)v19 = v19;
    *((_QWORD *)v19 + 7) = 0LL;
    *((_DWORD *)v19 + 4) = v14->Operations;
    *((_QWORD *)v19 + 3) = v9;
    *((_QWORD *)v19 + 4) = *v14->ObjectType;
    *((_QWORD *)v19 + 5) = v14->PreOperation;
    *((_QWORD *)v19 + 6) = v14->PostOperation;
    inserted = ObpInsertCallbackByAltitude();
    if ( inserted < 0 )
      break;
    ++v9[1];
  }
  v16 = v9[1];
  if ( inserted < 0 )
  {
    if ( v16 )
    {
      do
      {
        v20 = &v9[32 * (unsigned __int64)v2 + 16];
        ObpLockObjectTypeExclusive(v20[4]);
        v21 = *v20;
        if ( *(_QWORD **)(*v20 + 8LL) != v20 || (v22 = (_QWORD *)v20[1], (_QWORD *)*v22 != v20) )
          __fastfail(3u);
        *v22 = v21;
        *(_QWORD *)(v21 + 8) = v22;
        ObpUnlockObjectType(v20[4]);
        ++v2;
      }
      while ( v2 < (unsigned __int16)v9[1] );
    }
    ExFreePoolWithTag(v9, 0x6C46624Fu);
  }
  else
  {
    if ( v16 )
    {
      do
      {
        v17 = v2++;
        *(_DWORD *)&v9[32 * v17 + 26] |= 1u;
      }
      while ( v2 < (unsigned __int16)v9[1] );
    }
    *RegistrationHandle = v9;
  }
  return inserted;
}
