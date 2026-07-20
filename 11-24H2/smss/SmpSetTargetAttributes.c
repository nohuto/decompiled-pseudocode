/*
 * XREFs of SmpSetTargetAttributes @ 0x14001859C
 * Callers:
 *     SmpDeleteFile @ 0x14001499C (SmpDeleteFile.c)
 *     SmpForceDeleteTargetFile @ 0x140014C44 (SmpForceDeleteTargetFile.c)
 *     SmpTryOverwriteReadonlyFile @ 0x1400188B4 (SmpTryOverwriteReadonlyFile.c)
 * Callees:
 *     SmLogFailureInt @ 0x140008078 (SmLogFailureInt.c)
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpSetTargetAttributes(void *a1, unsigned int a2)
{
  NTSTATUS v3; // eax
  unsigned int v4; // ebx
  struct _IO_STATUS_BLOCK v6; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v7[2]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  memset(v7, 0, sizeof(v7));
  v9 = 0;
  v6 = 0LL;
  v8 = a2;
  v3 = NtSetInformationFile(a1, &v6, v7, 0x28u, FileBasicInformation);
  v4 = v3;
  if ( v3 >= 0 )
    return 0;
  else
    SmLogFailureInt((__int64)"SmpSetTargetAttributes", 6346, a2, 0LL, v3);
  return v4;
}
