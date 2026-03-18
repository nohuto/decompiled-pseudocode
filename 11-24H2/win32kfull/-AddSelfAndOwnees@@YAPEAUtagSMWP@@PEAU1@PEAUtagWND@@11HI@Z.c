/*
 * XREFs of ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x14008D3B0
 * Callers:
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x14008CABC (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x14008D3B0 (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 * Callees:
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x14008D3B0 (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 *     ?GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x14008D5C0 (-GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1400F4FF8 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 */

struct tagSMWP *__fastcall AddSelfAndOwnees(
        struct tagSMWP *a1,
        struct tagWND *a2,
        struct tagWND *a3,
        struct tagWND *a4,
        int a5,
        unsigned int a6)
{
  struct tagSMWP *v8; // r10
  struct tagWND *v9; // rdi
  int v10; // r12d
  struct tagWND *v11; // rbp
  struct tagWND *v12; // rbx
  struct tagSMWP *result; // rax
  __int64 v14; // rcx
  struct tagWND *v15; // rcx
  bool i; // zf
  struct tagWND *v17; // rax
  struct tagWND *v18; // rax
  struct tagWND *RealOwner; // rax
  struct tagWND *v20; // [rsp+90h] [rbp+18h]

  v20 = a3;
  v8 = a1;
  v9 = a3;
  if ( a3 )
  {
    do
    {
      RealOwner = GetRealOwner(v9);
      if ( a2 == RealOwner )
        break;
      v9 = RealOwner;
    }
    while ( RealOwner );
  }
  v10 = 0;
  v11 = 0LL;
  while ( 1 )
  {
    v12 = v11;
    if ( !v11 )
      break;
    do
    {
      v12 = (struct tagWND *)*((_QWORD *)v12 + 11);
      if ( !v12 )
        break;
LABEL_14:
      v15 = (struct tagWND *)*((_QWORD *)v12 + 15);
      v17 = v12;
      for ( i = v12 == v15; !i; i = v15 == *((struct tagWND **)v12 + 13) )
      {
        v17 = v15;
        if ( !v15 )
          break;
        v15 = (struct tagWND *)*((_QWORD *)v15 + 13);
      }
    }
    while ( a2 != v17 );
    v11 = v12;
    if ( !v12 )
      goto LABEL_5;
    if ( !v9 )
    {
LABEL_19:
      v8 = AddSelfAndOwnees(v8, v12, 0LL, 0LL, a5, a6);
      goto LABEL_20;
    }
    if ( !v10 )
    {
      v18 = v12;
      if ( a4 )
      {
        if ( a4 == (struct tagWND *)1 )
          goto LABEL_30;
        while ( v18 )
        {
          if ( v18 == a4 )
            goto LABEL_30;
          v18 = (struct tagWND *)*((_QWORD *)v18 + 11);
        }
      }
      v8 = AddSelfAndOwnees(v8, v9, a3, a4, a5, a6);
      if ( !v8 )
        return 0LL;
      v10 = 1;
    }
LABEL_30:
    if ( v12 != v9 )
      goto LABEL_19;
LABEL_20:
    if ( !v8 )
      return 0LL;
    a3 = v20;
  }
  v12 = *(struct tagWND **)(*((_QWORD *)a2 + 13) + 112LL);
  if ( v12 )
    goto LABEL_14;
LABEL_5:
  if ( v9 )
  {
    if ( !v10 )
    {
      v8 = AddSelfAndOwnees(v8, v9, a3, a4, a5, a6);
      if ( !v8 )
        return 0LL;
    }
  }
  result = (struct tagSMWP *)_DeferWindowPos(v8, a2, 0LL, 0LL, 0, 0, 0, a6 | 0x13, 0);
  if ( !result )
    return 0LL;
  v14 = *((int *)result + 7);
  if ( a5 != (_DWORD)v14 - 1 )
    *(_QWORD *)(*((_QWORD *)result + 5) + 168 * v14 - 160) = *(_QWORD *)(*((_QWORD *)result + 5) + 168 * v14 - 336);
  return result;
}
