/*
 * XREFs of SiBootEntryGetNtFilePath @ 0x1408161BC
 * Callers:
 *     SiGetEspFromFirmware @ 0x1408167A0 (SiGetEspFromFirmware.c)
 * Callees:
 *     ZwTranslateFilePath @ 0x1406A9EF0 (ZwTranslateFilePath.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiBootEntryGetNtFilePath(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  void *Pool2; // rdi
  int v5; // ebx
  __int64 v6; // rsi

  v2 = *(unsigned int *)(a1 + 20);
  Pool2 = 0LL;
  if ( (_DWORD)v2 )
  {
    v6 = a1 + v2;
    v5 = ZwTranslateFilePath(a1 + v2, 3LL);
    if ( v5 == -1073741789 )
    {
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      v5 = ZwTranslateFilePath(v6, 3LL);
    }
    if ( v5 < 0 )
    {
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
    }
    else
    {
      *a2 = Pool2;
    }
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return (unsigned int)v5;
}
