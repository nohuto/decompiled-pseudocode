/*
 * XREFs of MiReturnProcessVads @ 0x140AB7BB4
 * Callers:
 *     MiInsertProcessVads @ 0x14091A6A0 (MiInsertProcessVads.c)
 *     MmInitializeProcessAddressSpace @ 0x14091A9E8 (MmInitializeProcessAddressSpace.c)
 *     MiAllocateProcessVads @ 0x14091B168 (MiAllocateProcessVads.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiReturnProcessVads(_QWORD *P)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdi

  if ( P )
  {
    v1 = P;
    do
    {
      v2 = v1;
      v1 = (_QWORD *)*v1;
      if ( (v2[7] & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
        ExFreePoolWithTag((PVOID)(v2[7] & 0xFFFFFFFFFFFFFFF0uLL), 0);
      ExFreePoolWithTag(v2, 0);
    }
    while ( v1 );
  }
}
