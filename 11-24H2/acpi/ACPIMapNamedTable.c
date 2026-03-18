/*
 * XREFs of ACPIMapNamedTable @ 0x140040810
 * Callers:
 *     ACPIEnumMapTableHandler @ 0x1400407C0 (ACPIEnumMapTableHandler.c)
 *     ACPIEcInitOpRegionHandler @ 0x14005F83C (ACPIEcInitOpRegionHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1400232C0 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     memmove @ 0x140070C40 (memmove.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1400A35AC (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1400B6E24 (ACPIRegReadAMLRegistryEntry.c)
 */

__int64 __fastcall ACPIMapNamedTable(int a1, _DWORD *a2, _QWORD *a3, void *a4, unsigned int *a5)
{
  unsigned int v9; // esi
  char AMLRegistryEntry; // bp
  unsigned int *v11; // rbx
  unsigned int *v12; // rdi
  _OWORD *Pool2; // rax
  unsigned int v14; // eax
  _DWORD *v16; // rax
  char TableFromSimulatorRegistryEntry; // al
  PVOID P[2]; // [rsp+30h] [rbp-38h] BYREF

  v9 = 0;
  AMLRegistryEntry = 0;
  v11 = 0LL;
  v12 = (unsigned int *)(*(__int64 (**)(void))(PmHalDispatchTable + 88))();
  if ( v12 )
  {
    Pool2 = (_OWORD *)ExAllocatePool2(64LL, 36LL, 1953522497LL);
    P[0] = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    *Pool2 = *(_OWORD *)v12;
    Pool2[1] = *((_OWORD *)v12 + 1);
    *((_DWORD *)Pool2 + 8) = v12[8];
    *((_DWORD *)Pool2 + 1) = 36;
    AMLRegistryEntry = ACPIRegReadAMLRegistryEntry(P);
    if ( !AMLRegistryEntry )
    {
      v11 = (unsigned int *)P[0];
      ExFreePoolWithTag(P[0], 0);
      goto LABEL_5;
    }
    v11 = (unsigned int *)P[0];
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0x1Du,
        (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
        P[0]);
    v12 = v11;
    if ( v11 )
      goto LABEL_5;
  }
  if ( !g_SimulatorCallbackObject )
    goto LABEL_9;
  v16 = (_DWORD *)ExAllocatePool2(64LL, 36LL, 1953522497LL);
  P[0] = v16;
  v11 = v16;
  if ( !v16 )
  {
    v9 = -1073741670;
    goto LABEL_10;
  }
  *v16 = a1;
  v16[1] = 36;
  if ( a2 )
    *(_DWORD *)((char *)v16 + 10) = *a2;
  if ( a3 )
    *((_QWORD *)v16 + 2) = *a3;
  TableFromSimulatorRegistryEntry = ACPIRegGetTableFromSimulatorRegistryEntry(P);
  v11 = (unsigned int *)P[0];
  AMLRegistryEntry = TableFromSimulatorRegistryEntry;
  if ( TableFromSimulatorRegistryEntry )
    v12 = (unsigned int *)P[0];
  else
    ExFreePoolWithTag(P[0], 0);
  if ( !v12 )
  {
LABEL_9:
    v9 = -1073741275;
    goto LABEL_10;
  }
LABEL_5:
  v14 = v12[1];
  if ( *a5 >= v14 )
  {
    memmove(a4, v12, v12[1]);
    *a5 = v12[1];
  }
  else
  {
    *a5 = v14;
    v9 = -1073741789;
  }
LABEL_10:
  if ( AMLRegistryEntry && v11 )
    ExFreePoolWithTag(v11, 0);
  return v9;
}
