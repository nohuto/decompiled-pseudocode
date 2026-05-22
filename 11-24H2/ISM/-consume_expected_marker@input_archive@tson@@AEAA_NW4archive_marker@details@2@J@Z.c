/*
 * XREFs of ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1800A4D24
 * Callers:
 *     ??$process@V?$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1800A3FEC (--$process@V-$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800A4298 (--$process@V-$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ?finishNode@input_archive@tson@@QEAAXXZ @ 0x1800A5464 (-finishNode@input_archive@tson@@QEAAXXZ.c)
 *     ?push_node@input_archive@tson@@AEAAXXZ @ 0x1800A5748 (-push_node@input_archive@tson@@AEAAXXZ.c)
 *     ??$?RV?$nvp@AEAD@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAD@1@@Z @ 0x180106760 (--$-RV-$nvp@AEAD@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAD@1@@Z.c)
 *     ??$?RV?$nvp@AEAE@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAE@1@@Z @ 0x1801067D4 (--$-RV-$nvp@AEAE@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAE@1@@Z.c)
 *     ??$?RV?$nvp@AEAF@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAF@1@@Z @ 0x180106834 (--$-RV-$nvp@AEAF@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAF@1@@Z.c)
 *     ??$?RV?$nvp@AEAK@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAK@1@@Z @ 0x18010689C (--$-RV-$nvp@AEAK@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAK@1@@Z.c)
 *     ??$?RV?$nvp@AEAN@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAN@1@@Z @ 0x180106904 (--$-RV-$nvp@AEAN@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAN@1@@Z.c)
 *     ??$?RV?$nvp@AEA_J@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_J@1@@Z @ 0x180106A6C (--$-RV-$nvp@AEA_J@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEA_J@1@@Z.c)
 *     ??$?RV?$nvp@AEA_K@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_K@1@@Z @ 0x180106AD4 (--$-RV-$nvp@AEA_K@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEA_K@1@@Z.c)
 *     ??$process@V?$nvp@AEAG@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@@Z @ 0x1801071F0 (--$process@V-$nvp@AEAG@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAG@1@@Z.c)
 *     ??$read_string_buffer@Uansistring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUansistring_buffer_tag@1@@Z @ 0x1801073E0 (--$read_string_buffer@Uansistring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@de.c)
 *     ??$read_string_two_phase@Uansistring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUansistring_tag@1@@Z @ 0x1801074BC (--$read_string_two_phase@Uansistring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@detail.c)
 *     ??$read_string_two_phase@Ustring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUstring_tag@1@@Z @ 0x180107560 (--$read_string_two_phase@Ustring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@.c)
 * Callees:
 *     ?advance@read_buffer@tson@@QEAAPEAEXZ @ 0x1800A4B6C (-advance@read_buffer@tson@@QEAAPEAEXZ.c)
 */

char __fastcall tson::input_archive::consume_expected_marker(tson::read_buffer **a1)
{
  unsigned __int8 *v1; // rax
  int v2; // r8d
  __int64 v3; // r9
  char v4; // r10

  v1 = tson::read_buffer::advance(*a1);
  if ( v1 )
  {
    if ( v4 == *v1 )
      return 1;
    if ( *(int *)(v3 + 8) >= 0 )
      *(_DWORD *)(v3 + 8) = v2;
  }
  return 0;
}
