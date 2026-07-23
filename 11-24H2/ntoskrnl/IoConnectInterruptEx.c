/*
 * XREFs of IoConnectInterruptEx @ 0x1409BFF30
 * Callers:
 *     HalpInterruptConnect @ 0x14053E3D8 (HalpInterruptConnect.c)
 *     DifIoConnectInterruptExWrapper @ 0x140624D30 (DifIoConnectInterruptExWrapper.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IopConnectInterruptFullySpecified @ 0x14071BAF8 (IopConnectInterruptFullySpecified.c)
 *     IopConnectLineBasedInterrupt @ 0x1409BFBA0 (IopConnectLineBasedInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x1409C0224 (IopGetInterruptConnectionData.c)
 *     IopConnectInterrupt @ 0x1409C0880 (IopConnectInterrupt.c)
 *     IopConnectMessageBasedInterrupt @ 0x1409C0F8C (IopConnectMessageBasedInterrupt.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoConnectInterruptEx(PIO_CONNECT_INTERRUPT_PARAMETERS Parameters)
{
  __int64 Version; // rcx
  NTSTATUS result; // eax
  NTSTATUS v4; // eax
  NTSTATUS v5; // esi
  KIRQL SynchronizeIrql; // al
  KIRQL Irql; // dl
  char v8; // di
  USHORT Group; // si
  unsigned int i; // edx
  KIRQL v11; // al
  __int128 v12; // xmm0
  __m128i v13; // xmm2
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  PVOID ServiceContext; // r9
  PKSERVICE_ROUTINE ServiceRoutine; // r8
  PDEVICE_OBJECT PhysicalDeviceObject; // rdx
  PKINTERRUPT *InterruptObject; // rcx
  PKSPIN_LOCK SpinLock; // [rsp+20h] [rbp-69h]
  ULONG Vector; // [rsp+28h] [rbp-61h]
  KIRQL v23; // [rsp+30h] [rbp-59h]
  KIRQL v24; // [rsp+38h] [rbp-51h]
  KINTERRUPT_MODE InterruptMode; // [rsp+40h] [rbp-49h]
  BOOLEAN ShareVector; // [rsp+48h] [rbp-41h]
  __int128 ProcessorEnableMask; // [rsp+60h] [rbp-29h] BYREF
  int v28; // [rsp+70h] [rbp-19h]
  _BYTE v29[4]; // [rsp+74h] [rbp-15h] BYREF
  __m128i v30; // [rsp+78h] [rbp-11h]
  __int128 v31; // [rsp+88h] [rbp-1h]
  __int128 v32; // [rsp+98h] [rbp+Fh]
  __int128 v33; // [rsp+A8h] [rbp+1Fh]
  __int128 v34; // [rsp+B8h] [rbp+2Fh]
  __int64 v35; // [rsp+C8h] [rbp+3Fh]
  __int64 v36; // [rsp+100h] [rbp+77h] BYREF

  v36 = 0LL;
  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  Version = Parameters->Version;
  if ( (_DWORD)Version == 1 )
  {
LABEL_6:
    if ( !Parameters->FullySpecified.PhysicalDeviceObject )
      return -1073741811;
    if ( !Parameters->FullySpecified.ServiceRoutine )
      return -1073741811;
    SynchronizeIrql = Parameters->FullySpecified.SynchronizeIrql;
    Irql = Parameters->FullySpecified.Irql;
    if ( SynchronizeIrql < Irql )
      return -1073741811;
    if ( SynchronizeIrql || Irql )
    {
      v8 = 0;
    }
    else
    {
      v8 = 1;
      if ( Parameters->FullySpecified.SpinLock )
        return -1073741811;
    }
    if ( (_DWORD)Version == 4 )
      Group = Parameters->FullySpecified.Group;
    else
      Group = 0;
    if ( (int)IopGetInterruptConnectionData(Parameters->FullySpecified.PhysicalDeviceObject) >= 0 )
    {
      memset_0(v29, 0, 0x5CuLL);
      v28 = 0;
      for ( i = 0; ; ++i )
      {
        if ( i >= MEMORY[0] )
        {
          ExFreePoolWithTag(0LL, 0);
          return -1073741637;
        }
        if ( *(_DWORD *)(88LL * i + 0xC) == Parameters->FullySpecified.Vector )
        {
          v11 = Parameters->FullySpecified.Irql;
          if ( (*(_BYTE *)(88LL * i + 0x10) == v11 || !v11)
            && *(_DWORD *)(88LL * i + 0x18) == Parameters->FullySpecified.InterruptMode
            && *(_WORD *)(88LL * i + 0x28) == Group
            && *(_QWORD *)(88LL * i + 0x20) == Parameters->FullySpecified.ProcessorEnableMask )
          {
            break;
          }
        }
      }
      v12 = *(_OWORD *)(88LL * i + 0x18);
      v28 = 1;
      v13 = *(__m128i *)(88LL * i + 8);
      v14 = *(_OWORD *)(88LL * i + 0x28);
      v31 = v12;
      v15 = *(_OWORD *)(88LL * i + 0x38);
      v32 = v14;
      v16 = *(_OWORD *)(88LL * i + 0x48);
      v33 = v15;
      v35 = *(_QWORD *)(88LL * i + 0x58);
      v30 = v13;
      v34 = v16;
      if ( !_mm_cvtsi128_si32(v13) && (BYTE12(v33) & 1) != 0 )
        Parameters->FullySpecified.ShareVector = 1;
      v5 = IopConnectInterrupt(
             &v36,
             Parameters->FullySpecified.PhysicalDeviceObject,
             Parameters->FullySpecified.ServiceRoutine,
             0LL,
             Parameters->FullySpecified.ServiceContext,
             0,
             Parameters->FullySpecified.SpinLock,
             Parameters->FullySpecified.SynchronizeIrql,
             Parameters->FullySpecified.ShareVector);
      if ( v5 >= 0 )
        *Parameters->FullySpecified.InterruptObject = (PKINTERRUPT)(v36 + 112);
      ExFreePoolWithTag(0LL, 0);
      return v5;
    }
    if ( !v8 )
    {
      ServiceContext = Parameters->FullySpecified.ServiceContext;
      ServiceRoutine = Parameters->FullySpecified.ServiceRoutine;
      PhysicalDeviceObject = Parameters->FullySpecified.PhysicalDeviceObject;
      InterruptObject = Parameters->FullySpecified.InterruptObject;
      ProcessorEnableMask = Parameters->FullySpecified.ProcessorEnableMask;
      ShareVector = Parameters->FullySpecified.ShareVector;
      InterruptMode = Parameters->FullySpecified.InterruptMode;
      v24 = Parameters->FullySpecified.SynchronizeIrql;
      v23 = Parameters->FullySpecified.Irql;
      Vector = Parameters->FullySpecified.Vector;
      SpinLock = Parameters->FullySpecified.SpinLock;
      WORD4(ProcessorEnableMask) = Group;
      return IopConnectInterruptFullySpecified(
               InterruptObject,
               (__int64)PhysicalDeviceObject,
               (__int64)ServiceRoutine,
               (__int64)ServiceContext,
               (__int64)SpinLock,
               Vector,
               v23,
               v24,
               InterruptMode,
               ShareVector,
               &ProcessorEnableMask);
    }
    return -1073741637;
  }
  if ( (_DWORD)Version == 2 )
    return IopConnectLineBasedInterrupt(
             Parameters->FullySpecified.PhysicalDeviceObject,
             Parameters->FullySpecified.InterruptObject,
             (__int64)Parameters->FullySpecified.ServiceRoutine);
  if ( (_DWORD)Version != 3 )
  {
    if ( (_DWORD)Version == 4 )
      goto LABEL_6;
    if ( (_DWORD)Version != 5 )
    {
      Parameters->Version = 3;
      return -1073741637;
    }
  }
  result = IopConnectMessageBasedInterrupt(
             Version,
             Parameters->FullySpecified.PhysicalDeviceObject,
             Parameters->FullySpecified.InterruptObject,
             Parameters->FullySpecified.ServiceRoutine,
             Parameters->FullySpecified.ServiceContext,
             Parameters->FullySpecified.SpinLock,
             Parameters->FullySpecified.SynchronizeIrql);
  if ( result < 0 )
  {
    if ( Parameters->MessageBased.FallBackServiceRoutine )
    {
      v4 = IopConnectLineBasedInterrupt(
             Parameters->FullySpecified.PhysicalDeviceObject,
             Parameters->FullySpecified.InterruptObject,
             (__int64)Parameters->MessageBased.FallBackServiceRoutine);
      Parameters->Version = 2;
      return v4;
    }
    return -1073741637;
  }
  return result;
}
