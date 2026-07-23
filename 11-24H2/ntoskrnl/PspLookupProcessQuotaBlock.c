/*
 * XREFs of PspLookupProcessQuotaBlock @ 0x140A2BAE4
 * Callers:
 *     PspAssignProcessQuotaBlock @ 0x140A2BBE8 (PspAssignProcessQuotaBlock.c)
 * Callees:
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     PspLockQuotaListShared @ 0x14048F05C (PspLockQuotaListShared.c)
 *     PspUnlockQuotaListShared @ 0x140494604 (PspUnlockQuotaListShared.c)
 *     PspLockQuotaListExclusive @ 0x1404C78E4 (PspLockQuotaListExclusive.c)
 *     PspUnlockQuotaListExclusive @ 0x1404C91A0 (PspUnlockQuotaListExclusive.c)
 *     PspHashKeyValue @ 0x140A2BE88 (PspHashKeyValue.c)
 *     PspSafeReferenceQuotaBlock @ 0x140A2BFEC (PspSafeReferenceQuotaBlock.c)
 */

__int64 __fastcall PspLookupProcessQuotaBlock(void *a1, __int64 a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v8; // rbx
  unsigned __int64 *v9; // rdi
  unsigned __int64 *i; // rsi
  unsigned __int64 *v12; // rax
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  unsigned __int64 **v16; // rdx

  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  v9 = (unsigned __int64 *)(PspQuotaBlockTable + 24LL * (unsigned int)PspHashKeyValue());
  if ( a4 )
    PspLockQuotaListExclusive((__int64)CurrentThread, v9);
  else
    PspLockQuotaListShared((__int64)CurrentThread, (volatile signed __int64 *)v9);
  if ( a1 )
  {
    for ( i = (unsigned __int64 *)v9[1]; ; i = (unsigned __int64 *)*i )
    {
      if ( i == v9 + 1 )
        goto LABEL_5;
      if ( RtlEqualSid(a1, i + 7) )
        break;
    }
    v8 = (__int64)(i - 65);
  }
  else
  {
    if ( !a3 )
      goto LABEL_5;
    v8 = PspDefaultQuotaBlock;
  }
  if ( v8 )
  {
    if ( (unsigned int)PspSafeReferenceQuotaBlock(v8) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 516));
    }
    else
    {
      if ( a4 && !a3 )
      {
        v13 = (_QWORD *)(v8 + 520);
        v14 = *v13;
        if ( *(_QWORD **)(*v13 + 8LL) != v13 )
          goto LABEL_30;
        v15 = (_QWORD *)v13[1];
        if ( (_QWORD *)*v15 != v13 )
          goto LABEL_30;
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        *v13 = 0LL;
      }
      v8 = 0LL;
    }
  }
LABEL_5:
  if ( a4 )
  {
    if ( v8 )
    {
LABEL_29:
      PspUnlockQuotaListExclusive((__int64)CurrentThread, (volatile signed __int64 *)v9);
      return v8;
    }
    v12 = (unsigned __int64 *)(a4 + 520);
    if ( a3 )
    {
      PspDefaultQuotaBlock = a4;
      *v12 = 1LL;
      goto LABEL_29;
    }
    v16 = (unsigned __int64 **)v9[2];
    if ( *v16 == v9 + 1 )
    {
      *v12 = (unsigned __int64)(v9 + 1);
      *(_QWORD *)(a4 + 528) = v16;
      *v16 = v12;
      v9[2] = (unsigned __int64)v12;
      goto LABEL_29;
    }
LABEL_30:
    __fastfail(3u);
  }
  PspUnlockQuotaListShared((__int64)CurrentThread, (signed __int64 *)v9);
  return v8;
}
