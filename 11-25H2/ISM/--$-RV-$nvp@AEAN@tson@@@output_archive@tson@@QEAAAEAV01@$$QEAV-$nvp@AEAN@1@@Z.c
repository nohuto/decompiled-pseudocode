/*
 * XREFs of ??$?RV?$nvp@AEAN@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAN@1@@Z @ 0x1800A37C8
 * Callers:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x1800A6C30 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 * Callees:
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x1800A69D0 (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800A7930 (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 */

__int64 __fastcall tson::output_archive::operator()<tson::nvp<double &>>(__int64 a1, __int64 a2, __int64 a3)
{
  double *v4; // rax
  double v6; // [rsp+30h] [rbp+8h] BYREF

  LOBYTE(a3) = *(_BYTE *)(a2 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 8) = a3;
  v4 = *(double **)(a2 + 16);
  LOBYTE(a2) = *v4 == 0.0;
  LOBYTE(a3) = 21;
  v6 = *v4;
  if ( (unsigned __int8)tson::output_archive::write_type(a1, a2, a3) )
    tson::write_buffer::push_back(*(tson::write_buffer **)(a1 + 144), &v6, 8uLL);
  return a1;
}
