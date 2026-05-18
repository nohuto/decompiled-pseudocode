/*
 * XREFs of sub_180093AD8 @ 0x180093AD8
 * Callers:
 *     sub_180093B30 @ 0x180093B30 (sub_180093B30.c)
 *     sub_1800945C0 @ 0x1800945C0 (sub_1800945C0.c)
 *     sub_1800DB831 @ 0x1800DB831 (sub_1800DB831.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

void **__fastcall sub_180093AD8(_QWORD *a1)
{
  void **result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  result = &Spectre::Engine::IndexBufferState::`vftable';
  *a1 = &Spectre::Engine::IndexBufferState::`vftable';
  v3 = a1[6];
  if ( v3 )
    result = (void **)sub_18001050C(v3);
  v4 = a1[4];
  if ( v4 )
    result = (void **)sub_18001050C(v4);
  v5 = a1[2];
  if ( v5 )
    return (void **)sub_18001050C(v5);
  return result;
}
