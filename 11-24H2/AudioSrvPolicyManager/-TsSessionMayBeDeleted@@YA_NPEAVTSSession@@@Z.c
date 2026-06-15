/*
 * XREFs of ?TsSessionMayBeDeleted@@YA_NPEAVTSSession@@@Z @ 0x18001AC84
 * Callers:
 *     ?TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x1800045B0 (-TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@I@Z @ 0x18001C404 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@I@Z.c)
 *     _lambda_458ffd326e5965d00ecb8a039a2797a1_::operator() @ 0x18003DA5C (_lambda_458ffd326e5965d00ecb8a039a2797a1_--operator().c)
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
