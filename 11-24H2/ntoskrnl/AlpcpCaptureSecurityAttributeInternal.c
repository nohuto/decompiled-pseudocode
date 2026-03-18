/*
 * XREFs of AlpcpCaptureSecurityAttributeInternal @ 0x1408949C0
 * Callers:
 *     AlpcpCaptureSecurityAttribute @ 0x14088DE30 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpCaptureSecurityAttribute32 @ 0x140894358 (AlpcpCaptureSecurityAttribute32.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140418A5C (ExfAcquireReleasePushLockExclusive.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x140893140 (AlpcpDeleteBlob.c)
 *     AlpcpCreateSecurityContext @ 0x1408963D8 (AlpcpCreateSecurityContext.c)
 */

__int64 __fastcall AlpcpCaptureSecurityAttributeInternal(__int64 a1, int a2, __int64 a3, __int64 *a4, __int64 a5)
{
  ULONG_PTR v6; // rbx
  __int64 v7; // r9
  __int64 result; // rax
  ULONG_PTR v11; // rdx
  ULONG_PTR v12; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  _QWORD *v15; // rbx
  volatile signed __int64 *v16; // rbp
  unsigned int v17; // r15d
  _QWORD *v18; // rsi
  __int64 BugCheckParameter4; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  signed __int32 v24[8]; // [rsp+0h] [rbp-68h] BYREF
  _QWORD v25[7]; // [rsp+30h] [rbp-38h] BYREF

  v6 = 0LL;
  v7 = a3;
  v25[0] = 0LL;
  if ( (a2 & 0xFFFCFFFF) != 0 || (a2 & 0x30000) == 0x30000 )
    return 3221225485LL;
  v13 = *a4;
  if ( *a4 != -2 )
  {
    v14 = *(_QWORD *)(a1 + 16);
    v11 = 0LL;
    v12 = 0LL;
    if ( !v14 )
    {
LABEL_6:
      if ( v11 )
      {
        if ( a1 == *(_QWORD *)(v12 + 24) )
        {
          if ( (a2 & 0x10000) != 0 )
          {
            if ( AlpcpDeleteBlob(v6) )
              AlpcpDereferenceBlobEx(v6, 1, v22, v23);
            AlpcpDereferenceBlobEx(v6, 1, v22, v23);
            v6 = 0LL;
          }
          *(_QWORD *)(a5 + 32) = v6;
          return 0LL;
        }
        else
        {
          AlpcpDereferenceBlobEx(v6, 1, v13, v7);
          return 3221225506LL;
        }
      }
      return 3221225480LL;
    }
    v15 = (_QWORD *)(v14 + 40);
    if ( v14 != -40 )
    {
      v16 = (volatile signed __int64 *)(v14 + 48);
      v17 = v13 - 16;
      v18 = KeAbPreAcquire(v14 + 48, 0LL);
      if ( _InterlockedCompareExchange64(v16, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v15 + 1, 0, v18, (__int64)(v15 + 1));
      if ( v18 )
        *((_BYTE *)v18 + 10) = 1;
      if ( (unsigned __int64)v17 < v15[2] )
      {
        v6 = *(_QWORD *)(*v15 + 8LL * v17);
        if ( v6 )
        {
          if ( *(_BYTE *)(v6 - 31) == 3 )
          {
            _m_prefetchw((const void *)(v6 - 24));
            BugCheckParameter4 = *(_QWORD *)(v6 - 24);
            do
            {
              if ( BugCheckParameter4 <= 0 )
              {
                if ( BugCheckParameter4 )
                  KeBugCheckEx(0x18u, 0LL, v6, 0x20uLL, BugCheckParameter4);
                goto LABEL_39;
              }
              v20 = BugCheckParameter4;
              BugCheckParameter4 = _InterlockedCompareExchange64(
                                     (volatile signed __int64 *)(v6 - 24),
                                     BugCheckParameter4 + 1,
                                     BugCheckParameter4);
            }
            while ( BugCheckParameter4 != v20 );
            if ( BugCheckParameter4 == -1 )
              goto LABEL_39;
            if ( _InterlockedCompareExchange64(v16, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)v16);
            KeAbPostRelease((ULONG_PTR)v16);
            if ( (*(_BYTE *)(v6 - 32) & 4) != 0 )
            {
              _InterlockedOr(v24, 0);
              if ( (*(_QWORD *)(v6 - 16) & 1) != 0 )
                ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(v6 - 16));
            }
            goto LABEL_5;
          }
        }
      }
LABEL_39:
      if ( _InterlockedCompareExchange64(v16, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v16);
      KeAbPostRelease((ULONG_PTR)v16);
    }
    v6 = 0LL;
LABEL_5:
    v11 = v6;
    v12 = v6;
    goto LABEL_6;
  }
  if ( (a2 & 0x20000) != 0 )
  {
    LOBYTE(v6) = 1;
  }
  else if ( (a2 & 0x10000) != 0 )
  {
    return 3221225480LL;
  }
  result = AlpcpCreateSecurityContext(a1, KeGetCurrentThread(), (unsigned __int8)v6, v7, v25);
  if ( (int)result >= 0 )
  {
    v21 = v25[0];
    *(_QWORD *)(a5 + 32) = v25[0];
    if ( (_BYTE)v6 )
      *a4 = *(_QWORD *)(v21 + 8);
  }
  return result;
}
