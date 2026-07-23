/*
 * XREFs of PpmEventInitializeEx @ 0x140C3625C
 * Callers:
 *     PpmEventInitialize @ 0x140C35428 (PpmEventInitialize.c)
 * Callees:
 *     EtwRegister @ 0x1409EA180 (EtwRegister.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 PpmEventInitializeEx()
{
  unsigned int v0; // ebx
  struct _EVENT_DATA_DESCRIPTOR *Pool2; // rdi
  NTSTATUS v2; // esi

  v0 = 0;
  Pool2 = (struct _EVENT_DATA_DESCRIPTOR *)ExAllocatePool2(0x40uLL, 0x28F0uLL, 0x704D5050uLL);
  if ( Pool2 )
  {
    v2 = EtwRegister(&PPM_ETW_PROVIDER, (PETWENABLECALLBACK)PpmEventTraceControlCallback, 0LL, &PpmEtwHandle);
    if ( v2 < 0 )
    {
      ExFreePoolWithTag(Pool2, 0x704D5050u);
      return (unsigned int)v2;
    }
    else
    {
      PpmEtwRegistered = 1;
      PpmEventPerfCheckData = Pool2;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v0;
}
