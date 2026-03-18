/*
 * XREFs of ExpStringCapture @ 0x14095B244
 * Callers:
 *     ExpGetDeviceDataInformation @ 0x14095B9D4 (ExpGetDeviceDataInformation.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpStringCapture(_QWORD *a1, unsigned __int16 *a2)
{
  size_t v4; // rsi
  void *Pool2; // rbx

  if ( (*a2 & 1) != 0 || !*a2 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v4 = *a2;
    Pool2 = (void *)ExAllocatePool2(0x101uLL);
    if ( Pool2 )
    {
      if ( (*((_QWORD *)a2 + 1) & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      memmove(Pool2, *((const void **)a2 + 1), v4);
      *((_WORD *)Pool2 + (v4 >> 1)) = 0;
      *a1 = Pool2;
      return 0;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
}
