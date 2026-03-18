/*
 * XREFs of ?ulGetFontData2@@YAKAEAVUDCOBJ@@KKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x1400B2790
 * Callers:
 *     ?GrepGetFontData@@YAKAEAVUDCOBJ@@KKPEAXKW4EntryPoint@RFONTOBJ@@@Z @ 0x1400B2754 (-GrepGetFontData@@YAKAEAVUDCOBJ@@KKPEAXKW4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x14005CB24 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DC90 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?bCheckFntFileInfo@PFFOBJ@@QEAAHXZ @ 0x1400B2C5C (-bCheckFntFileInfo@PFFOBJ@@QEAAHXZ.c)
 *     EngMapFontFileFDInternal @ 0x1400B39CC (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1400B3DE0 (EngUnmapFontFileFD.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ulGetFontData2(
        struct UDCOBJ *a1,
        unsigned int a2,
        unsigned int a3,
        _BYTE *a4,
        unsigned int a5,
        const struct RFONTOBJ::Tag *a6)
{
  __int64 *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r13
  unsigned int v9; // r15d
  unsigned int v10; // esi
  __int64 v11; // rax
  ULONG_PTR *v12; // r12
  unsigned int v13; // r14d
  __int64 (__fastcall *v14)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, _BYTE *, _QWORD, _QWORD); // rbx
  unsigned int v15; // r13d
  __int64 i; // rcx
  ULONG_PTR *v17; // r14
  ULONG_PTR v18; // rdx
  _BYTE *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // r15
  unsigned int v24; // [rsp+54h] [rbp-55h]
  __int64 v25; // [rsp+60h] [rbp-49h] BYREF
  __int64 v26; // [rsp+68h] [rbp-41h]
  unsigned int v27; // [rsp+70h] [rbp-39h]
  unsigned int v28; // [rsp+74h] [rbp-35h]
  _BYTE *v29; // [rsp+78h] [rbp-31h]
  __int64 v30; // [rsp+80h] [rbp-29h] BYREF
  int v31; // [rsp+88h] [rbp-21h]
  __int128 v32; // [rsp+90h] [rbp-19h]
  __int64 v33; // [rsp+A0h] [rbp-9h]

  v25 = 0LL;
  v28 = a2;
  v29 = a4;
  v27 = a3;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v25, a1, 0LL, 2u, a6) )
    GreAcquireSemaphore<5,RFONT *>(v25);
  if ( !v25 )
    goto LABEL_18;
  v6 = *(__int64 **)(v25 + 120);
  if ( !v6 || (v7 = *v6, (v30 = v7) == 0) )
  {
    EngSetLastError(6u);
LABEL_18:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v25);
    return 0xFFFFFFFFLL;
  }
  v8 = *(_QWORD *)(v7 + 88);
  v9 = *((_DWORD *)v6 + 2);
  v26 = v8;
  v24 = v9;
  v10 = -1;
  if ( (unsigned int)PFFOBJ::bCheckFntFileInfo((PFFOBJ *)&v30) )
  {
    v11 = *(_QWORD *)(v7 + 96);
    v12 = 0LL;
    v13 = 0;
    v14 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, _BYTE *, _QWORD, _QWORD))(v11 + 3064);
    if ( (*(_DWORD *)(v11 + 40) & 0x2000) != 0 )
    {
      v15 = *(_DWORD *)(v7 + 36);
      if ( v15 <= 3 )
      {
        if ( (*(_DWORD *)(v7 + 52) & 0x1000) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
        if ( (*(_DWORD *)(v7 + 52) & 0x2000) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
        for ( i = 0LL; ; i = (unsigned int)(i + 1) )
        {
          if ( (unsigned int)i >= v15 )
          {
            v13 = 0;
            goto LABEL_20;
          }
          v17 = *(ULONG_PTR **)(v7 + 208);
          v18 = v17[i];
          if ( !*(_BYTE *)(v18 + 45) && *(_BYTE *)(v18 + 44) && !*(_QWORD *)(v18 + 48) )
            break;
        }
        v32 = 0LL;
        v33 = 0LL;
        v22 = 0LL;
        v30 = 0LL;
        v31 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v22 >= v15 )
          {
            v12 = *(ULONG_PTR **)(v7 + 208);
            v13 = v15;
            goto LABEL_36;
          }
          v23 = (unsigned int)v22;
          if ( !(unsigned int)EngMapFontFileFDInternal((struct FILEVIEW *)v17[v22]) )
            break;
          v22 = (unsigned int)(v22 + 1);
        }
        if ( (_DWORD)v22 )
        {
          do
          {
            EngUnmapFontFileFD(*v17++);
            --v23;
          }
          while ( v23 );
        }
        v13 = 0;
LABEL_36:
        v10 = -1;
        v9 = v24;
      }
LABEL_20:
      v8 = v26;
    }
    v20 = v29;
    if ( v29 )
      *v29 = 0;
    if ( v14 )
      v10 = v14(v8, v9, v28, v27, a5, v20, 0LL, 0LL);
    if ( v13 )
    {
      v21 = v13;
      do
      {
        EngUnmapFontFileFD(*v12++);
        --v21;
      }
      while ( v21 );
    }
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v25);
  return v10;
}
