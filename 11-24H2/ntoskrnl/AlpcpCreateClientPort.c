/*
 * XREFs of AlpcpCreateClientPort @ 0x140868FD0
 * Callers:
 *     AlpcpConnectPort @ 0x140868BB0 (AlpcpConnectPort.c)
 *     NtSecureConnectPort @ 0x140890D60 (NtSecureConnectPort.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObReferenceObjectByName @ 0x14083B4F0 (ObReferenceObjectByName.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     AlpcpSetOwnerProcessPort @ 0x140867A08 (AlpcpSetOwnerProcessPort.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x140867A60 (AlpcpValidateAndSetPortAttributes.c)
 *     AlpcInitializeHandleTable @ 0x140867CBC (AlpcInitializeHandleTable.c)
 *     AlpcpInitializePort @ 0x140867D10 (AlpcpInitializePort.c)
 *     ObReferenceObjectByNameEx @ 0x14086BC94 (ObReferenceObjectByNameEx.c)
 *     AlpcpAllocateBlob @ 0x140893EF0 (AlpcpAllocateBlob.c)
 *     AlpcpAllocateMessage @ 0x140894000 (AlpcpAllocateMessage.c)
 *     AlpcpUnlockBlobUncachedExclusive @ 0x14089E840 (AlpcpUnlockBlobUncachedExclusive.c)
 *     AlpcpLockBlobExclusive @ 0x14089EB0C (AlpcpLockBlobExclusive.c)
 *     SeCreateClientSecurity @ 0x14089EDC0 (SeCreateClientSecurity.c)
 *     AlpcpUnlockMessage @ 0x1408A1410 (AlpcpUnlockMessage.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     AlpcpCheckConnectionSecurity @ 0x140A0F9D4 (AlpcpCheckConnectionSecurity.c)
 */

__int64 __fastcall AlpcpCreateClientPort(
        __int64 *a1,
        _QWORD *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        char a11)
{
  void *v11; // rsi
  char PreviousMode; // r12
  __int64 result; // rax
  int v14; // r9d
  unsigned __int64 *v15; // r14
  int v16; // ecx
  signed __int64 *v17; // r14
  char *v18; // rdi
  __int64 v19; // rdx
  int v20; // edi
  _DWORD *v21; // rdi
  unsigned __int8 v22; // al
  int v23; // esi
  _DWORD *v24; // rsi
  unsigned __int64 **Blob; // r12
  ULONG_PTR *v26; // r13
  char *v27; // rax
  signed __int8 v28; // cf
  __int64 *v29; // rcx
  __int64 v30; // rax
  __int64 **v31; // rdx
  int Message; // eax
  _QWORD *v33; // rbx
  int inserted; // ecx
  volatile signed __int32 *v35; // rdi
  char *v36; // rax
  char *v37; // rsi
  PVOID Object; // [rsp+50h] [rbp-20h] BYREF
  PVOID v39; // [rsp+58h] [rbp-18h]
  __int64 v40; // [rsp+60h] [rbp-10h] BYREF
  char *v41; // [rsp+68h] [rbp-8h]
  char v45; // [rsp+D0h] [rbp+60h]

  v11 = 0LL;
  v40 = 0LL;
  v39 = 0LL;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a5 )
    result = ObReferenceObjectByNameEx(a5, 0, 1, (_DWORD)AlpcPortObjectType, PreviousMode, 0LL, (__int64)&Object);
  else
    result = ObReferenceObjectByName(
               a4,
               0LL,
               0LL,
               1u,
               (__int64)AlpcPortObjectType,
               PreviousMode,
               0LL,
               (PADAPTER_OBJECT *)&Object);
  if ( (int)result >= 0 )
  {
    v15 = (unsigned __int64 *)Object;
    v16 = *((_DWORD *)Object + 104);
    if ( (v16 & 6) != 2 )
    {
      v20 = -1073741758;
      goto LABEL_57;
    }
    if ( !a11 && (v16 & 0x1000) != 0 )
    {
      v35 = (volatile signed __int32 *)((char *)Object + 352);
      v36 = (char *)KeAbPreAcquire((__int64)Object + 352, 0LL);
      v37 = v36;
      if ( _interlockedbittestandset64(v35, 0LL) )
        ExfAcquirePushLockExclusiveEx(v15 + 44, v36, (__int64)(v15 + 44));
      if ( v37 )
        v37[10] = 1;
      *((_DWORD *)v15 + 104) &= ~0x2000u;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v35, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v15 + 44);
      KeAbPostRelease((ULONG_PTR)(v15 + 44));
      v15 = (unsigned __int64 *)Object;
      v11 = 0LL;
    }
    if ( a9 || a8 )
    {
      v17 = (signed __int64 *)(v15 + 44);
      v18 = (char *)KeAbPreAcquire((__int64)v17, 0LL);
      if ( _InterlockedCompareExchange64(v17, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v17, 0, v18, (__int64)v17);
      if ( v18 )
        v18[10] = 1;
      if ( (*((_QWORD *)Object + 3) & 1) == 0 )
        v11 = (void *)*((_QWORD *)Object + 3);
      if ( v11 )
        ObfReferenceObjectWithTag(v11, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v17, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v17);
      KeAbPostRelease((ULONG_PTR)v17);
      if ( v11 )
      {
        LOBYTE(v19) = PreviousMode;
        v20 = AlpcpCheckConnectionSecurity(v11, v19, a9, a8);
        ObfDereferenceObjectWithTag(v11, 0x63706C41u);
        if ( v20 >= 0 )
        {
          v15 = (unsigned __int64 *)Object;
          goto LABEL_20;
        }
      }
      else
      {
        v20 = -1073741152;
      }
      v15 = (unsigned __int64 *)Object;
      goto LABEL_57;
    }
LABEL_20:
    LOBYTE(v14) = PreviousMode;
    LOBYTE(v16) = PreviousMode;
    v20 = ObCreateObjectEx(v16, (_DWORD)AlpcPortObjectType, a6, v14);
    if ( v20 >= 0 )
    {
      v21 = v39;
      memset_0(v39, 0, 0x1D8uLL);
      if ( !a7 || (v22 = 1, (*a7 & 0x40000) == 0) )
        v22 = 0;
      v45 = v22;
      v23 = AlpcpInitializePort((__int64)v21, 2, v22);
      if ( v23 >= 0 )
      {
        v24 = v21 + 104;
        v21[104] |= 8u;
        Blob = (unsigned __int64 **)AlpcpAllocateBlob(AlpcConnectionType, 80LL, 1LL);
        if ( Blob )
        {
          *((_QWORD *)v21 + 2) = Blob;
          v26 = (ULONG_PTR *)(Blob + 9);
          Blob[9] = 0LL;
          *Blob = v15;
          Blob[2] = (unsigned __int64 *)v21;
          Blob[1] = 0LL;
          AlpcpLockBlobExclusive(v15[2]);
          v27 = (char *)KeAbPreAcquire((__int64)(v15 + 44), 0LL);
          v28 = _interlockedbittestandset64((volatile signed __int32 *)v15 + 88, 0LL);
          v41 = v27;
          if ( v28 )
          {
            ExfAcquirePushLockExclusiveEx(v15 + 44, v27, (__int64)(v15 + 44));
            v27 = v41;
          }
          if ( v27 )
            v27[10] = 1;
          v29 = (__int64 *)(Blob + 3);
          v30 = v15[2] + 24;
          v31 = *(__int64 ***)(v15[2] + 32);
          if ( *v31 != (__int64 *)v30 )
            __fastfail(3u);
          *v29 = v30;
          Blob[4] = (unsigned __int64 *)v31;
          *v31 = v29;
          *(_QWORD *)(v30 + 8) = v29;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v15 + 44);
          KeAbPostRelease((ULONG_PTR)(v15 + 44));
          AlpcpUnlockBlobUncachedExclusive(v15[2]);
          Message = AlpcInitializeHandleTable((__int64)(Blob + 5));
          v21 = v39;
          if ( Message >= 0 )
          {
            v33 = Object;
            Message = AlpcpValidateAndSetPortAttributes((__int64)v39, a7, (__int64)Object, a10, 0, v45, a11);
            if ( Message >= 0 )
            {
              Message = AlpcpAllocateMessage(v26, 48LL, 1LL);
              if ( Message >= 0 )
              {
                ++*(_WORD *)(*v26 - 30);
                *(_DWORD *)(*v26 + 264) |= 0x80000000;
                AlpcpUnlockMessage(*v26);
                if ( a11 )
                  *v24 |= 0x1000u;
                if ( (a3 & 0x80000) != 0 )
                  v21[104] = *v24 | 0x100;
                if ( *((_BYTE *)v21 + 268) == 1 )
                {
                  v21[104] |= 0x400u;
LABEL_43:
                  AlpcpSetOwnerProcessPort((__int64)v21, a7);
                  if ( (v33[32] & 0x1000000) != 0 )
                  {
                    v21[64] |= 0x1000000u;
                    *((_QWORD *)v21 + 34) = v33[34];
                  }
                  PsReferenceSiloContext(v21);
                  inserted = ObInsertObjectEx((struct _FILE_OBJECT *)v21, 0LL, 2031617, 0, 0, 0LL, (__int64)&v40);
                  if ( inserted >= 0 )
                  {
                    *((_QWORD *)v21 + 7) = v40;
                    *a1 = v40;
                    *a2 = v21;
                    return (unsigned int)inserted;
                  }
                  v23 = inserted;
LABEL_59:
                  ObfDereferenceObject(v21);
                  return (unsigned int)v23;
                }
                v21 = v39;
                Message = SeCreateClientSecurity(
                            KeGetCurrentThread(),
                            (PSECURITY_QUALITY_OF_SERVICE)((char *)v39 + 260),
                            0,
                            (PSECURITY_CLIENT_CONTEXT)((char *)v39 + 64));
                if ( Message >= 0 )
                {
                  v33 = Object;
                  goto LABEL_43;
                }
              }
            }
          }
          v23 = Message;
          goto LABEL_59;
        }
        v23 = -1073741801;
      }
      ObfDereferenceObject(v15);
      goto LABEL_59;
    }
LABEL_57:
    ObfDereferenceObject(v15);
    return (unsigned int)v20;
  }
  return result;
}
