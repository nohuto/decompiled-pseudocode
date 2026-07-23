/*
 * XREFs of EtwpEnumerateWorkingSet @ 0x1407B0EE0
 * Callers:
 *     EtwpProcessEnumCallback @ 0x1408EF230 (EtwpProcessEnumCallback.c)
 * Callees:
 *     MiGetWorkingSetInfoEx @ 0x14025E8F0 (MiGetWorkingSetInfoEx.c)
 *     EtwLogPfnInfoRundown @ 0x1407B0D2C (EtwLogPfnInfoRundown.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall EtwpEnumerateWorkingSet(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *result; // rax
  ULONG_PTR v6; // rdx
  __int64 *v7; // r9

  v4 = 4096LL;
  while ( 1 )
  {
    result = *(_QWORD **)(a2 + 48);
    if ( !result )
    {
      v6 = 32 * v4 + 16;
      *(_QWORD *)(a2 + 56) = v6;
      result = (_QWORD *)ExAllocatePool2(0x40uLL, v6, 0x74777445u);
      *(_QWORD *)(a2 + 48) = result;
      if ( !result )
        break;
    }
    result = (_QWORD *)MiGetWorkingSetInfoEx(a1 + 1024, 0, result, *(_QWORD *)(a2 + 56));
    v7 = *(__int64 **)(a2 + 48);
    if ( (_DWORD)result != -1073741820 )
    {
      if ( (int)result >= 0 )
      {
        if ( v7[1] )
          return (_QWORD *)EtwLogPfnInfoRundown(
                             a1,
                             *(_QWORD *)(*(_QWORD *)(a2 + 32) + 1360LL),
                             **(_DWORD **)(a2 + 32),
                             v7);
      }
      return result;
    }
    v4 = v7[1] + 64;
    ExFreePoolWithTag(*(PVOID *)(a2 + 48), 0);
    *(_QWORD *)(a2 + 48) = 0LL;
  }
  return result;
}
