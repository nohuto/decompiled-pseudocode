/*
 * XREFs of ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x140199F58
 * Callers:
 *     ?CitpStart@@YAJXZ @ 0x1400B5F6C (-CitpStart@@YAJXZ.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x14023CCE0 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x14019EC50 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpContextTrackingDataStart(struct _CIT_IMPACT_CONTEXT *a1)
{
  unsigned int v2; // ebx
  const char *v3; // rdx
  __int64 v4; // rsi
  char v5; // bp
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // ecx
  unsigned int v9; // r8d
  __int64 v10; // rdi
  unsigned int v11; // edx
  char *v12; // r8
  __int64 v13; // rcx
  char *v14; // rcx
  char **v15; // rax
  char i; // cl
  __int64 v17; // rax
  char *v18; // r8
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx

  v2 = 0;
  v4 = *(_QWORD *)(W32GetUserSessionState(a1) + 18968);
  if ( *(_BYTE *)(v4 + 25) )
  {
    v5 = -1;
    v6 = 96LL * *(unsigned int *)(v4 + 4);
    if ( v6 > 0xFFFFFFFF )
    {
      v8 = -1073741675;
      v9 = 361;
      goto LABEL_27;
    }
    v7 = Win32AllocPoolZInitImpl(256LL, (unsigned int)v6, 0x49637355u);
    *(_QWORD *)a1 = v7;
    if ( !v7 )
    {
      v8 = -1073741670;
      v9 = 369;
LABEL_27:
      v2 = v8;
      CitpLogFailureWorker(v8, v3, v9);
      return v2;
    }
    v10 = *(unsigned int *)(v4 + 4);
    v11 = 0;
    if ( (_DWORD)v10 )
    {
      v12 = (char *)a1 + 8;
      do
      {
        v13 = *(_QWORD *)a1 + 96LL * v11;
        *(_WORD *)(v13 + 32) = 1;
        *(_QWORD *)v13 = 0LL;
        *(_OWORD *)(v13 + 40) = 0LL;
        *(_OWORD *)(v13 + 56) = 0LL;
        *(_QWORD *)(v13 + 72) = 0LL;
        v14 = (char *)(v13 + 16);
        v15 = (char **)*((_QWORD *)a1 + 2);
        if ( *v15 != v12 )
          __fastfail(3u);
        *(_QWORD *)v14 = v12;
        ++v11;
        *((_QWORD *)v14 + 1) = v15;
        *v15 = v14;
        *((_QWORD *)a1 + 2) = v14;
        v10 = *(unsigned int *)(v4 + 4);
      }
      while ( v11 < (unsigned int)v10 );
    }
    *((_DWORD *)a1 + 14) = v10;
    *((_DWORD *)a1 + 17) = v10 - ((unsigned int)v10 >> 2);
    if ( (((_DWORD)v10 - 1) & (unsigned int)v10) != 0 )
    {
      for ( i = -1; (_DWORD)v10; LODWORD(v10) = (unsigned int)v10 >> 1 )
        ++i;
      v10 = (unsigned int)(1 << i);
    }
    v17 = Win32AllocPoolZInitImpl(256LL, (unsigned int)(8 * v10), 0x49637355u);
    *((_QWORD *)a1 + 11) = v17;
    v18 = (char *)v17;
    if ( !v17 )
    {
      v8 = -1073741670;
      v9 = 413;
      goto LABEL_27;
    }
    v19 = (unsigned __int64)a1 + 72;
    if ( (((_DWORD)v10 - 1) & (unsigned int)v10) != 0 )
    {
      for ( ; (_DWORD)v10; LODWORD(v10) = (unsigned int)v10 >> 1 )
        ++v5;
      v10 = (unsigned int)(1 << v5);
    }
    *(_DWORD *)v19 = 0;
    *((_QWORD *)a1 + 10) = v18;
    if ( (unsigned int)v10 > 0x4000000 )
      v10 = 0x4000000LL;
    *((_DWORD *)a1 + 19) = 32 * v10;
    v20 = v19 | 1;
    v21 = (unsigned int)v10;
    if ( v18 > &v18[8 * v10] )
      v21 = 0LL;
    if ( v21 )
      memset64(v18, v20, v21);
  }
  return v2;
}
