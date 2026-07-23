/*
 * XREFs of MiMapExParametersInitialize @ 0x140987D28
 * Callers:
 *     MiMapViewOfSectionExCommon @ 0x140987880 (MiMapViewOfSectionExCommon.c)
 * Callees:
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 */

__int64 __fastcall MiMapExParametersInitialize(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // r10
  unsigned int v6; // r9d
  unsigned __int64 v7; // rsi
  unsigned __int64 *v8; // rdx
  unsigned __int64 v9; // rbx
  unsigned __int64 *v10; // r11
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  int v14; // edx

  v3 = MiSectionControlArea(a2[4]);
  v6 = 0;
  v7 = v3;
  if ( *(_QWORD *)(v4 + 16) )
    return (unsigned int)-1073741811;
  if ( (*(_DWORD *)(v5 + 40) & 0x4000) != 0 )
  {
    if ( *(_QWORD *)v4 )
      return (unsigned int)-1073741811;
    v8 = (unsigned __int64 *)(v4 + 8);
    if ( *(_QWORD *)(v4 + 8) )
      return (unsigned int)-1073741811;
    *(_DWORD *)(v5 + 64) |= 0x4000000u;
    *(_DWORD *)(v5 + 60) |= 2u;
    *(_QWORD *)(v5 + 16) = 4096LL;
  }
  else
  {
    v8 = (unsigned __int64 *)(v4 + 8);
  }
  v9 = *(_QWORD *)v4;
  if ( ((*(_QWORD *)(v5 + 16) - 1LL) & *(_QWORD *)v4) != 0 )
    return (unsigned int)-1073741811;
  if ( *a2 )
  {
    if ( v9 || *v8 || *(_QWORD *)(v4 + 16) )
      return (unsigned int)-1073741811;
    v10 = (unsigned __int64 *)(v4 + 8);
  }
  else
  {
    v10 = v8;
  }
  if ( *v8 )
  {
    if ( *v8 <= 0x7FFFFFFEFFFFLL && ((*(_DWORD *)v10 + 1) & 0xFFF) == 0 )
    {
      v12 = *v8;
      goto LABEL_13;
    }
    return (unsigned int)-1073741811;
  }
  if ( (*(_DWORD *)(v5 + 64) & 8) != 0 )
  {
    v12 = 0x7FFFFFFEFFFFLL;
  }
  else
  {
    v11 = *(_QWORD *)(a2[5] + 872LL) - 1LL;
    if ( v11 >= 0x7FFFFFFEFFFFLL )
      v11 = 0x7FFFFFFEFFFFLL;
    v12 = v11;
  }
  *v8 = v12;
LABEL_13:
  if ( v9 >= v12 )
    return (unsigned int)-1073741811;
  v13 = a2[1];
  if ( v13 )
  {
    if ( v12 - v9 + 1 < v13 )
      return (unsigned int)-1073741811;
  }
  v14 = *(_DWORD *)(v5 + 40);
  if ( (v14 & 0x7F) != 0
    || *(_DWORD *)(v5 + 52)
    || *(_DWORD *)(v4 + 32) > (unsigned int)(unsigned __int16)KeNumberNodes
    || (v14 & 0x40000000) != 0 && (*(_DWORD *)(v7 + 56) & 0x420) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  if ( (v14 & 0x20000000) != 0 && (*(_DWORD *)(v7 + 56) & 0x20) != 0 && (*(_DWORD *)(v5 + 60) & 1) != 0 )
    return (unsigned int)-1073741811;
  if ( (*(_BYTE *)(v4 + 56) & 0x20) != 0 )
    *(_DWORD *)(v5 + 64) |= 2u;
  if ( (*(_BYTE *)(v4 + 56) & 0x40) != 0 )
    *(_DWORD *)(v5 + 120) |= 8u;
  *(_DWORD *)(v5 + 52) = *(_DWORD *)(v4 + 32);
  *(_QWORD *)v5 = *(_QWORD *)v4;
  *(_QWORD *)(v5 + 8) = *(_QWORD *)(v4 + 8);
  *(_WORD *)(v5 + 58) = *(_WORD *)(v4 + 50);
  *(_QWORD *)(v5 + 112) = *(_QWORD *)(v4 + 56);
  *(_DWORD *)(v5 + 40) = v14 & 0xFFFFBFFF;
  return v6;
}
