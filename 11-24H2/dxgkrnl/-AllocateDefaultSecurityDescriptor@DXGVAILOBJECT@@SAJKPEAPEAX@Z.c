/*
 * XREFs of ?AllocateDefaultSecurityDescriptor@DXGVAILOBJECT@@SAJKPEAPEAX@Z @ 0x1402059B8
 * Callers:
 *     ?Create@DXGVAILOBJECT@@SAJPEAPEAV1@@Z @ 0x1402063EC (-Create@DXGVAILOBJECT@@SAJPEAPEAV1@@Z.c)
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1402067E0 (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

__int64 __fastcall DXGVAILOBJECT::AllocateDefaultSecurityDescriptor(ACCESS_MASK AccessMask, struct _ACL **a2)
{
  NTSTATUS v4; // eax
  unsigned int v5; // ebx
  ULONG v6; // r15d
  struct _ACL *v7; // rax
  struct _ACL *v8; // rdi
  NTSTATUS SecurityDescriptor; // eax
  NTSTATUS Acl; // eax
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+50h] [rbp-20h] BYREF
  _BYTE Sid[16]; // [rsp+58h] [rbp-18h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v4 = RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *RtlSubAuthoritySid(Sid, 0) = 83;
    *RtlSubAuthoritySid(Sid, 1u) = 0;
    v6 = RtlLengthSid(Sid);
    v7 = (struct _ACL *)operator new[](v6 + 60, 0x4B677844u, 256LL);
    v8 = v7;
    if ( v7 )
    {
      SecurityDescriptor = RtlCreateSecurityDescriptor(v7, 1u);
      v5 = SecurityDescriptor;
      if ( SecurityDescriptor >= 0 )
      {
        Acl = RtlCreateAcl(v8 + 5, v6 + 20, 4u);
        v5 = Acl;
        if ( Acl >= 0 )
        {
          v11 = RtlAddAccessAllowedAce(v8 + 5, 4u, AccessMask, Sid);
          v5 = v11;
          if ( v11 >= 0 )
          {
            v12 = RtlSetDaclSecurityDescriptor(v8, 1u, v8 + 5, 0);
            v5 = v12;
            if ( v12 >= 0 )
            {
              *a2 = v8;
              return v5;
            }
            WdLogSingleEntry1(3LL, v12);
            WdLogGlobalForLineNumber = 284;
          }
          else
          {
            WdLogSingleEntry1(3LL, v11);
            WdLogGlobalForLineNumber = 275;
          }
        }
        else
        {
          WdLogSingleEntry1(3LL, Acl);
          WdLogGlobalForLineNumber = 262;
        }
      }
      else
      {
        WdLogSingleEntry1(3LL, SecurityDescriptor);
        WdLogGlobalForLineNumber = 251;
      }
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
    }
    else
    {
      v5 = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      WdLogGlobalForLineNumber = 242;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"new failed. Returning 0x%I64x",
        -1073741801LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, v4);
    WdLogGlobalForLineNumber = 225;
  }
  return v5;
}
