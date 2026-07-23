/*
 * XREFs of BcpSanitizeDriverName @ 0x14069B094
 * Callers:
 *     BcpDisplayErrorInformation @ 0x14069A26C (BcpDisplayErrorInformation.c)
 *     BcpDisplayErrorInformationModernized @ 0x14069A4D4 (BcpDisplayErrorInformationModernized.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BcpSanitizeDriverName(unsigned __int16 *a1, __int64 a2)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r11
  unsigned __int64 v7; // rax
  unsigned int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int16 v11; // dx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  __int64 result; // rax

  v3 = *a1;
  v4 = *(unsigned __int16 *)(a2 + 2) - 2LL;
  v5 = *((_QWORD *)a1 + 1);
  v6 = *(_QWORD *)(a2 + 8);
  if ( v3 >= v4 )
    v7 = v4 >> 1;
  else
    LODWORD(v7) = (unsigned int)v3 >> 1;
  v8 = 0;
  if ( (_DWORD)v7 )
  {
    v9 = 0LL;
    v10 = (unsigned int)v7;
    v8 = v7;
    do
    {
      v11 = *(_WORD *)(v9 + v5);
      v12 = v11;
      if ( (unsigned __int16)(v11 - 32) > 0x3Fu
        || (v13 = 0x87FFFFFE03FF4001uLL, LOWORD(v12) = v11 - 32, !_bittest64((const __int64 *)&v13, v12)) )
      {
        if ( (unsigned __int16)(v11 - 97) > 0x19u )
          v11 = 32;
      }
      *(_WORD *)(v9 + v6) = v11;
      v9 += 2LL;
      --v10;
    }
    while ( v10 );
  }
  result = v8;
  *(_WORD *)(v6 + 2LL * v8) = 0;
  *(_WORD *)a2 = 2 * v8;
  return result;
}
