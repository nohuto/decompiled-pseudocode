/*
 * XREFs of ?ReleaseInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x140031100
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x14000F4FC (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     ?CheckGlitches@CSpatialCrossProcessBaseEndpoint@@IEAAXXZ @ 0x1400311F4 (-CheckGlitches@CSpatialCrossProcessBaseEndpoint@@IEAAXXZ.c)
 *     ?CommitRead@CSpatialCrossProcessBaseEndpoint@@IEAAJI@Z @ 0x1400318E8 (-CommitRead@CSpatialCrossProcessBaseEndpoint@@IEAAJI@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14008D630 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSpatialCrossProcessServerInputEndpoint::ReleaseInputDataPointer(
        CSpatialCrossProcessServerInputEndpoint *this,
        char a2)
{
  CSpatialCrossProcessBaseEndpoint *v2; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // si
  unsigned int v8; // edx
  int v9; // eax

  v2 = (CSpatialCrossProcessServerInputEndpoint *)((char *)this - 1440);
  if ( (byte_1400C4541 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(
      (__int64)this,
      *((unsigned __int8 *)this + 72),
      (__int64)this - 1440,
      7,
      a2,
      *((_BYTE *)this + 72),
      *((_DWORD *)this + 16));
  CSpatialCrossProcessBaseEndpoint::CheckGlitches(v2);
  v7 = 0;
  if ( *((_BYTE *)this + 72) )
  {
    (*(void (__fastcall **)(CSpatialCrossProcessBaseEndpoint *, _QWORD))(*(_QWORD *)v2 + 88LL))(
      v2,
      *((unsigned int *)this + 17));
    v8 = *((_DWORD *)this + 16);
    *((_BYTE *)this + 72) = 0;
    v9 = CSpatialCrossProcessBaseEndpoint::CommitRead(v2, v8);
    v7 = v9;
    if ( v9 < 0 )
      SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessServerInputEndpoint::ReleaseInputDataPointer", 0x16Cu, v9);
  }
  *((_DWORD *)this + 19) = -2147418113;
  *((_BYTE *)this - 96) = 0;
  if ( (byte_1400C4541 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v6, v5, (__int64)v2, 8, a2, v7, 0);
}
