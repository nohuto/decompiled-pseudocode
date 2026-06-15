/*
 * XREFs of ?TsSessionLogonConnectTime@@YA_JPEAVTSSession@@@Z @ 0x180040288
 * Callers:
 *     ?TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18003EC1C (-TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TsSessionLogonConnectTime(struct TSSession *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *((_QWORD *)a1 + 3);
  result = *(_QWORD *)(v1 + 200);
  if ( !result )
    return 0LL;
  v3 = *(_QWORD *)(v1 + 176);
  if ( !v3 )
    return 0LL;
  if ( result <= v3 )
    return v3;
  return result;
}
