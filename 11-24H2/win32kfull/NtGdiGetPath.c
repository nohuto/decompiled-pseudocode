/*
 * XREFs of NtGdiGetPath @ 0x1400E5650
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1400E590C (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1400E61C0 (-bInactive@DC@@QEBAHXZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1400E61E8 (--1XEPATHOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiGetPath(HDC a1, struct _POINTL *Address, char *a3, unsigned int a4)
{
  __int64 v4; // rsi
  unsigned int v7; // edi
  __int64 v8; // r9
  int v9; // eax
  char *v10; // r12
  char *v11; // rsi
  int v12; // r14d
  char *v13; // r8
  char flags; // cl
  char v15; // dl
  ULONG v17; // ecx
  struct _PATHDATA v18; // [rsp+28h] [rbp-130h] BYREF
  __int64 v19; // [rsp+38h] [rbp-120h] BYREF
  int v20; // [rsp+40h] [rbp-118h] BYREF
  __int64 v21; // [rsp+48h] [rbp-110h]
  DC *v22[19]; // [rsp+C0h] [rbp-98h] BYREF

  v4 = a4;
  v7 = -1;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v22, a1);
  if ( !v22[0] || (int)v4 < 0 )
    goto LABEL_19;
  if ( !(unsigned int)DC::bInactive(v22[0]) )
  {
    v17 = 1003;
    goto LABEL_20;
  }
  DC::QuickInitXform(v8, &v19, 1026LL);
  if ( !v19 )
  {
LABEL_19:
    v17 = 87;
LABEL_20:
    EngSetLastError(v17);
    goto LABEL_18;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)&v20, *((struct HPATH__ **)v22[0] + 25));
  if ( !v21 )
  {
    EngSetLastError(0x57u);
    goto LABEL_17;
  }
  v9 = EPATHOBJ::cTotalPts((EPATHOBJ *)&v20);
  v7 = v9;
  if ( !(_DWORD)v4 )
    goto LABEL_17;
  if ( (int)v4 >= v9 && (unsigned __int64)(int)v4 <= 0x1FFFFFFF )
  {
    v18 = 0LL;
    v20 &= ~8u;
    *(_QWORD *)(v21 + 80) = *(_QWORD *)(v21 + 32);
    ProbeForWrite(Address, 8LL * (int)v4, 4u);
    ProbeForWrite(a3, (int)v4, 4u);
    v10 = a3;
    v11 = &a3[v4];
    while ( 1 )
    {
      v12 = EPATHOBJ::bEnum((EPATHOBJ *)&v20, &v18);
      if ( v18.count )
      {
        if ( !EXFORMOBJ::bXform((EXFORMOBJ *)&v19, v18.pptfx, Address, v18.count) )
        {
          EngSetLastError(0x216u);
          v7 = -1;
          goto LABEL_17;
        }
        Address += v18.count;
        v13 = &a3[v18.count];
        flags = v18.flags;
        if ( (v18.flags & 1) != 0 && a3 < v11 )
        {
          *a3++ = 6;
          flags = v18.flags;
        }
        v15 = (flags & 0x10) != 0 ? 4 : 2;
        if ( v13 <= v11 )
        {
          while ( a3 < v13 )
          {
            *a3++ = v15;
            flags = v18.flags;
          }
        }
        if ( (flags & 8) != 0 && a3 > v10 && a3 <= v11 )
          *(a3 - 1) |= 1u;
      }
      if ( !v12 )
        goto LABEL_17;
    }
  }
  EngSetLastError(0x57u);
  v7 = -1;
LABEL_17:
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v20);
LABEL_18:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v22);
  return v7;
}
