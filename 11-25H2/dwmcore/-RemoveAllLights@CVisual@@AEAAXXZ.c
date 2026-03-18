/*
 * XREFs of ?RemoveAllLights@CVisual@@AEAAXXZ @ 0x18010A678
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x180108F2C (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x18012E050 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::RemoveAllLights(CVisual *this)
{
  char *v1; // rsi
  char *v3; // rdi
  __int64 v4; // rbp
  char *v5; // r14
  char *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax

  v1 = (char *)*((_QWORD *)this + 35);
  v3 = (char *)*((_QWORD *)this + 34);
  v4 = (v1 - v3) >> 4;
  if ( v4 )
  {
    while ( v3 != v1 )
    {
      (*(void (__fastcall **)(_QWORD, CVisual *))(**(_QWORD **)v3 + 272LL))(*(_QWORD *)v3, this);
      CPtrArrayBase::Remove((CPtrArrayBase *)(*(_QWORD *)v3 + 32LL), (unsigned __int64)this);
      v3 += 16;
    }
    v8 = *((_QWORD *)this + 34);
    if ( v8 != *((_QWORD *)this + 35) )
      *((_QWORD *)this + 35) = v8;
  }
  v5 = (char *)*((_QWORD *)this + 38);
  v6 = (char *)*((_QWORD *)this + 37);
  v7 = (v5 - v6) >> 4;
  if ( v7 )
  {
    while ( v6 != v5 )
    {
      (*(void (__fastcall **)(_QWORD, CVisual *))(**(_QWORD **)v6 + 280LL))(*(_QWORD *)v6, this);
      v6 += 16;
    }
    v9 = *((_QWORD *)this + 37);
    if ( v9 != *((_QWORD *)this + 38) )
      *((_QWORD *)this + 38) = v9;
  }
  if ( v7 + v4 )
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 80LL))(this, 1LL);
}
