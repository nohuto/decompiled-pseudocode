/*
 * XREFs of AllocateWindowManagerSid @ 0x140017C70
 * Callers:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x140017D80 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     CheckDwmProcessSecurityIdentifier @ 0x14014F600 (CheckDwmProcessSecurityIdentifier.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall AllocateWindowManagerSid(_QWORD *a1)
{
  ULONG v2; // eax
  unsigned __int64 v3; // rcx
  void *v4; // rax
  void *v5; // rdi
  NTSTATUS v6; // esi
  ULONG CurrentWin32kSessionId; // ebx
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-18h] BYREF

  *a1 = 0LL;
  v2 = RtlLengthRequiredSid(3u);
  v4 = Win32AllocPoolWithQuotaZInitImpl(v3, v2, 0x65737355u);
  v5 = v4;
  if ( v4 )
  {
    *(_DWORD *)IdentifierAuthority.Value = 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
    v6 = RtlInitializeSid(v4, &IdentifierAuthority, 3u);
    if ( v6 < 0 )
    {
      GreDeleteFastMutex(v5);
    }
    else
    {
      *RtlSubAuthoritySid(v5, 0) = 90;
      *RtlSubAuthoritySid(v5, 1u) = 0;
      CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
      *RtlSubAuthoritySid(v5, 2u) = CurrentWin32kSessionId;
      *a1 = v5;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v6;
}
