/*
 * XREFs of PspAssignProcessQuotaBlock @ 0x140A30EE8
 * Callers:
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 *     PspSetQuotaLimits @ 0x1409C2688 (PspSetQuotaLimits.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     RtlEqualSid @ 0x14036A6E0 (RtlEqualSid.c)
 *     PspLockQuotaListShared @ 0x1404952E4 (PspLockQuotaListShared.c)
 *     PspUnlockQuotaListShared @ 0x14049A478 (PspUnlockQuotaListShared.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PspInitializeQuotaBlock @ 0x140764280 (PspInitializeQuotaBlock.c)
 *     RtlCopySid @ 0x1408A5010 (RtlCopySid.c)
 *     PspDereferenceQuota @ 0x1408E0988 (PspDereferenceQuota.c)
 *     PspLookupProcessQuotaBlock @ 0x140A30DE4 (PspLookupProcessQuotaBlock.c)
 *     PspHashKeyValue @ 0x140A31188 (PspHashKeyValue.c)
 *     PspReadUserQuotaLimits @ 0x140A311BC (PspReadUserQuotaLimits.c)
 *     PspSafeReferenceQuotaBlock @ 0x140A312EC (PspSafeReferenceQuotaBlock.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PspAssignProcessQuotaBlock(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char v7; // di
  _BYTE *v8; // rsi
  unsigned __int8 *v9; // rdx
  ULONG v10; // ebp
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 v13; // r11
  __int64 v14; // r8
  __int64 v15; // r9
  int UserQuotaLimits; // edi
  _QWORD *i; // rdi
  __int64 *v19; // rdx
  int *v20; // rdi
  _DWORD *Pool2; // rax
  __int64 v22; // rdx
  __int64 v23; // rdi
  unsigned __int8 v24; // [rsp+20h] [rbp-C8h]
  struct _KTHREAD *v25; // [rsp+30h] [rbp-B8h]
  _BYTE Sid1[80]; // [rsp+40h] [rbp-A8h] BYREF
  char v27; // [rsp+90h] [rbp-58h] BYREF

  memset_0(Sid1, 0, 0x44uLL);
  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  v24 = 0;
  v8 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a3 + 48), 1u);
  v9 = **(unsigned __int8 ***)(a3 + 152);
  v10 = 4 * v9[1] + 8;
  if ( v10 <= 0x44 )
    memmove(Sid1, v9, v10);
  ExReleaseResourceLite(*(PERESOURCE *)(a3 + 48));
  KeLeaveCriticalRegion();
  if ( a1 && (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
  {
    v7 = 1;
    v10 = 0;
    v24 = 1;
  }
  else
  {
    v8 = Sid1;
  }
  v25 = KeGetCurrentThread();
  v11 = 0LL;
  v12 = PspQuotaBlockTable + 24LL * (unsigned int)PspHashKeyValue(v8, v10);
  PspLockQuotaListShared(v13, (volatile signed __int64 *)v12);
  if ( v8 )
  {
    for ( i = *(_QWORD **)(v12 + 8); i != (_QWORD *)(v12 + 8); i = (_QWORD *)*i )
    {
      if ( RtlEqualSid(v8, i + 7) )
      {
        v11 = (__int64)(i - 65);
        goto LABEL_27;
      }
    }
  }
  else if ( v7 )
  {
    v11 = PspDefaultQuotaBlock;
LABEL_27:
    if ( v11 )
    {
      if ( (unsigned int)PspSafeReferenceQuotaBlock(v11) )
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 516));
      else
        v11 = 0LL;
    }
  }
  PspUnlockQuotaListShared((__int64)v25, (signed __int64 *)v12);
  if ( !v11 )
  {
    if ( a1 )
    {
      v20 = 0LL;
    }
    else
    {
      UserQuotaLimits = PspReadUserQuotaLimits(Sid1);
      if ( UserQuotaLimits < 0 )
        return (unsigned int)UserQuotaLimits;
      v20 = (int *)&v27;
    }
    Pool2 = (_DWORD *)ExAllocatePool2(0x48uLL);
    v11 = (__int64)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    UserQuotaLimits = PspInitializeQuotaBlock(a1, v20, Pool2);
    if ( UserQuotaLimits < 0 )
    {
LABEL_25:
      PspDereferenceQuota(v11, (__int64)v19, v14, v15);
      return (unsigned int)UserQuotaLimits;
    }
    if ( v8 )
      RtlCopySid(v10, (PSID)(v11 + 576), Sid1);
    v23 = PspLookupProcessQuotaBlock(v8, v10, v24, v11);
    if ( v23 )
    {
      PspDereferenceQuota(v11, v22, v14, v15);
      v11 = v23;
    }
  }
  if ( !*(_QWORD *)(a2 + 760) )
  {
    *(_QWORD *)(a2 + 760) = v11;
    return 0LL;
  }
  v19 = &PspSystemQuotaBlock;
  if ( (__int64 *)_InterlockedCompareExchange64(
                    (volatile signed __int64 *)(a2 + 760),
                    v11,
                    (signed __int64)&PspSystemQuotaBlock) == &PspSystemQuotaBlock )
    return 0LL;
  UserQuotaLimits = -1073741823;
  if ( v11 )
    goto LABEL_25;
  return (unsigned int)UserQuotaLimits;
}
