/*
 * XREFs of sub_14003BEA0 @ 0x14003BEA0
 * Callers:
 *     sub_14003551C @ 0x14003551C (sub_14003551C.c)
 * Callees:
 *     sub_140005F24 @ 0x140005F24 (sub_140005F24.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     sub_14002C084 @ 0x14002C084 (sub_14002C084.c)
 */

__int64 __fastcall sub_14003BEA0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v5; // edi
  char v6; // r8
  char v7; // al
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_DWORD *)(a2 + 36);
  v3 = *(_QWORD *)(a1 + 1120);
  v9 = 0LL;
  LODWORD(v9) = v2;
  v5 = 0;
  if ( (int)PoFxProcessorNotification(v3, 42LL, &v9) < 0 )
    return v5;
  v6 = BYTE4(v9);
  if ( !BYTE4(v9) )
  {
    *(_DWORD *)(a2 + 40) = 252;
    goto LABEL_11;
  }
  if ( BYTE4(v9) == 1 )
  {
    *(_DWORD *)(a2 + 40) = 253;
    goto LABEL_11;
  }
  if ( BYTE4(v9) == 2 )
  {
    *(_DWORD *)(a2 + 40) = 254;
LABEL_11:
    v7 = BYTE5(v9);
    *(_WORD *)(a2 + 58) = WORD3(v9);
    *(_QWORD *)(a2 + 60) = *((_QWORD *)&v9 + 1);
    *(_BYTE *)(a2 + 56) = v6;
    *(_BYTE *)(a2 + 57) = v7;
    sub_14002C084((unsigned __int8 *)a2, 0);
    return v5;
  }
  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    sub_140005F24((__int64)off_140018050->DeviceExtension, 2u, 2u, 0x21u, (__int64)&unk_140014CB8, BYTE4(v9));
  return (unsigned int)-1073741811;
}
