/*
 * XREFs of ??$process@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@tson@@V?$nvp@AEAW4SwitchType@@@2@V?$nvp@AEA_N@2@V42@V42@V42@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEAW4SwitchType@@@1@$$QEAV?$nvp@AEA_N@1@222@Z @ 0x1805513A0
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$nvp@AEAW4SwitchType@@@2@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEAW4SwitchType@@@1@0000@Z @ 0x18055190C (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$a_ea_18055190C.c)
 * Callees:
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180182FE4 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocato.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x180183250 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x180183364 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x180335E8C (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 */

char __fastcall tson::input_archive::process<tson::nvp<std::wstring &>,tson::nvp<enum SwitchType &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 *a7)
{
  char v7; // r10
  char v11; // dl
  _DWORD *v12; // r14
  int v13; // ebx
  __int64 v14; // r9
  __int64 v15; // r8
  int v17; // [rsp+40h] [rbp+8h] BYREF

  v7 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v7;
  tson::load_nothrow(this, *(_WORD **)(a2 + 16));
  v11 = *(_BYTE *)(a3 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a3;
  *((_BYTE *)this + 24) = v11;
  v12 = *(_DWORD **)(a3 + 16);
  v13 = 0;
  v17 = 0;
  if ( tson::input_archive::search(this) )
  {
    tson::input_archive::consume_expected_marker(this, 18, -2147023267);
    tson::read_buffer::consume_n(*(tson::read_buffer **)this, &v17, 4uLL);
    v13 = v17;
  }
  v14 = a6;
  v15 = (__int64)a5;
  a5 = a7;
  *v12 = v13;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           (__int64)this,
           a4,
           v15,
           v14,
           a5);
}
