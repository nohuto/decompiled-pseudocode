/*
 * XREFs of ??$?RV?$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAE@1@@Z @ 0x1800DD010
 * Callers:
 *     ?serialize_data@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180287FFC (-serialize_data@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x180338184 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 *     ?serialize_data@?$shared_data@$00$00$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x1803C45D0 (-serialize_data@-$shared_data@$00$00$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x1806995F0 (-serialize_data@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAXE@Z @ 0x1800DD118 (-saveValue@output_archive@tson@@QEAAXE@Z.c)
 */

tson::output_archive *__fastcall tson::output_archive::operator()<tson::nvp<unsigned char &>>(
        tson::output_archive *a1,
        __int64 a2)
{
  char v2; // r8

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *((_BYTE *)a1 + 8) = v2;
  tson::output_archive::saveValue(a1, **(_BYTE **)(a2 + 16));
  return a1;
}
