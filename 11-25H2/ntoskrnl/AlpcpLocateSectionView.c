/*
 * XREFs of AlpcpLocateSectionView @ 0x1408AF88C
 * Callers:
 *     AlpcpCaptureViewAttributeInternal @ 0x1408AF320 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpCaptureViewAttribute @ 0x1408B01AC (AlpcpCaptureViewAttribute.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     AlpcpDereferenceBlobEx @ 0x1408B27D0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReferenceBlob @ 0x1408B4930 (AlpcpReferenceBlob.c)
 */

__int64 __fastcall AlpcpLocateSectionView(__int64 a1, signed __int64 *a2, __int64 a3, _QWORD *a4)
{
  __int64 **v4; // r14
  signed __int64 *v6; // rsi
  signed __int64 *v8; // rbx
  __int64 *v9; // rdi
  int v10; // edi
  __int64 *v11; // rbp
  __int64 *v12; // rax
  ULONG_PTR v14; // rdi
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
      ExfAcquirePushLockSharedEx(v8, 0, v9, (unsigned __int64)v8);
    if ( v9 )
      *((_BYTE *)v9 + 10) = 1;
    v10 = 0;
    v11 = KeAbPreAcquire((__int64)v6, 0LL);
    if ( _InterlockedCompareExchange64(v6, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v6, 0, v11, (unsigned __int64)v6);
    if ( v11 )
      *((_BYTE *)v11 + 10) = 1;
    v12 = *v4;
    while ( v12 != (__int64 *)v4 )
    {
      if ( *((_BYTE *)v12 + 17) == 6 )
      {
        v14 = (ULONG_PTR)(v12 + 6);
        if ( v12[11] == a3 )
        {
          if ( AlpcpReferenceBlob((ULONG_PTR)(v12 + 6)) )
          {
            BugCheckParameter2[1] = v14;
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
    AlpcpDereferenceBlobEx(BugCheckParameter2[1]);
  }
  return 3221225793LL;
}
