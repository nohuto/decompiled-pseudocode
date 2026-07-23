/*
 * XREFs of FsRtlCancellableWaitForSingleObject @ 0x140A0A800
 * Callers:
 *     FsRtlpWaitOnIrp @ 0x1402B72F8 (FsRtlpWaitOnIrp.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeQueryTimeIncrement @ 0x14043CEE0 (KeQueryTimeIncrement.c)
 */

NTSTATUS __stdcall FsRtlCancellableWaitForSingleObject(PVOID Object, PLARGE_INTEGER Timeout, PIRP Irp)
{
  LONGLONG QuadPart; // rbx
  __int64 v7; // rbx
  NTSTATUS result; // eax
  __int64 v9; // rdi

  QuadPart = 0LL;
  if ( Timeout )
  {
    QuadPart = Timeout->QuadPart;
    if ( Timeout->QuadPart < 0 )
    {
      v7 = MEMORY[0xFFFFF78000000320];
      QuadPart = v7 - Timeout->QuadPart / KeQueryTimeIncrement();
    }
  }
  while ( 1 )
  {
    result = KeWaitForSingleObject(Object, Executive, 0, 1u, Timeout);
    if ( result != 257 )
      break;
    if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0 )
      return -1073741749;
    if ( Irp && Irp->Cancel )
      return -1073741536;
    if ( Timeout )
    {
      if ( Timeout->QuadPart >= 0 )
      {
        if ( MEMORY[0xFFFFF78000000014] >= QuadPart )
          return 258;
      }
      else
      {
        v9 = MEMORY[0xFFFFF78000000320];
        if ( MEMORY[0xFFFFF78000000320] >= QuadPart )
          return 258;
        Timeout->QuadPart = -((QuadPart - v9) * KeQueryTimeIncrement());
      }
    }
  }
  return result;
}
