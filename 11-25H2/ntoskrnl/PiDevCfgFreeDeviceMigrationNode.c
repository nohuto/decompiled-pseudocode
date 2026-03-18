/*
 * XREFs of PiDevCfgFreeDeviceMigrationNode @ 0x140891BB0
 * Callers:
 *     PiDevCfgFindDeviceMigrationNode @ 0x14071D504 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140891DEC (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgMigrateDevice @ 0x14094DC38 (PiDevCfgMigrateDevice.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiDevCfgFreeDeviceMigrationNode(char *P)
{
  void *v2; // rcx
  UNICODE_STRING *v3; // rdi
  __int64 v4; // rsi

  v2 = (void *)*((_QWORD *)P + 5);
  if ( v2 )
    ZwClose(v2);
  RtlFreeAnsiString((PUNICODE_STRING)(P + 24));
  v3 = (UNICODE_STRING *)(P + 48);
  v4 = 2LL;
  do
  {
    RtlFreeAnsiString(v3++);
    --v4;
  }
  while ( v4 );
  RtlFreeAnsiString((PUNICODE_STRING)(P + 104));
  RtlFreeAnsiString((PUNICODE_STRING)(P + 120));
  RtlFreeAnsiString((PUNICODE_STRING)(P + 136));
  RtlFreeAnsiString((PUNICODE_STRING)P + 10);
  ExFreePoolWithTag(P, 0);
}
