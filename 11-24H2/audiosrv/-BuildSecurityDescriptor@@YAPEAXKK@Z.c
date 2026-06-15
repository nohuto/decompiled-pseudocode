/*
 * XREFs of ?BuildSecurityDescriptor@@YAPEAXKK@Z @ 0x1800FE3BC
 * Callers:
 *     ?InitializePnpInfo@@YAHXZ @ 0x1800FE974 (-InitializePnpInfo@@YAHXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1800C0208 (WPP_SF_.c)
 *     WPP_SF_D @ 0x1800C03A4 (WPP_SF_D.c)
 */

__int64 __fastcall BuildSecurityDescriptor()
{
  unsigned __int64 v0; // rsi
  struct _ACL *v1; // rbx
  char v2; // r15
  void *v3; // rax
  void *v4; // rdi
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  DWORD LastError; // eax
  unsigned __int16 v8; // dx
  DWORD LengthSid; // ebx
  DWORD v10; // r14d
  struct _ACL *v11; // rax
  void *v12; // rax
  PSID pSid; // [rsp+60h] [rbp-20h] BYREF
  DWORD dwBufferLength; // [rsp+68h] [rbp-18h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY pIdentifierAuthority; // [rsp+6Ch] [rbp-14h] BYREF

  pSid = 0LL;
  v0 = 0LL;
  *(_DWORD *)pIdentifierAuthority.Value = 0;
  v1 = 0LL;
  *(_WORD *)&pIdentifierAuthority.Value[4] = 256;
  v2 = 0;
  v3 = HeapAlloc(hHeap, 0, 0x28uLL);
  v4 = v3;
  if ( !v3 )
  {
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v6 = 10LL;
LABEL_6:
      WPP_SF_(v5[2], v6, &WPP_62e65b1aa5e43d79debbf88575ed7e0c_Traceguids);
      goto LABEL_54;
    }
    goto LABEL_54;
  }
  if ( !InitializeSecurityDescriptor(v3, 1u) )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_54;
    }
    LastError = GetLastError();
    v8 = 11;
    goto LABEL_53;
  }
  if ( !AllocateAndInitializeSid(&pIdentifierAuthority, 1u, 0, 0, 0, 0, 0, 0, 0, 0, &pSid) )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_54;
    }
    LastError = GetLastError();
    v8 = 12;
    goto LABEL_53;
  }
  LengthSid = GetLengthSid(AudiosrvSid);
  v10 = LengthSid + GetLengthSid(pSid) + 24;
  v11 = (struct _ACL *)HeapAlloc(hHeap, 0, v10);
  v1 = v11;
  if ( !v11 )
  {
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v6 = 13LL;
      goto LABEL_6;
    }
    goto LABEL_54;
  }
  if ( !InitializeAcl(v11, v10, 2u) )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_54;
    }
    LastError = GetLastError();
    v8 = 14;
    goto LABEL_53;
  }
  if ( !AddAccessAllowedAce(v1, 2u, 0xF001Fu, AudiosrvSid) )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_54;
    }
    LastError = GetLastError();
    v8 = 15;
    goto LABEL_53;
  }
  if ( !AddAccessAllowedAce(v1, 2u, 4u, pSid) )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_54;
    }
    LastError = GetLastError();
    v8 = 16;
    goto LABEL_53;
  }
  if ( !SetSecurityDescriptorDacl(v4, 1, v1, 0) )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_54;
    }
    LastError = GetLastError();
    v8 = 17;
LABEL_53:
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      v8,
      (__int64)&WPP_62e65b1aa5e43d79debbf88575ed7e0c_Traceguids,
      LastError);
    goto LABEL_54;
  }
  dwBufferLength = GetSecurityDescriptorLength(v4);
  v12 = HeapAlloc(hHeap, 0, dwBufferLength);
  v0 = (unsigned __int64)v12;
  if ( !v12 )
  {
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v6 = 18LL;
      goto LABEL_6;
    }
    goto LABEL_54;
  }
  if ( MakeSelfRelativeSD(v4, v12, &dwBufferLength) )
  {
    v2 = 1;
    goto LABEL_54;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    LastError = GetLastError();
    v8 = 19;
    goto LABEL_53;
  }
LABEL_54:
  if ( pSid )
    FreeSid(pSid);
  if ( v1 )
    HeapFree(hHeap, 0, v1);
  if ( v4 )
    HeapFree(hHeap, 0, v4);
  if ( !v2 && v0 )
    HeapFree(hHeap, 0, (LPVOID)v0);
  return v0 & -(__int64)(v2 != 0);
}
