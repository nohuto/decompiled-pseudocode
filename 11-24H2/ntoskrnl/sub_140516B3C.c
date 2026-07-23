/*
 * XREFs of sub_140516B3C @ 0x140516B3C
 * Callers:
 *     sub_140507CD0 @ 0x140507CD0 (sub_140507CD0.c)
 *     sub_140516C24 @ 0x140516C24 (sub_140516C24.c)
 *     sub_140517D28 @ 0x140517D28 (sub_140517D28.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140BC3010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140BD5A04 @ 0x140BD5A04 (sub_140BD5A04.c)
 *     sub_140BE196C @ 0x140BE196C (sub_140BE196C.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 * Callees:
 *     KeGuardDispatchICall @ 0x140BDCA60 (KeGuardDispatchICall.c)
 */

unsigned __int8 __fastcall sub_140516B3C(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 i; // rdx
  unsigned __int8 result; // al
  unsigned __int8 j; // cl
  _DWORD v8[10]; // [rsp+20h] [rbp-28h] BYREF

  (*(void (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 1024))(a2, a3, v8);
  for ( i = 0LL; i < 4; ++i )
    *(_DWORD *)(a4 + 4 * i) = v8[i] ^ v8[i + 4];
  result = *(_BYTE *)(a4 + 15);
  for ( j = result; ; j ^= result )
  {
    result >>= 7;
    if ( !result )
      break;
  }
  *(_BYTE *)(a4 + 15) = j & 0x7F;
  return result;
}
