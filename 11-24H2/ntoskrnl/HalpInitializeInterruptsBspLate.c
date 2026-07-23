/*
 * XREFs of HalpInitializeInterruptsBspLate @ 0x14053FA00
 * Callers:
 *     HalpInterruptInitSystem @ 0x140B4F310 (HalpInterruptInitSystem.c)
 * Callees:
 *     HalpInterruptModel @ 0x1403744A8 (HalpInterruptModel.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HalpInterruptRemapFixedLines @ 0x14053FEA0 (HalpInterruptRemapFixedLines.c)
 *     HalpIsHvRemappingInterrupts @ 0x1406FB5D4 (HalpIsHvRemappingInterrupts.c)
 *     HalpInitializeInterruptRemappingBspLate @ 0x1406FEBC8 (HalpInitializeInterruptRemappingBspLate.c)
 */

__int64 __fastcall HalpInitializeInterruptsBspLate(__int64 a1)
{
  __int16 v1; // r8
  char v2; // dl
  int v3; // eax
  unsigned int v4; // edx
  __int64 result; // rax

  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x100) != 0 && (int)HalpInitializeInterruptRemappingBspLate() < 0 )
    KeBugCheckEx(0x5Cu, 0x7000uLL, 3uLL, 1uLL, 0LL);
  v1 = 2048;
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x100) == 0 )
  {
    if ( (unsigned __int8)HalpIsHvRemappingInterrupts(a1, 1LL, 2048LL) && KeGetCurrentPrcb()->CpuVendor == v2 )
      v1 = 512;
    goto LABEL_12;
  }
  if ( (HalpIrtAllocationFlags & 4) != 0 )
    v1 = HalpIrtEntriesPerDeviceAperture;
  if ( (unsigned __int16)(v1 - 1) <= 0x7FFu )
LABEL_12:
    HalpInterruptPerDeviceMsiLimit = v1;
  v3 = HalpInterruptModel();
  if ( v3 == v4 )
    return HalpInterruptRemapFixedLines();
  result = (unsigned int)(v3 - 2);
  if ( (unsigned int)result <= v4 )
    return HalpInterruptRemapFixedLines();
  return result;
}
