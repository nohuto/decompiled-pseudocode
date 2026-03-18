/*
 * XREFs of ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1401FC2F8
 * Callers:
 *     ?CheckFreeOnDeparture@CTouchProcessor@@AEAAXG@Z @ 0x14013A81C (-CheckFreeOnDeparture@CTouchProcessor@@AEAAXG@Z.c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAH@Z @ 0x1401F71B0 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAH@Z.c)
 *     ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1401FC120 (-FreeMsgData@CTouchProcessor@@AEAAX_K@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8564 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CTouchProcessor::FreeNode(PERESOURCE *this, struct CInputPointerNode *a2)
{
  __int64 v3; // rax
  struct CInputPointerNode **v4; // rcx
  char *v5; // rax
  __int64 v6; // rdx
  char **v7; // rcx

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10865);
  if ( *((_DWORD *)a2 + 9) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10867);
  if ( *((struct CInputPointerNode **)a2 + 32) != (struct CInputPointerNode *)((char *)a2 + 256) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10868);
  if ( *((struct CInputPointerNode **)a2 + 30) != (struct CInputPointerNode *)((char *)a2 + 240) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10869);
  v3 = *(_QWORD *)a2;
  if ( *(struct CInputPointerNode **)(*(_QWORD *)a2 + 8LL) != a2 )
    goto LABEL_18;
  v4 = (struct CInputPointerNode **)*((_QWORD *)a2 + 1);
  if ( *v4 != a2 )
    goto LABEL_18;
  *v4 = (struct CInputPointerNode *)v3;
  *(_QWORD *)(v3 + 8) = v4;
  v5 = (char *)a2 + 16;
  *((_QWORD *)a2 + 1) = a2;
  *(_QWORD *)a2 = a2;
  v6 = *((_QWORD *)a2 + 2);
  if ( (struct CInputPointerNode *)v6 == (struct CInputPointerNode *)((char *)a2 + 16) )
    goto LABEL_15;
  if ( *(char **)(v6 + 8) != v5 || (v7 = (char **)*((_QWORD *)a2 + 3), *v7 != v5) )
LABEL_18:
    __fastfail(3u);
  *v7 = (char *)v6;
  *(_QWORD *)(v6 + 8) = v7;
LABEL_15:
  if ( *((_DWORD *)a2 + 18) )
    CInputDest::~CInputDest((struct CInputPointerNode *)((char *)a2 + 72));
  GreDeleteFastMutex((char *)a2);
}
