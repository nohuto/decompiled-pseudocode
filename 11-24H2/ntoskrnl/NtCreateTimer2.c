/*
 * XREFs of NtCreateTimer2 @ 0x140A16910
 * Callers:
 *     NtCreateIRTimer @ 0x1407BB7E0 (NtCreateIRTimer.c)
 * Callees:
 *     KeInitializeTimer2 @ 0x1403ADE80 (KeInitializeTimer2.c)
 *     ExpExTimerAttributesAreValid @ 0x1403AE01C (ExpExTimerAttributesAreValid.c)
 *     KeInitializeIRTimer @ 0x1404BD12C (KeInitializeIRTimer.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     ExpCheckIRTimerAccess @ 0x140A16AEC (ExpCheckIRTimerAccess.c)
 */

NTSTATUS __cdecl NtCreateTimer2(
        PHANDLE TimerHandle,
        PVOID Reserved1,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Attributes,
        ACCESS_MASK DesiredAccess)
{
  __int64 v7; // rdx
  _DWORD *v8; // r10
  __int64 v9; // r11
  char PreviousMode; // si
  __int64 v11; // rcx
  NTSTATUS inserted; // ecx
  _QWORD *v13; // rbx
  NTSTATUS result; // eax
  __int64 v15; // [rsp+20h] [rbp-58h]
  unsigned __int16 v16[4]; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+58h] [rbp-20h] BYREF
  __int64 v18; // [rsp+60h] [rbp-18h] BYREF

  v18 = 0LL;
  Object = 0LL;
  if ( !ExpExTimerAttributesAreValid(Attributes) )
    return -1073741582;
  if ( v9 )
    return -1073741583;
  if ( v8 && (Attributes & 2) == 0 )
    return -1073741584;
  *(_DWORD *)v16 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)TimerHandle < 0x7FFFFFFF0000LL )
      v11 = (__int64)TimerHandle;
    *(_QWORD *)v11 = *(_QWORD *)v11;
    if ( v8 )
    {
      if ( (unsigned __int64)v8 < 0x7FFFFFFF0000LL )
        v7 = (__int64)v8;
      RtlCopyVolatileMemory(v16, (const void *)v7, 4uLL);
    }
  }
  else if ( v8 )
  {
    *(_DWORD *)v16 = *v8;
  }
  if ( (Attributes & 2) == 0
    || (LOBYTE(v7) = PreviousMode, result = ExpCheckIRTimerAccess(*(unsigned int *)v16, v7), result >= 0) )
  {
    inserted = ObCreateObjectEx(PreviousMode, ExpIRTimerObjectType, 0, PreviousMode, v15, 168, 0, 0, &Object, 0LL);
    if ( inserted >= 0 )
    {
      v13 = Object;
      if ( (Attributes & 2) != 0 )
        KeInitializeIRTimer((unsigned __int64)Object, 0LL, 0LL, v16, Attributes);
      else
        KeInitializeTimer2((__int64)Object);
      v13[17] = 0LL;
      *((_DWORD *)v13 + 40) = Attributes;
      inserted = ObInsertObjectEx((struct _FILE_OBJECT *)v13, 0LL, DesiredAccess, 0, 0, 0LL, (__int64)&v18);
      LODWORD(Object) = inserted;
      if ( inserted >= 0 )
        *TimerHandle = (HANDLE)v18;
    }
    return inserted;
  }
  return result;
}
