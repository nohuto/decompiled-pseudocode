/*
 * XREFs of SeLocateProcessImageName @ 0x1409E2920
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall SeLocateProcessImageName(PEPROCESS Process, PUNICODE_STRING *pImageFileName)
{
  __int64 v2; // r9
  NTSTATUS result; // eax
  unsigned __int64 LastRebalanceQpc; // rdi
  __int64 Pool2; // rax
  UNICODE_STRING *v7; // rbx

  result = -1073741275;
  if ( Process[3].Padding[5] && (_QWORD)xmmword_140F05780 )
    return guard_dispatch_icall_no_overrides(Process, pImageFileName, xmmword_140F05780, v2);
  LastRebalanceQpc = Process[1].LastRebalanceQpc;
  if ( LastRebalanceQpc )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    v7 = (UNICODE_STRING *)Pool2;
    if ( Pool2 )
    {
      *(_OWORD *)Pool2 = *(_OWORD *)LastRebalanceQpc;
      if ( *(_QWORD *)(Pool2 + 8) )
      {
        *(_QWORD *)(Pool2 + 8) = Pool2 + 16;
        memmove(
          (void *)(Pool2 + 16),
          *(const void **)(LastRebalanceQpc + 8),
          *(unsigned __int16 *)(LastRebalanceQpc + 2));
      }
      *pImageFileName = v7;
      return 0;
    }
    else
    {
      return -1073741801;
    }
  }
  return result;
}
