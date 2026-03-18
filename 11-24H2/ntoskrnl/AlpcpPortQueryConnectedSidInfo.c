/*
 * XREFs of AlpcpPortQueryConnectedSidInfo @ 0x1409AB3F4
 * Callers:
 *     NtAlpcQueryInformation @ 0x1409AB170 (NtAlpcQueryInformation.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     ObFastDereferenceObject @ 0x140356880 (ObFastDereferenceObject.c)
 *     RtlEqualSid @ 0x140364150 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SeCaptureSid @ 0x140864EF8 (SeCaptureSid.c)
 *     SeQueryUserSidToken @ 0x14090A570 (SeQueryUserSidToken.c)
 *     AlpcpReferenceConnectedPort @ 0x140911260 (AlpcpReferenceConnectedPort.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcpPortQueryConnectedSidInfo(__int64 a1, _BYTE *a2, __int64 a3, _DWORD *a4, char a5)
{
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rsi
  __int64 v11; // rax
  _QWORD *v12; // r13
  signed __int64 *v13; // rdi
  _QWORD *v14; // rsi
  __int64 result; // rax
  ULONG_PTR v16; // rbx
  unsigned int v17; // ebx
  int v18; // [rsp+20h] [rbp-D8h]
  PSID Sid1; // [rsp+40h] [rbp-B8h] BYREF
  int v20; // [rsp+48h] [rbp-B0h]
  _BYTE *v21; // [rsp+50h] [rbp-A8h]
  __int64 v22; // [rsp+58h] [rbp-A0h]
  _BYTE Sid2[80]; // [rsp+60h] [rbp-98h] BYREF

  v22 = a1;
  v21 = a2;
  Sid1 = 0LL;
  memset_0(Sid2, 0, 0x44uLL);
  if ( !a1 )
    return 3221225485LL;
  if ( !a5 )
  {
    if ( a4 )
      *a4 = 0;
    Sid1 = a2;
LABEL_6:
    v10 = 0LL;
    v11 = AlpcpReferenceConnectedPort(a1);
    v12 = (_QWORD *)v11;
    if ( v11 )
    {
      v13 = (signed __int64 *)(v11 + 352);
      v14 = KeAbPreAcquire(v11 + 352, 0LL);
      if ( _InterlockedCompareExchange64(v13, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v13, 0, v14, (__int64)v13);
      if ( v14 )
        *((_BYTE *)v14 + 10) = 1;
      v10 = 0LL;
      if ( (v12[3] & 1) == 0 )
        v10 = (__int64 *)v12[3];
      if ( v10 )
        ObfReferenceObjectWithTag(v10, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v13);
      KeAbPostRelease((ULONG_PTR)v13);
      ObfDereferenceObject(v12);
    }
    if ( v10 )
    {
      v16 = PsReferencePrimaryTokenWithTag((__int64)v10, 0x746C6644u);
      SeQueryUserSidToken(v16, Sid2, 0x44u, 0LL);
      ObFastDereferenceObject(v10 + 73, v16, 0x746C6644u);
      LOBYTE(v16) = RtlEqualSid(Sid1, Sid2);
      ObfDereferenceObjectWithTag(v10, 0x63706C41u);
      v17 = (_BYTE)v16 == 0 ? 0xC00002A0 : 0;
    }
    else
    {
      v17 = -1073741769;
    }
    if ( (unsigned __int8)a5 <= 1u && Sid1 != a2 )
      ExFreePoolWithTag(Sid1, 0);
    return v17;
  }
  if ( a4 )
    *a4 = 0;
  result = SeCaptureSid(a2, a5, v8, v9, v18, 1, &Sid1);
  v20 = result;
  if ( (int)result >= 0 )
    goto LABEL_6;
  return result;
}
