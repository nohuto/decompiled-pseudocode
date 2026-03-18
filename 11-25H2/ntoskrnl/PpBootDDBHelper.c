/*
 * XREFs of PpBootDDBHelper @ 0x140718DF0
 * Callers:
 *     PpInitializeBootDDB @ 0x140C12D78 (PpInitializeBootDDB.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     PnpLogEvent @ 0x140717360 (PnpLogEvent.c)
 *     SdbInitDatabaseInMemory @ 0x14082B8E8 (SdbInitDatabaseInMemory.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpBootDDBHelper(void *Src, size_t Size, _QWORD *a3, __int64 *a4)
{
  size_t v6; // rdi
  void *Pool2; // rax
  void *v9; // rbx
  __int64 inited; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  *a3 = 0LL;
  *a4 = 0LL;
  v6 = (unsigned int)Size;
  if ( !(_DWORD)Size || !Src )
  {
    if ( (PiLoggedErrorEventsMask & 1) == 0 )
      PiLoggedErrorEventsMask |= 1u;
    return 3221225473LL;
  }
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v9 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, Src, v6);
    inited = SdbInitDatabaseInMemory(v9, (unsigned int)v6);
    if ( inited )
    {
      *a3 = v9;
      *a4 = inited;
      return 0LL;
    }
    ExFreePoolWithTag(v9, 0);
    if ( (PiLoggedErrorEventsMask & 4) == 0 )
    {
      PiLoggedErrorEventsMask |= 4u;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"INIT DATABASE FAILED");
      PnpLogEvent((const void **)&DestinationString, 0LL, -1073740947, 0LL, 0);
    }
    return 3221225473LL;
  }
  if ( (PiLoggedErrorEventsMask & 2) == 0 )
  {
    PiLoggedErrorEventsMask |= 2u;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"OUT OF MEMORY");
    PnpLogEvent((const void **)&DestinationString, 0LL, -1073740947, 0LL, 0);
  }
  return 3221225626LL;
}
