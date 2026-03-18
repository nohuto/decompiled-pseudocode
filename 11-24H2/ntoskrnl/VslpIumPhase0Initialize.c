/*
 * XREFs of VslpIumPhase0Initialize @ 0x140C19E78
 * Callers:
 *     HvlPhase1Initialize @ 0x140582A60 (HvlPhase1Initialize.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140263A60 (MmGetPhysicalAddress.c)
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x140456290 (HvlQueryVsmConnection.c)
 *     MmSetPageProtection @ 0x1404D6CF0 (MmSetPageProtection.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     KeQueryKvaShadowInformation @ 0x14073C9A0 (KeQueryKvaShadowInformation.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall VslpIumPhase0Initialize(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  char *v4; // rcx
  unsigned int v5; // ecx
  _KIDTENTRY64 *IdtBase; // rbx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // r9
  __int64 v11; // r9
  int v12; // [rsp+30h] [rbp-39h] BYREF
  BOOL v13; // [rsp+34h] [rbp-35h] BYREF
  int v14; // [rsp+38h] [rbp-31h] BYREF
  int v15; // [rsp+3Ch] [rbp-2Dh] BYREF
  _BYTE v16[8]; // [rsp+40h] [rbp-29h] BYREF
  int v17; // [rsp+48h] [rbp-21h]
  int v18; // [rsp+4Ch] [rbp-1Dh]
  PHYSICAL_ADDRESS PhysicalAddress; // [rsp+50h] [rbp-19h]
  char v20; // [rsp+58h] [rbp-11h]
  int v21; // [rsp+5Ch] [rbp-Dh]
  int v22; // [rsp+60h] [rbp-9h]
  int v23; // [rsp+64h] [rbp-5h]
  char v24; // [rsp+68h] [rbp-1h]
  char v25; // [rsp+69h] [rbp+0h]
  char v26; // [rsp+6Ah] [rbp+1h]
  __int64 v27; // [rsp+70h] [rbp+7h]
  ULONG_PTR v28; // [rsp+78h] [rbp+Fh]
  _BYTE v29[8]; // [rsp+80h] [rbp+17h] BYREF
  PHYSICAL_ADDRESS v30; // [rsp+88h] [rbp+1Fh]
  _BYTE v31[8]; // [rsp+90h] [rbp+27h] BYREF
  PHYSICAL_ADDRESS v32; // [rsp+98h] [rbp+2Fh]

  result = *(_QWORD *)(a1 + 240);
  v12 = 0;
  v13 = 0;
  if ( (*(_DWORD *)(result + 132) & 0x200) != 0 )
  {
    if ( !HvlQueryVsmConnection(0LL) )
      KeBugCheckEx(0x6Fu, 0xFFFFFFFFC0000001uLL, 0LL, 0LL, 0LL);
    VslpSecureKernelPeriodicTickWorkItem.Parameter = 0LL;
    VslpSecureKernelPeriodicTickWorkItem.List.Flink = 0LL;
    VslpSecureKernelPeriodicTickWorkItem.WorkerRoutine = (void (__fastcall *)(void *))VslpSecureKernelPeriodicTick;
    memset_0(v16, 0, 0x68uLL);
    v17 = 167772176;
    PhysicalAddress = MmGetPhysicalAddress((PVOID)0xFFFFF78000000000LL);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      v3 = *(_QWORD *)(a1 + 240);
      v20 = 1;
      v4 = *(char **)(v3 + 2800);
      if ( v4 )
      {
        v21 = *((_DWORD *)v4 + 55);
        if ( !*((_DWORD *)v4 + 55) && *(_DWORD *)v4 <= 0xFFu )
        {
          v22 = 2;
          v23 = *((unsigned __int16 *)v4 + 4);
          v24 = *v4;
          v5 = *((_DWORD *)v4 + 1);
          v25 = v5 & 0x1F;
          v26 = (v5 >> 5) & 7;
        }
      }
    }
    else
    {
      v20 = 0;
    }
    IdtBase = KeGetPcr()->IdtBase;
    v30 = MmGetPhysicalAddress(KeGetPcr()->NtTib.ExceptionList);
    v32 = MmGetPhysicalAddress(IdtBase);
    MmSetPageProtection((unsigned __int64)IdtBase, 4096LL, 2u);
    guard_dispatch_icall_no_overrides(46LL, 8LL, v31, &v12);
    if ( (VslpNestedPageProtectionFlags & 0x1000) == 0 )
      *(_DWORD *)(MmWriteableSharedUserData + 876) |= 0x100u;
    if ( KiKvaShadowMode )
      v18 |= 1u;
    KeQueryKvaShadowInformation(&v13, 4u, &v12);
    v7 = v18;
    if ( (v13 & 0x10) != 0 )
    {
      v7 = v18 | 2;
      v18 |= 2u;
      if ( SpcImplementedPhysicalBits > 0 )
      {
        v7 |= 4u;
        v18 = v7;
      }
    }
    if ( KiDisableTsx )
      v18 = v7 | 8;
    v15 = VslpNestedPageProtectionFlags & 2;
    v27 = KeFeatureBits;
    v28 = KeFeatureBits2;
    v8 = guard_dispatch_icall_no_overrides(56LL, 8LL, v29, &v12);
    if ( v8 < 0 )
      KeBugCheckEx(0x6Fu, v8, 0xFFuLL, 1uLL, 0LL);
    v9 = VslpEnterIumSecureMode(2u, 208LL, 0, (__int64)v16);
    if ( v9 < 0 )
      KeBugCheckEx(0x6Fu, v9, 0LL, 1uLL, 0LL);
    if ( PhysicalAddress.LowPart != 167772176 )
      KeBugCheckEx(0x6Fu, 0xFFFFFFFFC0000059uLL, 0LL, 2uLL, 0LL);
    VslpIumThreadSemaphore.Header.WaitListHead.Blink = &VslpIumThreadSemaphore.Header.WaitListHead;
    VslpIumThreadSemaphore.Header.WaitListHead.Flink = &VslpIumThreadSemaphore.Header.WaitListHead;
    VslpIumThreadSemaphore.Header.Type = 5;
    VslpIumThreadSemaphore.Header.Size = 8;
    VslpIumThreadSemaphore.Header.SignalState = PhysicalAddress.HighPart;
    VslpIumThreadSemaphore.Limit = PhysicalAddress.HighPart;
    VslVsmEnabled = 1;
    VslpReservedTransferLock = 0LL;
    VslpReservedTransferMdl = ExAllocatePool2(0x40uLL, 0x1000uLL, 0x54736D56uLL);
    if ( !VslpReservedTransferMdl )
      KeBugCheckEx(0x6Fu, 0xFFFFFFFFC000009AuLL, 0LL, 3uLL, 0LL);
    v14 = 0;
    guard_dispatch_icall_no_overrides(16LL, 4LL, &v14, v10);
    return guard_dispatch_icall_no_overrides(18LL, 4LL, &v15, v11);
  }
  return result;
}
