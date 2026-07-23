/*
 * XREFs of EtwpCoverageSamplerAllocateTable @ 0x140A546D4
 * Callers:
 *     EtwpCoverageSamplerStart @ 0x1407B3198 (EtwpCoverageSamplerStart.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x140ADBF60 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

_OWORD *__fastcall EtwpCoverageSamplerAllocateTable(int a1)
{
  _OWORD *Pool2; // rax
  _OWORD *v3; // rbx
  void *v4; // rax

  Pool2 = (_OWORD *)ExAllocatePool2(0x100uLL, 0x20uLL, 0x56777445u);
  v3 = Pool2;
  if ( !Pool2 )
    return v3;
  *Pool2 = 0LL;
  Pool2[1] = 0LL;
  v4 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)(8 * a1), 0x56777445u);
  *((_QWORD *)v3 + 3) = v4;
  if ( v4 )
  {
    memset_0(v4, 0, (unsigned int)(8 * a1));
    *((_DWORD *)v3 + 5) = a1;
    return v3;
  }
  ExFreePoolWithTag(v3, 0x56777445u);
  return 0LL;
}
