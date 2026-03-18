/*
 * XREFs of RawFieldAccess @ 0x140001978
 * Callers:
 *     WriteField @ 0x14000229C (WriteField.c)
 *     AccFieldUnit @ 0x140003430 (AccFieldUnit.c)
 *     WriteObject @ 0x140006BD0 (WriteObject.c)
 *     ReadField @ 0x140011880 (ReadField.c)
 * Callees:
 *     FindRSAccess @ 0x140001910 (FindRSAccess.c)
 *     HeapFree @ 0x140004AB0 (HeapFree.c)
 *     HeapAlloc @ 0x140008CA0 (HeapAlloc.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     memmove @ 0x140070C40 (memmove.c)
 */

__int64 __fastcall RawFieldAccess(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdi
  _QWORD *v8; // r12
  __int64 RSAccess; // rax
  __int64 v10; // r15
  char v11; // al
  _DWORD *v12; // r13
  unsigned int v13; // ebx
  void *v14; // rax
  void *v15; // rbp
  unsigned int v16; // ebx
  int v18; // edx
  int v19; // ecx
  int v20; // edx
  int v21; // ecx
  __int64 v22; // rax
  char v24; // [rsp+90h] [rbp+18h]

  v7 = **(_QWORD **)(a3 + 32);
  if ( *(_WORD *)(v7 + 66) != 131 )
  {
    v16 = -1072431101;
    LogError(3222536195LL);
    AcpiDiagTraceAmlError(a1, 3222536195LL);
    v18 = *(unsigned __int16 *)(v7 + 66);
    v19 = 157;
    goto LABEL_16;
  }
  v8 = *(_QWORD **)(**(_QWORD **)(v7 + 96) + 96LL);
  RSAccess = FindRSAccess(*((unsigned __int8 *)v8 + 12));
  v10 = RSAccess;
  if ( !RSAccess || !*(_QWORD *)(RSAccess + 32) )
  {
    v16 = -1072431088;
    LogError(3222536208LL);
    AcpiDiagTraceAmlError(a1, 3222536208LL);
    v18 = *((unsigned __int8 *)v8 + 12);
    v19 = 158;
LABEL_16:
    PrintDebugMessage(v19, v18, 0, 0, 0LL);
    return v16;
  }
  _m_prefetchw(&gDebugger);
  v11 = _InterlockedAnd(&gDebugger, 0xFFFFFFEF);
  v12 = *(_DWORD **)(a3 + 32);
  v13 = 40;
  v24 = v11;
  if ( v12[7] )
    v13 = v12[9] + 40;
  v14 = (void *)HeapAlloc(*(_QWORD *)(a1 + 320), 1430537800LL, v13);
  v15 = v14;
  if ( !v14 )
  {
    v16 = -1073741670;
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(a1, 3221225626LL);
    v20 = 0;
    v21 = 155;
LABEL_21:
    PrintDebugMessage(v21, v20, 0, 0, 0LL);
    goto LABEL_8;
  }
  memmove(v14, v12, v13);
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *, __int64, _QWORD, __int64 (__fastcall *)(), __int64))(v10 + 32))(
          a2,
          *v8,
          v15,
          a4,
          *(_QWORD *)(v10 + 40),
          RestartCtxtCallback,
          a1 + 328);
  if ( v16 == -1073741789 )
  {
    v22 = HeapAlloc(gpheapGlobal, 1179992648LL, *(unsigned int *)(a4 + 16));
    *(_QWORD *)(a4 + 32) = v22;
    if ( v22 )
    {
      *(_DWORD *)(a4 + 24) = *(_DWORD *)(a4 + 16);
      *(_WORD *)(a4 + 2) = 3;
      v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *, __int64, _QWORD, __int64 (__fastcall *)(), __int64))(v10 + 32))(
              a2,
              *v8,
              v15,
              a4,
              *(_QWORD *)(v10 + 40),
              RestartCtxtCallback,
              a1 + 328);
      goto LABEL_8;
    }
    v16 = -1073741670;
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(a1, 3221225626LL);
    v20 = *(_DWORD *)(a4 + 16);
    v21 = 156;
    goto LABEL_21;
  }
LABEL_8:
  if ( (v24 & 0x10) != 0 )
    _InterlockedOr(&gDebugger, 0x10u);
  if ( v16 == 259 )
  {
    v16 = 32772;
  }
  else if ( v16 )
  {
    LogError(3222536216LL);
    AcpiDiagTraceAmlError(a1, 3222536216LL);
    PrintDebugMessage(159, *((unsigned __int8 *)v8 + 12), v16, 0, 0LL);
    v16 = -1072431080;
  }
  if ( v15 )
    HeapFree(v15);
  return v16;
}
