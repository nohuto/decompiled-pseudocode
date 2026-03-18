/*
 * XREFs of AlpcpPortQueryServerSessionInfo @ 0x1409C255C
 * Callers:
 *     NtAlpcQueryInformation @ 0x1409C1FD0 (NtAlpcQueryInformation.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     AlpcpReferenceConnectedPort @ 0x1408A6120 (AlpcpReferenceConnectedPort.c)
 */

__int64 __fastcall AlpcpPortQueryServerSessionInfo(__int64 a1, _DWORD *a2, unsigned int a3, _DWORD *a4)
{
  __int64 v7; // rax
  _QWORD *v8; // rsi
  signed __int64 *v9; // rdi
  __int64 *v10; // rbx
  _DWORD *v11; // rbx
  int v12; // edi
  int SessionId; // esi
  __int64 result; // rax

  if ( !a1 )
    return 3221225485LL;
  v7 = AlpcpReferenceConnectedPort(a1);
  v8 = (_QWORD *)v7;
  if ( !v7 )
    return 3221225485LL;
  v9 = (signed __int64 *)(v7 + 352);
  v10 = KeAbPreAcquire(v7 + 352, 0LL);
  if ( _InterlockedCompareExchange64(v9, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v9, 0, v10, (unsigned __int64)v9);
  if ( v10 )
    *((_BYTE *)v10 + 10) = 1;
  v11 = 0LL;
  if ( (v8[3] & 1) == 0 )
    v11 = (_DWORD *)v8[3];
  if ( v11 )
    ObfReferenceObjectWithTag(v11, 0x63706C41u);
  if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v9);
  KeAbPostRelease((ULONG_PTR)v9);
  ObfDereferenceObject(v8);
  if ( !v11 )
    return 3221225485LL;
  v12 = v11[116];
  SessionId = PsGetSessionIdEx((__int64)v11);
  ObfDereferenceObjectWithTag(v11, 0x63706C41u);
  result = a3 < 8 ? 0xC0000004 : 0;
  if ( a3 >= 8 )
  {
    *a2 = SessionId;
    a2[1] = v12;
  }
  if ( a4 )
    *a4 = 8;
  return result;
}
