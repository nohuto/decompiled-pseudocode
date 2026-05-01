/*
 * XREFs of AslpEnvResolveVars @ 0x1800A6E24
 * Callers:
 *     AslEnvExpandStrings2 @ 0x1800A668C (AslEnvExpandStrings2.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1800636A8 (RtlStringCchCopyW.c)
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     RtlStringCchCatW @ 0x180091F78 (RtlStringCchCatW.c)
 */

__int64 __fastcall AslpEnvResolveVars(
        wchar_t *String1,
        unsigned int a2,
        _WORD *a3,
        unsigned int a4,
        __int16 a5,
        __int16 a6,
        unsigned int *a7)
{
  int v7; // ebx
  __int64 v8; // r13
  int v9; // r15d
  unsigned int v10; // esi
  unsigned __int64 v12; // r14
  const wchar_t *v14; // r9
  unsigned int v15; // ecx
  __int64 v16; // r11
  unsigned __int64 i; // rdi
  int v18; // ebx
  __int64 v19; // r11

  v7 = 0;
  v8 = a4;
  v9 = 0;
  v10 = 0;
  v12 = 0LL;
  v14 = String1;
  while ( v12 < 4 )
  {
    if ( v7 )
      goto LABEL_33;
    v15 = dword_1800E84B0[6 * v12];
    if ( a2 > v15 )
    {
      if ( !_wcsnicmp(v14, off_1800E84A0[3 * v12], v15) )
      {
        v16 = 3 * v12;
        v10 = a2 + dword_1800E84B4[6 * v12] - dword_1800E84B0[6 * v12];
        if ( v10 > (unsigned int)v8 )
        {
          v18 = -1073741789;
          goto LABEL_34;
        }
        if ( v12 )
        {
          if ( !v9 )
          {
LABEL_20:
            v18 = RtlStringCchCopyW(a3, v8, (__int64)(&off_1800E84A8)[v16]);
            if ( v18 < 0 )
              goto LABEL_25;
            v18 = RtlStringCchCatW(a3, v8, (__int64)&String1[dword_1800E84B0[2 * v19]]);
            if ( v18 < 0 )
              goto LABEL_25;
          }
        }
        else
        {
          for ( i = 0LL; i < 16; i += 2LL )
          {
            if ( *(_WORD *)((char *)&unk_1800E8500 + i * 8) == a5 && *(_WORD *)((char *)&unk_1800E8502 + i * 8) == a6 )
            {
              v18 = RtlStringCchCopyW(a3, v8, (__int64)L"%systemroot%");
              if ( v18 < 0 )
                goto LABEL_25;
              v18 = RtlStringCchCatW(a3, v8, (__int64)(&off_1800E8508)[i]);
              if ( v18 < 0 )
                goto LABEL_25;
              v18 = RtlStringCchCatW(a3, v8, (__int64)&String1[dword_1800E84B0[0]]);
              if ( v18 < 0 )
                goto LABEL_25;
              v9 = 1;
            }
          }
          if ( !v9 )
          {
            AslLogCallPrintf(1LL);
            v16 = 0LL;
            goto LABEL_20;
          }
        }
        v7 = 1;
      }
      v14 = String1;
    }
    ++v12;
  }
  if ( !v7 )
  {
    v10 = a2;
    if ( a2 > (unsigned int)v8 )
    {
      v18 = -1073741789;
      *a7 = a2;
      return (unsigned int)v18;
    }
    v18 = RtlStringCchCopyW(a3, v8, (__int64)v14);
    if ( v18 < 0 )
    {
LABEL_25:
      AslLogCallPrintf(1LL);
      return (unsigned int)v18;
    }
  }
LABEL_33:
  v18 = 0;
LABEL_34:
  *a7 = v10;
  return (unsigned int)v18;
}
