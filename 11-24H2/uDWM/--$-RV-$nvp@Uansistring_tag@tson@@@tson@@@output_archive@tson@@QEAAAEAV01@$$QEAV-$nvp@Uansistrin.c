/*
 * XREFs of ??$?RV?$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@Uansistring_tag@tson@@@1@@Z @ 0x1800DF580
 * Callers:
 *     ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180097D50 (-serialize_data@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serial.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x1800E3168 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 * Callees:
 *     ??$?RAEAUansistring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUansistring_tag@1@@Z @ 0x1800DF3A4 (--$-RAEAUansistring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUansistring_tag@1@@Z.c)
 */

tson::output_archive *__fastcall tson::output_archive::operator()<tson::nvp<tson::ansistring_tag>>(
        tson::output_archive *a1,
        __m128i *a2,
        __int64 a3)
{
  LOBYTE(a3) = a2->m128i_i8[8];
  *(_QWORD *)a1 = a2->m128i_i64[0];
  *((_BYTE *)a1 + 8) = a3;
  tson::output_archive::operator()<tson::ansistring_tag &>(a1, a2 + 1, a3);
  return a1;
}
