/*
 * XREFs of RtlpSaveX87State @ 0x180075AA0
 * Callers:
 *     RtlUnwindEx @ 0x180077090 (RtlUnwindEx.c)
 * Callees:
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

void *__fastcall RtlpSaveX87State(__int64 a1)
{
  __int64 v2; // xmm1_8
  __int128 v4; // [rsp+20h] [rbp-218h] BYREF
  __int64 v5; // [rsp+30h] [rbp-208h]
  _BYTE Src[480]; // [rsp+40h] [rbp-1F8h] BYREF

  memset_thunk_772440563353939046(&v4, 0, 0x200uLL);
  _fxsave(&v4);
  v2 = v5;
  *(_OWORD *)(a1 + 256) = v4;
  *(_QWORD *)(a1 + 272) = v2;
  return memmove((void *)(a1 + 288), Src, 0x80uLL);
}
