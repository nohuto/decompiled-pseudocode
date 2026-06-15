/*
 * XREFs of CreateCrossProcessServerEndpoint @ 0x140054FE0
 * Callers:
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x1400406D8 (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CreateCrossProcessServerEndpoint(void **a1, __int128 *a2, int a3, __int64 a4, __int64 a5)
{
  void **i; // rax
  signed __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int128 *, GUID *, __int64); // rax
  int v9; // ebx
  __int64 v10; // rdx
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  for ( i = (void **)&unk_14009DF30; ; i += 4 )
  {
    if ( i == &ATL::CComClassFactory::`vftable' )
    {
      v9 = -2147418113;
      v10 = 73LL;
      goto LABEL_12;
    }
    v7 = (_BYTE *)*a1 - (_BYTE *)*i;
    if ( *a1 == *i )
      v7 = (_BYTE *)a1[1] - (_BYTE *)i[1];
    if ( !v7 && a3 == *((_DWORD *)i + 4) )
      break;
  }
  v8 = (__int64 (__fastcall *)(__int128 *, GUID *, __int64))i[3];
  v12 = *a2;
  v9 = v8(&v12, &GUID_dfd2005f_a6e5_4d39_a265_939ada9fbb4d, a5);
  if ( v9 >= 0 )
    return 0LL;
  v10 = 68LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\crossprocessendpointcreation.cpp",
    (const char *)(unsigned int)v9);
  return (unsigned int)v9;
}
