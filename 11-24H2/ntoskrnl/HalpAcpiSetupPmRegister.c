/*
 * XREFs of HalpAcpiSetupPmRegister @ 0x140C155F8
 * Callers:
 *     HalpAcpiInitializePmRegisters @ 0x140C1540C (HalpAcpiInitializePmRegisters.c)
 *     HalpAcpiSetupPmRegisterLegacy @ 0x140C15740 (HalpAcpiSetupPmRegisterLegacy.c)
 * Callees:
 *     HalMapIoSpace @ 0x14055DAB0 (HalMapIoSpace.c)
 */

__int64 __fastcall HalpAcpiSetupPmRegister(SIZE_T NumberOfBytes, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  SIZE_T v7; // r8
  unsigned int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  int v11; // ecx
  void *v12; // rax

  v5 = 0;
  v7 = (unsigned int)NumberOfBytes;
  *(_DWORD *)(a4 + 24) = a2;
  switch ( *(_BYTE *)(a3 + 3) )
  {
    case 0:
    case 1:
      v8 = 1;
      break;
    case 2:
      v8 = 2;
      break;
    case 3:
      v8 = 4;
      break;
    case 4:
      v8 = 8;
      break;
    default:
      return (unsigned int)-1073741823;
  }
  v9 = *(unsigned __int8 *)(a3 + 1);
  if ( (_BYTE)v9 )
    v10 = v9 >> 3;
  else
    v10 = v8;
  if ( v8 < a2 )
    return (unsigned int)-1073741823;
  *(_DWORD *)(a4 + 28) = v10;
  if ( !*(_QWORD *)(a3 + 4) )
    return (unsigned int)-1073741823;
  if ( *(_BYTE *)a3 )
  {
    if ( *(_BYTE *)a3 == 1 )
    {
      *(_QWORD *)(a4 + 8) = *(unsigned int *)(a3 + 4);
      *(_QWORD *)(a4 + 32) = HalpAcpiPmRegisterReadPort;
      v12 = HalpAcpiPmRegisterWritePort;
    }
    else
    {
      if ( *(_BYTE *)a3 != 2 )
      {
        v5 = -1073741637;
        goto LABEL_24;
      }
      *(_DWORD *)(a4 + 16) = 0;
      v11 = *(_DWORD *)(a3 + 8) & 0x1F;
      *(_DWORD *)(a4 + 16) = v11;
      *(_DWORD *)(a4 + 16) = v11 | (*(_DWORD *)(a3 + 4) >> 11) & 0xE0;
      *(_WORD *)(a4 + 20) = *(_WORD *)(a3 + 4);
      *(_WORD *)(a4 + 22) = *(_WORD *)(a3 + 10);
      *(_QWORD *)(a4 + 32) = PdcCreateWatchdogAroundClientCall;
      v12 = PdcCreateWatchdogAroundClientCall;
      *(_QWORD *)(a4 + 8) = a4 + 16;
    }
  }
  else
  {
    *(_QWORD *)(a4 + 8) = HalMapIoSpace(*(LARGE_INTEGER *)(a3 + 4), v7, MmNonCached);
    *(_QWORD *)(a4 + 32) = HalpAcpiPmRegisterReadRegister;
    v12 = HalpAcpiPmRegisterWriteRegister;
  }
  *(_QWORD *)(a4 + 40) = v12;
LABEL_24:
  if ( *(_QWORD *)(a4 + 8) )
    *(_BYTE *)a4 = 1;
  return v5;
}
