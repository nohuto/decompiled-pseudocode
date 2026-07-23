/*
 * XREFs of HdlspProcessDumpCommand @ 0x140BAFFDC
 * Callers:
 *     HdlspBugCheckProcessing @ 0x140BAF1F8 (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x140BAF320 (HdlspDispatch.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlTimeToTimeFields @ 0x140419FA0 (RtlTimeToTimeFields.c)
 *     sprintf_s @ 0x140501A30 (sprintf_s.c)
 *     RtlUnicodeStringToAnsiString @ 0x1409051E0 (RtlUnicodeStringToAnsiString.c)
 *     HdlspPutMore @ 0x140BB0214 (HdlspPutMore.c)
 *     HdlspPutString @ 0x140BB02F0 (HdlspPutString.c)
 */

void __fastcall HdlspProcessDumpCommand(char a1)
{
  int v2; // eax
  KIRQL v3; // bl
  PKSPIN_LOCK v4; // rcx
  char *v5; // rax
  unsigned int v6; // r14d
  unsigned int v7; // esi
  __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  const char *v11; // rcx
  _TIME_FIELDS TimeFields; // [rsp+40h] [rbp-30h] BYREF
  _STRING v13; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  char v15; // [rsp+A8h] [rbp+38h] BYREF

  *(_DWORD *)(&v13.MaximumLength + 1) = 0;
  TimeFields = 0LL;
  v15 = 0;
  v2 = *((_DWORD *)HeadlessGlobals + 12);
  DestinationString = 0LL;
  if ( (v2 & 2) != 0 )
    v3 = -1;
  else
    v3 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
  v4 = HeadlessGlobals;
  if ( *((_WORD *)HeadlessGlobals + 49) == 0xFFFF )
  {
LABEL_5:
    if ( v3 == 0xFF )
      return;
    goto LABEL_35;
  }
  v5 = (char *)HeadlessGlobals[3];
  v6 = *((unsigned __int16 *)HeadlessGlobals + 49);
  *((_DWORD *)HeadlessGlobals + 12) &= ~4u;
  v7 = 0;
  v13.Buffer = v5;
  *(_DWORD *)&v13.Length = 5242880;
  while ( 1 )
  {
    v8 = v4[2] + 56LL * v6;
    if ( v3 != 0xFF )
      KeReleaseSpinLock(v4, v3);
    RtlTimeToTimeFields((PLARGE_INTEGER)(v8 + 8), &TimeFields);
    sprintf_s(
      (char *)HeadlessGlobals[3],
      0x50uLL,
      "%02d:%02d:%02d.%03d : ",
      TimeFields.Hour,
      TimeFields.Minute,
      TimeFields.Second,
      TimeFields.Milliseconds);
    HdlspPutString(HeadlessGlobals[3]);
    v9 = *(_QWORD *)(v8 + 48);
    v10 = -1LL;
    do
      ++v10;
    while ( *(_WORD *)(v9 + 2 * v10) );
    if ( v10 >= 0x4F )
      *(_WORD *)(v9 + 158) = 0;
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v8 + 48));
    RtlUnicodeStringToAnsiString(&v13, &DestinationString, 0);
    v3 = (HeadlessGlobals[6] & 2) != 0 ? -1 : KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
    if ( (HeadlessGlobals[6] & 4) != 0 )
      break;
    HdlspPutString(HeadlessGlobals[3]);
    HdlspPutString("\r\n");
    v4 = HeadlessGlobals;
    ++v7;
    if ( v6 == *((unsigned __int16 *)HeadlessGlobals + 48) )
      goto LABEL_5;
    if ( a1 && v7 > 0x14 )
    {
      if ( v3 != 0xFF )
        KeReleaseSpinLock(HeadlessGlobals, v3);
      HdlspPutMore(&v15);
      if ( (HeadlessGlobals[6] & 2) != 0 )
        v3 = -1;
      else
        v3 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
      if ( v15 )
      {
        v11 = "\r\n";
        goto LABEL_33;
      }
      v4 = HeadlessGlobals;
      if ( (HeadlessGlobals[6] & 4) != 0 )
      {
        v11 = "New log entries have been added while waiting, command aborted.\r\n";
        goto LABEL_33;
      }
      v7 = 0;
    }
    v6 = (unsigned __int8)(v6 + 1);
  }
  v11 = "New log entries have been added during dump, command aborted.\r\n";
LABEL_33:
  HdlspPutString(v11);
  if ( v3 != 0xFF )
  {
    v4 = HeadlessGlobals;
LABEL_35:
    KeReleaseSpinLock(v4, v3);
  }
}
