/*
 * XREFs of AlpcpCaptureSecurityAttributeInternal @ 0x1408AFA20
 * Callers:
 *     AlpcpCaptureSecurityAttribute32 @ 0x1408AE8AC (AlpcpCaptureSecurityAttribute32.c)
 *     AlpcpCaptureSecurityAttribute @ 0x1408B0460 (AlpcpCaptureSecurityAttribute.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14041D30C (ExfAcquireReleasePushLockExclusive.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     AlpcpDeleteBlob @ 0x1408AF738 (AlpcpDeleteBlob.c)
 *     AlpcpCreateSecurityContext @ 0x1408AFF04 (AlpcpCreateSecurityContext.c)
 *     AlpcpDereferenceBlobEx @ 0x1408B27D0 (AlpcpDereferenceBlobEx.c)
 */

__int64 __fastcall AlpcpCaptureSecurityAttributeInternal(__int64 a1, int a2, __int64 a3, __int64 *a4, __int64 a5)
{
  ULONG_PTR v9; // rdi
  __int64 result; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  ULONG_PTR v13; // rdx
  ULONG_PTR v14; // rax
  _QWORD *v15; // rdi
  volatile signed __int64 *v16; // rbx
  unsigned int v17; // r15d
  __int64 *v18; // rbp
  __int64 BugCheckParameter4; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  signed __int32 v22[8]; // [rsp+0h] [rbp-68h] BYREF
  _QWORD v23[7]; // [rsp+30h] [rbp-38h] BYREF

  v23[0] = 0LL;
  v9 = 0LL;
  if ( (a2 & 0xFFFCFFFF) != 0 || (a2 & 0x30000) == 0x30000 )
    return 3221225485LL;
  v11 = *a4;
  if ( *a4 != -2 )
  {
    v12 = *(_QWORD *)(a1 + 16);
    v13 = 0LL;
    v14 = 0LL;
    if ( !v12 )
      goto LABEL_19;
    v15 = (_QWORD *)(v12 + 40);
    if ( v12 != -40 )
    {
      v16 = (volatile signed __int64 *)(v12 + 48);
      v17 = v11 - 16;
      v18 = KeAbPreAcquire(v12 + 48, 0LL);
      if ( _InterlockedCompareExchange64(v16, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v15 + 1, 0, v18, (unsigned __int64)(v15 + 1));
      if ( v18 )
        *((_BYTE *)v18 + 10) = 1;
      if ( (unsigned __int64)v17 < v15[2] )
      {
        v9 = *(_QWORD *)(*v15 + 8LL * v17);
        if ( v9 )
        {
          if ( *(_BYTE *)(v9 - 31) == 3 )
          {
            _m_prefetchw((const void *)(v9 - 24));
            BugCheckParameter4 = *(_QWORD *)(v9 - 24);
            do
            {
              if ( BugCheckParameter4 <= 0 )
              {
                if ( BugCheckParameter4 )
                  KeBugCheckEx(0x18u, 0LL, v9, 0x20uLL, BugCheckParameter4);
                goto LABEL_14;
              }
              v20 = BugCheckParameter4;
              BugCheckParameter4 = _InterlockedCompareExchange64(
                                     (volatile signed __int64 *)(v9 - 24),
                                     BugCheckParameter4 + 1,
                                     BugCheckParameter4);
            }
            while ( BugCheckParameter4 != v20 );
            if ( BugCheckParameter4 == -1 )
              goto LABEL_14;
            if ( _InterlockedCompareExchange64(v16, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)v16);
            KeAbPostRelease((ULONG_PTR)v16);
            if ( (*(_BYTE *)(v9 - 32) & 4) != 0 )
            {
              _InterlockedOr(v22, 0);
              if ( (*(_QWORD *)(v9 - 16) & 1) != 0 )
                ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(v9 - 16));
            }
            goto LABEL_18;
          }
        }
      }
LABEL_14:
      if ( _InterlockedCompareExchange64(v16, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v16);
      KeAbPostRelease((ULONG_PTR)v16);
    }
    v9 = 0LL;
LABEL_18:
    v13 = v9;
    v14 = v9;
LABEL_19:
    if ( v13 )
    {
      if ( a1 == *(_QWORD *)(v14 + 24) )
      {
        if ( (a2 & 0x10000) != 0 )
        {
          if ( AlpcpDeleteBlob(v9) )
            AlpcpDereferenceBlobEx(v9);
          AlpcpDereferenceBlobEx(v9);
          v9 = 0LL;
        }
        *(_QWORD *)(a5 + 32) = v9;
        return 0LL;
      }
      else
      {
        AlpcpDereferenceBlobEx(v9);
        return 3221225506LL;
      }
    }
    return 3221225480LL;
  }
  if ( (a2 & 0x20000) != 0 )
  {
    LOBYTE(v9) = 1;
  }
  else if ( (a2 & 0x10000) != 0 )
  {
    return 3221225480LL;
  }
  result = AlpcpCreateSecurityContext(a1, KeGetCurrentThread(), (unsigned __int8)v9, a3, v23);
  if ( (int)result >= 0 )
  {
    v21 = v23[0];
    *(_QWORD *)(a5 + 32) = v23[0];
    if ( (_BYTE)v9 )
      *a4 = *(_QWORD *)(v21 + 8);
  }
  return result;
}
