/*
 * XREFs of ??0CFlipManagerSignal@@IEAA@_K_NPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x14009F5B8
 * Callers:
 *     ?Create@CFlipManagerSignal@@SAJ_K_NPEAUFlipManagerTokenIFlipInfo@@PEAPEAV1@@Z @ 0x14009F620 (-Create@CFlipManagerSignal@@SAJ_K_NPEAUFlipManagerTokenIFlipInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CFlipManagerSignal *__fastcall CFlipManagerSignal::CFlipManagerSignal(
        CFlipManagerSignal *this,
        __int64 a2,
        char a3,
        struct FlipManagerTokenIFlipInfo *a4)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  CFlipManagerSignal *result; // rax
  _QWORD *v8; // rdx

  *((_QWORD *)this + 7) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &CFlipManagerSignal::`vftable';
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_BYTE *)this + 64) = a3;
  if ( a4 )
  {
    v5 = *((_QWORD *)a4 + 13);
    v6 = 0LL;
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 16);
      *(_QWORD *)(v5 + 16) = 0LL;
    }
    *((_QWORD *)this + 3) = v6;
  }
  result = this;
  v8 = (_QWORD *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
  v8[1] = v8;
  *v8 = v8;
  return result;
}
