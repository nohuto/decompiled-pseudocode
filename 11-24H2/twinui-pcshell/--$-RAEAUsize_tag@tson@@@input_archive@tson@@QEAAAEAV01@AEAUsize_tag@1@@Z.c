/*
 * XREFs of ??$?RAEAUsize_tag@tson@@@input_archive@tson@@QEAAAEAV01@AEAUsize_tag@1@@Z @ 0x180212C5C
 * Callers:
 *     ??$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@Z @ 0x18028E7EC (--$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@Utest_flag@t.c)
 *     ??$load_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@Z @ 0x18028E8D4 (--$load_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPEAX@Z$1-CoTaskMemF.c)
 *     ??$load_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@Z @ 0x18028EB5C (--$load_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@VStor.c)
 *     ??$load_nothrow@HV?$allocator@H@std@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector@HV?$allocator@H@std@@@std@@@Z @ 0x1805C4BB0 (--$load_nothrow@HV-$allocator@H@std@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector@HV-$allocator@H@.c)
 *     ??$load_nothrow@KV?$allocator@K@std@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector@KV?$allocator@K@std@@@std@@@Z @ 0x1805FED8C (--$load_nothrow@KV-$allocator@K@std@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector@KV-$allocator@K@.c)
 * Callees:
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x180335E8C (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 */

__int64 __fastcall tson::input_archive::operator()<tson::size_tag &>(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int16 v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  if ( !*(_BYTE *)(a1 + 25) )
  {
    v4 = *(_QWORD *)(a1 + 136);
    if ( v4 )
    {
      v5 = 4 * v4;
    }
    else
    {
      *(_BYTE *)(a1 + 32) = 1;
      v5 = 4LL;
    }
    if ( *(_DWORD *)(v5 + a1 + 32) != 1 && *(int *)(a1 + 8) >= 0 )
      *(_DWORD *)(a1 + 8) = -2147023267;
    v7 = 0;
    tson::read_buffer::consume_n(*(tson::read_buffer **)a1, &v7, 2uLL);
    *a2 = v7;
  }
  return a1;
}
