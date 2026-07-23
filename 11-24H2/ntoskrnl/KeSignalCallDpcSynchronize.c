/*
 * XREFs of KeSignalCallDpcSynchronize @ 0x1404282B0
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x140B59640 (KiInitializeDynamicProcessorDpc.c)
 *     MiApplyImageHotPatchDpc @ 0x140B65330 (MiApplyImageHotPatchDpc.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KiHaltOnAddress @ 0x1404F7B98 (KiHaltOnAddress.c)
 *     KeCanUseHaltOnAddress @ 0x1404F7F60 (KeCanUseHaltOnAddress.c)
 */

__int64 __fastcall KeSignalCallDpcSynchronize(unsigned __int64 a1, __int64 a2)
{
  signed __int32 v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // ebp
  char v6; // r15
  signed __int32 v9; // ecx
  signed __int32 v10; // edx
  volatile signed __int32 v11; // r8d
  int v12; // r14d
  int v13; // [rsp+50h] [rbp+8h] BYREF

  v3 = _InterlockedDecrement((volatile signed __int32 *)a1);
  v4 = ~v3 & 0x80000000;
  if ( (v3 & 0x3FFFFFFF) != 0 )
  {
    v5 = 0;
    v6 = 0;
    while ( (*(_DWORD *)a1 & 0x80000000) != v4 )
    {
      if ( (++v5 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v6;
        if ( (unsigned __int8)KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v6 & 7) == 0 )
        {
          v9 = *(_DWORD *)a1;
          if ( (*(_DWORD *)a1 & 0x80000000) != v4 )
          {
            v10 = *(_DWORD *)a1;
            v11 = *(_DWORD *)a1;
            do
            {
              v12 = v9 | 0x40000000;
              v9 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v9 | 0x40000000, v10);
              if ( v9 == v11 )
              {
                v13 = v12;
                do
                {
                  KiHaltOnAddress(a1, &v13, 4LL);
                  v9 = *(_DWORD *)a1;
                }
                while ( *(_DWORD *)a1 == v12 );
              }
              v10 = v9;
              v11 = v9;
            }
            while ( (v9 & 0x80000000) != v4 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v5);
        }
      }
      else
      {
        _mm_pause();
      }
    }
    return 0;
  }
  else
  {
    if ( (_InterlockedExchange((volatile __int32 *)a1, *(_DWORD *)(a1 + 4) | v4) & 0x40000000) != 0 )
      KeWakeAddressAll(a1, a2);
    return 1;
  }
}
