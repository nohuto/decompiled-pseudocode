/*
 * XREFs of ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z @ 0x1800A5C90
 * Callers:
 *     ??$process@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@tson@@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x1800A41F0 (--$process@V-$nvp@AEAV-$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@tson@@V-$nvp@AEAV-$vector.c)
 * Callees:
 *     ??$?RAEAUansistring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUansistring_tag@1@@Z @ 0x1800A3930 (--$-RAEAUansistring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUansistring_tag@1@@Z.c)
 *     ??$process@V?$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@@Z @ 0x1800A3F90 (--$process@V-$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAG@1@@Z.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1800A4050 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ??$process@V?$nvp@AEAUansistring_tag@tson@@@tson@@V?$nvp@AEAI@2@V?$nvp@AEAUstring_tag@tson@@@2@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAUansistring_tag@tson@@@1@$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAUstring_tag@tson@@@1@0@Z @ 0x1800A40A8 (--$process@V-$nvp@AEAUansistring_tag@tson@@@tson@@V-$nvp@AEAI@2@V-$nvp@AEAUstring_tag@tson@@@2@V.c)
 *     ?make_string_tag@tson@@YA?AUansistring_tag@1@PEBD@Z @ 0x1800A55FC (-make_string_tag@tson@@YA-AUansistring_tag@1@PEBD@Z.c)
 *     ?make_string_tag@tson@@YA?AUstring_tag@1@PEBG@Z @ 0x1800A5634 (-make_string_tag@tson@@YA-AUstring_tag@1@PEBG@Z.c)
 */

void __fastcall tson::save_nothrow(tson *this, struct tson::output_archive *a2, struct wil::StoredFailureInfo *a3)
{
  int v4; // eax
  __int64 v5; // rdx
  __m128i *string_tag; // rax
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rax
  __int128 v16; // xmm0
  __int64 v17; // xmm1_8
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // r8
  const char *v21; // [rsp+30h] [rbp-D0h] BYREF
  char v22; // [rsp+38h] [rbp-C8h]
  __int128 *v23; // [rsp+40h] [rbp-C0h]
  const char *v24; // [rsp+48h] [rbp-B8h] BYREF
  char v25; // [rsp+50h] [rbp-B0h]
  int *v26; // [rsp+58h] [rbp-A8h]
  const char *v27; // [rsp+60h] [rbp-A0h] BYREF
  char v28; // [rsp+68h] [rbp-98h]
  __int16 *v29; // [rsp+70h] [rbp-90h]
  __int64 v30; // [rsp+78h] [rbp-88h] BYREF
  char v31; // [rsp+80h] [rbp-80h]
  __int128 *v32; // [rsp+88h] [rbp-78h]
  const char *v33; // [rsp+90h] [rbp-70h] BYREF
  char v34; // [rsp+98h] [rbp-68h]
  __int128 *v35; // [rsp+A0h] [rbp-60h]
  const char *v36; // [rsp+A8h] [rbp-58h] BYREF
  char v37; // [rsp+B0h] [rbp-50h]
  int *v38; // [rsp+B8h] [rbp-48h]
  __int128 v39; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v40; // [rsp+D0h] [rbp-30h]
  __int128 v41; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v42; // [rsp+E8h] [rbp-18h]
  __int128 v43; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v44; // [rsp+100h] [rbp+0h]
  __m128i v45; // [rsp+108h] [rbp+8h] BYREF
  __int64 v46; // [rsp+118h] [rbp+18h]
  __int16 v47; // [rsp+130h] [rbp+30h] BYREF
  int v48; // [rsp+138h] [rbp+38h] BYREF
  int v49; // [rsp+140h] [rbp+40h] BYREF

  v49 = *((_DWORD *)a2 + 2);
  v47 = *((_WORD *)a2 + 32);
  v4 = *(_DWORD *)a2;
  v5 = *((_QWORD *)a2 + 7);
  v48 = v4;
  string_tag = (__m128i *)tson::make_string_tag((__int64)&v21, v5);
  v8 = *(_QWORD *)(v7 + 128);
  v45 = *string_tag;
  v46 = string_tag[1].m128i_i64[0];
  v9 = tson::make_string_tag((__int64)&v21, v8);
  v11 = *(_QWORD *)(v10 + 24);
  v43 = *(_OWORD *)v9;
  v44 = *(_QWORD *)(v9 + 16);
  v12 = tson::make_string_tag((__int64)&v21, v11);
  v14 = *(_QWORD *)(v13 + 72);
  v41 = *(_OWORD *)v12;
  v42 = *(_QWORD *)(v12 + 16);
  v15 = tson::make_string_tag((__int64)&v21, v14);
  v31 = 7;
  v34 = 7;
  v37 = 4;
  v16 = *(_OWORD *)v15;
  v28 = 4;
  v25 = 2;
  v39 = v16;
  v17 = *(_QWORD *)(v15 + 16);
  v30 = (__int64)"context";
  v32 = &v39;
  v33 = "message";
  v35 = &v41;
  v36 = "type";
  v38 = &v48;
  v21 = "module";
  v23 = &v43;
  v27 = "line";
  v29 = &v47;
  v24 = "hr";
  v26 = &v49;
  v40 = v17;
  v22 = 6;
  tson::output_archive::process<tson::nvp<long &>>((__int64)this, (__int64 *)&v24, v18);
  *((_BYTE *)this + 8) = 4;
  *(_QWORD *)this = "file";
  tson::output_archive::operator()<tson::ansistring_tag &>(this, &v45, v19);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, (__int64 *)&v27, v20);
  tson::output_archive::process<tson::nvp<tson::ansistring_tag &>,tson::nvp<unsigned int &>,tson::nvp<tson::string_tag &>,tson::nvp<tson::ansistring_tag &>>(
    this,
    (__int64)&v21,
    (__int64)&v36,
    (__int64 *)&v33,
    &v30);
}
