/*
 * XREFs of RtlpIcGetRegisterAddressByIndex @ 0x140BBA498
 * Callers:
 *     RtlpIcDecodeModRmOperand @ 0x140BB939C (RtlpIcDecodeModRmOperand.c)
 *     RtlpIcEmulateGroup0Instruction @ 0x140BB94F8 (RtlpIcEmulateGroup0Instruction.c)
 *     RtlpIcEmulateInstruction @ 0x140BB9A08 (RtlpIcEmulateInstruction.c)
 *     RtlpIcEmulateMovzx @ 0x140BBA1FC (RtlpIcEmulateMovzx.c)
 *     RtlpIcEmulateRegisterPushPop @ 0x140BBA30C (RtlpIcEmulateRegisterPushPop.c)
 *     RtlpIcWriteRegisterValue @ 0x140BBA954 (RtlpIcWriteRegisterValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpIcGetRegisterAddressByIndex(__int64 a1, __int64 a2, unsigned int a3, char a4, char a5)
{
  unsigned int v5; // eax
  char v6; // r8
  __int64 v7; // rdx
  __int64 result; // rax

  v5 = a3 + 8;
  if ( !a4 )
    v5 = a3;
  v6 = v5;
  if ( !a5 || *(_BYTE *)(a1 + 25) || *(_BYTE *)(a1 + 1) != 8 )
    return *(_QWORD *)(a2 + 8) + 8LL * v5 + 120;
  v7 = *(_QWORD *)(a2 + 8) + 120LL + 8LL * (v5 & 3);
  result = v7 + 1;
  if ( (v6 & 4) == 0 )
    return v7;
  return result;
}
