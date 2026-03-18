/*
 * XREFs of AlpcSecurityDestroyProcedure @ 0x1408B3330
 * Callers:
 *     AlpcpUnlockMessage @ 0x1408AA9C0 (AlpcpUnlockMessage.c)
 *     AlpcpReleaseAttributes @ 0x1408B25D0 (AlpcpReleaseAttributes.c)
 *     AlpcpDereferenceBlobEx @ 0x1408B27D0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockBlob @ 0x1408B29D0 (AlpcpUnlockBlob.c)
 *     AlpcMessageDestroyProcedure @ 0x1408B3500 (AlpcMessageDestroyProcedure.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1403C5AE0 (PsReturnProcessPagedPoolQuota.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcSecurityDestroyProcedure(__int64 a1)
{
  _QWORD *v1; // r14
  __int64 v3; // r15
  __int64 *v4; // rax
  __int64 *v5; // rbp
  __int64 v6; // rbp
  unsigned __int64 *v7; // rbp
  _QWORD *v8; // rsi
  __int64 *v9; // rax
  __int64 *v10; // r14
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  _DWORD *v13; // rcx
  ULONG_PTR v14; // rcx

  v1 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD *)(a1 + 8) - 16LL;
    v4 = KeAbPreAcquire((__int64)(v1 + 1), 0LL);
    v5 = v4;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v1 + 2, 0LL) )
      ExfAcquirePushLockExclusiveEx(v1 + 1, v4, (__int64)(v1 + 1));
    if ( v5 )
      *((_BYTE *)v5 + 10) = 1;
    if ( (unsigned __int64)(unsigned int)v3 < v1[2] && *(_QWORD *)(*v1 + 8LL * (unsigned int)v3) == a1 )
      *(_QWORD *)(*v1 + 8LL * (unsigned int)v3) = 0LL;
    if ( (_InterlockedExchangeAdd64(v1 + 1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v1 + 1);
    KeAbPostRelease((ULONG_PTR)(v1 + 1));
  }
  v6 = *(_QWORD *)(a1 + 24);
  if ( v6 )
  {
    v7 = (unsigned __int64 *)(v6 + 328);
    v8 = (_QWORD *)(a1 - 48);
    v9 = KeAbPreAcquire((__int64)v7, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, v9, (__int64)v7);
    if ( v10 )
      *((_BYTE *)v10 + 10) = 1;
    v11 = (_QWORD *)*v8;
    if ( (_QWORD *)*v8 != v8 )
    {
      if ( (_QWORD *)v11[1] != v8 || (v12 = (_QWORD *)v8[1], (_QWORD *)*v12 != v8) )
        __fastfail(3u);
      *v12 = v11;
      v11[1] = v12;
      v8[1] = v8;
      *v8 = v8;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v7);
    KeAbPostRelease((ULONG_PTR)v7);
    ObfDereferenceObject(*(PVOID *)(a1 + 24));
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
    v13 = *(_DWORD **)(a1 + 48);
    if ( v13[48] == 1 || v13 )
      ObfDereferenceObjectWithTag(v13, 0x63436553u);
    v14 = *(_QWORD *)(a1 + 16);
    if ( v14 )
    {
      if ( (unsigned __int64)(*(_QWORD *)(v14 + 1432) + 160LL) >= 0x1000 )
        PsReturnProcessPagedPoolQuota(v14, 0xA0uLL);
      else
        _InterlockedAdd64((volatile signed __int64 *)(v14 + 1432), 0xA0uLL);
    }
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 16), 0x63706C41u);
  }
  return 0LL;
}
