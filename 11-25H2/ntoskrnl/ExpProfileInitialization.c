/*
 * XREFs of ExpProfileInitialization @ 0x140C3240C
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140C2F788 (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ?KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z @ 0x14044F2EC (-KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObCreateObjectType @ 0x1406EFC30 (ObCreateObjectType.c)
 */

bool ExpProfileInitialization()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-49h] BYREF
  __int16 v2; // [rsp+30h] [rbp-39h] BYREF
  int v3; // [rsp+38h] [rbp-31h]
  __int128 v4; // [rsp+3Ch] [rbp-2Dh]
  int v5; // [rsp+4Ch] [rbp-1Dh]
  int v6; // [rsp+54h] [rbp-15h]
  int v7; // [rsp+5Ch] [rbp-Dh]
  void (__fastcall *v8)(__int64); // [rsp+78h] [rbp+Fh]

  DestinationString = 0LL;
  KiInitializeMutant(&ExpProfileStateMutex, 0, 1u, 0);
  RtlInitUnicodeString(&DestinationString, L"Profile");
  memset_0(&v2, 0, 0x78uLL);
  v2 = 120;
  v3 = 256;
  v6 = 512;
  v7 = 336;
  v5 = 983041;
  v4 = ExpProfileMapping;
  v8 = ExpProfileDelete;
  return (int)ObCreateObjectType(&DestinationString, &v2, 0LL, (__int64)&ExProfileObjectType) >= 0;
}
