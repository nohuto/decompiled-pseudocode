/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V42@V12@V12@V12@V12@V42@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1200002@Z @ 0x180657638
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_RemoteSessionOnStateChangedTipTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180657B98 (--$serialize@Voutput_archive@tson@@@_tip_RemoteSessionOnStateChangedTipTest@@QEAAXAEAVoutput_arc.c)
 * Callees:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DD540 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800DD708 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDE98 (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 */

char __fastcall tson::output_archive::process<tson::nvp<bool &>,tson::nvp<enum winrt::Windows::Internal::Shell::CloudPCState &>,tson::nvp<std::wstring &>,tson::nvp<enum winrt::Windows::Internal::Shell::CloudPCState &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  char v14; // dl
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r8

  tson::output_archive::process<tson::nvp<bool &>>((__int64)this, a2);
  v14 = *(_BYTE *)(a3 + 8);
  *(_QWORD *)this = *(_QWORD *)a3;
  *((_BYTE *)this + 8) = v14;
  tson::output_archive::saveValue(this, **(unsigned int **)(a3 + 16), v15);
  v16 = *a4;
  *((_BYTE *)this + 8) = *((_BYTE *)a4 + 8);
  *(_QWORD *)this = v16;
  tson::save_nothrow((__int64)this, (const void **)a4[2], v17);
  v18 = *a5;
  *((_BYTE *)this + 8) = *((_BYTE *)a5 + 8);
  *(_QWORD *)this = v18;
  tson::output_archive::saveValue(this, *(unsigned int *)a5[2], v19);
  v20 = *a6;
  *((_BYTE *)this + 8) = *((_BYTE *)a6 + 8);
  *(_QWORD *)this = v20;
  tson::save_nothrow((__int64)this, (const void **)a6[2], v21);
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
           (__int64)this,
           a7,
           a8,
           a9,
           a10,
           a11);
}
