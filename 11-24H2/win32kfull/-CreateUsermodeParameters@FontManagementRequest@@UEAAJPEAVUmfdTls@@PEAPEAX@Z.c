/*
 * XREFs of ?CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140157B10
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x140158B84 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z @ 0x140158CD0 (-PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall FontManagementRequest::CreateUsermodeParameters(
        FontManagementRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  __int64 v6; // rsi
  unsigned int v7; // r9d
  unsigned int v8; // r10d
  unsigned int v9; // eax
  unsigned int v10; // ecx
  int v11; // eax
  bool v12; // dl
  unsigned int v13; // eax
  unsigned int v15; // eax
  char *v16; // rax
  _QWORD *v17; // rdi
  const void *v18; // rdx
  struct _FONTOBJ *v19; // rdx

  v6 = 0LL;
  v7 = 0;
  v8 = *((_DWORD *)this + 18);
  v9 = *((_DWORD *)this + 15);
  if ( v9 + 7 < v9 )
  {
    v12 = 0;
  }
  else
  {
    v6 = (v9 + 7) & 0xFFFFFFF8;
    v10 = v8 + 7;
    v11 = -1;
    if ( v8 + 7 >= v8 )
      v11 = v8 + 7;
    v12 = v10 >= v8;
    v13 = v11 & 0xFFFFFFF8;
    if ( v10 >= v8 )
      v7 = v13;
  }
  if ( !v12 )
    return 3221225495LL;
  if ( v7 + (unsigned int)v6 < (unsigned int)v6 )
    return 3221225495LL;
  v15 = v7 + v6 + 64;
  if ( v15 < 0x40 )
    return 3221225495LL;
  if ( v15 >= 0xFFFFFFC8 )
    return 3221225495LL;
  v16 = (char *)UmfdTls::CommitUMBuffer(a2, v7 + (unsigned int)v6 + 120, 1);
  v17 = v16;
  if ( !v16 )
    return 3221225495LL;
  *((_QWORD *)this + 12) = v16 + 56;
  *((_QWORD *)this + 13) = v16 + 120;
  *((_QWORD *)this + 14) = &v16[v6 + 120];
  v18 = (const void *)*((_QWORD *)this + 8);
  if ( v18 )
    memmove(v16 + 120, v18, *((unsigned int *)this + 15));
  else
    *((_QWORD *)this + 13) = 0LL;
  if ( !*((_QWORD *)this + 10) )
    *((_QWORD *)this + 14) = 0LL;
  v19 = (struct _FONTOBJ *)*((_QWORD *)this + 6);
  if ( v19 )
  {
    FontDriverDdiRequest::PrepareUsermodeFontObj(a2, v19, *((struct _FONTOBJ **)this + 12));
    v17[1] = *((_QWORD *)this + 12);
  }
  *v17 = 0LL;
  *((_DWORD *)v17 + 4) = *((_DWORD *)this + 14);
  *((_DWORD *)v17 + 5) = *((_DWORD *)this + 15);
  v17[3] = *((_QWORD *)this + 13);
  *((_DWORD *)v17 + 8) = *((_DWORD *)this + 18);
  v17[5] = *((_QWORD *)this + 14);
  *a3 = v17;
  return 0LL;
}
