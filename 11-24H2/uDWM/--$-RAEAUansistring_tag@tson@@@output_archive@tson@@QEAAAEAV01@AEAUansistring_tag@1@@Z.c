/*
 * XREFs of ??$?RAEAUansistring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUansistring_tag@1@@Z @ 0x1800DF3A4
 * Callers:
 *     ??$?RV?$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@Uansistring_tag@tson@@@1@@Z @ 0x1800DF580 (--$-RV-$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@Uansistrin.c)
 *     ??$process@V?$nvp@AEAUansistring_tag@tson@@@tson@@V?$nvp@AEAI@2@V?$nvp@AEAUstring_tag@tson@@@2@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAUansistring_tag@tson@@@1@$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAUstring_tag@tson@@@1@0@Z @ 0x1800DFB2C (--$process@V-$nvp@AEAUansistring_tag@tson@@@tson@@V-$nvp@AEAI@2@V-$nvp@AEAUstring_tag@tson@@@2@V.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x1800E3168 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z @ 0x1800E3520 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z.c)
 * Callees:
 *     ?write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z @ 0x18006EEF8 (-write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800E3D18 (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 */

tson::output_archive *__fastcall tson::output_archive::operator()<tson::ansistring_tag &>(
        tson::output_archive *this,
        __m128i *a2,
        __int64 a3)
{
  void *v4; // rdi
  unsigned __int64 v5; // xmm0_8
  __m128i v7; // [rsp+20h] [rbp-38h]

  LOBYTE(a3) = 23;
  v7 = *a2;
  v4 = (void *)a2->m128i_i64[0];
  LOBYTE(a2) = a2->m128i_i64[0] == 0;
  if ( (unsigned __int8)tson::output_archive::write_type(this, a2, a3) )
  {
    v5 = _mm_srli_si128(v7, 8).m128i_u64[0];
    tson::output_archive::write_string_bytes(this, v5, v4, v5);
  }
  return this;
}
