/*
 * XREFs of RtlGetAppContainerParent @ 0x140780B50
 * Callers:
 *     RtlpGetTokenNamedObjectPath @ 0x1407813F0 (RtlpGetTokenNamedObjectPath.c)
 *     SepValidateReferencedCachedHandles @ 0x140913DDC (SepValidateReferencedCachedHandles.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x140445040 (RtlSubAuthoritySid.c)
 *     RtlLengthRequiredSid @ 0x14086B5A0 (RtlLengthRequiredSid.c)
 *     RtlGetAppContainerSidType @ 0x1409143B0 (RtlGetAppContainerSidType.c)
 *     RtlInitializeSid @ 0x1409DE5C0 (RtlInitializeSid.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlGetAppContainerParent(PSID AppContainerSid, PSID *AppContainerSidParent)
{
  ULONG v4; // eax
  ULONG *Pool2; // rax
  ULONG *v6; // rbx
  int v8; // edi
  unsigned __int8 v9; // di
  ULONG *v10; // r14
  PULONG v11; // rax
  int v12; // [rsp+48h] [rbp+10h] BYREF

  *AppContainerSidParent = 0LL;
  v12 = 0;
  if ( RtlGetAppContainerSidType(AppContainerSid, (PAPPCONTAINER_SID_TYPE)&v12) < 0 || v12 != 1 )
    return -1073741811;
  v4 = RtlLengthRequiredSid(8u);
  Pool2 = (ULONG *)ExAllocatePool2(0x41uLL, v4, 0x62507452u);
  v6 = Pool2;
  if ( !Pool2 )
    return -1073741670;
  v8 = RtlInitializeSid(Pool2, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 8u);
  if ( v8 < 0 )
  {
    ExFreePoolWithTag(v6, 0);
  }
  else
  {
    v9 = 0;
    v10 = v6 + 2;
    do
    {
      v11 = RtlSubAuthoritySid(AppContainerSid, v9++);
      *v10++ = *v11;
    }
    while ( v9 < 8u );
    *AppContainerSidParent = v6;
    return 0;
  }
  return v8;
}
