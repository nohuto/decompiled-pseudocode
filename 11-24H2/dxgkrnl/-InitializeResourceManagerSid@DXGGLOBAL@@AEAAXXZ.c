/*
 * XREFs of ?InitializeResourceManagerSid@DXGGLOBAL@@AEAAXXZ @ 0x1401D5BC4
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1401D4724 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

void __fastcall DXGGLOBAL::InitializeResourceManagerSid(DXGGLOBAL *this)
{
  ULONG v2; // eax
  void *v3; // rax
  NTSTATUS v4; // eax
  void *v5; // rcx
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-18h] BYREF

  v2 = RtlLengthRequiredSid(6u);
  v3 = (void *)operator new[](v2, 0x4B677844u, 256LL);
  *((_QWORD *)this + 38109) = v3;
  if ( v3 )
  {
    *(_DWORD *)IdentifierAuthority.Value = 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
    v4 = RtlInitializeSid(v3, &IdentifierAuthority, 6u);
    if ( v4 < 0 )
    {
      WdLogSingleEntry1(3LL, v4);
      v5 = (void *)*((_QWORD *)this + 38109);
      WdLogGlobalForLineNumber = 7202;
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v5);
      *((_QWORD *)this + 38109) = 0LL;
    }
    else
    {
      *RtlSubAuthoritySid(*((PSID *)this + 38109), 0) = 80;
      *RtlSubAuthoritySid(*((PSID *)this + 38109), 1u) = 1988685059;
      *RtlSubAuthoritySid(*((PSID *)this + 38109), 2u) = 1921232356;
      *RtlSubAuthoritySid(*((PSID *)this + 38109), 3u) = 378231328;
      *RtlSubAuthoritySid(*((PSID *)this + 38109), 4u) = -1590824699;
      *RtlSubAuthoritySid(*((PSID *)this + 38109), 5u) = 890457928;
    }
  }
  else
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 7210;
  }
}
