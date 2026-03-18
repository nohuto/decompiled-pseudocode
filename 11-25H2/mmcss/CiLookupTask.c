/*
 * XREFs of CiLookupTask @ 0x1C000D460
 * Callers:
 *     CiDispatchCreateTaskIndexClient @ 0x1C000CEB0 (CiDispatchCreateTaskIndexClient.c)
 *     CiDispatchCreateMmThreadClient @ 0x1C000D290 (CiDispatchCreateMmThreadClient.c)
 * Callees:
 *     WPP_SF_Sd @ 0x1C0004750 (WPP_SF_Sd.c)
 *     CiTaskLocate @ 0x1C000E4E0 (CiTaskLocate.c)
 */

__int64 __fastcall CiLookupTask(wchar_t *a1, wchar_t *a2, __int64 a3, char a4, _QWORD *a5)
{
  const wchar_t *v7; // rdi
  int v8; // ebx

  a1[63] = 0;
  v7 = a1;
  v8 = CiTaskLocate(a1);
  if ( v8 < 0 || a4 && (a2[63] = 0, v7 = a2, v8 = CiTaskLocate(a2), v8 < 0) )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_Sd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xBu,
        (__int64)&WPP_c50a18c053cc3d547b2a795787fa6cf4_Traceguids,
        v7,
        v8);
  }
  else
  {
    *a5 = 0LL;
  }
  return (unsigned int)v8;
}
