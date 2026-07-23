/*
 * XREFs of RtlpIcWriteRegisterValue @ 0x140BBA954
 * Callers:
 *     RtlpIcEmulateGroup0Instruction @ 0x140BB94F8 (RtlpIcEmulateGroup0Instruction.c)
 *     RtlpIcEmulateInstruction @ 0x140BB9A08 (RtlpIcEmulateInstruction.c)
 * Callees:
 *     RtlpIcGetRegisterAddressByIndex @ 0x140BBA498 (RtlpIcGetRegisterAddressByIndex.c)
 */

char __fastcall RtlpIcWriteRegisterValue(__int64 a1, __int64 a2, unsigned int a3, char a4, __int64 a5)
{
  _BYTE *RegisterAddressByIndex; // r9
  __int64 v6; // r10
  char result; // al

  RegisterAddressByIndex = (_BYTE *)RtlpIcGetRegisterAddressByIndex(a1, a2, a3, a4, 1);
  result = *(_BYTE *)(v6 + 1);
  switch ( result )
  {
    case 8:
      result = a5;
      *RegisterAddressByIndex = a5;
      break;
    case 16:
      result = a5;
      *(_WORD *)RegisterAddressByIndex = a5;
      break;
    case 32:
      result = a5;
      *(_QWORD *)RegisterAddressByIndex = (unsigned int)a5;
      break;
    default:
      *(_QWORD *)RegisterAddressByIndex = a5;
      break;
  }
  return result;
}
