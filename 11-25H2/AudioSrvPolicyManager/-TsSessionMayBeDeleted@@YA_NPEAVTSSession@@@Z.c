/*
 * XREFs of ?TsSessionMayBeDeleted@@YA_NPEAVTSSession@@@Z @ 0x18001AB54
 * Callers:
 *     ?TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180015110 (-TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@I@Z @ 0x18001C2D4 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@I@Z.c)
 *     _lambda_458ffd326e5965d00ecb8a039a2797a1_::operator() @ 0x18004027C (_lambda_458ffd326e5965d00ecb8a039a2797a1_--operator().c)
 * Callees:
 *     <none>
 */

bool __fastcall TsSessionMayBeDeleted(struct TSSession *a1)
{
  bool result; // al

  result = 0;
  if ( *((_DWORD *)a1 + 8) && *((_DWORD *)a1 + 1) == 0xFFFF && !*((_QWORD *)a1 + 2) )
    return *((_QWORD *)a1 + 5) == 0LL;
  return result;
}
