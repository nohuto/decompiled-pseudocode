/*
 * XREFs of ??$write_string@Uansistring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Uansistring_tag@1@@Z @ 0x1800DD2F4
 * Callers:
 *     ??$process@V?$nvp@AEAUansistring_tag@tson@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAUansistring_tag@tson@@@1@@Z @ 0x1800DD0D8 (--$process@V-$nvp@AEAUansistring_tag@tson@@@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAUans.c)
 *     ??$process@V?$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@Uansistring_tag@tson@@@1@@Z @ 0x1800DD270 (--$process@V-$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@Uansistrin.c)
 *     ??$?RV?$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@Uansistring_tag@tson@@@1@@Z @ 0x1800DD2AC (--$-RV-$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@Uansistrin.c)
 *     ?serialize_data@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180287FFC (-serialize_data@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180288404 (-serialize_data@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serial.c)
 *     ??$save_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tson@@YAXAEAVoutput_archive@0@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@Z @ 0x1802887D0 (--$save_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPEAX@Z$1-CoTaskMemF.c)
 * Callees:
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800DD78C (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x1800DE248 (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 *     ??$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z @ 0x1800DEA48 (--$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z.c)
 *     memcpy_s_3 @ 0x1802DFCA8 (memcpy_s_3.c)
 */

char __fastcall tson::output_archive::write_string<tson::ansistring_tag>(__int64 a1, __int64 a2, const void **a3)
{
  bool v3; // zf
  const void **v4; // rdi
  char result; // al
  rsize_t v7; // rsi
  const void *v8; // r14
  unsigned __int64 v9; // rcx
  __int64 v10; // rdi
  char v11; // bp
  __int64 v12; // rbx
  char v13; // ah
  __int64 v14; // rcx
  char v15; // [rsp+48h] [rbp+10h] BYREF
  char v16; // [rsp+50h] [rbp+18h] BYREF

  v15 = a2;
  v3 = *a3 == 0LL;
  v4 = a3;
  LOBYTE(a3) = 23;
  LOBYTE(a2) = v3;
  result = tson::output_archive::write_type(a1, a2, a3);
  if ( result )
  {
    v7 = (rsize_t)v4[1];
    v8 = *v4;
    v9 = v7 + 1;
    if ( v7 + 1 > 0x7F )
    {
      if ( v9 > 0x7FFF && *(int *)(a1 + 136) >= 0 )
        *(_DWORD *)(a1 + 136) = -2147483637;
      v13 = BYTE1(v9) | 0x80;
      v16 = v7 + 1;
      v14 = *(_QWORD *)(a1 + 144);
      v15 = v13;
      tson::write_buffer::push_back<unsigned char>(v14, &v15);
      tson::write_buffer::push_back<unsigned char>(*(_QWORD *)(a1 + 144), &v16);
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 144);
      v11 = v8 != 0LL ? v9 : 0;
      if ( *(_QWORD *)(v10 + 2072) < *(_QWORD *)(v10 + 2080)
        || tson::write_buffer::reserve(*(tson::write_buffer **)(a1 + 144), 1uLL) )
      {
        *(_BYTE *)(*(_QWORD *)(v10 + 2072))++ = v11;
      }
    }
    v12 = *(_QWORD *)(a1 + 144);
    if ( *(_QWORD *)(v12 + 2080) - *(_QWORD *)(v12 + 2072) >= v7
      || (result = tson::write_buffer::reserve((tson::write_buffer *)v12, v7)) != 0 )
    {
      result = memcpy_s_3(*(void *const *)(v12 + 2072), *(_QWORD *)(v12 + 2080) - *(_QWORD *)(v12 + 2072), v8, v7);
      *(_QWORD *)(v12 + 2072) += v7;
    }
  }
  return result;
}
