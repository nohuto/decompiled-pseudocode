/*
 * XREFs of AlpcpCaptureSecurityAttributeInternal @ 0x14089CE60
 * Callers:
 *     AlpcpCaptureSecurityAttribute @ 0x1409C12C0 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpCaptureSecurityAttribute32 @ 0x140A0C624 (AlpcpCaptureSecurityAttribute32.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14040880C (ExfAcquireReleasePushLockExclusive.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     AlpcpDeleteBlob @ 0x14089CCE0 (AlpcpDeleteBlob.c)
 *     AlpcpCreateSecurityContext @ 0x14089E878 (AlpcpCreateSecurityContext.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 */

__int64 __fastcall AlpcpCaptureSecurityAttributeInternal(__int64 a1, int a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  ULONG_PTR v6; // rbx
  __int64 result; // rax
  ULONG_PTR v10; // rdx
  ULONG_PTR v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  volatile signed __int64 *v14; // rbp
  unsigned int v15; // r15d
  char *v16; // rsi
  __int64 BugCheckParameter4; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  signed __int32 v20[8]; // [rsp+0h] [rbp-68h] BYREF
  _QWORD v21[7]; // [rsp+30h] [rbp-38h] BYREF

  v6 = 0LL;
  v21[0] = 0LL;
  if ( (a2 & 0xFFFCFFFF) != 0 || (a2 & 0x30000) == 0x30000 )
    return 3221225485LL;
  if ( *a4 != -2LL )
  {
    v12 = *(_QWORD *)(a1 + 16);
    v10 = 0LL;
    v11 = 0LL;
    if ( !v12 )
    {
LABEL_6:
      if ( v10 )
      {
        if ( a1 == *(_QWORD *)(v11 + 24) )
        {
          if ( (a2 & 0x10000) != 0 )
          {
            if ( AlpcpDeleteBlob(v6) )
              AlpcpDereferenceBlobEx(v6);
            AlpcpDereferenceBlobEx(v6);
            v6 = 0LL;
          }
          *(_QWORD *)(a5 + 32) = v6;
          return 0LL;
        }
        else
        {
          AlpcpDereferenceBlobEx(v6);
          return 3221225506LL;
        }
      }
      return 3221225480LL;
    }
    v13 = (_QWORD *)(v12 + 40);
    if ( v12 != -40 )
    {
      v14 = (volatile signed __int64 *)(v12 + 48);
      v15 = *a4 - 16;
      v16 = (char *)KeAbPreAcquire(v12 + 48, 0LL);
      if ( _InterlockedCompareExchange64(v14, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v13 + 1, 0, v16, (__int64)(v13 + 1));
      if ( v16 )
        v16[10] = 1;
      if ( (unsigned __int64)v15 < v13[2] )
      {
        v6 = *(_QWORD *)(*v13 + 8LL * v15);
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
              v18 = BugCheckParameter4;
              BugCheckParameter4 = _InterlockedCompareExchange64(
                                     (volatile signed __int64 *)(v6 - 24),
                                     BugCheckParameter4 + 1,
                                     BugCheckParameter4);
            }
            while ( BugCheckParameter4 != v18 );
            if ( BugCheckParameter4 == -1 )
              goto LABEL_39;
            if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)v14);
            KeAbPostRelease((ULONG_PTR)v14);
            if ( (*(_BYTE *)(v6 - 32) & 4) != 0 )
            {
              _InterlockedOr(v20, 0);
              if ( (*(_QWORD *)(v6 - 16) & 1) != 0 )
                ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(v6 - 16));
            }
            goto LABEL_5;
          }
        }
      }
LABEL_39:
      if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v14);
      KeAbPostRelease((ULONG_PTR)v14);
    }
    v6 = 0LL;
LABEL_5:
    v10 = v6;
    v11 = v6;
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
  result = AlpcpCreateSecurityContext(a1, KeGetCurrentThread(), (unsigned __int8)v6, a3, v21);
  if ( (int)result >= 0 )
  {
    v19 = v21[0];
    *(_QWORD *)(a5 + 32) = v21[0];
    if ( (_BYTE)v6 )
      *a4 = *(_QWORD *)(v19 + 8);
  }
  return result;
}
