/*
 * XREFs of ?CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140158980
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x140158B84 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall QueryFontDataRequest::CreateUsermodeParameters(
        QueryFontDataRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  __int64 v6; // r9
  __int64 v7; // rsi
  unsigned int v8; // edx
  unsigned int v9; // r8d
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  int v12; // eax
  bool v13; // r9
  unsigned int v14; // eax
  unsigned int v15; // eax
  _DWORD *v17; // rax
  _QWORD *v18; // rdi
  __int64 v19; // rdx
  const void *v20; // rdx
  int v21; // ecx
  int v22; // ecx

  v6 = *((_QWORD *)this + 9);
  if ( v6 )
  {
    v21 = *((_DWORD *)this + 12) - 1;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        if ( v22 == 1 )
          *((_DWORD *)this + 20) = 124;
      }
      else
      {
        *((_QWORD *)a2 + 6) = v6;
        *((_DWORD *)this + 20) = 8;
      }
    }
    else if ( *((_DWORD *)this + 20) )
    {
      return 3221225659LL;
    }
  }
  else
  {
    *((_DWORD *)this + 20) = 0;
  }
  v7 = 0LL;
  v8 = 0;
  v9 = *((_DWORD *)this + 20);
  v10 = *((_QWORD *)this + 8) != 0LL ? 0x40 : 0;
  if ( v10 + 7 < v10 )
  {
    v13 = 0;
  }
  else
  {
    v7 = (v10 + 7) & 0xFFFFFFF8;
    v11 = v9 + 7;
    v12 = -1;
    if ( v9 + 7 >= v9 )
      v12 = v9 + 7;
    v13 = v11 >= v9;
    v14 = v12 & 0xFFFFFFF8;
    v8 = 0;
    if ( v11 >= v9 )
      v8 = v14;
  }
  if ( !v13 )
    return 3221225495LL;
  if ( v8 + (unsigned int)v7 < (unsigned int)v7 )
    return 3221225495LL;
  v15 = v8 + v7 + 80;
  if ( v15 < 0x50 )
    return 3221225495LL;
  if ( v15 >= 0xFFFFFFD0 )
    return 3221225495LL;
  v17 = UmfdTls::CommitUMBuffer(a2, v8 + (unsigned int)v7 + 128, 1);
  v18 = v17;
  if ( !v17 )
    return 3221225495LL;
  *((_QWORD *)this + 11) = v17 + 12;
  *((_QWORD *)this + 12) = v17 + 32;
  *((_QWORD *)this + 13) = (char *)v17 + v7 + 128;
  v19 = *((_QWORD *)this + 7);
  v17[12] = *(_DWORD *)v19;
  v17[13] = *(_DWORD *)(v19 + 4);
  v17[14] = *(_DWORD *)(v19 + 8);
  v17[15] = *(_DWORD *)(v19 + 12);
  *((_QWORD *)v17 + 8) = *(_QWORD *)(v19 + 16);
  *((_QWORD *)v17 + 9) = **(_QWORD **)(v19 + 24);
  *((_QWORD *)v17 + 10) = *(_QWORD *)(v19 + 32);
  v17[22] = *(_DWORD *)(v19 + 40);
  *((_QWORD *)v17 + 12) = 0LL;
  *((_QWORD *)v17 + 13) = *(_QWORD *)(v19 + 56);
  *((_QWORD *)a2 + 5) = v19;
  *(_DWORD *)(*((_QWORD *)this + 11) + 64LL) = 0;
  *(_QWORD *)(*((_QWORD *)this + 11) + 72LL) = 0LL;
  *((_QWORD *)v17 + 2) = *((_QWORD *)this + 11);
  *(_QWORD *)v17 = *((_QWORD *)this + 5);
  v17[2] = *((_DWORD *)this + 12);
  v17[3] = *((_DWORD *)this + 13);
  if ( !*((_QWORD *)this + 8) )
    *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)v17 + 3) = *((_QWORD *)this + 12);
  v20 = (const void *)*((_QWORD *)this + 9);
  if ( v20 )
  {
    if ( *((_DWORD *)this + 12) == 3 )
      memmove(*((void **)this + 13), v20, *((unsigned int *)this + 20));
  }
  else
  {
    *((_QWORD *)this + 13) = 0LL;
  }
  v18[4] = *((_QWORD *)this + 13);
  *((_DWORD *)v18 + 10) = *((_DWORD *)this + 20);
  *a3 = v18;
  return 0LL;
}
