/*
 * XREFs of ?HasThirdPartySystemEffects@CPolicyConfig@@UEAAHPEBG@Z @ 0x1800A1B50
 * Callers:
 *     <none>
 * Callees:
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180037B80 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::HasThirdPartySystemEffects(CPolicyConfig *this, const unsigned __int16 *a2)
{
  unsigned int v2; // ebx
  __int128 v4; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

  v4 = 0LL;
  v2 = 0;
  v5 = 0LL;
  if ( (*(int (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, __int128 *))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                          + 40LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         0LL,
         0LL,
         &v4) < 0 )
  {
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v4);
    return 0LL;
  }
  else
  {
    LOBYTE(v2) = *(_QWORD *)(v4 + 368) != *(_QWORD *)(v4 + 360);
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v4);
    return v2;
  }
}
