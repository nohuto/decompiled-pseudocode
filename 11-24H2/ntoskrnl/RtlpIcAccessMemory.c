/*
 * XREFs of RtlpIcAccessMemory @ 0x140BB9198
 * Callers:
 *     RtlpIcEmulateGroup0Instruction @ 0x140BB94F8 (RtlpIcEmulateGroup0Instruction.c)
 *     RtlpIcEmulateGroup11Instruction @ 0x140BB9750 (RtlpIcEmulateGroup11Instruction.c)
 *     RtlpIcEmulateGroup1Instruction @ 0x140BB9818 (RtlpIcEmulateGroup1Instruction.c)
 *     RtlpIcEmulateInstruction @ 0x140BB9A08 (RtlpIcEmulateInstruction.c)
 *     RtlpIcEmulateMovzx @ 0x140BBA1FC (RtlpIcEmulateMovzx.c)
 *     RtlpIcEmulateRegisterPushPop @ 0x140BBA30C (RtlpIcEmulateRegisterPushPop.c)
 *     RtlpIcReadOperandValue @ 0x140BBA634 (RtlpIcReadOperandValue.c)
 * Callees:
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 */

__int64 __fastcall RtlpIcAccessMemory(
        __int64 a1,
        _BYTE *a2,
        volatile void *a3,
        char a4,
        char a5,
        unsigned __int8 a6,
        char a7)
{
  _BYTE *v9; // rcx
  __int64 v10; // rax

  if ( a4 == 1 && a7 )
    ProbeForWrite(a3, a6, 1u);
  v9 = a3;
  if ( !a7 )
  {
    v9 = a2;
    a2 = a3;
  }
  switch ( a6 )
  {
    case 1u:
      *v9 = *a2;
      return 0LL;
    case 2u:
      *(_WORD *)v9 = *(_WORD *)a2;
      return 0LL;
    case 4u:
      if ( !a7 || !a5 )
      {
        *(_DWORD *)v9 = *(_DWORD *)a2;
        return 0LL;
      }
      v10 = *(unsigned int *)a2;
      break;
    default:
      v10 = *(_QWORD *)a2;
      break;
  }
  *(_QWORD *)v9 = v10;
  return 0LL;
}
