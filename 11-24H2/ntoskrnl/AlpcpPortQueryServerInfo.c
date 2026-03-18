/*
 * XREFs of AlpcpPortQueryServerInfo @ 0x140741EA4
 * Callers:
 *     NtAlpcQueryInformation @ 0x1409AB170 (NtAlpcQueryInformation.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     ObReferenceObjectSafe @ 0x14041D310 (ObReferenceObjectSafe.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     AlpcpGetPortNameInformation @ 0x140741DEC (AlpcpGetPortNameInformation.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140890590 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x140898D70 (AlpcpUnlockMessage.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x140A3A07C (AlpcpReferenceMessageByWaitingThread.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall AlpcpPortQueryServerInfo(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        KPROCESSOR_MODE AccessMode)
{
  unsigned int v5; // r13d
  void *v7; // rcx
  NTSTATUS result; // eax
  const void **v9; // rdi
  int PortNameInformation; // r14d
  ULONG_PTR v11; // rsi
  __int64 v12; // rax
  __int64 *v13; // r12
  signed __int64 *v14; // r13
  _QWORD *v15; // rdi
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // r12
  signed __int64 *v19; // rdi
  _QWORD *v20; // r13
  _QWORD *v21; // r13
  unsigned int v22; // esi
  bool v23; // [rsp+30h] [rbp-78h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-70h] BYREF
  PVOID Object; // [rsp+40h] [rbp-68h] BYREF
  const void **v26; // [rsp+48h] [rbp-60h] BYREF
  __int64 v27; // [rsp+50h] [rbp-58h]
  void *v28; // [rsp+58h] [rbp-50h]
  __int64 v29; // [rsp+60h] [rbp-48h]
  unsigned int v30; // [rsp+B0h] [rbp+8h] BYREF
  unsigned int v31; // [rsp+C0h] [rbp+18h]
  unsigned int *v32; // [rsp+C8h] [rbp+20h]

  v32 = a4;
  v31 = a3;
  v5 = a3;
  BugCheckParameter2 = 0LL;
  if ( a1 || a3 < 8 )
    return -1073741811;
  if ( AccessMode )
  {
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = *(void **)a2;
    v28 = *(void **)a2;
  }
  else
  {
    v7 = *(void **)a2;
    v28 = *(void **)a2;
  }
  Object = 0LL;
  result = ObReferenceObjectByHandle(v7, 0x40u, (POBJECT_TYPE)PsThreadType, AccessMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v9 = 0LL;
    v26 = 0LL;
    v30 = 0;
    v23 = 0;
    v27 = 0LL;
    PortNameInformation = AlpcpReferenceMessageByWaitingThread(Object, &BugCheckParameter2);
    if ( PortNameInformation == -1073741275 )
    {
      v11 = 0LL;
      PortNameInformation = 0;
    }
    else
    {
      if ( PortNameInformation < 0 )
      {
        ObfDereferenceObject(Object);
        return PortNameInformation;
      }
      v11 = BugCheckParameter2;
      AlpcpLockForCachedReferenceBlob(BugCheckParameter2);
      --*(_WORD *)(v11 - 30);
      if ( v11 == *((_QWORD *)Object + 183) )
      {
        v12 = *(_QWORD *)(v11 + 24);
        v29 = v12;
        if ( v12 )
        {
          v13 = *(__int64 **)(v12 + 16);
          if ( v13 )
          {
            v14 = v13 - 2;
            v15 = KeAbPreAcquire((__int64)(v13 - 2), 0LL);
            if ( _InterlockedCompareExchange64(v13 - 2, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx(v13 - 2, 0, v15, (__int64)(v13 - 2));
            if ( v15 )
              *((_BYTE *)v15 + 10) = 1;
            AlpcpUnlockMessage(BugCheckParameter2);
            BugCheckParameter2 = 0LL;
            v16 = *v13;
            if ( !*v13 )
              goto LABEL_29;
            v16 &= -(__int64)(ObReferenceObjectSafe(*v13) != 0);
            if ( !v16 )
              goto LABEL_29;
            v17 = *(_DWORD *)(v29 + 416) & 6;
            if ( v17 != 2 && v17 != 4 )
              v13 += 2;
            v18 = *v13;
            v19 = (signed __int64 *)v18;
            if ( v18 )
            {
              if ( v18 != v16 && !ObReferenceObjectSafe(v18) )
LABEL_29:
                v19 = 0LL;
            }
            if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v14);
            KeAbPostRelease((ULONG_PTR)v14);
            if ( !v19 || !v16 )
              goto LABEL_48;
            v20 = KeAbPreAcquire((__int64)(v19 + 44), 0LL);
            if ( _InterlockedCompareExchange64(v19 + 44, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx(v19 + 44, 0, v20, (__int64)(v19 + 44));
            if ( v20 )
              *((_BYTE *)v20 + 10) = 1;
            v21 = 0LL;
            if ( (v19[3] & 1) == 0 )
              v21 = (_QWORD *)v19[3];
            if ( v21 )
              ObfReferenceObjectWithTag(v21, 0x63706C41u);
            if ( _InterlockedCompareExchange64(v19 + 44, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v19 + 44);
            KeAbPostRelease((ULONG_PTR)(v19 + 44));
            if ( v21 )
            {
              v27 = v21[58];
              ObfDereferenceObjectWithTag(v21, 0x63706C41u);
              v5 = v31;
              if ( v31 > 0x10 )
                v30 = v31 - 16;
              PortNameInformation = AlpcpGetPortNameInformation(v16, &v26, &v30);
              v23 = PortNameInformation >= 0;
            }
            else
            {
LABEL_48:
              v5 = v31;
            }
            if ( v16 )
              ObfDereferenceObject((PVOID)v16);
            if ( v19 && v19 != (signed __int64 *)v16 )
              ObfDereferenceObject(v19);
            v11 = BugCheckParameter2;
            v9 = v26;
          }
        }
      }
    }
    if ( v11 )
      AlpcpUnlockMessage(v11);
    ObfDereferenceObject(Object);
    v22 = 32;
    if ( v9 )
    {
      v22 = *((unsigned __int16 *)v9 + 1) + 32;
    }
    else if ( PortNameInformation == -1073741820 )
    {
      v22 = v30 + 16;
    }
    if ( v5 < v22 )
      PortNameInformation = -1073741820;
    if ( PortNameInformation >= 0 )
    {
      *(_BYTE *)a2 = v23;
      *(_QWORD *)(a2 + 8) = v27;
      if ( v9 )
      {
        *(_WORD *)(a2 + 16) = *(_WORD *)v9;
        *(_WORD *)(a2 + 18) = *((_WORD *)v9 + 1);
        *(_QWORD *)(a2 + 24) = a2 + 32;
        memmove((void *)(a2 + 32), v9[1], *((unsigned __int16 *)v9 + 1));
      }
      else
      {
        *(_DWORD *)(a2 + 16) = 0;
        *(_QWORD *)(a2 + 24) = 0LL;
      }
    }
    if ( v32 && ((int)(PortNameInformation + 0x80000000) < 0 || PortNameInformation == -1073741820) )
      *v32 = v22;
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    return PortNameInformation;
  }
  return result;
}
