/*
 * XREFs of ?copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEAG_K_K@Z @ 0x14000EADC
 * Callers:
 *     ?TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ @ 0x14000EA10 (-TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ.c)
 * Callees:
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x14000E6F8 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     memcpy_0 @ 0x14000F1DC (memcpy_0.c)
 */

unsigned __int64 __fastcall std::wstring::copy(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  _QWORD *v4; // rcx
  void *v5; // r9

  v3 = a3;
  if ( *(_QWORD *)(a1 + 16) < a3 )
    v3 = *(_QWORD *)(a1 + 16);
  if ( std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(a1) )
    v4 = (_QWORD *)*v4;
  memcpy_0(v5, v4, 2 * v3);
  return v3;
}
