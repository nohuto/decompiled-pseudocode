/*
 * XREFs of ?PrepareAcesForACL@CDacl@ATL@@EEBAXXZ @ 0x180013D90
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAAEAV01@AEAV01@@Z @ 0x180014020 (--4-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAAEAV01@AEAV01@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001B800 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ATL::CDacl::PrepareAcesForACL(ATL::CDacl *this)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rbp
  _BYTE *v4; // rbx
  unsigned __int64 i; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r14
  __int64 v8; // rcx
  _BYTE *v9; // r15
  unsigned __int64 v10; // r15
  __int64 v11; // r8
  __int64 v12; // rcx
  _BYTE *v13; // r13
  char v14; // al
  unsigned __int64 v15; // rax
  _BYTE *v16; // r15
  void (__fastcall ***v17)(_QWORD, __int64); // rcx
  unsigned __int128 v18; // rax
  _BYTE v19[72]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v20; // [rsp+70h] [rbp+8h]

  v2 = 1LL;
  v3 = *((_QWORD *)this + 4);
  v4 = 0LL;
  if ( v3 <= 4 )
    goto LABEL_5;
  for ( i = 4LL; i < v3; i += 2 * i + 1 )
    v2 = i;
  if ( v2 )
  {
LABEL_5:
    while ( 1 )
    {
      v6 = 0xAAAAAAAAAAAAAAABuLL;
      v7 = v2 - 1;
      if ( v2 - 1 >= v3 )
        goto LABEL_44;
      v8 = -8LL * v2;
      do
      {
        if ( v7 >= *((_QWORD *)this + 4) )
LABEL_48:
          ATL::AtlThrowImpl(-2147024809);
        v9 = (_BYTE *)(*((_QWORD *)this + 3) + 8 * v7);
        if ( v4 == *(_BYTE **)v9 )
        {
          if ( v19 == v9 )
            goto LABEL_15;
        }
        else
        {
          if ( v4 )
          {
            (**(void (__fastcall ***)(_BYTE *, __int64))v4)(v4, 1LL);
            v8 = -8LL * v2;
          }
          v4 = *(_BYTE **)v9;
        }
        *(_QWORD *)v9 = 0LL;
LABEL_15:
        v10 = v7;
        if ( v7 < v2 )
          goto LABEL_35;
        v11 = 8 * v2;
        v12 = v8 + 8 * v7;
        v20 = v12;
        while ( 1 )
        {
          if ( v10 - v2 >= *((_QWORD *)this + 4) )
            goto LABEL_48;
          _mm_lfence();
          v13 = *(_BYTE **)(v12 + *((_QWORD *)this + 3));
          if ( (v13[132] & 0x10) != 0 )
          {
            if ( (v4[132] & 0x10) == 0 )
              goto LABEL_29;
          }
          else if ( (v4[132] & 0x10) != 0 )
          {
            goto LABEL_35;
          }
          v14 = v4[144];
          if ( !v13[144] )
            break;
          if ( v14 )
            goto LABEL_26;
LABEL_29:
          v15 = *((_QWORD *)this + 4);
          if ( v10 - v2 >= v15 || v10 >= v15 )
            goto LABEL_48;
          ATL::CAutoPtr<ATL::CDacl::CAccessAce>::operator=(
            v11 + v12 + *((_QWORD *)this + 3),
            v12 + *((_QWORD *)this + 3));
          v10 -= v2;
          v11 = 8 * v2;
          v12 = v20 - 8 * v2;
          v20 = v12;
          if ( v10 < v2 )
            goto LABEL_35;
        }
        if ( v14 )
          goto LABEL_35;
LABEL_26:
        if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, unsigned __int64, __int64))(*(_QWORD *)v13 + 32LL))(
               v13,
               v6,
               v11)
          && !(*(unsigned __int8 (__fastcall **)(_BYTE *))(*(_QWORD *)v4 + 32LL))(v4) )
        {
          v12 = v20;
          v11 = 8 * v2;
          goto LABEL_29;
        }
        if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *))(*(_QWORD *)v13 + 32LL))(v13) )
          (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v4 + 32LL))(v4);
LABEL_35:
        if ( v10 >= *((_QWORD *)this + 4) )
          goto LABEL_48;
        v16 = (_BYTE *)(*((_QWORD *)this + 3) + 8 * v10);
        v17 = *(void (__fastcall ****)(_QWORD, __int64))v16;
        if ( *(_BYTE **)v16 != v4 )
        {
          if ( v17 )
            (**v17)(v17, 1LL);
          *(_QWORD *)v16 = v4;
LABEL_42:
          v4 = 0LL;
          goto LABEL_43;
        }
        if ( v16 != v19 )
          goto LABEL_42;
LABEL_43:
        ++v7;
        v8 = -8LL * v2;
      }
      while ( v7 < v3 );
LABEL_44:
      v18 = v2 * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
      v2 /= 3uLL;
      if ( !(*((_QWORD *)&v18 + 1) >> 1) )
      {
        if ( v4 )
          (**(void (__fastcall ***)(_BYTE *, __int64))v4)(v4, 1LL);
        return;
      }
    }
  }
}
