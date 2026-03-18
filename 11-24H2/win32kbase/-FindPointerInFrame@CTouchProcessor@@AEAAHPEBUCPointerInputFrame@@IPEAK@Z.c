/*
 * XREFs of ?FindPointerInFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@IPEAK@Z @ 0x1401FBBC4
 * Callers:
 *     ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1401FF8B8 (-GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z.c)
 * Callees:
 *     ?CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ @ 0x140182DBC (-CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
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

  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLockShared(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 14222);
  if ( *a4 >= *((_DWORD *)a2 + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 14223);
  v7 = *a4;
  v8 = *((_DWORD *)a2 + 12);
  v9 = (unsigned int)v7 <= v8;
  if ( (unsigned int)v7 >= v8 )
  {
LABEL_9:
    if ( !v9 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 14243);
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
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 14263);
    v11 = (unsigned int)v7 < *((_DWORD *)a2 + 12);
  }
  if ( !v11 || *(unsigned __int16 *)(480LL * (unsigned int)v7 + *((_QWORD *)a2 + 30) + 172) != a3 )
    return 0LL;
  *a4 = v7;
  return 1LL;
}
