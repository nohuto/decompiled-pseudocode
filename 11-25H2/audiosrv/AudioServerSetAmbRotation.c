/*
 * XREFs of AudioServerSetAmbRotation @ 0x18010B210
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x180047C8C (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?SetStreamAmbRotation@CVADServer@@UEAAJ_KMMMM@Z @ 0x180108110 (-SetStreamAmbRotation@CVADServer@@UEAAJ_KMMMM@Z.c)
 */

__int64 __fastcall AudioServerSetAmbRotation(CVADServer *this, __int64 a2, float a3, float a4, float a5)
{
  int v7; // eax
  unsigned int v8; // ebx
  _BYTE v10[16]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v11[16]; // [rsp+40h] [rbp-58h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v10, this);
  v7 = CVADServer::SetStreamAmbRotation(this, a2, a3, a4, a5);
  v8 = v7;
  if ( v7 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerSetAmbRotation", 4783, v7);
  EtwEventActivityIdControl(4LL, v11);
  return v8;
}
