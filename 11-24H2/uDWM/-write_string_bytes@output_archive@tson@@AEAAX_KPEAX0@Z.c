/*
 * XREFs of ?write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z @ 0x18006EEF8
 * Callers:
 *     ??$?RAEAUansistring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUansistring_tag@1@@Z @ 0x1800DF3A4 (--$-RAEAUansistring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUansistring_tag@1@@Z.c)
 *     ??$?RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z @ 0x1800DF404 (--$-RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z.c)
 *     ??$save_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tson@@YAXAEAVoutput_archive@0@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@Z @ 0x1800DFF28 (--$save_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPEAX@Z$1-CoTaskMemF.c)
 * Callees:
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x18007818C (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 *     ??$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z @ 0x180098800 (--$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z.c)
 */

void __fastcall tson::output_archive::write_string_bytes(
        tson::output_archive *this,
        __int64 a2,
        void *a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // rdx
  tson::write_buffer *v8; // rdi
  char v9; // si
  __int64 v10; // rcx
  char v11; // [rsp+40h] [rbp+8h] BYREF
  char v12; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2 + 1;
  if ( v4 > 0x7F )
  {
    if ( v4 > 0x7FFF && *((int *)this + 34) >= 0 )
      *((_DWORD *)this + 34) = -2147483637;
    v10 = *((_QWORD *)this + 18);
    v12 = v4;
    v11 = (unsigned __int16)(v4 | 0x8000) >> 8;
    tson::write_buffer::push_back<unsigned char>(v10, &v11);
    tson::write_buffer::push_back<unsigned char>(*((_QWORD *)this + 18), &v12);
  }
  else
  {
    v8 = (tson::write_buffer *)*((_QWORD *)this + 18);
    v9 = a3 != 0LL ? v4 : 0;
    if ( *((_QWORD *)v8 + 259) < *((_QWORD *)v8 + 260) || tson::write_buffer::reserve(v8, 1uLL) )
      *(_BYTE *)(*((_QWORD *)v8 + 259))++ = v9;
  }
  tson::write_buffer::push_back(*((tson::write_buffer **)this + 18), a3, a4);
}
