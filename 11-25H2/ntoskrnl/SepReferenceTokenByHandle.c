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
  _QWORD *v13; // r8
  void *v14; // r10
  int v15; // eax
  PSID v16; // r9
  NTSTATUS result; // eax
  _QWORD *v18; // rax
  __int64 v19; // r9
  __int64 v20; // r10
  int v21; // [rsp+60h] [rbp+8h] BYREF
  int v22; // [rsp+78h] [rbp+20h] BYREF

  v22 = a4;
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
    v21 = 0;
    LODWORD(a7) = 0;
    *Object = 0LL;
    *v7 = 0;
    *v8 = 0LL;
    CurrentThread = KeGetCurrentThread();
    LOBYTE(v22) = 0;
    if ( a1 == (void *)-4LL )
    {
      *v10 = (PVOID)PsReferencePrimaryTokenWithTag((__int64)CurrentThread->ApcState.Process, 0x74726853u);
      return 0;
    }
    else
    {
      if ( a1 != (void *)-5LL )
      {
        v12 = (_QWORD *)PsReferenceEffectiveToken(CurrentThread, 1953654867LL, &a7, &a6, &v21, &v22);
        v13 = v12;
        if ( (_DWORD)a7 == 2 && !v21 )
        {
          ObfDereferenceObjectWithTag(v12, 0x74726853u);
          return -1073741658;
        }
LABEL_6:
        v14 = (void *)v13[138];
        v15 = (unsigned __int8)v22;
        *v7 = 0;
        *v8 = 0LL;
        if ( v15 != 98 )
        {
          switch ( v15 )
          {
            case 18:
              v16 = (PSID)SeProcTrustAuthenticodeSid;
              goto LABEL_8;
            case 49:
              v16 = (PSID)SeProcTrustLiteAntimalwareSid;
              goto LABEL_8;
            case 81:
              v16 = (PSID)SeProcTrustLiteWinSid;
              goto LABEL_8;
            case 82:
              v16 = (PSID)SeProcTrustWinSid;
              goto LABEL_8;
            case 97:
              v16 = (PSID)SeProcTrustLiteWinTcbSid;
              goto LABEL_8;
            case 114:
              break;
            case 129:
              v16 = (PSID)SeProcTrustLiteAppSid;
              goto LABEL_8;
            default:
              goto LABEL_9;
          }
        }
        v16 = SeProcTrustWinTcbSid;
LABEL_8:
        if ( !v16 || RtlIsValidProcessTrustLabelSid(v16) )
        {
LABEL_9:
          if ( !v14 )
            goto LABEL_10;
          if ( RtlIsValidProcessTrustLabelSid(v14) )
          {
            if ( !v19 )
            {
              if ( *(_DWORD *)(v20 + 8) )
              {
                *v7 = 1;
                *v8 = 0LL;
              }
              goto LABEL_10;
            }
            if ( *(_DWORD *)(v19 + 8) >= *(_DWORD *)(v20 + 8) && *(_DWORD *)(v19 + 12) >= *(_DWORD *)(v20 + 12) )
            {
LABEL_10:
              *v10 = v13;
              return v9;
            }
          }
        }
        *v7 = 1;
        *v8 = v19;
        goto LABEL_10;
      }
      v18 = (_QWORD *)PsReferenceImpersonationTokenEx(CurrentThread, 0LL, 1953654867LL, &a7, &a6, &v21, &v22);
      v13 = v18;
      if ( v18 )
      {
        if ( !v21 )
        {
          ObfDereferenceObjectWithTag(v18, 0x746C6644u);
          return -1073741658;
        }
        goto LABEL_6;
      }
      return -1073741700;
    }
  }
  return result;
}
