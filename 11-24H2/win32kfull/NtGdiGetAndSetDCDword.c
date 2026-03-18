/*
 * XREFs of NtGdiGetAndSetDCDword @ 0x14019B110
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?iSetMapMode@DC@@QEAAHH@Z @ 0x14019B328 (-iSetMapMode@DC@@QEAAHH@Z.c)
 */

__int64 __fastcall NtGdiGetAndSetDCDword(HDC a1, int a2, int a3, _DWORD *a4)
{
  int v7; // ebx
  unsigned int v8; // r14d
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v16; // ecx
  unsigned int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rax
  DC *v20[14]; // [rsp+20h] [rbp-78h] BYREF

  v7 = 0;
  v8 = 1;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v20, a1);
  if ( v20[0] )
  {
    v9 = a2 - 1;
    if ( !v9 )
    {
      v7 = *((_DWORD *)v20[0] + 9) & 0x400;
      *((_DWORD *)v20[0] + 9) &= ~0x400u;
      goto LABEL_10;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      v7 = *((_DWORD *)v20[0] + 523);
      *((_DWORD *)v20[0] + 523) = a3;
      goto LABEL_10;
    }
    v11 = v10 - 2;
    if ( !v11 )
    {
      v19 = *((_QWORD *)v20[0] + 122);
      v7 = *(_DWORD *)(v19 + 352);
      *(_DWORD *)(v19 + 352) = a3;
      goto LABEL_10;
    }
    v12 = v11 - 2;
    if ( !v12 )
    {
LABEL_10:
      if ( v8 )
      {
        if ( (unsigned __int64)a4 >= MmUserProbeAddress )
          a4 = (_DWORD *)MmUserProbeAddress;
        *a4 = v7;
      }
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v20);
      return v8;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      if ( (a3 & 0xFFFFFFFE) != 0 )
      {
        EngSetLastError(0x57u);
        v7 = -1;
      }
      else
      {
        v18 = *((_QWORD *)v20[0] + 122);
        v7 = *(_DWORD *)(v18 + 236);
        *(_DWORD *)(v18 + 236) = a3;
      }
      goto LABEL_10;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v7 = *(_DWORD *)(*((_QWORD *)v20[0] + 122) + 104LL);
      if ( v7 != a3 )
        v7 = DC::iSetMapMode(v20[0], a3);
      goto LABEL_10;
    }
    if ( v14 != 1 )
    {
      v8 = 0;
      goto LABEL_10;
    }
    v16 = *((_DWORD *)v20[0] + 62);
    if ( (*(_DWORD *)(*((_QWORD *)v20[0] + 122) + 108LL) & 1) != 0 )
    {
      v7 = 2 - ((v16 & 4) != 0);
      if ( a3 != 2 )
      {
        if ( a3 == 1 )
          goto LABEL_18;
        goto LABEL_23;
      }
    }
    else
    {
      v7 = ((v16 & 4) != 0) + 1;
      if ( a3 == 2 )
      {
LABEL_18:
        v17 = v16 | 4;
LABEL_19:
        *((_DWORD *)v20[0] + 62) = v17;
        goto LABEL_10;
      }
      if ( a3 != 1 )
      {
LABEL_23:
        EngSetLastError(0x57u);
        v7 = 0;
        goto LABEL_10;
      }
    }
    v17 = v16 & 0xFFFFFFFB;
    goto LABEL_19;
  }
  if ( a2 == 5 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (_DWORD *)MmUserProbeAddress;
    *a4 = 0x80000000;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v20);
  return 0LL;
}
