/*
 * XREFs of ?write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z @ 0x1800A7880
 * Callers:
 *     ??$?RAEAUansistring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUansistring_tag@1@@Z @ 0x1800A3560 (--$-RAEAUansistring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUansistring_tag@1@@Z.c)
 *     ??$?RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z @ 0x1800A35C0 (--$-RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z.c)
 *     ??$save_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tson@@YAXAEAVoutput_archive@0@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@Z @ 0x1800A3F90 (--$save_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPEAX@Z$1-CoTaskMemF.c)
 * Callees:
 *     ??$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z @ 0x1800A3F3C (--$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z.c)
 */

void __fastcall tson::output_archive::write_string_bytes(tson::output_archive *this, __int64 a2, void *a3, rsize_t a4)
{
  unsigned __int64 v6; // rcx
  char *v8; // rdx
  char v9; // ah
  tson::write_buffer *v10; // rcx
  char v11; // [rsp+30h] [rbp+8h] BYREF
  char v12; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2 + 1;
  if ( (unsigned __int64)(a2 + 1) > 0x7F )
  {
    if ( v6 > 0x7FFF && *((int *)this + 34) >= 0 )
      *((_DWORD *)this + 34) = -2147483637;
    v9 = BYTE1(v6) | 0x80;
    v12 = a2 + 1;
    v10 = (tson::write_buffer *)*((_QWORD *)this + 18);
    v11 = v9;
    tson::write_buffer::push_back<unsigned char>(v10, &v11);
    v8 = &v12;
  }
  else
  {
    v11 = a3 != 0LL ? v6 : 0;
    v8 = &v11;
  }
  tson::write_buffer::push_back<unsigned char>(*((tson::write_buffer **)this + 18), v8);
  tson::write_buffer::push_back(*((void ***)this + 18), a3, a4);
}
