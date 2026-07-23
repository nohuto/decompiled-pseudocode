/*
 * XREFs of AdtpBuildPrivilegeAuditString @ 0x140A44074
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140403974 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpPackageParameters @ 0x140448568 (AdtpPackageParameters.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     AdtpLookupKnownPrivilegeNameQuickly @ 0x14049B36C (AdtpLookupKnownPrivilegeNameQuickly.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall AdtpBuildPrivilegeAuditString(
        unsigned int *a1,
        UNICODE_STRING *a2,
        __int64 *a3,
        __int64 a4,
        unsigned int *a5,
        _BYTE *a6)
{
  unsigned int v6; // eax
  unsigned int v7; // r12d
  UNICODE_STRING *v10; // r15
  unsigned __int16 v12; // bx
  __int64 v13; // rdx
  unsigned int v14; // r8d
  __int64 Pool2; // r14
  _WORD *v16; // rdi
  size_t Length; // rbx
  wchar_t *Buffer; // rdx
  __int64 v19; // rbx
  unsigned __int16 v20; // di
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  UNICODE_STRING v23; // [rsp+30h] [rbp-30h]
  void *Src[2]; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING v25; // [rsp+50h] [rbp-10h] BYREF

  v6 = *a1;
  v7 = 0;
  *(_DWORD *)(&v23.MaximumLength + 1) = 0;
  v10 = a2;
  DestinationString = 0LL;
  v25 = 0LL;
  *(_OWORD *)Src = 0LL;
  if ( !v6 )
  {
    if ( a3 )
    {
      a3[1] = 4LL;
      *a3 = (__int64)byte_14001DF78;
    }
    else if ( a2 )
    {
      RtlInitUnicodeString(a2, L"-");
    }
    return 0LL;
  }
  if ( v6 > 0x42 )
    return 3221225485LL;
  RtlInitUnicodeString(&DestinationString, L"\r\n\t\t\t");
  RtlInitUnicodeString(&v25, L"?");
  v12 = (unsigned __int16)(*(_WORD *)a1 * (AdtpWellKnownPrivilegeMaxLen + DestinationString.Length)
                         - DestinationString.Length
                         + 2) >> 1;
  if ( a4 )
  {
    v13 = *a5;
    v14 = v13 + v12;
    if ( v14 < 0x400 )
    {
      Pool2 = a4 + 2 * v13;
      *a5 = v14;
LABEL_6:
      v23.Buffer = (wchar_t *)Pool2;
      v23.MaximumLength = 2 * v12;
      v16 = (_WORD *)Pool2;
      if ( *a1 )
      {
        do
        {
          if ( (unsigned int)AdtpLookupKnownPrivilegeNameQuickly(&a1[2 * v7 + 2 + v7], Src) )
          {
            Length = v25.Length;
            Buffer = v25.Buffer;
          }
          else
          {
            Length = LOWORD(Src[0]);
            Buffer = (wchar_t *)Src[1];
          }
          memmove(v16, Buffer, Length);
          v16 = (_WORD *)((char *)v16 + Length);
          if ( v7 < *a1 - 1 )
          {
            v19 = DestinationString.Length;
            memmove(v16, DestinationString.Buffer, DestinationString.Length);
            v16 = (_WORD *)((char *)v16 + v19);
          }
          ++v7;
        }
        while ( v7 < *a1 );
        v10 = a2;
      }
      *v16 = 0;
      v20 = (_WORD)v16 - Pool2;
      v23.Length = v20;
      if ( a3 )
      {
        *a3 = Pool2;
        a3[1] = (unsigned int)v20 + 2;
      }
      else
      {
        *v10 = v23;
      }
      return 0LL;
    }
  }
  Pool2 = ExAllocatePool2(0x100uLL, 2LL * v12, 0x6B416553u);
  if ( Pool2 )
  {
    *a6 = 1;
    goto LABEL_6;
  }
  return 3221225495LL;
}
