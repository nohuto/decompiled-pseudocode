/*
 * XREFs of WheaGetCurrentProcessName @ 0x14065B440
 * Callers:
 *     KiMcheckAlternateReturn @ 0x1405C73B0 (KiMcheckAlternateReturn.c)
 *     WheaTerminateProcess @ 0x1407C7C20 (WheaTerminateProcess.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14045BBA0 (RtlInitAnsiString.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall WheaGetCurrentProcessName(void **a1, unsigned int *a2)
{
  unsigned int v2; // ebx
  char *Buffer; // rdx
  __int64 result; // rax
  STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a2;
  DestinationString = 0LL;
  RtlInitAnsiString(&DestinationString, (PCSZ)&KeGetCurrentThread()->ApcState.Process[1].SecureState);
  Buffer = DestinationString.Buffer;
  if ( DestinationString.Buffer )
  {
    result = DestinationString.Length;
  }
  else
  {
    Buffer = "(Unknown)";
    result = 10LL;
  }
  *a2 = result;
  if ( v2 )
  {
    if ( (unsigned int)result > v2 )
    {
      *a2 = v2;
      LODWORD(result) = v2;
    }
    return (__int64)memmove(*a1, Buffer, (unsigned int)result);
  }
  else
  {
    *a1 = Buffer;
  }
  return result;
}
