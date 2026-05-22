/*
 * XREFs of ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x1800A6094
 * Callers:
 *     ??$process@V?$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1800A3C1C (--$process@V-$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ??$?RV?$nvp@AEAF@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAF@1@@Z @ 0x180104B34 (--$-RV-$nvp@AEAF@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAF@1@@Z.c)
 *     ??$?RV?$nvp@AEAK@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAK@1@@Z @ 0x180104B9C (--$-RV-$nvp@AEAK@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAK@1@@Z.c)
 *     ??$?RV?$nvp@AEAN@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAN@1@@Z @ 0x180104C04 (--$-RV-$nvp@AEAN@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAN@1@@Z.c)
 *     ??$?RV?$nvp@AEA_J@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_J@1@@Z @ 0x180104C6C (--$-RV-$nvp@AEA_J@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEA_J@1@@Z.c)
 *     ??$?RV?$nvp@AEA_K@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_K@1@@Z @ 0x180104CD4 (--$-RV-$nvp@AEA_K@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEA_K@1@@Z.c)
 *     ??$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@Z @ 0x180105298 (--$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@Utest_flag@t.c)
 *     ??$process@V?$nvp@AEAG@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@@Z @ 0x1801053F0 (--$process@V-$nvp@AEAG@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAG@1@@Z.c)
 *     ??$read_string_buffer@Uansistring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUansistring_buffer_tag@1@@Z @ 0x1801055E0 (--$read_string_buffer@Uansistring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@de.c)
 *     ??$read_string_two_phase@Uansistring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUansistring_tag@1@@Z @ 0x1801056BC (--$read_string_two_phase@Uansistring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@detail.c)
 *     ??$read_string_two_phase@Ustring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUstring_tag@1@@Z @ 0x180105760 (--$read_string_two_phase@Ustring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@.c)
 * Callees:
 *     memcpy_0 @ 0x1801C7CFC (memcpy_0.c)
 */

char __fastcall tson::read_buffer::consume_n(tson::read_buffer *this, void *a2, size_t a3)
{
  const void *v5; // rdx

  v5 = (const void *)*((_QWORD *)this + 1);
  if ( (unsigned __int64)v5 + a3 > *((_QWORD *)this + 2) )
  {
    *((_BYTE *)this + 24) = 1;
    return 0;
  }
  else
  {
    memcpy_0(a2, v5, a3);
    *((_QWORD *)this + 1) += a3;
    return 1;
  }
}
