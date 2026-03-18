/*
 * XREFs of ?ReadDiagnosticsInternal@DXGDIAGNOSTICS@@AEBAJIIQEAEPEAI@Z @ 0x140024510
 * Callers:
 *     ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140023A7C (-WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x1400718C8 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 * Callees:
 *     ?CopyFromBuffer@DXGDIAGNOSTICS@@AEBAXIIQEAE@Z @ 0x1400246F4 (-CopyFromBuffer@DXGDIAGNOSTICS@@AEBAXIIQEAE@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::ReadDiagnosticsInternal(
        DXGDIAGNOSTICS *this,
        int a2,
        unsigned int a3,
        unsigned __int8 *const a4,
        unsigned int *a5)
{
  _DWORD *v5; // r12
  __int64 v6; // rsi
  unsigned int v8; // r14d
  unsigned int v9; // ebp
  unsigned int v10; // edi
  bool v12; // zf
  unsigned int v13; // ecx
  unsigned int v14; // eax
  const void *v15; // rdx
  int v16; // ebx
  size_t v17; // r8
  unsigned __int8 *v18; // rcx
  int v20; // eax
  unsigned int v21; // ebx
  unsigned int v22; // edx
  unsigned int v23; // r8d
  unsigned int v24; // r15d
  unsigned int v25; // [rsp+20h] [rbp-98h]
  unsigned __int8 *v26; // [rsp+28h] [rbp-90h]
  unsigned __int8 v28[16]; // [rsp+40h] [rbp-78h] BYREF
  __int128 v29; // [rsp+50h] [rbp-68h]
  __int128 v30; // [rsp+60h] [rbp-58h]

  v5 = (_DWORD *)((char *)this + 16);
  v6 = *((unsigned int *)this + 8);
  v8 = *((_DWORD *)this + 9);
  v9 = a3;
  v10 = 0;
  v26 = a4;
  v12 = v8 == (_DWORD)v6;
  if ( v8 < (unsigned int)v6 )
  {
    v8 += *v5;
    v12 = v8 == (_DWORD)v6;
  }
  if ( !v12 )
  {
    if ( a2 == -1 )
    {
      if ( v8 > (unsigned int)v6 )
      {
        v13 = *((_DWORD *)this + 4);
        v10 = v8 - v6;
        v14 = v8 - v6;
        if ( v8 - (unsigned int)v6 > a3 )
          v14 = a3;
        v15 = (const void *)(*((_QWORD *)this + 7) + v6);
        v16 = v14 + v6;
        if ( v14 + (unsigned int)v6 > v13 )
        {
          memmove(a4, v15, v13 - (unsigned int)v6);
          v20 = *((_DWORD *)this + 4);
          v15 = (const void *)*((_QWORD *)this + 7);
          v18 = &a4[(unsigned int)(v20 - v6)];
          v17 = (unsigned int)(v16 - v20);
        }
        else
        {
          v17 = v14;
          v18 = a4;
        }
        memmove(v18, v15, v17);
      }
      goto LABEL_11;
    }
    v25 = 0;
    v21 = 0;
    if ( (unsigned int)v6 >= v8 )
      goto LABEL_11;
    while ( 1 )
    {
      v22 = (unsigned int)v6 % *v5;
      *(_OWORD *)v28 = 0LL;
      v29 = 0LL;
      v30 = 0LL;
      DXGDIAGNOSTICS::CopyFromBuffer(this, v22, 0x30u, v28);
      if ( SDWORD1(v30) < 0 || (DWORD1(v30) & 0x7FFFFFFF) == a2 )
      {
        if ( !v21 )
          v25 = (unsigned int)v6 % *v5;
        v21 += *(_DWORD *)&v28[4];
        if ( !a5 && v21 >= v9 )
        {
LABEL_22:
          if ( v21 )
          {
            if ( v9 )
            {
              v23 = v21;
              if ( v21 > v9 )
                v23 = v9;
              DXGDIAGNOSTICS::CopyFromBuffer(this, v25, v23, v26);
            }
            v10 += v21;
          }
          break;
        }
      }
      else if ( v21 )
      {
        v24 = v9;
        if ( v9 >= v21 )
          v24 = v21;
        if ( v24 )
        {
          DXGDIAGNOSTICS::CopyFromBuffer(this, v25, v24, v26);
          v26 += v24;
          v9 -= v24;
        }
        v10 += v21;
        v21 = 0;
      }
      LODWORD(v6) = *(_DWORD *)&v28[4] + v6;
      if ( (unsigned int)v6 >= v8 )
        goto LABEL_22;
    }
  }
LABEL_11:
  if ( a5 )
    *a5 = v10;
  return 0LL;
}
