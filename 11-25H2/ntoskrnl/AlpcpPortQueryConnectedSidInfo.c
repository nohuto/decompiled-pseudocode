/*
 * XREFs of AlpcpPortQueryConnectedSidInfo @ 0x1409C2254
 * Callers:
 *     NtAlpcQueryInformation @ 0x1409C1FD0 (NtAlpcQueryInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObFastDereferenceObject @ 0x1402930B0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     RtlEqualSid @ 0x14036A6E0 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SeQueryUserSidToken @ 0x14083E7E0 (SeQueryUserSidToken.c)
 *     AlpcpReferenceConnectedPort @ 0x1408A6120 (AlpcpReferenceConnectedPort.c)
 *     SeCaptureSid @ 0x140916DC8 (SeCaptureSid.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcpPortQueryConnectedSidInfo(__int64 a1, _BYTE *a2, __int64 a3, _DWORD *a4, char a5)
{
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  __int64 *v11; // rsi
  __int64 v12; // rax
  _QWORD *v13; // r13
  signed __int64 *v14; // rdi
  __int64 *v15; // rsi
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
    goto LABEL_6;
  }
  if ( a4 )
    *a4 = 0;
  result = SeCaptureSid(a2, a5, v8, v9, v18, 1, &Sid1);
  v20 = result;
  if ( (int)result >= 0 )
  {
LABEL_6:
    v11 = 0LL;
    v12 = AlpcpReferenceConnectedPort(a1);
    v13 = (_QWORD *)v12;
    if ( v12 )
    {
      v14 = (signed __int64 *)(v12 + 352);
      v15 = KeAbPreAcquire(v12 + 352, 0LL);
      if ( _InterlockedCompareExchange64(v14, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v14, 0, v15, (unsigned __int64)v14);
      if ( v15 )
        *((_BYTE *)v15 + 10) = 1;
      v11 = 0LL;
      if ( (v13[3] & 1) == 0 )
        v11 = (__int64 *)v13[3];
      if ( v11 )
        ObfReferenceObjectWithTag(v11, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v14);
      KeAbPostRelease((ULONG_PTR)v14);
      ObfDereferenceObject(v13);
    }
    if ( v11 )
    {
      v16 = PsReferencePrimaryTokenWithTag((__int64)v11, 0x746C6644u);
      SeQueryUserSidToken(v16, Sid2, 0x44u, 0LL);
      ObFastDereferenceObject(v11 + 73, v16, 1953261124LL);
      LOBYTE(v16) = RtlEqualSid(Sid1, Sid2);
      ObfDereferenceObjectWithTag(v11, 0x63706C41u);
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
  return result;
}
