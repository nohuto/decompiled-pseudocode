/*
 * XREFs of NtQueryTimer @ 0x140A4AB50
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     KeQueryTimerDueTime @ 0x14048EAC4 (KeQueryTimerDueTime.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtQueryTimer(
        HANDLE TimerHandle,
        TIMER_INFORMATION_CLASS TimerInformationClass,
        PVOID TimerInformation,
        ULONG TimerInformationLength,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  PULONG v10; // rsi
  int v11; // r15d
  char v12; // r12
  __int64 v13; // rbx
  __int64 v14; // rdi
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF

  if ( TimerInformationClass )
    return -1073741821;
  if ( TimerInformationLength != 16 )
    return -1073741820;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)TimerInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = 0x7FFFFFFF0000LL;
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)TimerInformation < 0x7FFFFFFF0000LL )
      v9 = (__int64)TimerInformation;
    *(_BYTE *)v9 = *(_BYTE *)v9;
    *(_BYTE *)(v9 + 15) = *(_BYTE *)(v9 + 15);
    v10 = ReturnLength;
    if ( ReturnLength )
    {
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v8 = (__int64)ReturnLength;
      *(_DWORD *)v8 = *(_DWORD *)v8;
    }
  }
  else
  {
    v10 = ReturnLength;
  }
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(TimerHandle, 1u, ExTimerObjectType, PreviousMode, &Object, 0LL);
  if ( v11 >= 0 )
  {
    v12 = *((_BYTE *)Object + 4);
    v13 = MEMORY[0xFFFFF78000000008];
    v14 = KeQueryTimerDueTime((__int64)Object) - v13;
    ObfDereferenceObject(Object);
    if ( PreviousMode )
    {
      *((_BYTE *)TimerInformation + 8) = v12;
      *(_QWORD *)TimerInformation = v14;
      if ( v10 )
        *v10 = 16;
    }
    else
    {
      *((_BYTE *)TimerInformation + 8) = v12;
      *(_QWORD *)TimerInformation = v14;
      if ( v10 )
        *v10 = 16;
    }
  }
  return v11;
}
