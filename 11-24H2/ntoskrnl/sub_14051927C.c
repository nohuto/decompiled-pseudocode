/*
 * XREFs of sub_14051927C @ 0x14051927C
 * Callers:
 *     sub_14050A410 @ 0x14050A410 (sub_14050A410.c)
 *     sub_140519364 @ 0x140519364 (sub_140519364.c)
 *     sub_14051A468 @ 0x14051A468 (sub_14051A468.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140BC1010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140BD3A04 @ 0x140BD3A04 (sub_140BD3A04.c)
 *     sub_140BDF96C @ 0x140BDF96C (sub_140BDF96C.c)
 *     sub_140BE10B0 @ 0x140BE10B0 (sub_140BE10B0.c)
 * Callees:
 *     KeGuardDispatchICall @ 0x140BDAA60 (KeGuardDispatchICall.c)
 */

unsigned __int8 __fastcall sub_14051927C(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
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
