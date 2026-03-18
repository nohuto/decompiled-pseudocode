/*
 * XREFs of SepReferenceTokenByHandle @ 0x140361130
 * Callers:
 *     SeSetSessionIdTokenWithLinked @ 0x140780630 (SeSetSessionIdTokenWithLinked.c)
 *     NtQuerySecurityAttributesToken @ 0x140867840 (NtQuerySecurityAttributesToken.c)
 *     NtQueryInformationToken @ 0x140AC8E20 (NtQueryInformationToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x1403616D0 (RtlIsValidProcessTrustLabelSid.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14084F9F0 (ObReferenceObjectByHandleWithTag.c)
 *     PsReferenceImpersonationTokenEx @ 0x140910D20 (PsReferenceImpersonationTokenEx.c)
 *     PsReferenceEffectiveToken @ 0x140969860 (PsReferenceEffectiveToken.c)
 */

NTSTATUS __fastcall SepReferenceTokenByHandle(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        int a4,
        PVOID *Object,
        _BYTE *a6,
        _QWORD *a7)
{
  _BYTE *v7; // rdi
  _QWORD *v8; // rsi
  NTSTATUS v9; // ebx
  PVOID *v10; // r14
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v12; // rax
  unsigned __int64 v13; // rdx
  _QWORD *v14; // r8
  __int64 v15; // r10
  int v16; // eax
  __int64 v17; // r9
  NTSTATUS result; // eax
  _QWORD *v19; // rax
  __int64 v20; // r9
  __int64 v21; // r10
  int v22; // [rsp+60h] [rbp+8h] BYREF
  int v23; // [rsp+78h] [rbp+20h] BYREF

  v23 = a4;
  v7 = a6;
  v8 = a7;
  v9 = 0;
  *a6 = 0;
  *v8 = 0LL;
  if ( (unsigned __int64)a1 + 6 > 2 )
  {
    result = ObReferenceObjectByHandleWithTag(a1, a2, (POBJECT_TYPE)SeTokenObjectType, a3, 0x74726853u, Object, 0LL);
    v9 = result;
    if ( result >= 0 )
      return v9;
  }
  else if ( (a2 & 0xFFFFFFE7) != 0 )
  {
    return -1073741790;
  }
  else
  {
    v10 = Object;
    LOBYTE(a6) = 0;
    v22 = 0;
    LODWORD(a7) = 0;
    *Object = 0LL;
    *v7 = 0;
    *v8 = 0LL;
    CurrentThread = KeGetCurrentThread();
    LOBYTE(v23) = 0;
    if ( a1 == (void *)-4LL )
    {
      *v10 = (PVOID)PsReferencePrimaryTokenWithTag((__int64)CurrentThread->ApcState.Process, 0x74726853u);
      return 0;
    }
    else
    {
      if ( a1 != (void *)-5LL )
      {
        v12 = (_QWORD *)PsReferenceEffectiveToken(CurrentThread, 1953654867LL, &a7, &a6, &v22, &v23);
        v14 = v12;
        if ( (_DWORD)a7 == 2 && !v22 )
        {
          ObfDereferenceObjectWithTag(v12, 0x74726853u);
          return -1073741658;
        }
LABEL_6:
        v15 = v14[138];
        v16 = (unsigned __int8)v23;
        *v7 = 0;
        *v8 = 0LL;
        if ( v16 != 98 )
        {
          v13 = 0x140000000uLL;
          switch ( v16 )
          {
            case 18:
              v17 = SeProcTrustAuthenticodeSid;
              goto LABEL_8;
            case 49:
              v17 = SeProcTrustLiteAntimalwareSid;
              goto LABEL_8;
            case 81:
              v17 = SeProcTrustLiteWinSid;
              goto LABEL_8;
            case 82:
              v17 = SeProcTrustWinSid;
              goto LABEL_8;
            case 97:
              v17 = SeProcTrustLiteWinTcbSid;
              goto LABEL_8;
            case 114:
              break;
            case 129:
              v17 = SeProcTrustLiteAppSid;
              goto LABEL_8;
            default:
              goto LABEL_9;
          }
        }
        v17 = SeProcTrustWinTcbSid;
LABEL_8:
        if ( !v17 || (unsigned __int8)RtlIsValidProcessTrustLabelSid(v17, v13, v14) )
        {
LABEL_9:
          if ( !v15 )
            goto LABEL_10;
          if ( (unsigned __int8)RtlIsValidProcessTrustLabelSid(v15, v13, v14) )
          {
            if ( !v20 )
            {
              if ( *(_DWORD *)(v21 + 8) )
              {
                *v7 = 1;
                *v8 = 0LL;
              }
              goto LABEL_10;
            }
            if ( *(_DWORD *)(v20 + 8) >= *(_DWORD *)(v21 + 8) && *(_DWORD *)(v20 + 12) >= *(_DWORD *)(v21 + 12) )
            {
LABEL_10:
              *v10 = v14;
              return v9;
            }
          }
        }
        *v7 = 1;
        *v8 = v20;
        goto LABEL_10;
      }
      v19 = (_QWORD *)PsReferenceImpersonationTokenEx(CurrentThread, 0LL, 1953654867LL, &a7, &a6, &v22, &v23);
      v14 = v19;
      if ( v19 )
      {
        if ( !v22 )
        {
          ObfDereferenceObjectWithTag(v19, 0x746C6644u);
          return -1073741658;
        }
        goto LABEL_6;
      }
      return -1073741700;
    }
  }
  return result;
}
