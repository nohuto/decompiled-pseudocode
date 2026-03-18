/*
 * XREFs of InsertDeviceFirmwareLockHandlerEntry @ 0x140053510
 * Callers:
 *     AcpiRegisterDeviceFirmwareLockHandler @ 0x14009C28C (AcpiRegisterDeviceFirmwareLockHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InsertDeviceFirmwareLockHandlerEntry(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rcx
  KIRQL v4; // r9
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 *v7; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceFirmwareLockGlobalLock);
  v3 = *(_QWORD *)(a1 + 48);
  v4 = v2;
  v5 = AcpiDeviceFirmwareLockHandlerList;
  v6 = 0;
  while ( (__int64 *)v5 != &AcpiDeviceFirmwareLockHandlerList )
  {
    if ( *(_DWORD *)(v5 + 40) == *(_DWORD *)(a1 + 40) && (!v3 || *(_QWORD *)(v5 + 48) == v3) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 64));
      v6 = -1073741823;
      goto LABEL_11;
    }
    v5 = *(_QWORD *)v5;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 64));
  v7 = (__int64 *)qword_14008B168;
  if ( *(__int64 **)qword_14008B168 != &AcpiDeviceFirmwareLockHandlerList )
    __fastfail(3u);
  *(_QWORD *)a1 = &AcpiDeviceFirmwareLockHandlerList;
  *(_QWORD *)(a1 + 8) = v7;
  *v7 = a1;
  qword_14008B168 = a1;
LABEL_11:
  KeReleaseSpinLock(&AcpiDeviceFirmwareLockGlobalLock, v4);
  return v6;
}
