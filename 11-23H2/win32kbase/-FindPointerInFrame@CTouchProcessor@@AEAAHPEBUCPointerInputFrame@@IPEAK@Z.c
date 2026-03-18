/*
 * XREFs of ?FindPointerInFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@IPEAK@Z @ 0x1C01C2B20
 * Callers:
 *     ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1C01C93A0 (-GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ @ 0x1C00E3D64 (-CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ.c)
 */

__int64 __fastcall CTouchProcessor::FindPointerInFrame(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        int a3,
        unsigned int *a4)
{
  __int64 v7; // rbx
  unsigned int v8; // ecx
  bool v9; // cc
  _DWORD *v10; // rax
  bool v11; // cf
  unsigned int v12; // edx
  _DWORD *v13; // rax

  if ( !CTouchProcessor::CTouchProcessorLockShared(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 14059);
  if ( *a4 >= *((_DWORD *)a2 + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 14060);
  v7 = *a4;
  v8 = *((_DWORD *)a2 + 12);
  v9 = (unsigned int)v7 <= v8;
  if ( (unsigned int)v7 >= v8 )
  {
LABEL_9:
    if ( !v9 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 14080);
  }
  else
  {
    v10 = (_DWORD *)(*((_QWORD *)a2 + 30) + 480 * v7 + 172);
    while ( *v10 != a3 )
    {
      LODWORD(v7) = v7 + 1;
      v10 += 120;
      v9 = (unsigned int)v7 <= v8;
      if ( (unsigned int)v7 >= v8 )
        goto LABEL_9;
    }
  }
  v11 = (unsigned int)v7 < *((_DWORD *)a2 + 12);
  if ( (_DWORD)v7 == *((_DWORD *)a2 + 12) )
  {
    v12 = *a4;
    LODWORD(v7) = 0;
    if ( !*a4 )
      goto LABEL_17;
    v13 = (_DWORD *)(*((_QWORD *)a2 + 30) + 172LL);
    do
    {
      if ( *v13 == a3 )
        break;
      LODWORD(v7) = v7 + 1;
      v13 += 120;
    }
    while ( (unsigned int)v7 < v12 );
    if ( (unsigned int)v7 >= v12 )
LABEL_17:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 14100);
    v11 = (unsigned int)v7 < *((_DWORD *)a2 + 12);
  }
  if ( !v11 || *(unsigned __int16 *)(480LL * (unsigned int)v7 + *((_QWORD *)a2 + 30) + 172) != a3 )
    return 0LL;
  *a4 = v7;
  return 1LL;
}
