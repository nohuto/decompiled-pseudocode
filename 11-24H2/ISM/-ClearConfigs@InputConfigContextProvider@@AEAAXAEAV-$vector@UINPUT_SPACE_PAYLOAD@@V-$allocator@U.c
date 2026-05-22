/*
 * XREFs of ?ClearConfigs@InputConfigContextProvider@@AEAAXAEAV?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@@Z @ 0x18000BF78
 * Callers:
 *     ?OnInputConfigPayloadReceived@InputConfigContextProvider@@QEAAXAEBV?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@@Z @ 0x18000BED4 (-OnInputConfigPayloadReceived@InputConfigContextProvider@@QEAAXAEBV-$vector@UINPUT_SPACE_PAYLOAD.c)
 *     ?OnInputConfigMessageReceived@InputConfigContextProvider@@AEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z @ 0x18000BFD0 (-OnInputConfigMessageReceived@InputConfigContextProvider@@AEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z.c)
 *     ??1InputConfigContextProvider@@EEAA@XZ @ 0x18010A3C8 (--1InputConfigContextProvider@@EEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall InputConfigContextProvider::ClearConfigs(__int64 a1, const struct std::nothrow_t *a2)
{
  __int64 v2; // rsi
  __int64 i; // rbx
  void *v5; // rcx
  __int64 result; // rax

  v2 = *((_QWORD *)a2 + 1);
  for ( i = *(_QWORD *)a2; i != v2; i += 24LL )
  {
    v5 = *(void **)(i + 16);
    if ( v5 )
      operator delete(v5, a2);
  }
  result = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 != *((_QWORD *)a2 + 1) )
    *((_QWORD *)a2 + 1) = result;
  return result;
}
