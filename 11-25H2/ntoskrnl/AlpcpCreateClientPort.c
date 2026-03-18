/*
 * XREFs of AlpcpCreateClientPort @ 0x140916890
 * Callers:
 *     AlpcpConnectPort @ 0x140916470 (AlpcpConnectPort.c)
 *     NtSecureConnectPort @ 0x14098DB40 (NtSecureConnectPort.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     SeCreateClientSecurity @ 0x1408A6230 (SeCreateClientSecurity.c)
 *     AlpcpUnlockMessage @ 0x1408AA9C0 (AlpcpUnlockMessage.c)
 *     AlpcpAllocateBlob @ 0x1408AF0C0 (AlpcpAllocateBlob.c)
 *     AlpcpAllocateMessage @ 0x1408B07D0 (AlpcpAllocateMessage.c)
 *     ObReferenceObjectByNameEx @ 0x140914400 (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x140915290 (ObReferenceObjectByName.c)
 *     AlpcpUnlockBlobUncachedExclusive @ 0x14098BD4C (AlpcpUnlockBlobUncachedExclusive.c)
 *     AlpcpLockBlobExclusive @ 0x14098BD84 (AlpcpLockBlobExclusive.c)
 *     AlpcpInitializePort @ 0x1409E024C (AlpcpInitializePort.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x1409E0414 (AlpcpValidateAndSetPortAttributes.c)
 *     AlpcpSetOwnerProcessPort @ 0x1409E066C (AlpcpSetOwnerProcessPort.c)
 *     AlpcInitializeHandleTable @ 0x1409E06C4 (AlpcInitializeHandleTable.c)
 *     AlpcpCheckConnectionSecurity @ 0x140A0F5F0 (AlpcpCheckConnectionSecurity.c)
 */

__int64 __fastcall AlpcpCreateClientPort(
        __int64 *a1,
        _QWORD *a2,
        int a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        char a11)
{
  void *v11; // rsi
  char PreviousMode; // r12
  __int64 result; // rax
  unsigned __int64 *v14; // r14
  int v15; // ecx
  signed __int64 *v16; // r14
  __int64 *v17; // rdi
  __int64 v18; // rdx
  int v19; // edi
  _DWORD *v20; // rdi
  __int64 v21; // r8
  char v22; // al
  int v23; // esi
  _DWORD *v24; // rsi
  _QWORD *Blob; // r12
  ULONG_PTR *v26; // r13
  __int64 *v27; // rax
  signed __int8 v28; // cf
  __int64 *v29; // rcx
  __int64 v30; // rax
  __int64 **v31; // rdx
  int Message; // eax
  _QWORD *v33; // rbx
  int inserted; // ecx
  volatile signed __int32 *v35; // rdi
  __int64 *v36; // rax
  __int64 *v37; // rsi
  __int64 v38; // [rsp+20h] [rbp-50h]
  PVOID Object; // [rsp+50h] [rbp-20h] BYREF
  PVOID v40; // [rsp+58h] [rbp-18h] BYREF
  __int64 v41; // [rsp+60h] [rbp-10h] BYREF
  __int64 *v42; // [rsp+68h] [rbp-8h]
  char v46; // [rsp+D0h] [rbp+60h]

  v11 = 0LL;
  v41 = 0LL;
  v40 = 0LL;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a5 )
    result = ObReferenceObjectByNameEx(a5, 0LL, 1u, AlpcPortObjectType, PreviousMode, 0LL, (PADAPTER_OBJECT *)&Object);
  else
    result = ObReferenceObjectByName(a4, 0, 0LL, 1u, AlpcPortObjectType, PreviousMode, 0LL, (PADAPTER_OBJECT *)&Object);
  if ( (int)result >= 0 )
  {
    v14 = (unsigned __int64 *)Object;
    v15 = *((_DWORD *)Object + 104);
    if ( (v15 & 6) != 2 )
    {
      v19 = -1073741758;
      goto LABEL_57;
    }
    if ( !a11 && (v15 & 0x1000) != 0 )
    {
      v35 = (volatile signed __int32 *)((char *)Object + 352);
      v36 = KeAbPreAcquire((__int64)Object + 352, 0LL);
      v37 = v36;
      if ( _interlockedbittestandset64(v35, 0LL) )
        ExfAcquirePushLockExclusiveEx(v14 + 44, v36, (__int64)(v14 + 44));
      if ( v37 )
        *((_BYTE *)v37 + 10) = 1;
      *((_DWORD *)v14 + 104) &= ~0x2000u;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v35, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v14 + 44);
      KeAbPostRelease((ULONG_PTR)(v14 + 44));
      v14 = (unsigned __int64 *)Object;
      v11 = 0LL;
    }
    if ( a9 || a8 )
    {
      v16 = (signed __int64 *)(v14 + 44);
      v17 = KeAbPreAcquire((__int64)v16, 0LL);
      if ( _InterlockedCompareExchange64(v16, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v16, 0, v17, (unsigned __int64)v16);
      if ( v17 )
        *((_BYTE *)v17 + 10) = 1;
      if ( (*((_QWORD *)Object + 3) & 1) == 0 )
        v11 = (void *)*((_QWORD *)Object + 3);
      if ( v11 )
        ObfReferenceObjectWithTag(v11, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v16, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v16);
      KeAbPostRelease((ULONG_PTR)v16);
      if ( v11 )
      {
        LOBYTE(v18) = PreviousMode;
        v19 = AlpcpCheckConnectionSecurity(v11, v18, a9, a8);
        ObfDereferenceObjectWithTag(v11, 0x63706C41u);
        if ( v19 >= 0 )
        {
          v14 = (unsigned __int64 *)Object;
          goto LABEL_20;
        }
      }
      else
      {
        v19 = -1073741152;
      }
      v14 = (unsigned __int64 *)Object;
      goto LABEL_57;
    }
LABEL_20:
    v19 = ObCreateObjectEx(PreviousMode, AlpcPortObjectType, a6, PreviousMode, v38, 472, 0, 0, &v40, 0LL);
    if ( v19 >= 0 )
    {
      v20 = v40;
      memset_0(v40, 0, 0x1D8uLL);
      if ( !a7 || (v22 = 1, (*a7 & 0x40000) == 0) )
        v22 = 0;
      LOBYTE(v21) = v22;
      v46 = v22;
      v23 = AlpcpInitializePort(v20, 2LL, v21);
      if ( v23 >= 0 )
      {
        v24 = v20 + 104;
        v20[104] |= 8u;
        Blob = (_QWORD *)AlpcpAllocateBlob((__int64)AlpcConnectionType, 80LL, 1);
        if ( Blob )
        {
          *((_QWORD *)v20 + 2) = Blob;
          v26 = Blob + 9;
          Blob[9] = 0LL;
          *Blob = v14;
          Blob[2] = v20;
          Blob[1] = 0LL;
          AlpcpLockBlobExclusive(v14[2]);
          v27 = KeAbPreAcquire((__int64)(v14 + 44), 0LL);
          v28 = _interlockedbittestandset64((volatile signed __int32 *)v14 + 88, 0LL);
          v42 = v27;
          if ( v28 )
          {
            ExfAcquirePushLockExclusiveEx(v14 + 44, v27, (__int64)(v14 + 44));
            v27 = v42;
          }
          if ( v27 )
            *((_BYTE *)v27 + 10) = 1;
          v29 = Blob + 3;
          v30 = v14[2] + 24;
          v31 = *(__int64 ***)(v14[2] + 32);
          if ( *v31 != (__int64 *)v30 )
            __fastfail(3u);
          *v29 = v30;
          Blob[4] = v31;
          *v31 = v29;
          *(_QWORD *)(v30 + 8) = v29;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v14 + 44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v14 + 44);
          KeAbPostRelease((ULONG_PTR)(v14 + 44));
          AlpcpUnlockBlobUncachedExclusive(v14[2]);
          Message = AlpcInitializeHandleTable(Blob + 5);
          v20 = v40;
          if ( Message >= 0 )
          {
            v33 = Object;
            Message = AlpcpValidateAndSetPortAttributes((_DWORD)v40, (_DWORD)a7, (_DWORD)Object, a10, 0, v46, a11);
            if ( Message >= 0 )
            {
              Message = AlpcpAllocateMessage(v26, 0x30uLL, 1);
              if ( Message >= 0 )
              {
                ++*(_WORD *)(*v26 - 30);
                *(_DWORD *)(*v26 + 264) |= 0x80000000;
                AlpcpUnlockMessage(*v26);
                if ( a11 )
                  *v24 |= 0x1000u;
                if ( (a3 & 0x80000) != 0 )
                  v20[104] = *v24 | 0x100;
                if ( *((_BYTE *)v20 + 268) == 1 )
                {
                  v20[104] |= 0x400u;
LABEL_43:
                  AlpcpSetOwnerProcessPort(v20, a7);
                  if ( (v33[32] & 0x1000000) != 0 )
                  {
                    v20[64] |= 0x1000000u;
                    *((_QWORD *)v20 + 34) = v33[34];
                  }
                  PsReferenceSiloContext(v20);
                  inserted = ObInsertObjectEx((char *)v20, 0LL, 2031617, 0, 0, 0LL, (__int64)&v41);
                  if ( inserted >= 0 )
                  {
                    *((_QWORD *)v20 + 7) = v41;
                    *a1 = v41;
                    *a2 = v20;
                    return (unsigned int)inserted;
                  }
                  v23 = inserted;
LABEL_59:
                  ObfDereferenceObject(v20);
                  return (unsigned int)v23;
                }
                v20 = v40;
                Message = SeCreateClientSecurity(
                            KeGetCurrentThread(),
                            (PSECURITY_QUALITY_OF_SERVICE)((char *)v40 + 260),
                            0,
                            (PSECURITY_CLIENT_CONTEXT)((char *)v40 + 64));
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
      ObfDereferenceObject(v14);
      goto LABEL_59;
    }
LABEL_57:
    ObfDereferenceObject(v14);
    return (unsigned int)v19;
  }
  return result;
}
