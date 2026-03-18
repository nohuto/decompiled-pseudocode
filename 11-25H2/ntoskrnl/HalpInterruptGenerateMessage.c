/*
 * XREFs of HalpInterruptGenerateMessage @ 0x14053E4A0
 * Callers:
 *     HalpPopulateMsiMessages @ 0x14053EBC0 (HalpPopulateMsiMessages.c)
 *     HalpIommuConfigureInterrupt @ 0x14054F724 (HalpIommuConfigureInterrupt.c)
 * Callees:
 *     HalGetProcessorIdByNtNumber @ 0x140201680 (HalGetProcessorIdByNtNumber.c)
 *     HalpInterruptSetProblemEx @ 0x1404443B8 (HalpInterruptSetProblemEx.c)
 *     HalpInterruptDestinationToTarget @ 0x140446BF8 (HalpInterruptDestinationToTarget.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptGenerateMessage(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v4; // rdi
  int v6; // ecx
  __int64 v10; // rcx
  int v11; // ecx
  unsigned int v12; // r8d
  __int64 v13; // rcx
  int ProcessorIdByNtNumber; // eax
  _DWORD *v15; // rcx
  int v16; // r8d
  int v17; // eax
  __int128 v19; // [rsp+40h] [rbp-30h] BYREF
  __int128 v20; // [rsp+50h] [rbp-20h] BYREF
  __int64 v21; // [rsp+60h] [rbp-10h]

  v4 = HalpInterruptController;
  *a3 = 0LL;
  *a4 = 0LL;
  v6 = *(_DWORD *)a1;
  v21 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v10 = (unsigned int)(v6 - 1);
  if ( (_DWORD)v10 )
  {
    v11 = v10 - 2;
    if ( v11 )
    {
      if ( v11 != 3 )
        return (unsigned int)-1073741637;
      v13 = *(unsigned int *)(a1 + 8);
      DWORD2(v19) = 4;
      ProcessorIdByNtNumber = HalGetProcessorIdByNtNumber(v13, (__int64)&v20, (__int64)a3, (__int64)a4);
      if ( ProcessorIdByNtNumber < 0 )
      {
        HalpInterruptSetProblemEx(
          0LL,
          21,
          ProcessorIdByNtNumber,
          (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
          0x7B3u);
        return (unsigned int)-1073741811;
      }
    }
    else
    {
      DWORD2(v19) = 1;
    }
  }
  else
  {
    v17 = HalpInterruptDestinationToTarget(v10, a1, (_DWORD *)&v19 + 2);
    if ( v17 < 0 )
    {
      HalpInterruptSetProblemEx(0LL, 21, v17, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 0x7C3u);
      return (unsigned int)-1073741811;
    }
  }
  LODWORD(v21) = *(_DWORD *)(a2 + 4);
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x100) != 0 )
  {
    v15 = *(_DWORD **)(a1 + 16);
    if ( (*v15 & 0x3FFFFFFF) != 0x3FFFFFFE )
    {
      DWORD2(v19) = 7;
      LODWORD(v20) = *v15 & 0x3FFFFFFF;
    }
  }
  v16 = -1073741637;
  if ( *(_QWORD *)(v4 + 136) && (v16 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v4 + 16)), v16 >= 0) )
  {
    v12 = -1073740768;
    if ( (((-(__int64)(HalpApicGuestX2Mode != 0) & 0xFF00000100000000uLL) - 0x100000000LL) & *a3) == 0 )
      return (*a4 & 0xFFFFFFFFFFFF0000uLL) != 0 ? 0xC0000420 : 0;
  }
  else
  {
    HalpInterruptSetProblemEx(v4, 8, v16, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 0x801u);
  }
  return v12;
}
