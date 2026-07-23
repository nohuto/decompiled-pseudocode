/*
 * XREFs of AlpcpCaptureSecurityAttribute @ 0x1409C12C0
 * Callers:
 *     AlpcpCaptureAttributes @ 0x140899420 (AlpcpCaptureAttributes.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14040880C (ExfAcquireReleasePushLockExclusive.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     AlpcpDeleteBlob @ 0x14089CCE0 (AlpcpDeleteBlob.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14089CE60 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpCreateSecurityContext @ 0x14089E878 (AlpcpCreateSecurityContext.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 */

__int64 __fastcall AlpcpCaptureSecurityAttribute(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  int v6; // edi
  __int64 v7; // rdx
  ULONG_PTR v8; // rbx
  int v9; // ecx
  __int64 v10; // rax
  ULONG_PTR v11; // r8
  ULONG_PTR v12; // rdx
  _QWORD *v13; // rbx
  unsigned int v14; // r12d
  volatile signed __int64 *v15; // r15
  char *v16; // r14
  __int64 BugCheckParameter4; // rax
  __int64 v18; // rdx
  ULONG_PTR v19; // rax
  __int64 v21; // r8
  signed __int32 v22[8]; // [rsp+0h] [rbp-B8h] BYREF
  int v23; // [rsp+30h] [rbp-88h]
  __int64 v24; // [rsp+38h] [rbp-80h]
  ULONG_PTR v25; // [rsp+40h] [rbp-78h] BYREF
  __int64 v26; // [rsp+48h] [rbp-70h]
  unsigned __int64 v27; // [rsp+58h] [rbp-60h]
  struct _SECURITY_QUALITY_OF_SERVICE v28; // [rsp+60h] [rbp-58h] BYREF

  v3 = a3;
  v26 = a3;
  v6 = 0;
  v24 = 0LL;
  *(_QWORD *)&v28.Length = 0LL;
  *(_DWORD *)&v28.ContextTrackingMode = 0;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v23 = *(_DWORD *)a2;
    v24 = *(_QWORD *)(a2 + 16);
    v27 = *(_QWORD *)(a2 + 8);
    v7 = v27;
    if ( v27 )
    {
      if ( v27 >= 0x7FFFFFFF0000LL )
        v7 = 0x7FFFFFFF0000LL;
      RtlCopyVolatileMemory(&v28, (const void *)v7, 0xCuLL);
    }
    else
    {
      v28 = *(struct _SECURITY_QUALITY_OF_SERVICE *)(a1 + 260);
    }
    v8 = 0LL;
    v25 = 0LL;
    v9 = v23;
    if ( (v23 & 0xFFFCFFFF) != 0 || (v23 & 0x30000) == 0x30000 )
      return (unsigned int)-1073741811;
    if ( v24 != -2 )
    {
      v10 = *(_QWORD *)(a1 + 16);
      v11 = 0LL;
      v12 = 0LL;
      if ( !v10 )
        goto LABEL_38;
      v13 = (_QWORD *)(v10 + 40);
      if ( v10 != -40 )
      {
        v14 = v24 - 16;
        v15 = (volatile signed __int64 *)(v10 + 48);
        v16 = (char *)KeAbPreAcquire(v10 + 48, 0LL);
        if ( _InterlockedCompareExchange64(v15, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v13 + 1, 0, v16, (__int64)(v13 + 1));
        if ( v16 )
          v16[10] = 1;
        if ( (unsigned __int64)v14 < v13[2] )
        {
          v8 = *(_QWORD *)(*v13 + 8LL * v14);
          if ( v8 )
          {
            if ( *(_BYTE *)(v8 - 31) == 3 )
            {
              _m_prefetchw((const void *)(v8 - 24));
              BugCheckParameter4 = *(_QWORD *)(v8 - 24);
              do
              {
                if ( BugCheckParameter4 <= 0 )
                {
                  if ( BugCheckParameter4 )
                    KeBugCheckEx(0x18u, 0LL, v8, 0x20uLL, BugCheckParameter4);
                  goto LABEL_52;
                }
                v18 = BugCheckParameter4;
                BugCheckParameter4 = _InterlockedCompareExchange64(
                                       (volatile signed __int64 *)(v8 - 24),
                                       BugCheckParameter4 + 1,
                                       BugCheckParameter4);
              }
              while ( BugCheckParameter4 != v18 );
              if ( BugCheckParameter4 == -1 )
                goto LABEL_52;
              if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
                ExfReleasePushLockShared((signed __int64 *)v15);
              KeAbPostRelease((ULONG_PTR)v15);
              if ( (*(_BYTE *)(v8 - 32) & 4) != 0 )
              {
                _InterlockedOr(v22, 0);
                if ( (*(_QWORD *)(v8 - 16) & 1) != 0 )
                  ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(v8 - 16));
              }
              v9 = v23;
              v3 = v26;
              goto LABEL_37;
            }
          }
        }
LABEL_52:
        if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v15);
        KeAbPostRelease((ULONG_PTR)v15);
        v9 = v23;
        v3 = v26;
      }
      v8 = 0LL;
LABEL_37:
      v11 = v8;
      v12 = v8;
LABEL_38:
      if ( v11 )
      {
        if ( a1 != *(_QWORD *)(v12 + 24) )
        {
          AlpcpDereferenceBlobEx(v8, 1);
          return (unsigned int)-1073741790;
        }
        if ( (v9 & 0x10000) != 0 )
        {
          if ( AlpcpDeleteBlob(v8) )
            AlpcpDereferenceBlobEx(v8, 1);
          AlpcpDereferenceBlobEx(v8, 1);
          v8 = 0LL;
        }
        *(_QWORD *)(v3 + 32) = v8;
        goto LABEL_42;
      }
      return (unsigned int)-1073741816;
    }
    if ( (v23 & 0x20000) != 0 )
    {
      LOBYTE(v8) = 1;
    }
    else if ( (v23 & 0x10000) != 0 )
    {
      return (unsigned int)-1073741816;
    }
    v6 = AlpcpCreateSecurityContext(a1, KeGetCurrentThread(), v8, &v28, &v25);
    if ( v6 >= 0 )
    {
      v19 = v25;
      *(_QWORD *)(v3 + 32) = v25;
      if ( (_BYTE)v8 )
        v24 = *(_QWORD *)(v19 + 8);
    }
    if ( v6 >= 0 )
LABEL_42:
      *(_QWORD *)(a2 + 16) = v24;
  }
  else
  {
    v21 = *(_QWORD *)(a2 + 8);
    if ( !v21 )
      v21 = a1 + 260;
    return (unsigned int)AlpcpCaptureSecurityAttributeInternal(a1, *(_DWORD *)a2, v21, (_QWORD *)(a2 + 16), v3);
  }
  return (unsigned int)v6;
}
