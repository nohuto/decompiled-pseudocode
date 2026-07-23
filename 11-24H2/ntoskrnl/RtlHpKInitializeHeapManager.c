/*
 * XREFs of RtlHpKInitializeHeapManager @ 0x140658BE8
 * Callers:
 *     ExInitializePoolHeapManagement @ 0x140658520 (ExInitializePoolHeapManagement.c)
 * Callees:
 *     RtlHpGlobalsInitialize @ 0x1405EFC9C (RtlHpGlobalsInitialize.c)
 *     RtlHpHeapManagerInitialize @ 0x1405EFDE0 (RtlHpHeapManagerInitialize.c)
 *     RtlpHpMetadataHeapCreate @ 0x1406029F0 (RtlpHpMetadataHeapCreate.c)
 *     RtlpHpVaMgrCtxStart @ 0x14060319C (RtlpHpVaMgrCtxStart.c)
 *     RtlCSparseBitmapStart @ 0x140604674 (RtlCSparseBitmapStart.c)
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
  dword_140E6BE10 = (unsigned __int16)KeNumberNodes;
  if ( (unsigned __int16)KeNumberNodes > 0x40u )
    dword_140E6BE10 = 64;
  qword_140E68508 = 0xFFFF800000000000uLL;
  result = RtlCSparseBitmapStart((__int64)&dword_140E68510, 0x10000000uLL, v0, 1);
  if ( result >= 0 )
  {
    result = RtlpHpVaMgrCtxStart((__int64)&unk_140E68558);
    if ( result >= 0 )
    {
      v2 = 0LL;
      *(_WORD *)((char *)&v2 + 1) = 1;
      LOBYTE(v2) = 3;
      RtlpHpMetadataHeapCreate(&stru_140E6BDB0, &v2, 0LL);
      return 0;
    }
  }
  return result;
}
