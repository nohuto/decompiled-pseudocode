/*
 * XREFs of ExpMutantInitialization @ 0x140C45900
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140C42BB4 (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObCreateObjectType @ 0x1406F96E0 (ObCreateObjectType.c)
 */

bool ExpMutantInitialization()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-49h] BYREF
  _WORD v2[2]; // [rsp+30h] [rbp-39h] BYREF
  int v3; // [rsp+34h] [rbp-35h]
  int v4; // [rsp+38h] [rbp-31h]
  __int128 v5; // [rsp+3Ch] [rbp-2Dh]
  int v6; // [rsp+4Ch] [rbp-1Dh]
  int v7; // [rsp+54h] [rbp-15h]
  int v8; // [rsp+5Ch] [rbp-Dh]
  __int64 (__fastcall *v9)(ULONG_PTR); // [rsp+78h] [rbp+Fh]

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Mutant");
  memset_0(v2, 0, 0x78uLL);
  memset_0(&KeGetCurrentThread()->ApcState.Process->DirectoryTableBase, 0, (unsigned int)KdDumpEnableOffset);
  v2[0] = 120;
  v3 = 64;
  v4 = 256;
  v7 = 512;
  v8 = 56;
  v5 = ExpMutantMapping;
  v6 = 2031617;
  v9 = ExpDeleteMutant;
  return (int)ObCreateObjectType(&DestinationString, v2, 0LL, (__int64)&ExMutantObjectType) >= 0;
}
