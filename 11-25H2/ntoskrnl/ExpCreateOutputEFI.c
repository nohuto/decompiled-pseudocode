/*
 * XREFs of ExpCreateOutputEFI @ 0x140A629F4
 * Callers:
 *     ExpConvertSignatureName @ 0x1407AC248 (ExpConvertSignatureName.c)
 *     ExpTranslateNtPath @ 0x140AD1DB8 (ExpTranslateNtPath.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExpFindDiskSignature @ 0x140A61EC0 (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x140AAD5E0 (ExpGetDriveGeometry.c)
 */

NTSTATUS __fastcall ExpCreateOutputEFI(
        char *a1,
        unsigned int *a2,
        _QWORD *a3,
        int *a4,
        _QWORD *a5,
        _QWORD *a6,
        _WORD *Src,
        char a8)
{
  int v8; // esi
  unsigned __int64 v9; // rbx
  int *v10; // rax
  int v13; // ebp
  __int64 v15; // rax
  unsigned int v16; // ebp
  NTSTATUS result; // eax
  int v18; // eax
  int *v19; // rax
  unsigned __int64 v20; // rcx
  char v21; // r8
  char *v22; // rdi
  unsigned int v23; // [rsp+30h] [rbp-68h] BYREF
  int v24; // [rsp+34h] [rbp-64h] BYREF
  int *v25; // [rsp+38h] [rbp-60h]
  __int128 v26; // [rsp+40h] [rbp-58h] BYREF
  __int64 v27; // [rsp+50h] [rbp-48h]

  v8 = 0;
  v9 = 0LL;
  v10 = a4;
  v25 = a4;
  v23 = 0;
  v13 = 54;
  if ( Src )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( Src[v15] );
    v9 = (unsigned int)(2 * v15 + 2);
    v10 = a4;
    v13 = v9 + 58;
  }
  v16 = v13 + 4;
  if ( *a2 < v16 )
  {
    v8 = -1073741789;
LABEL_7:
    *a2 = v16;
    return v8;
  }
  v18 = *v10;
  v27 = 0LL;
  v24 = v18;
  v26 = 0LL;
  result = ExpFindDiskSignature(a3, &v24, &v23, 0LL, 0LL, a8);
  if ( result >= 0 )
  {
    result = ExpGetDriveGeometry(v23, &v26);
    if ( result >= 0 )
    {
      memset_0(a1, 0, v16);
      v19 = v25;
      v20 = HIDWORD(v27);
      v21 = 1;
      *(_DWORD *)a1 = 1;
      *((_DWORD *)a1 + 1) = v16;
      *((_DWORD *)a1 + 2) = 4;
      v22 = a1 + 12;
      *(_DWORD *)v22 = 2752772;
      *((_DWORD *)v22 + 1) = *v19;
      *((_QWORD *)v22 + 1) = *a5 / v20;
      *((_QWORD *)v22 + 2) = *a6 / v20;
      if ( a8 == 1 )
      {
        v21 = 2;
        *(_OWORD *)(v22 + 24) = *(_OWORD *)a3;
      }
      else
      {
        *((_DWORD *)v22 + 6) = *(_DWORD *)a3;
      }
      v22[40] = v21;
      v22[41] = v21;
      if ( Src )
      {
        v22 += 42;
        *(_WORD *)v22 = 1028;
        *((_WORD *)v22 + 1) = v9 + 4;
        memmove(v22 + 4, Src, v9 - 2);
        *(_WORD *)&v22[2 * (v9 >> 1) + 2] = 0;
      }
      *(_DWORD *)&v22[*((unsigned __int16 *)v22 + 1)] = 327551;
      goto LABEL_7;
    }
  }
  return result;
}
