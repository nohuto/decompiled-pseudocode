/*
 * XREFs of RtlHpKInitializeHeapManager @ 0x14064E590
 * Callers:
 *     ExInitializePoolHeapManagement @ 0x14064DFE0 (ExInitializePoolHeapManagement.c)
 * Callees:
 *     RtlHpGlobalsInitialize @ 0x1405E630C (RtlHpGlobalsInitialize.c)
 *     RtlHpHeapManagerInitialize @ 0x1405E6450 (RtlHpHeapManagerInitialize.c)
 *     RtlpHpMetadataHeapCreate @ 0x1405F9070 (RtlpHpMetadataHeapCreate.c)
 *     RtlpHpVaMgrCtxStart @ 0x1405F981C (RtlpHpVaMgrCtxStart.c)
 *     RtlCSparseBitmapStart @ 0x1405FAD34 (RtlCSparseBitmapStart.c)
 */

int RtlHpKInitializeHeapManager()
{
  __int64 v0; // r8
  int result; // eax
  __int128 v2; // [rsp+30h] [rbp-10h] BYREF
  _RTL_RUN_ONCE v3; // [rsp+50h] [rbp+10h] BYREF

  RtlHpGlobalsInitialize();
  v3.Value = 0x300010200LL;
  RtlHpHeapManagerInitialize(&ExPoolState, &v3);
  dword_140E6B950 = (unsigned __int16)KeNumberNodes;
  if ( (unsigned __int16)KeNumberNodes > 0x40u )
    dword_140E6B950 = 64;
  qword_140E68048 = 0xFFFF800000000000uLL;
  result = RtlCSparseBitmapStart((__int64)&dword_140E68050, 0x10000000uLL, v0, 1);
  if ( result >= 0 )
  {
    result = RtlpHpVaMgrCtxStart((__int64)&unk_140E68098);
    if ( result >= 0 )
    {
      v2 = 0LL;
      *(_WORD *)((char *)&v2 + 1) = 1;
      LOBYTE(v2) = 3;
      RtlpHpMetadataHeapCreate(&stru_140E6B8F0, &v2, 0LL);
      return 0;
    }
  }
  return result;
}
