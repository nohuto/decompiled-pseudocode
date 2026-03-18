/*
 * XREFs of KeRegisterProcessorChangeCallback @ 0x14073C2D0
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     HalGetProcessorIdByNtNumber @ 0x1403B88E0 (HalGetProcessorIdByNtNumber.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     ExUnregisterCallback @ 0x1404ADD30 (ExUnregisterCallback.c)
 *     ExRegisterCallback @ 0x1404B3D50 (ExRegisterCallback.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExCreateCallback @ 0x140A64310 (ExCreateCallback.c)
 */

PVOID __stdcall KeRegisterProcessorChangeCallback(
        PPROCESSOR_CALLBACK_FUNCTION CallbackFunction,
        PVOID CallbackContext,
        ULONG Flags)
{
  unsigned int v5; // ebx
  char v6; // di
  PVOID v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r15d
  __int64 *v12; // r12
  unsigned int v13; // edi
  __int64 *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // r9
  int v17; // eax
  PVOID v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // r9
  NTSTATUS v21; // [rsp+20h] [rbp-59h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+28h] [rbp-51h] BYREF
  PVOID v23; // [rsp+30h] [rbp-49h]
  PVOID v24; // [rsp+38h] [rbp-41h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-29h] BYREF
  __int128 v27; // [rsp+80h] [rbp+7h] BYREF
  int v28; // [rsp+90h] [rbp+17h] BYREF

  v23 = CallbackContext;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v28 = 0;
  v5 = 0;
  CallbackObject = 0LL;
  v6 = Flags;
  DestinationString = 0LL;
  v27 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Callback\\ProcessorAdd");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v21 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 0);
  if ( v21 < 0 )
    return 0LL;
  ExAcquireFastMutex(&KiDynamicProcessorLock);
  v8 = ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)CallbackFunction, CallbackContext);
  v24 = v8;
  ObfDereferenceObject(CallbackObject);
  if ( v8 && (v6 & 1) != 0 )
  {
    v11 = KeNumberProcessors_0;
    v12 = KiProcessorBlock;
    v13 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v14 = KiProcessorBlock;
      while ( 1 )
      {
        v15 = *v14;
        *(_QWORD *)((char *)&v27 + 4) = v13;
        WORD6(v27) = *(unsigned __int8 *)(v15 + 208);
        BYTE14(v27) = *(_BYTE *)(v15 + 209);
        HalGetProcessorIdByNtNumber(v13, (__int64)&v28, v9, v10);
        LODWORD(v27) = 0;
        v21 = 0;
        guard_dispatch_icall_no_overrides(v23, &v27, &v21, v16);
        v17 = v21;
        if ( v21 < 0 )
          break;
        ++v13;
        ++v14;
        if ( v13 >= v11 )
          goto LABEL_11;
      }
    }
    else
    {
      v17 = v21;
LABEL_11:
      if ( v17 >= 0 )
      {
        LODWORD(v27) = 1;
        goto LABEL_14;
      }
    }
    LODWORD(v27) = 2;
    ExUnregisterCallback(v8);
    v17 = v21;
    v8 = 0LL;
    v24 = 0LL;
LABEL_14:
    DWORD2(v27) = v17;
    if ( v13 )
    {
      v18 = v23;
      do
      {
        v19 = *v12;
        DWORD1(v27) = v5;
        WORD6(v27) = *(unsigned __int8 *)(v19 + 208);
        BYTE14(v27) = *(_BYTE *)(v19 + 209);
        HalGetProcessorIdByNtNumber(v5, (__int64)&v28, v9, v10);
        guard_dispatch_icall_no_overrides(v18, &v27, &v21, v20);
        ++v5;
        ++v12;
      }
      while ( v5 < v13 );
      v8 = v24;
    }
  }
  KeReleaseGuardedMutex(&KiDynamicProcessorLock);
  return v8;
}
