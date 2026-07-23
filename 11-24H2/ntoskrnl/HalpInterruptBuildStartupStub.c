/*
 * XREFs of HalpInterruptBuildStartupStub @ 0x140556970
 * Callers:
 *     HalpInterruptBuildGlobalStartupStub @ 0x14053F11C (HalpInterruptBuildGlobalStartupStub.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     HalpInterruptCreateGdtEntry32 @ 0x140556CA4 (HalpInterruptCreateGdtEntry32.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

PVOID HalpInterruptBuildStartupStub()
{
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  _OWORD *v1; // rdi
  PHYSICAL_ADDRESS v2; // rbx
  int v3; // ecx
  int v4; // r8d
  int v5; // r8d
  int v6; // r10d
  int v7; // r8d
  int v8; // r11d
  unsigned __int64 v9; // rax
  PVOID result; // rax

  PhysicalAddress = MmGetPhysicalAddress(HalpInterruptGlobalStartupBlock);
  v1 = HalpInterruptGlobalStartupBlock;
  v2 = PhysicalAddress;
  memmove(HalpInterruptGlobalStartupBlock, HalpRMStub, 0x67CuLL);
  v1 = (_OWORD *)((char *)v1 + 1660);
  *v1 = *(_OWORD *)HalpPMStub;
  v1[1] = *(_OWORD *)&HalpPMStub[2];
  v1[2] = *(_OWORD *)&HalpPMStub[4];
  v1[3] = *(_OWORD *)&HalpPMStub[6];
  v1[4] = *(_OWORD *)&HalpPMStub[8];
  v1[5] = *(_OWORD *)&HalpPMStub[10];
  v1[6] = *(_OWORD *)&HalpPMStub[12];
  v1[7] = *(_OWORD *)&HalpPMStub[14];
  *((_DWORD *)v1 + 32) = HalpPMStub[16];
  v3 = (int)v1;
  *((_BYTE *)v1 + 132) = BYTE4(HalpPMStub[16]);
  v1 = (_OWORD *)((char *)v1 + 133);
  *((_WORD *)HalpInterruptGlobalStartupBlock + 50) = 48;
  *((_DWORD *)HalpInterruptGlobalStartupBlock + 24) = v2.LowPart + v3 - (_DWORD)HalpInterruptGlobalStartupBlock;
  memmove(v1, HalpLMIdentityStub, HalpLMIdentityStubEnd - (_BYTE *)HalpLMIdentityStub);
  *((_WORD *)HalpInterruptGlobalStartupBlock + 53) = 16;
  *(_DWORD *)((char *)HalpInterruptGlobalStartupBlock + 102) = v2.LowPart
                                                             + (_DWORD)v1
                                                             - (_DWORD)HalpInterruptGlobalStartupBlock;
  *((_QWORD *)HalpInterruptGlobalStartupBlock + 15) = HalpInterruptGlobalStartupBlock;
  *((_QWORD *)HalpInterruptGlobalStartupBlock + 14) = HalpLMStub;
  HalpInterruptCreateGdtEntry32((_DWORD)HalpInterruptGlobalStartupBlock + 24, 48, v4, -1, 27, 0);
  HalpInterruptCreateGdtEntry32((_DWORD)HalpInterruptGlobalStartupBlock + 24, 32, v5, v6, 19, 0);
  HalpInterruptCreateGdtEntry32((_DWORD)HalpInterruptGlobalStartupBlock + 24, 16, v7, 0, v8, 1);
  *((_WORD *)HalpInterruptGlobalStartupBlock + 6) = 63;
  *(_DWORD *)((char *)HalpInterruptGlobalStartupBlock + 14) = v2.LowPart + 24;
  *((_QWORD *)HalpInterruptGlobalStartupBlock + 16) = __readmsr(0x277u);
  v9 = __readmsr(0xC0000080);
  *((_QWORD *)HalpInterruptGlobalStartupBlock + 17) = ((unsigned __int64)HIDWORD(v9) << 32) | (unsigned int)v9;
  result = HalpInterruptGlobalStartupBlock;
  *((_QWORD *)HalpInterruptGlobalStartupBlock + 17) &= ~0x400uLL;
  HalpInterruptGlobalStartupCodePhysical = v2.QuadPart;
  return result;
}
