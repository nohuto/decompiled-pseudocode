/*
 * XREFs of SepCheckAndSetAuditModeForProcess @ 0x1409FA668
 * Callers:
 *     SepIsImageInMinTcbList @ 0x1409F9F4C (SepIsImageInMinTcbList.c)
 *     SepIsMinTCB @ 0x1409FA28C (SepIsMinTCB.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     SeCompareSigningLevels @ 0x1409FA8D0 (SeCompareSigningLevels.c)
 *     RtlQueryImageFileKeyOption @ 0x140A173C0 (RtlQueryImageFileKeyOption.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x140A25BD8 (RtlpOpenImageFileOptionsKeyEx.c)
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
