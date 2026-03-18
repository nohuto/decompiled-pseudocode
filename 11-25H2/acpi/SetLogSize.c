/*
 * XREFs of SetLogSize @ 0x14006E6BC
 * Callers:
 *     AMLIInitialize @ 0x1400C4F80 (AMLIInitialize.c)
 * Callees:
 *     memset @ 0x140070F40 (memset.c)
 */

char SetLogSize()
{
  char v0; // bl
  void *Pool2; // rax

  v0 = 0;
  if ( qword_140089110 )
  {
    ExFreePoolWithTag(qword_140089110, 0);
    qword_140089110 = 0LL;
    qword_140089108 = 0LL;
  }
  Pool2 = (void *)ExAllocatePool2(64LL, 14688LL, 1196379205LL);
  qword_140089110 = Pool2;
  if ( Pool2 )
  {
    qword_140089108 = 204LL;
    memset(Pool2, 0, 0x3960uLL);
    return 1;
  }
  return v0;
}
