/*
 * XREFs of IvtUpdateScalableModeContextEntry @ 0x1404C4D8C
 * Callers:
 *     IvtUpdateScalableModeTranslationStructures @ 0x1404C4C90 (IvtUpdateScalableModeTranslationStructures.c)
 *     IvtConfigureAts @ 0x14056B300 (IvtConfigureAts.c)
 *     IvtSetDevicePasidTable @ 0x14056E5E0 (IvtSetDevicePasidTable.c)
 * Callees:
 *     IvtBuildScalableModeContextEntry @ 0x1404F69D0 (IvtBuildScalableModeContextEntry.c)
 *     IvtInvalidateScalableModeContextEntry @ 0x14056CA50 (IvtInvalidateScalableModeContextEntry.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall IvtUpdateScalableModeContextEntry(
        __int64 a1,
        unsigned int *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        int a8,
        int a9)
{
  unsigned int v9; // r10d
  __int64 v10; // rbx
  __int64 v11; // rax
  int v13; // r11d
  int v14; // r15d
  _QWORD *v15; // rdx
  char v16; // si
  char v17; // r12
  int v18; // ecx
  volatile signed __int64 *v19; // rdi
  __int64 v20; // r9
  __int128 v21; // rax
  __int64 v22; // r8
  __int128 v23; // rt0
  unsigned __int8 v24; // tt
  __int128 v26; // [rsp+40h] [rbp-49h]

  v9 = *a2;
  v10 = *(_QWORD *)(a1 + 32);
  v11 = 2 * (*a2 >> 8);
  v13 = a3;
  v14 = a1;
  if ( *(_BYTE *)(a1 + 320) )
    v15 = (_QWORD *)(v10 + 8 * ((unsigned int)v11 + (unsigned __int64)((*a2 & 0xF8) >= 0x80)));
  else
    v15 = (_QWORD *)(v10 + 8 * v11);
  v16 = 1;
  v17 = 0;
  LOBYTE(a3) = a4 == 1;
  v18 = (unsigned int)(a5 - 1) <= 1;
  v19 = (volatile signed __int64 *)(*v15 + 32 * (v9 & 7 | (8LL * ((v9 >> 3) & 0xF))));
  v26 = *(_OWORD *)v19;
  if ( (*(_OWORD *)v19 & 1) == 0 || a8 )
  {
    v16 = 0;
  }
  else
  {
    if ( !a4 )
      LOBYTE(a3) = (*v19 & 4) != 0;
    v18 = (unsigned __int8)v18;
    if ( !a5 )
      v18 = ((unsigned __int64)v26 >> 3) & 1;
    if ( (_BYTE)a3 != ((v26 & 4) != 0) || (v26 & 4) != 0 )
      v17 = 1;
  }
  LOBYTE(a4) = v18;
  IvtBuildScalableModeContextEntry(v18, v13, a3, a4);
  DWORD2(v21) = 1 << a2[1];
  *(_QWORD *)&v21 = (unsigned int)(1 << (3 - *((_BYTE *)a2 + 4)));
  if ( DWORD2(v21) )
  {
    v22 = 32LL * (unsigned int)v21;
    v20 = DWORD2(v21);
    do
    {
      v21 = *(_OWORD *)v19;
      do
      {
        v23 = v21;
        v24 = _InterlockedCompareExchange128(v19, 0LL, 0LL, (signed __int64 *)&v23);
        v21 = v23;
      }
      while ( !v24 );
      v19 = (volatile signed __int64 *)((char *)v19 + v22);
      --v20;
    }
    while ( v20 );
  }
  if ( v16 )
    *(_QWORD *)&v21 = IvtInvalidateScalableModeContextEntry(v14, (_DWORD)a2, a9, v20, v17);
  return v21;
}
