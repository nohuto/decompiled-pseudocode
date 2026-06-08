/*
 * XREFs of PerfSelectionHwp @ 0x140002CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PerfSelectionHwp(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        int a7,
        char a8,
        _DWORD *a9,
        _QWORD *a10,
        _QWORD *a11)
{
  unsigned int v12; // r11d
  int v14; // ebp
  unsigned __int64 v15; // r14
  unsigned int v16; // esi
  unsigned int v17; // ecx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r8
  unsigned int v20; // edx
  char i; // cl
  __int64 v22; // rcx
  unsigned int v24; // r10d
  char v25; // dl
  __int64 v26; // [rsp+20h] [rbp+8h]
  __int64 v27; // [rsp+68h] [rbp+50h]

  LODWORD(v26) = 0;
  v12 = a3;
  if ( a2 >= a3 )
    v12 = a2;
  if ( v12 > a4 )
    v12 = a4;
  if ( a10 )
  {
    v14 = *(_DWORD *)(a1 + 100);
    if ( v12 == v14 )
    {
      v15 = *(_QWORD *)(a1 + 40);
    }
    else if ( v12 == 100 )
    {
      v15 = *(_QWORD *)(a1 + 48);
    }
    else if ( *(_BYTE *)(a1 + 131) && v12 == *(_DWORD *)(a1 + 116) )
    {
      v15 = *(_QWORD *)(a1 + 88);
    }
    else if ( v12 == *(_DWORD *)(a1 + 108) )
    {
      v15 = *(_QWORD *)(a1 + 56);
    }
    else if ( v12 == *(_DWORD *)(a1 + 112) )
    {
      v15 = *(_QWORD *)(a1 + 64);
    }
    else
    {
      v15 = (*(_QWORD *)(a1 + 48) * (unsigned __int64)v12 + 50) / 0x64;
    }
    v16 = 0;
    v27 = 0LL;
    if ( *(_BYTE *)(a1 + 125) && (a8 & 4) == 0 )
    {
      v16 = (unsigned __int8)v15 << 16;
      v17 = v16;
      LODWORD(v27) = v16;
    }
    else
    {
      v17 = 0;
    }
    if ( *(_BYTE *)(a1 + 126) )
    {
      if ( a3 == v14 )
      {
        v18 = *(_QWORD *)(a1 + 40);
      }
      else if ( a3 == 100 )
      {
        v18 = *(_QWORD *)(a1 + 48);
      }
      else if ( *(_BYTE *)(a1 + 131) && a3 == *(_DWORD *)(a1 + 116) )
      {
        v18 = *(_QWORD *)(a1 + 88);
      }
      else if ( a3 == *(_DWORD *)(a1 + 108) )
      {
        v18 = *(_QWORD *)(a1 + 56);
      }
      else if ( a3 == *(_DWORD *)(a1 + 112) )
      {
        v18 = *(_QWORD *)(a1 + 64);
      }
      else
      {
        v18 = (*(_QWORD *)(a1 + 48) * (unsigned __int64)a3 + 50) / 0x64;
      }
      v17 = v17 & 0xFFFFFF00 | (unsigned __int8)v18;
      LODWORD(v27) = v17;
      v16 = v17;
    }
    if ( *(_BYTE *)(a1 + 127) )
    {
      if ( a4 == *(_DWORD *)(a1 + 100) )
      {
        v19 = *(_QWORD *)(a1 + 40);
      }
      else if ( a4 == 100 )
      {
        v19 = *(_QWORD *)(a1 + 48);
      }
      else if ( *(_BYTE *)(a1 + 131) && a4 == *(_DWORD *)(a1 + 116) )
      {
        v19 = *(_QWORD *)(a1 + 88);
      }
      else if ( a4 == *(_DWORD *)(a1 + 108) )
      {
        v19 = *(_QWORD *)(a1 + 56);
      }
      else if ( a4 == *(_DWORD *)(a1 + 112) )
      {
        v19 = *(_QWORD *)(a1 + 64);
      }
      else
      {
        v19 = (*(_QWORD *)(a1 + 48) * (unsigned __int64)a4 + 50) / 0x64;
      }
      v16 = v17 & 0xFFFF00FF | ((unsigned __int8)v19 << 8);
      LODWORD(v27) = v16;
    }
    if ( *(_BYTE *)(a1 + 128) )
      LODWORD(v27) = v16 & 0xFFFFFF | ((255 * a5 / 0x64u) << 24);
    if ( *(_BYTE *)(a1 + 129) )
    {
      v20 = a6;
      for ( i = 0; v20 > 0x7F; v20 /= 0xAu )
        ++i;
      HIDWORD(v27) = v20 & 0x7F | ((i & 7) << 7);
    }
    v22 = (unsigned int)v15;
    *a10 = v27;
    if ( (unsigned __int64)(unsigned int)v15 >= *(_QWORD *)(a1 + 88) )
      v22 = *(_QWORD *)(a1 + 88);
    if ( a9 )
      *a9 = v22 * (unsigned __int64)*(unsigned int *)(a1 + 96) / *(_QWORD *)(a1 + 48);
  }
  if ( a11 )
  {
    *a11 = 0LL;
    if ( *(_BYTE *)(a1 + 1348) )
    {
      v24 = *(_DWORD *)(a1 + 1384);
      v25 = v24 - 1;
      if ( v24 - 1 >= (100 - a7) / (0x64 / v24) )
        v25 = (100 - a7) / (0x64 / v24);
      HIDWORD(v26) = v25 & 3;
      *a11 = v26;
    }
  }
  return v12;
}
