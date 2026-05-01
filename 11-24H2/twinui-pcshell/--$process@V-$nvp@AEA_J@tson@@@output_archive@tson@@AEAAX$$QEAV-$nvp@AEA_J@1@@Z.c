/*
 * XREFs of ??$process@V?$nvp@AEA_J@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_J@1@@Z @ 0x18032B12C
 * Callers:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x180338184 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_StartMenuAutomaticInvokeDuringLogonTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x18045C804 (--$serialize@Voutput_archive@tson@@@_tip_StartMenuAutomaticInvokeDuringLogonTest@@QEAAXAEAVoutpu.c)
 * Callees:
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800DD78C (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x1800DE5DC (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 */

char __fastcall tson::output_archive::process<tson::nvp<__int64 &>>(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 *v4; // rax
  char v5; // zf
  char result; // al
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a2;
  *(_BYTE *)(a1 + 8) = *((_BYTE *)a2 + 8);
  *(_QWORD *)a1 = v3;
  v4 = (__int64 *)a2[2];
  v5 = *v4 == 0;
  v7 = *v4;
  result = tson::output_archive::write_type(a1, v5, 19);
  if ( result )
    return tson::write_buffer::push_back(*(void ***)(a1 + 144), &v7, 8uLL);
  return result;
}
