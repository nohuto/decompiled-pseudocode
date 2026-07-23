/*
 * XREFs of PspAssignProcessQuotaBlock @ 0x140A2BBE8
 * Callers:
 *     PspSetQuotaLimits @ 0x140999A58 (PspSetQuotaLimits.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     PspLockQuotaListShared @ 0x14048F05C (PspLockQuotaListShared.c)
 *     PspUnlockQuotaListShared @ 0x140494604 (PspUnlockQuotaListShared.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PspInitializeQuotaBlock @ 0x140773E70 (PspInitializeQuotaBlock.c)
 *     RtlCopySid @ 0x1408E7870 (RtlCopySid.c)
 *     PspDereferenceQuota @ 0x1408FF678 (PspDereferenceQuota.c)
 *     PspLookupProcessQuotaBlock @ 0x140A2BAE4 (PspLookupProcessQuotaBlock.c)
 *     PspHashKeyValue @ 0x140A2BE88 (PspHashKeyValue.c)
 *     PspReadUserQuotaLimits @ 0x140A2BEBC (PspReadUserQuotaLimits.c)
 *     PspSafeReferenceQuotaBlock @ 0x140A2BFEC (PspSafeReferenceQuotaBlock.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PspAssignProcessQuotaBlock(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char v7; // di
  _BYTE *v8; // rsi
  unsigned __int8 *v9; // rdx
  __int64 v10; // rbp
  volatile signed __int32 *v11; // rbx
  __int64 v12; // r15
  __int64 v13; // r11
  int UserQuotaLimits; // edi
  _QWORD *i; // rdi
  int *v17; // rdi
  volatile signed __int32 *Pool2; // rax
  __int64 v19; // rdi
  unsigned __int8 v20; // [rsp+20h] [rbp-C8h]
  struct _KTHREAD *v21; // [rsp+30h] [rbp-B8h]
  _BYTE Sid1[80]; // [rsp+40h] [rbp-A8h] BYREF
  char v23; // [rsp+90h] [rbp-58h] BYREF

  memset_0(Sid1, 0, 0x44uLL);
  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  v20 = 0;
  v8 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a3 + 48), 1u);
  v9 = **(unsigned __int8 ***)(a3 + 152);
  v10 = 4 * (unsigned int)v9[1] + 8;
  if ( (unsigned int)v10 <= 0x44 )
    memmove(Sid1, v9, (unsigned int)v10);
  ExReleaseResourceLite(*(PERESOURCE *)(a3 + 48));
  KeLeaveCriticalRegion();
  if ( a1 && (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
  {
    v7 = 1;
    v10 = 0LL;
    v20 = 1;
  }
  else
  {
    v8 = Sid1;
  }
  v21 = KeGetCurrentThread();
  v11 = 0LL;
  v12 = PspQuotaBlockTable + 24LL * (unsigned int)PspHashKeyValue(v8, (unsigned int)v10);
  PspLockQuotaListShared(v13, (volatile signed __int64 *)v12);
  if ( v8 )
  {
    for ( i = *(_QWORD **)(v12 + 8); i != (_QWORD *)(v12 + 8); i = (_QWORD *)*i )
    {
      if ( RtlEqualSid(v8, i + 7) )
      {
        v11 = (volatile signed __int32 *)(i - 65);
        goto LABEL_27;
      }
    }
  }
  else if ( v7 )
  {
    v11 = (volatile signed __int32 *)PspDefaultQuotaBlock;
LABEL_27:
    if ( v11 )
    {
      if ( (unsigned int)PspSafeReferenceQuotaBlock(v11) )
        _InterlockedIncrement(v11 + 129);
      else
        v11 = 0LL;
    }
  }
  PspUnlockQuotaListShared((__int64)v21, (signed __int64 *)v12);
  if ( !v11 )
  {
    if ( a1 )
    {
      v17 = 0LL;
    }
    else
    {
      UserQuotaLimits = PspReadUserQuotaLimits(Sid1);
      if ( UserQuotaLimits < 0 )
        return (unsigned int)UserQuotaLimits;
      v17 = (int *)&v23;
    }
    Pool2 = (volatile signed __int32 *)ExAllocatePool2(0x48uLL, v10 + 576, 0x62517350u);
    v11 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    UserQuotaLimits = PspInitializeQuotaBlock(a1, v17, Pool2);
    if ( UserQuotaLimits < 0 )
    {
LABEL_25:
      PspDereferenceQuota(v11);
      return (unsigned int)UserQuotaLimits;
    }
    if ( v8 )
      RtlCopySid(v10, (PSID)(v11 + 144), Sid1);
    v19 = PspLookupProcessQuotaBlock(v8, (unsigned int)v10, v20, (__int64)v11);
    if ( v19 )
    {
      PspDereferenceQuota(v11);
      v11 = (volatile signed __int32 *)v19;
    }
  }
  if ( !*(_QWORD *)(a2 + 760) )
  {
    *(_QWORD *)(a2 + 760) = v11;
    return 0LL;
  }
  if ( (__int64 *)_InterlockedCompareExchange64(
                    (volatile signed __int64 *)(a2 + 760),
                    (signed __int64)v11,
                    (signed __int64)&PspSystemQuotaBlock) == &PspSystemQuotaBlock )
    return 0LL;
  UserQuotaLimits = -1073741823;
  if ( v11 )
    goto LABEL_25;
  return (unsigned int)UserQuotaLimits;
}
