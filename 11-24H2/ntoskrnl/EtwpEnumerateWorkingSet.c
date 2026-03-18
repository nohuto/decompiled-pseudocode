/*
 * XREFs of EtwpEnumerateWorkingSet @ 0x1407B0A90
 * Callers:
 *     EtwpProcessEnumCallback @ 0x14094ACC0 (EtwpProcessEnumCallback.c)
 * Callees:
 *     MiGetWorkingSetInfoEx @ 0x140267310 (MiGetWorkingSetInfoEx.c)
 *     EtwLogPfnInfoRundown @ 0x1407B08DC (EtwLogPfnInfoRundown.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall EtwpEnumerateWorkingSet(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *result; // rax
  __int64 *v6; // r9

  v4 = 4096LL;
  while ( 1 )
  {
    result = *(_QWORD **)(a2 + 48);
    if ( !result )
    {
      *(_QWORD *)(a2 + 56) = 32 * v4 + 16;
      result = (_QWORD *)ExAllocatePool2(0x40uLL);
      *(_QWORD *)(a2 + 48) = result;
      if ( !result )
        break;
    }
    result = (_QWORD *)MiGetWorkingSetInfoEx(a1 + 1024, 0, result, *(_QWORD *)(a2 + 56));
    v6 = *(__int64 **)(a2 + 48);
    if ( (_DWORD)result != -1073741820 )
    {
      if ( (int)result >= 0 )
      {
        if ( v6[1] )
          return (_QWORD *)EtwLogPfnInfoRundown(
                             a1,
                             *(_QWORD *)(*(_QWORD *)(a2 + 32) + 1360LL),
                             **(_DWORD **)(a2 + 32),
                             v6);
      }
      return result;
    }
    v4 = v6[1] + 64;
    ExFreePoolWithTag(*(PVOID *)(a2 + 48), 0);
    *(_QWORD *)(a2 + 48) = 0LL;
  }
  return result;
}
