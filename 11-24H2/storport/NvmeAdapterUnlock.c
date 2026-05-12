/*
 * XREFs of NvmeAdapterUnlock @ 0x1400DAC44
 * Callers:
 *     NvmeAdapterStartDevice @ 0x1400D812C (NvmeAdapterStartDevice.c)
 *     NvmeAdapterPowerUpDeviceCompletionLastStep @ 0x14012FE8C (NvmeAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeAdapterUnlock(__int64 a1)
{
  struct _ERESOURCE *v2; // rdi
  volatile signed __int32 **v3; // rbx
  volatile signed __int32 *i; // rdx

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x40000000) != 0 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)(a1 + 1136) + 948LL), 0);
  }
  else if ( (*(_BYTE *)(a1 + 416) & 0x40) != 0 )
  {
    KeEnterCriticalRegion();
    v2 = (struct _ERESOURCE *)(a1 + 1176);
    ExAcquireResourceSharedLite((PERESOURCE)(a1 + 1176), 1u);
    v3 = (volatile signed __int32 **)(a1 + 1288);
    for ( i = *v3; i != (volatile signed __int32 *)v3; i = *(volatile signed __int32 **)i )
    {
      if ( *((_DWORD *)i + 216) == 2 )
        _interlockedbittestandreset(i + 209, 0);
    }
    ExReleaseResourceLite(v2);
    KeLeaveCriticalRegion();
  }
}
