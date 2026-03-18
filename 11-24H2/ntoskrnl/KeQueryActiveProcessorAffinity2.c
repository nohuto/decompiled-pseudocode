/*
 * XREFs of KeQueryActiveProcessorAffinity2 @ 0x140461060
 * Callers:
 *     PpmRegisterPerfStates @ 0x14074FED4 (PpmRegisterPerfStates.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1407A7EEC (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     PpmInstallPlatformIdleStates @ 0x140A39740 (PpmInstallPlatformIdleStates.c)
 *     PpmCheckInitProcessors @ 0x140AC75E0 (PpmCheckInitProcessors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryActiveProcessorAffinity2(__int64 a1)
{
  unsigned __int16 v1; // dx
  unsigned __int16 Count; // r9
  unsigned __int16 v4; // dx
  __int64 v5; // rcx
  __int64 v6; // rax

  v1 = *(_WORD *)(a1 + 2);
  Count = v1;
  if ( KeActiveProcessors.Count <= v1 )
    Count = KeActiveProcessors.Count;
  *(_WORD *)(a1 + 2) = v1;
  v4 = 0;
  *(_WORD *)a1 = Count;
  for ( *(_DWORD *)(a1 + 4) = 0; v4 < Count; *(_QWORD *)(a1 + 8 * v5 + 8) = KeActiveProcessors.Bitmap[v5] )
    v5 = v4++;
  while ( v4 < *(_WORD *)(a1 + 2) )
  {
    v6 = v4++;
    *(_QWORD *)(a1 + 8 * v6 + 8) = 0LL;
  }
  return (unsigned int)KeNumberProcessors_0;
}
