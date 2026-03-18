/*
 * XREFs of ?AllocateDefaultSecurityDescriptor@DXGVAILOBJECT@@SAJKPEAPEAX@Z @ 0x1401FF2A4
 * Callers:
 *     ?Create@DXGVAILOBJECT@@SAJPEAPEAV1@@Z @ 0x1401FFCDC (-Create@DXGVAILOBJECT@@SAJPEAPEAV1@@Z.c)
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1402000D0 (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

__int64 __fastcall DXGVAILOBJECT::AllocateDefaultSecurityDescriptor(ACCESS_MASK AccessMask, struct _ACL **a2)
{
  NTSTATUS v4; // eax
  unsigned int v5; // ebx
  ULONG v6; // r15d
  __int64 v7; // r9
  struct _ACL *v8; // rax
  struct _ACL *v9; // rdi
  NTSTATUS SecurityDescriptor; // eax
  NTSTATUS Acl; // eax
  NTSTATUS v12; // eax
  NTSTATUS v13; // eax
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
    v8 = (struct _ACL *)operator new[](v6 + 60, 0x4B677844u, 256LL, v7);
    v9 = v8;
    if ( v8 )
    {
      SecurityDescriptor = RtlCreateSecurityDescriptor(v8, 1u);
      v5 = SecurityDescriptor;
      if ( SecurityDescriptor >= 0 )
      {
        Acl = RtlCreateAcl(v9 + 5, v6 + 20, 4u);
        v5 = Acl;
        if ( Acl >= 0 )
        {
          v12 = RtlAddAccessAllowedAce(v9 + 5, 4u, AccessMask, Sid);
          v5 = v12;
          if ( v12 >= 0 )
          {
            v13 = RtlSetDaclSecurityDescriptor(v9, 1u, v9 + 5, 0);
            v5 = v13;
            if ( v13 >= 0 )
            {
              *a2 = v9;
              return v5;
            }
            WdLogSingleEntry1(3LL, v13);
            WdLogGlobalForLineNumber = 284;
          }
          else
          {
            WdLogSingleEntry1(3LL, v12);
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
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
    }
    else
    {
      v5 = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      WdLogGlobalForLineNumber = 242;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
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
