/*
 * XREFs of ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z @ 0x1800DCD78
 * Callers:
 *     ?serialize_data@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180287FFC (-serialize_data@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180288404 (-serialize_data@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serial.c)
 *     ??$save_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVoutput_archive@0@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@Z @ 0x180288884 (--$save_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVoutput_archive@0@AEAV-$vector_nothrow@VSto.c)
 * Callees:
 *     ??$?RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z @ 0x1800DD044 (--$-RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z.c)
 *     ??$process@V?$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@@Z @ 0x1800DD07C (--$process@V-$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAG@1@@Z.c)
 *     ??$process@V?$nvp@AEAUansistring_tag@tson@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAUansistring_tag@tson@@@1@@Z @ 0x1800DD0D8 (--$process@V-$nvp@AEAUansistring_tag@tson@@@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAUans.c)
 *     ??$process@V?$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x1800DD450 (--$process@V-$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1800DD4E8 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 */

void __fastcall tson::save_nothrow(tson *this, struct tson::output_archive *a2, struct wil::StoredFailureInfo *a3)
{
  __int64 v3; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int64 v8; // r8
  __int64 v9; // rcx
  __int128 v10; // xmm0
  __int64 v11; // r8
  __int128 v12; // xmm0
  __int64 v13; // rcx
  __int128 v14; // xmm0
  __int64 v15; // rcx
  __int128 v16; // [rsp+20h] [rbp-E0h] BYREF
  int *v17; // [rsp+30h] [rbp-D0h]
  const char *v18; // [rsp+38h] [rbp-C8h] BYREF
  char v19; // [rsp+40h] [rbp-C0h]
  __int128 *v20; // [rsp+48h] [rbp-B8h]
  const char *v21; // [rsp+50h] [rbp-B0h] BYREF
  char v22; // [rsp+58h] [rbp-A8h]
  __int16 *v23; // [rsp+60h] [rbp-A0h]
  const char *v24; // [rsp+68h] [rbp-98h] BYREF
  char v25; // [rsp+70h] [rbp-90h]
  __int128 *v26; // [rsp+78h] [rbp-88h]
  const char *v27; // [rsp+80h] [rbp-80h] BYREF
  char v28; // [rsp+88h] [rbp-78h]
  int *v29; // [rsp+90h] [rbp-70h]
  const char *v30; // [rsp+98h] [rbp-68h] BYREF
  char v31; // [rsp+A0h] [rbp-60h]
  __int128 *v32; // [rsp+A8h] [rbp-58h]
  __int128 v33; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-40h]
  __int128 v35; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v36; // [rsp+D8h] [rbp-28h]
  __int128 v37; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v38; // [rsp+F0h] [rbp-10h]
  __int128 v39; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v40; // [rsp+108h] [rbp+8h]
  __int16 v41; // [rsp+120h] [rbp+20h] BYREF
  int v42; // [rsp+128h] [rbp+28h] BYREF
  int v43; // [rsp+130h] [rbp+30h] BYREF

  v3 = *((_QWORD *)a2 + 7);
  v43 = *((_DWORD *)a2 + 2);
  v41 = *((_WORD *)a2 + 32);
  v42 = *(_DWORD *)a2;
  v5 = -1LL;
  *(_QWORD *)&v16 = v3;
  if ( v3 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_BYTE *)(v3 + v6) );
    *((_QWORD *)&v16 + 1) = v6;
  }
  else
  {
    v16 = 0uLL;
  }
  v7 = v16;
  v8 = *((_QWORD *)a2 + 16);
  v17 = 0LL;
  v38 = 0LL;
  *(_QWORD *)&v16 = v8;
  v37 = v7;
  if ( v8 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *(_BYTE *)(v8 + v9) );
    *((_QWORD *)&v16 + 1) = v9;
  }
  else
  {
    v16 = 0uLL;
  }
  v10 = v16;
  v11 = *((_QWORD *)a2 + 3);
  v17 = 0LL;
  v36 = 0LL;
  *(_QWORD *)&v16 = v11;
  v35 = v10;
  if ( v11 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *(_WORD *)(v11 + 2 * v15) );
    *((_QWORD *)&v16 + 1) = v15;
  }
  else
  {
    v16 = 0uLL;
  }
  v12 = v16;
  v17 = 0LL;
  v13 = *((_QWORD *)a2 + 9);
  v40 = 0LL;
  *(_QWORD *)&v16 = v13;
  v39 = v12;
  if ( v13 )
  {
    do
      ++v5;
    while ( *(_BYTE *)(v13 + v5) );
    *((_QWORD *)&v16 + 1) = v5;
  }
  else
  {
    v16 = 0uLL;
  }
  v14 = v16;
  v30 = "context";
  v32 = &v33;
  v27 = "type";
  v29 = &v42;
  v24 = "module";
  v26 = &v35;
  v21 = "line";
  v23 = &v41;
  v18 = "file";
  v20 = &v37;
  *(_QWORD *)&v16 = "hr";
  v17 = &v43;
  v33 = v14;
  v31 = 7;
  v34 = 0LL;
  v28 = 4;
  v25 = 6;
  v22 = 4;
  v19 = 4;
  BYTE8(v16) = 2;
  tson::output_archive::process<tson::nvp<long &>>(this, &v16);
  tson::output_archive::process<tson::nvp<tson::ansistring_tag &>>(this, &v18);
  tson::output_archive::process<tson::nvp<unsigned short &>>(this, &v21);
  tson::output_archive::process<tson::nvp<tson::ansistring_tag &>>(this, &v24);
  tson::output_archive::process<tson::nvp<unsigned int &>>(this, &v27);
  *((_BYTE *)this + 8) = 7;
  *(_QWORD *)this = "message";
  tson::output_archive::operator()<tson::string_tag &>(this, &v39);
  tson::output_archive::process<tson::nvp<tson::ansistring_tag &>>(this, &v30);
}
