/*
 * XREFs of PopWin32kActivatorWorker @ 0x1409EBE10
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x14049FAE4 (PopOkayToQueueNextWorkItem.c)
 *     Pdcv2ActivationClientActivate @ 0x1409EB97C (Pdcv2ActivationClientActivate.c)
 *     Pdcv2ActivationClientDeactivate @ 0x1409ED030 (Pdcv2ActivationClientDeactivate.c)
 */

__int64 PopWin32kActivatorWorker()
{
  __int64 v0; // rbx
  _BYTE *v1; // rax
  _DWORD *v2; // rcx
  __int64 v3; // rax
  _BYTE *v4; // rcx
  _DWORD *v5; // rdx
  __int64 v7; // rbx
  wchar_t *v8; // rax
  __int64 v9; // r9
  int v10; // [rsp+28h] [rbp-50h]
  int v11[4]; // [rsp+40h] [rbp-38h] BYREF
  _OWORD v12[2]; // [rsp+50h] [rbp-28h] BYREF
  LARGE_INTEGER Timeout; // [rsp+88h] [rbp+10h] BYREF

  Timeout.LowPart = 0;
  *(_OWORD *)v11 = 0LL;
  memset(v12, 0, 24);
  PopAcquireRwLockExclusive((unsigned __int64 *)PopWin32kPowerRequestStatus);
  while ( 1 )
  {
    while ( 1 )
    {
      v0 = 0LL;
      v1 = &unk_140F0DDB8;
      v2 = &unk_140F0DD38;
      do
      {
        if ( *v2 && !*v1 )
          break;
        v0 = (unsigned int)(v0 + 1);
        ++v2;
        ++v1;
      }
      while ( (unsigned int)v0 < 0x20 );
      if ( (_DWORD)v0 == 32 )
        break;
      PopReleaseRwLock(PopWin32kPowerRequestStatus);
      v8 = PopWin32kRequestQueueTypeStrings[v0];
      *(_QWORD *)&v11[2] = 0LL;
      *(_QWORD *)&v12[0] = v8;
      v11[0] = 1;
      *(_OWORD *)((char *)v12 + 8) = 0LL;
      v11[1] = 300;
      if ( (int)Pdcv2ActivationClientActivate(
                  *(__int64 *)&qword_140F0DD30,
                  (__int64)v11,
                  v0,
                  v9,
                  L"RequestQueue",
                  v10,
                  &PopWin32kPowerRequestStatus[v0 + 23],
                  (LARGE_INTEGER)&Timeout) < 0 )
        PopWin32kPowerRequestStatus[v0 + 23] = 0LL;
      PopAcquireRwLockExclusive((unsigned __int64 *)PopWin32kPowerRequestStatus);
      *((_BYTE *)&PopWin32kPowerRequestStatus[19] + v0) = 1;
    }
    v3 = 0LL;
    v4 = &unk_140F0DDB8;
    v5 = &unk_140F0DD38;
    do
    {
      if ( !*v5 && *v4 )
        break;
      v3 = (unsigned int)(v3 + 1);
      ++v5;
      ++v4;
    }
    while ( (unsigned int)v3 < 0x20 );
    if ( (_DWORD)v3 == 32 )
      break;
    v7 = (unsigned int)v3;
    if ( PopWin32kPowerRequestStatus[v3 + 23] )
    {
      PopReleaseRwLock(PopWin32kPowerRequestStatus);
      Pdcv2ActivationClientDeactivate((PVOID)PopWin32kPowerRequestStatus[v7 + 23]);
      PopWin32kPowerRequestStatus[v7 + 23] = 0LL;
      PopAcquireRwLockExclusive((unsigned __int64 *)PopWin32kPowerRequestStatus);
    }
    *((_BYTE *)&PopWin32kPowerRequestStatus[19] + v7) = 0;
  }
  PopOkayToQueueNextWorkItem((__int64)&unk_140F0DED8);
  return PopReleaseRwLock(PopWin32kPowerRequestStatus);
}
