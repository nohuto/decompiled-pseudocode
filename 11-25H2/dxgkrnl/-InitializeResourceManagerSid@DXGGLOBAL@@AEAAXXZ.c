/*
 * XREFs of ?InitializeResourceManagerSid@DXGGLOBAL@@AEAAXXZ @ 0x1401D088C
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1401CF3EC (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

void __fastcall DXGGLOBAL::InitializeResourceManagerSid(DXGGLOBAL *this)
{
  ULONG v2; // eax
  __int64 v3; // r9
  void *v4; // rax
  NTSTATUS v5; // eax
  void *v6; // rcx
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-18h] BYREF

  v2 = RtlLengthRequiredSid(6u);
  v4 = (void *)operator new[](v2, 0x4B677844u, 256LL, v3);
  *((_QWORD *)this + 38099) = v4;
  if ( v4 )
  {
    *(_DWORD *)IdentifierAuthority.Value = 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
    v5 = RtlInitializeSid(v4, &IdentifierAuthority, 6u);
    if ( v5 < 0 )
    {
      WdLogSingleEntry1(3LL, v5);
      v6 = (void *)*((_QWORD *)this + 38099);
      WdLogGlobalForLineNumber = 7199;
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v6);
      *((_QWORD *)this + 38099) = 0LL;
    }
    else
    {
      *RtlSubAuthoritySid(*((PSID *)this + 38099), 0) = 80;
      *RtlSubAuthoritySid(*((PSID *)this + 38099), 1u) = 1988685059;
      *RtlSubAuthoritySid(*((PSID *)this + 38099), 2u) = 1921232356;
      *RtlSubAuthoritySid(*((PSID *)this + 38099), 3u) = 378231328;
      *RtlSubAuthoritySid(*((PSID *)this + 38099), 4u) = -1590824699;
      *RtlSubAuthoritySid(*((PSID *)this + 38099), 5u) = 890457928;
    }
  }
  else
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 7207;
  }
}
