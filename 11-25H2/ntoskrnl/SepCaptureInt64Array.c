/*
 * XREFs of SepCaptureInt64Array @ 0x140867F20
 * Callers:
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140868404 (SepCaptureTokenSecurityAttributesInformation.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCaptureInt64Array(void *Src, unsigned int a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 v6; // rax
  unsigned int v7; // r15d
  unsigned int v8; // edi
  void *Pool2; // rbx

  v6 = 8LL * a2;
  v7 = -1;
  if ( v6 <= 0xFFFFFFFF )
    v7 = 8 * a2;
  v8 = v6 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v6 > 0xFFFFFFFF )
    return v8;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    if ( v7 && ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    memmove(Pool2, Src, v7);
    if ( (v8 & 0x80000000) != 0 )
      ExFreePoolWithTag(Pool2, 0);
    else
      *a4 = Pool2;
    return v8;
  }
  return 3221225626LL;
}
