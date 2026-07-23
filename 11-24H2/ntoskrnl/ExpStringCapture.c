/*
 * XREFs of ExpStringCapture @ 0x140942D04
 * Callers:
 *     ExpGetDeviceDataInformation @ 0x140943494 (ExpGetDeviceDataInformation.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpStringCapture(_QWORD *a1, unsigned __int16 *a2)
{
  __int64 v4; // rax
  size_t v5; // rsi
  void *Pool2; // rbx

  v4 = *a2;
  if ( (v4 & 1) != 0 || !(_WORD)v4 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v5 = *a2;
    Pool2 = (void *)ExAllocatePool2(0x101uLL, v4 + 2, 0x50535845u);
    if ( Pool2 )
    {
      if ( (*((_QWORD *)a2 + 1) & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      memmove(Pool2, *((const void **)a2 + 1), v5);
      *((_WORD *)Pool2 + (v5 >> 1)) = 0;
      *a1 = Pool2;
      return 0;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
}
