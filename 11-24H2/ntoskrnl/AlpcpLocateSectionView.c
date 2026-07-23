/*
 * XREFs of AlpcpLocateSectionView @ 0x14089630C
 * Callers:
 *     AlpcpCaptureViewAttribute @ 0x140895F40 (AlpcpCaptureViewAttribute.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x1408969A0 (AlpcpCaptureViewAttributeInternal.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     AlpcpReferenceBlob @ 0x14089EB60 (AlpcpReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 */

__int64 __fastcall AlpcpLocateSectionView(__int64 a1, signed __int64 *a2, __int64 a3, _QWORD *a4)
{
  __int64 **v4; // r14
  signed __int64 *v6; // rsi
  signed __int64 *v8; // rbx
  char *v9; // rdi
  int v10; // edi
  char *v11; // rbp
  __int64 *v12; // rax
  ULONG_PTR v13; // rdi
  ULONG_PTR BugCheckParameter2[2]; // [rsp+20h] [rbp-48h]

  v4 = (__int64 **)(a2 + 42);
  *a4 = 0LL;
  v6 = a2 + 41;
  v8 = a2 + 44;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  do
  {
    v9 = (char *)KeAbPreAcquire((__int64)v8, 0LL);
    if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v8, 0, v9, (__int64)v8);
    if ( v9 )
      v9[10] = 1;
    v10 = 0;
    v11 = (char *)KeAbPreAcquire((__int64)v6, 0LL);
    if ( _InterlockedCompareExchange64(v6, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v6, 0, v11, (__int64)v6);
    if ( v11 )
      v11[10] = 1;
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
    AlpcpDereferenceBlobEx(BugCheckParameter2[1]);
  }
  return 3221225793LL;
}
