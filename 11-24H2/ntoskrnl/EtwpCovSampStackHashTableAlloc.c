/*
 * XREFs of EtwpCovSampStackHashTableAlloc @ 0x1407B2C8C
 * Callers:
 *     EtwpCovSampCaptureContextStart @ 0x1407B23EC (EtwpCovSampCaptureContextStart.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCovSampStackHashTableAlloc(void **a1, int a2)
{
  unsigned int v3; // ebx
  void *v4; // rcx
  _DWORD *Pool2; // rax
  _DWORD *v7; // rdi

  v3 = 0;
  v4 = *a1;
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x56777445u);
    *a1 = 0LL;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, (unsigned int)(4 * a2 + 24), 0x56777445u);
  v7 = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, (unsigned int)(4 * a2 + 24));
    v7[5] = a2;
    *(_QWORD *)v7 = 0LL;
    *a1 = v7;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
