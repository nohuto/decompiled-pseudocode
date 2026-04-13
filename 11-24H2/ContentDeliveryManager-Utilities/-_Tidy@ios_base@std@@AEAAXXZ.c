/*
 * XREFs of ?_Tidy@ios_base@std@@AEAAXXZ @ 0x18000570C
 * Callers:
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x18000568C (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z_0 @ 0x18002264D (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::ios_base::_Tidy(std::ios_base *this)
{
  __int64 **i; // rbx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx

  for ( i = (__int64 **)*((_QWORD *)this + 7); i; i = (__int64 **)*i )
    ((void (__fastcall *)(_QWORD, std::ios_base *, _QWORD))i[2])(0LL, this, *((unsigned int *)i + 2));
  v3 = (_QWORD *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      operator delete(v3);
      v3 = v4;
    }
    while ( v4 );
  }
  *((_QWORD *)this + 6) = 0LL;
  v5 = (_QWORD *)*((_QWORD *)this + 7);
  if ( v5 )
  {
    do
    {
      v6 = (_QWORD *)*v5;
      operator delete(v5);
      v5 = v6;
    }
    while ( v6 );
  }
  *((_QWORD *)this + 7) = 0LL;
}
