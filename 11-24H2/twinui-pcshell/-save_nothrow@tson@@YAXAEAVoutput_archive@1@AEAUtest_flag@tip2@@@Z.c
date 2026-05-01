/*
 * XREFs of ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x180338184
 * Callers:
 *     ?serialize_data@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180287FFC (-serialize_data@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180288404 (-serialize_data@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serial.c)
 *     ??$save_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVoutput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@Z @ 0x180288918 (--$save_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVoutput_archive@0@AEAV-$vector_nothrow@Utest_flag@.c)
 * Callees:
 *     ??$?RV?$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAE@1@@Z @ 0x1800DD010 (--$-RV-$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAE@1@@Z.c)
 *     ??$?RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z @ 0x1800DD044 (--$-RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z.c)
 *     ??$process@V?$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@@Z @ 0x1800DD07C (--$process@V-$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAG@1@@Z.c)
 *     ??$process@V?$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@Uansistring_tag@tson@@@1@@Z @ 0x1800DD270 (--$process@V-$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@Uansistrin.c)
 *     ??$?RV?$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@Uansistring_tag@tson@@@1@@Z @ 0x1800DD2AC (--$-RV-$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@Uansistrin.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1800DD4E8 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800DD78C (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x1800DE5DC (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 *     ?make_string_tag@tson@@YA?AUansistring_tag@1@PEBD@Z @ 0x180187824 (-make_string_tag@tson@@YA-AUansistring_tag@1@PEBD@Z.c)
 *     ?make_string_tag@tson@@YA?AUstring_tag@1@PEBG@Z @ 0x180212B44 (-make_string_tag@tson@@YA-AUstring_tag@1@PEBG@Z.c)
 *     ??$process@V?$nvp@AEA_K@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_K@1@@Z @ 0x1802C06C4 (--$process@V-$nvp@AEA_K@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_K@1@@Z.c)
 *     ??$?RV?$nvp@AEAD@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAD@1@@Z @ 0x180329924 (--$-RV-$nvp@AEAD@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAD@1@@Z.c)
 *     ??$?RV?$nvp@AEAK@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAK@1@@Z @ 0x180329A78 (--$-RV-$nvp@AEAK@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAK@1@@Z.c)
 *     ??$?RV?$nvp@AEAN@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAN@1@@Z @ 0x180329B14 (--$-RV-$nvp@AEAN@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAN@1@@Z.c)
 *     ??$?RV?$nvp@_N@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@_N@1@@Z @ 0x180329CB0 (--$-RV-$nvp@_N@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@_N@1@@Z.c)
 *     ??$process@V?$nvp@AEA_J@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_J@1@@Z @ 0x18032B12C (--$process@V-$nvp@AEA_J@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_J@1@@Z.c)
 */

void __fastcall tson::save_nothrow(tson *this, struct tson::output_archive *a2, struct tip2::test_flag *a3)
{
  unsigned __int16 *v3; // rbx
  __int64 string_tag; // rax
  __int128 v7; // xmm0
  __int64 v8; // xmm1_8
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  bool v18; // zf
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  __int64 v23; // rax
  __int128 v24; // xmm0
  __int64 v25; // xmm1_8
  __int64 v26; // rax
  __int64 v27; // xmm1_8
  const char *v28; // [rsp+28h] [rbp-19h] BYREF
  char v29; // [rsp+30h] [rbp-11h]
  char *v30; // [rsp+38h] [rbp-9h]
  const char *v31; // [rsp+40h] [rbp-1h] BYREF
  char v32; // [rsp+48h] [rbp+7h]
  __int128 v33; // [rsp+50h] [rbp+Fh] BYREF
  __int64 v34; // [rsp+60h] [rbp+1Fh]
  const char *v35; // [rsp+68h] [rbp+27h] BYREF
  char v36; // [rsp+70h] [rbp+2Fh]
  bool v37; // [rsp+71h] [rbp+30h]
  struct tson::output_archive *v38; // [rsp+78h] [rbp+37h]
  _BYTE v39[24]; // [rsp+80h] [rbp+3Fh] BYREF
  __int16 v40; // [rsp+B0h] [rbp+6Fh] BYREF

  v29 = 4;
  v3 = (unsigned __int16 *)((char *)a2 + 16);
  v28 = "type";
  v30 = (char *)a2 + 16;
  string_tag = tson::make_string_tag((__int64)v39, *((_QWORD *)a2 + 1));
  v32 = 4;
  v31 = "name";
  v36 = 6;
  v7 = *(_OWORD *)string_tag;
  v38 = a2;
  v8 = *(_QWORD *)(string_tag + 16);
  v33 = v7;
  v35 = "reason";
  v34 = v8;
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, (__int64 *)&v35, v9);
  tson::output_archive::process<tson::nvp<tson::ansistring_tag>>((__int64)this, (__int64 *)&v31);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, (__int64 *)&v28, v10);
  v12 = *v3;
  if ( v12 > 0x12 )
  {
    v19 = v12 - 19;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = v21 - 9;
          if ( v22 )
          {
            if ( v22 == 1 )
            {
              v23 = tson::make_string_tag((__int64)v39, *((_QWORD *)a2 + 3));
              v32 = 5;
              v31 = "value";
              v24 = *(_OWORD *)v23;
              v25 = *(_QWORD *)(v23 + 16);
              *(_QWORD *)this = "value";
              v33 = v24;
              *((_BYTE *)this + 8) = 5;
              v34 = v25;
              tson::output_archive::operator()<tson::string_tag &>((__int64)this, &v33);
            }
          }
          else
          {
            v26 = tson::make_string_tag((__int64)v39, *((_QWORD *)a2 + 3));
            v32 = 5;
            v31 = "value";
            v27 = *(_QWORD *)(v26 + 16);
            v33 = *(_OWORD *)v26;
            v34 = v27;
            tson::output_archive::operator()<tson::nvp<tson::ansistring_tag>>((__int64)this, (__int64 *)&v31);
          }
        }
        else
        {
          v29 = 5;
          v28 = "value";
          v30 = (char *)a2 + 24;
          tson::output_archive::process<tson::nvp<unsigned __int64 &>>((__int64)this, (__int64 *)&v28);
        }
      }
      else
      {
        v29 = 5;
        v28 = "value";
        v30 = (char *)a2 + 24;
        tson::output_archive::process<tson::nvp<__int64 &>>((__int64)this, (__int64 *)&v28);
      }
    }
    else
    {
      v29 = 5;
      v28 = "value";
      v30 = (char *)a2 + 24;
      tson::output_archive::operator()<tson::nvp<unsigned long &>>(this, (__int64)&v28, v11);
    }
  }
  else if ( v12 == 18 )
  {
    v29 = 5;
    v28 = "value";
    v30 = (char *)a2 + 24;
    tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, (__int64 *)&v28, v11);
  }
  else
  {
    v13 = v12 - 2;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 2;
        if ( v15 )
        {
          v16 = v15 - 6;
          if ( v16 )
          {
            v17 = v16 - 5;
            if ( v17 )
            {
              if ( v17 == 1 )
              {
                v29 = 5;
                v28 = "value";
                v30 = (char *)a2 + 24;
                tson::output_archive::operator()<tson::nvp<unsigned char &>>(this, (__int64)&v28);
              }
            }
            else
            {
              v29 = 5;
              v28 = "value";
              v30 = (char *)a2 + 24;
              tson::output_archive::operator()<tson::nvp<char &>>((__int64)this, (__int64 *)&v28);
            }
          }
          else
          {
            v18 = *((_WORD *)a2 + 12) == 0;
            v35 = "value";
            v36 = 5;
            v37 = !v18;
            tson::output_archive::operator()<tson::nvp<bool>>((__int64)this, (__int64)&v35);
          }
        }
        else
        {
          v29 = 5;
          v28 = "value";
          v30 = (char *)a2 + 24;
          tson::output_archive::operator()<tson::nvp<double &>>((__int64)this, (__int64)&v28);
        }
      }
      else
      {
        v29 = 5;
        v28 = "value";
        v30 = (char *)a2 + 24;
        tson::output_archive::process<tson::nvp<long &>>((__int64)this, (__int64 *)&v28, v11);
      }
    }
    else
    {
      *((_BYTE *)this + 8) = 5;
      *(_QWORD *)this = "value";
      v40 = *((_WORD *)a2 + 12);
      if ( tson::output_archive::write_type((__int64)this, v40 == 0, 13) )
        tson::write_buffer::push_back(*((void ***)this + 18), &v40, 2uLL);
    }
  }
}
