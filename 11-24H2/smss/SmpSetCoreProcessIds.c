/*
 * XREFs of SmpSetCoreProcessIds @ 0x140018CC4
 * Callers:
 *     SmpTerminateCSR @ 0x140006C40 (SmpTerminateCSR.c)
 *     SmpExecPgm @ 0x140006F70 (SmpExecPgm.c)
 * Callees:
 *     SmpDereferenceKnownSubSys @ 0x140006A10 (SmpDereferenceKnownSubSys.c)
 *     SmpSessionIdToInitialSessionIndex @ 0x1400099F0 (SmpSessionIdToInitialSessionIndex.c)
 *     SmpLogFailure @ 0x14000D7F0 (SmpLogFailure.c)
 */

void __fastcall SmpSetCoreProcessIds(int a1, _BYTE **a2)
{
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // r8
  int v6; // ebp
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx

  v4 = SmpCoreProcessIds + 40LL * (unsigned int)SmpSessionIdToInitialSessionIndex(a1);
  if ( (_BYTE)v5 )
    *(_DWORD *)v4 = -1;
  v6 = 0;
  RtlAcquireSRWLockExclusive(v4 + 8, v3, v5);
  v7 = (__int64)*a2;
  if ( *a2 )
  {
    if ( (*(_BYTE *)(v7 + 8) & 4) != 0 )
    {
      RtlReleaseSRWLockExclusive(v4 + 8);
      SmpLogFailure((__int64)"SmpSetCoreProcessIds", 1103, -1073741823);
      return;
    }
    _InterlockedIncrement((volatile signed __int32 *)v7);
  }
  v8 = a2;
  v9 = v4 - (_QWORD)a2;
  v10 = 2LL;
  do
  {
    v11 = *(_QWORD *)((char *)v8 + v9 + 24);
    *(_QWORD *)((char *)v8 + v9 + 24) = *v8;
    *v8++ = v11;
    --v10;
  }
  while ( v10 );
  if ( !*(_DWORD *)(v4 + 4) && *(_QWORD *)(v4 + 32) )
  {
    v6 = 1;
    *(_DWORD *)(v4 + 4) = 1;
  }
  RtlReleaseSRWLockExclusive(v4 + 8);
  if ( v6 == 1 )
    RtlWakeAllConditionVariable(v4 + 16);
  if ( *a2 )
    SmpDereferenceKnownSubSys(*a2);
}
