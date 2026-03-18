/*
 * XREFs of ?InitializeDWMSid@DXGVAILOBJECT@@QEAAXKPEAX@Z @ 0x140200A10
 * Callers:
 *     ?AllocateResourceSecurityDescriptor@DXGVAILOBJECT@@QEAAJEKPEAPEAX@Z @ 0x1401FF50C (-AllocateResourceSecurityDescriptor@DXGVAILOBJECT@@QEAAJEKPEAPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

void __fastcall DXGVAILOBJECT::InitializeDWMSid(DXGVAILOBJECT *this, ULONG a2, void *a3)
{
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  RtlInitializeSid(a3, &IdentifierAuthority, 3u);
  *RtlSubAuthoritySid(a3, 0) = 90;
  *RtlSubAuthoritySid(a3, 1u) = 0;
  *RtlSubAuthoritySid(a3, 2u) = a2;
}
