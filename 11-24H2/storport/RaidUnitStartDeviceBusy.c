/*
 * XREFs of RaidUnitStartDeviceBusy @ 0x140045EC0
 * Callers:
 *     RaidStartIoPacket @ 0x140004760 (RaidStartIoPacket.c)
 *     RaidUnitSubmitResetRequest @ 0x140005A88 (RaidUnitSubmitResetRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidUnitStartDeviceBusy(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  unsigned __int8 v4; // bl
  unsigned int v5; // esi
  __int64 v6; // rbp
  _BYTE *v8; // r14
  PEX_RUNDOWN_REF_CACHE_AWARE *v9; // r15
  PEX_RUNDOWN_REF_CACHE_AWARE *v10; // rdx
  __int64 v11; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 184);
  v4 = 0;
  v5 = a3;
  v6 = *(_QWORD *)(a1 + 24);
  v8 = (_BYTE *)(v6 + 108);
  if ( *(_QWORD *)(v6 + 4960) )
  {
    if ( (*v8 & 1) != 0 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v6 + 5280));
      if ( (*v8 & 2) != 0 )
        _InterlockedIncrement64((volatile signed __int64 *)(v6 + 5288));
    }
    if ( *(_DWORD *)(v6 + 92) && (a3 & 1) != 0 )
      a3 = (unsigned int)a3 | 4;
    PoFxActivateComponent(**(_QWORD **)(v6 + 4960), 0LL, a3);
    v4 = 2;
  }
  if ( (*(_DWORD *)(a1 + 504) & 0x8000) != 0 )
  {
    v9 = (PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864);
    if ( ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864)) )
    {
      v10 = (PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864);
      if ( (*v8 & 1) != 0 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2168));
        if ( (*v8 & 2) != 0 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2176));
          v10 = (PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864);
        }
      }
      v11 = *(_QWORD *)(a1 + 1872);
      if ( (*(_DWORD *)(v11 + 148) & 1) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 144));
        v11 = *(_QWORD *)(a1 + 1872);
        v9 = v10;
      }
      if ( *(_DWORD *)(a1 + 1036) )
      {
        if ( (v5 & 1) != 0 )
          v5 |= 4u;
      }
      PoFxActivateComponent(*(_QWORD *)v11, 0LL, v5);
      v4 |= 1u;
      ExReleaseRundownProtectionCacheAware(*v9);
    }
    result = v4;
    *(_QWORD *)(v3 + 16) = v4;
  }
  else
  {
    result = v4;
    *(_QWORD *)(v3 + 16) = v4;
  }
  return result;
}
