/*
 * XREFs of PspWaitForUsermodeExit @ 0x14076941C
 * Callers:
 *     PspWaitOnAllProcessesJobCallback @ 0x140768BE0 (PspWaitOnAllProcessesJobCallback.c)
 *     PsShutdownSystem @ 0x140768C94 (PsShutdownSystem.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     PsGetNextProcessThread @ 0x1408BD940 (PsGetNextProcessThread.c)
 */

__int64 __fastcall PspWaitForUsermodeExit(__int64 a1)
{
  __int64 i; // rdx
  __int64 result; // rax
  void *v4; // rbx

LABEL_1:
  for ( i = 0LL; ; i = result )
  {
    result = PsGetNextProcessThread(a1, i);
    v4 = (void *)result;
    if ( !result )
      break;
    if ( (*(_DWORD *)(result + 116) & 0x400) == 0 && !*(_BYTE *)(result + 4) )
    {
      ObfReferenceObjectWithTag((PVOID)result, 0x65547350u);
      ObfDereferenceObjectWithTag(v4, 0x6E457350u);
      KeWaitForSingleObject(v4, Executive, 0, 0, 0LL);
      ObfDereferenceObjectWithTag(v4, 0x65547350u);
      goto LABEL_1;
    }
  }
  return result;
}
