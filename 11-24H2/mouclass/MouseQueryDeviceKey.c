/*
 * XREFs of MouseQueryDeviceKey @ 0x1C0010500
 * Callers:
 *     MouseClassGetWaitWakeEnableState @ 0x1C0010360 (MouseClassGetWaitWakeEnableState.c)
 * Callees:
 *     memmove @ 0x1C0006C00 (memmove.c)
 */

__int64 __fastcall MouseQueryDeviceKey(HANDLE KeyHandle, __int64 a2, void *a3, ULONG a4)
{
  __int64 v6; // rdx
  unsigned int *Pool2; // rdi
  NTSTATUS v8; // ebx
  unsigned int v9; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  ULONG Length; // [rsp+68h] [rbp+20h] BYREF

  Length = a4;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"WaitWakeEnabled");
  v6 = (unsigned int)DestinationString.MaximumLength + 28;
  if ( (unsigned int)v6 < (unsigned int)DestinationString.MaximumLength + 24 )
    return 3221225621LL;
  Length = DestinationString.MaximumLength + 28;
  Pool2 = (unsigned int *)ExAllocatePool2(256LL, v6, 1131769677LL);
  if ( Pool2 )
  {
    v8 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, Pool2, Length, &Length);
    if ( v8 >= 0 )
    {
      v9 = Pool2[3];
      if ( v9 > 4 )
        v8 = -1073741789;
      else
        memmove(a3, (char *)Pool2 + Pool2[2], v9);
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v8;
}
