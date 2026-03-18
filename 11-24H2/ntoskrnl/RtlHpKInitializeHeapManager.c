/*
 * XREFs of RtlHpKInitializeHeapManager @ 0x14065A518
 * Callers:
 *     ExInitializePoolHeapManagement @ 0x140659E80 (ExInitializePoolHeapManagement.c)
 * Callees:
 *     RtlHpGlobalsInitialize @ 0x1405F265C (RtlHpGlobalsInitialize.c)
 *     RtlHpHeapManagerInitialize @ 0x1405F27A0 (RtlHpHeapManagerInitialize.c)
 *     RtlpHpMetadataHeapCreate @ 0x1406053B0 (RtlpHpMetadataHeapCreate.c)
 *     RtlpHpVaMgrCtxStart @ 0x140605B5C (RtlpHpVaMgrCtxStart.c)
 *     RtlCSparseBitmapStart @ 0x140607074 (RtlCSparseBitmapStart.c)
 */

int RtlHpKInitializeHeapManager()
{
  __int64 v0; // r8
  int result; // eax
  __int128 Parameter; // [rsp+30h] [rbp-10h] BYREF
  union _RTL_RUN_ONCE v3; // [rsp+50h] [rbp+10h] BYREF

  RtlHpGlobalsInitialize();
  v3.Value = 0x300010200LL;
  RtlHpHeapManagerInitialize(&ExPoolState, &v3);
  dword_140E6BC10 = (unsigned __int16)KeNumberNodes;
  if ( (unsigned __int16)KeNumberNodes > 0x40u )
    dword_140E6BC10 = 64;
  qword_140E68308 = 0xFFFF800000000000uLL;
  result = RtlCSparseBitmapStart((__int64)&dword_140E68310, 0x10000000uLL, v0, 1);
  if ( result >= 0 )
  {
    result = RtlpHpVaMgrCtxStart((__int64)&unk_140E68358);
    if ( result >= 0 )
    {
      Parameter = 0LL;
      *(_WORD *)((char *)&Parameter + 1) = 1;
      LOBYTE(Parameter) = 3;
      RtlpHpMetadataHeapCreate(&RunOnce, &Parameter, 0LL);
      return 0;
    }
  }
  return result;
}
