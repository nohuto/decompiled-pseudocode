/*
 * XREFs of READ_PM1_CONTROL @ 0x140023620
 * Callers:
 *     ACPIEnableInitializeACPI @ 0x140022A10 (ACPIEnableInitializeACPI.c)
 *     ACPIEnableEnterACPIMode @ 0x1400234B0 (ACPIEnableEnterACPIMode.c)
 *     ACPILateRestore @ 0x140064640 (ACPILateRestore.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 READ_PM1_CONTROL()
{
  unsigned __int16 v0; // bx
  unsigned __int16 v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v0 = 0;
  if ( (*(int (__fastcall **)(__int64))(PmHalDispatchTable + 120))(1LL) >= 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, unsigned __int16 *, __int64, _QWORD))(PmHalDispatchTable + 128))(
      1LL,
      0LL,
      &v2,
      2LL,
      0LL);
    v0 = v2;
  }
  if ( (*(int (__fastcall **)(__int64))(PmHalDispatchTable + 120))(4LL) >= 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, unsigned __int16 *, __int64, _QWORD))(PmHalDispatchTable + 128))(
      4LL,
      0LL,
      &v2,
      2LL,
      0LL);
    v0 |= v2;
  }
  return v0;
}
