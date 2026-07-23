/*
 * XREFs of WdipSemGetLoggerIds @ 0x140A3E8A4
 * Callers:
 *     WdipSemCleanStart @ 0x1407A0ED0 (WdipSemCleanStart.c)
 *     WdipSemDisableScenario @ 0x140A3D910 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x140A3E10C (WdipSemEnableScenario.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140928FAC (EtwpAcquireLoggerContextByLoggerName.c)
 */

__int64 WdipSemGetLoggerIds()
{
  unsigned int v0; // ebx
  unsigned __int16 v1; // bp
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned int *v3; // rax
  int v4; // edi
  __int32 v5; // eax
  struct _LIST_ENTRY *v6; // rax
  unsigned int *v7; // rax
  __int32 v8; // eax
  __int64 v10; // rcx
  unsigned __int16 v11; // si
  __int64 v12; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"DiagLog");
  v0 = -1073741162;
  v1 = -1;
  if ( !DestinationString.Buffer || !DestinationString.Length )
  {
    v4 = -1073741811;
    goto LABEL_5;
  }
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v3 = EtwpAcquireLoggerContextByLoggerName((__int64)CurrentServerSiloGlobals[52].Flink, &DestinationString, 0);
  if ( !v3 )
  {
    v4 = -1073741162;
LABEL_5:
    v5 = 0;
    goto LABEL_6;
  }
  v10 = *v3;
  if ( (_DWORD)v10 )
    v11 = *(_WORD *)v3;
  else
    v11 = -1;
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v3 + 170) + 704LL) + 8 * v10),
    1u);
  v5 = v11;
  v4 = 0;
LABEL_6:
  _InterlockedExchange(&WdipDiagLoggerId, v5);
  RtlInitUnicodeString(&DestinationString, L"WdiContextLog");
  if ( !DestinationString.Buffer || !DestinationString.Length )
  {
    v0 = -1073741811;
    goto LABEL_9;
  }
  v6 = PsGetCurrentServerSiloGlobals();
  v7 = EtwpAcquireLoggerContextByLoggerName((__int64)v6[52].Flink, &DestinationString, 0);
  if ( !v7 )
  {
LABEL_9:
    v8 = 0;
    goto LABEL_10;
  }
  v12 = *v7;
  if ( (_DWORD)v12 )
    v1 = *(_WORD *)v7;
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v7 + 170) + 704LL) + 8 * v12),
    1u);
  v8 = v1;
  v0 = 0;
LABEL_10:
  _InterlockedExchange(&WdipContextLoggerId, v8);
  if ( v4 < 0 )
    return (unsigned int)v4;
  return v0;
}
