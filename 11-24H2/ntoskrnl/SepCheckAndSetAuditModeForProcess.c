/*
 * XREFs of SepCheckAndSetAuditModeForProcess @ 0x140A1C0F8
 * Callers:
 *     SepIsImageInMinTcbList @ 0x140A1B9DC (SepIsImageInMinTcbList.c)
 *     SepIsMinTCB @ 0x140A1BD1C (SepIsMinTCB.c)
 * Callees:
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     SeCompareSigningLevels @ 0x1409354F0 (SeCompareSigningLevels.c)
 *     RtlQueryImageFileKeyOption @ 0x140A22FB0 (RtlQueryImageFileKeyOption.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x140A31C68 (RtlpOpenImageFileOptionsKeyEx.c)
 */

void __fastcall SepCheckAndSetAuditModeForProcess(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  char v3; // di
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  Handle = 0LL;
  v3 = SeILSigningPolicy;
  if ( !SeILSigningPolicy )
    v3 = SeILSigningPolicyRuntime;
  if ( !*a3 && *a2 == v3 && (int)RtlpOpenImageFileOptionsKeyEx(a1, a2, a3, &Handle) >= 0 )
  {
    RtlQueryImageFileKeyOption(Handle, 4, 0LL);
    ZwClose(Handle);
  }
}
