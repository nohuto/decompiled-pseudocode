/*
 * XREFs of ??0?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAA@W4InputType@@@Z @ 0x1801B0250
 * Callers:
 *     ??0CInteractionProcessor@@QEAA@XZ @ 0x1801AFFBC (--0CInteractionProcessor@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>(
        __int64 a1)
{
  char v1; // al
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 20) = xmmword_1803D3A10;
  *(_OWORD *)(a1 + 36) = xmmword_1803D3A20;
  *(_OWORD *)(a1 + 52) = xmmword_1803D3A30;
  *(_OWORD *)(a1 + 68) = xmmword_1803D3A40;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  v1 = *(_BYTE *)(a1 + 148);
  *(_BYTE *)(a1 + 136) &= ~1u;
  *(_QWORD *)(a1 + 140) = 0LL;
  *(_BYTE *)(a1 + 148) = v1 & 0xC0 | 0x30;
  *(_DWORD *)(a1 + 128) = 1110704128;
  *(_DWORD *)(a1 + 132) = 1110704128;
  result = a1;
  *(_DWORD *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 156) = 4;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 124) = 0;
  return result;
}
