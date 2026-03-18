/*
 * XREFs of AlpcpLocateSectionView @ 0x140893C6C
 * Callers:
 *     AlpcpCaptureViewAttributeInternal @ 0x140893A30 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpCaptureViewAttribute @ 0x140894028 (AlpcpCaptureViewAttribute.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReferenceBlob @ 0x1408966C0 (AlpcpReferenceBlob.c)
 */

__int64 __fastcall AlpcpLocateSectionView(__int64 a1, signed __int64 *a2, __int64 a3, _QWORD *a4)
{
  __int64 **v4; // r14
  signed __int64 *v6; // rsi
  signed __int64 *v8; // rbx
  _QWORD *v9; // rdi
  int v10; // edi
  _QWORD *v11; // rbp
  __int64 *v12; // rax
  ULONG_PTR v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  ULONG_PTR BugCheckParameter2[2]; // [rsp+20h] [rbp-48h]

  v4 = (__int64 **)(a2 + 42);
  *a4 = 0LL;
  v6 = a2 + 41;
  v8 = a2 + 44;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  do
  {
    v9 = KeAbPreAcquire((__int64)v8, 0LL);
    if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v8, 0, v9, (__int64)v8);
    if ( v9 )
      *((_BYTE *)v9 + 10) = 1;
    v10 = 0;
    v11 = KeAbPreAcquire((__int64)v6, 0LL);
    if ( _InterlockedCompareExchange64(v6, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v6, 0, v11, (__int64)v6);
    if ( v11 )
      *((_BYTE *)v11 + 10) = 1;
    v12 = *v4;
    while ( v12 != (__int64 *)v4 )
    {
      if ( *((_BYTE *)v12 + 17) == 6 )
      {
        v13 = (ULONG_PTR)(v12 + 6);
        if ( v12[11] == a3 )
        {
          if ( AlpcpReferenceBlob((ULONG_PTR)(v12 + 6)) )
          {
            BugCheckParameter2[1] = v13;
            v10 = -1073741823;
          }
          else
          {
            v10 = -1073741267;
          }
          break;
        }
      }
      v12 = (__int64 *)*v12;
      v10 = 0;
    }
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v8);
    KeAbPostRelease((ULONG_PTR)v8);
  }
  while ( v10 == -1073741267 );
  if ( BugCheckParameter2[1] )
  {
    if ( *(_QWORD *)(*(_QWORD *)(BugCheckParameter2[1] + 16) + 16LL) == a1 )
    {
      *a4 = BugCheckParameter2[1];
      return 0LL;
    }
    AlpcpDereferenceBlobEx(BugCheckParameter2[1], 1, v14, v15);
  }
  return 3221225793LL;
}
