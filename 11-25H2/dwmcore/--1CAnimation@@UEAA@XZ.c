/*
 * XREFs of ??1CAnimation@@UEAA@XZ @ 0x180207A5C
 * Callers:
 *     ??_GCAnimation@@UEAAPEAXI@Z @ 0x180207A10 (--_GCAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NXZ @ 0x1800AF9B0 (-UpdateAnimateValues@CAnimation@@UEAA_NXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1801348B0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x180207BB0 (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAnimation::~CAnimation(CAnimation *this)
{
  CAnimation *v2; // rcx
  bool v3; // zf
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 i; // r9
  __int64 v10; // rcx
  unsigned int v11; // esi
  __int64 v12; // rcx

  *(_QWORD *)this = &CAnimation::`vftable'{for `CResource'};
  v2 = (CAnimation *)((char *)this + 72);
  v3 = *((_BYTE *)this + 293) == 0;
  *(_QWORD *)v2 = &CAnimation::`vftable'{for `IAnimationResource'};
  *((_QWORD *)this + 15) = &CAnimation::`vftable';
  if ( v3 && *((_QWORD *)this + 16) && *((_DWORD *)this + 26) )
    CAnimation::UpdateAnimateValues(v2);
  v4 = *((_QWORD *)this + 16);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *((_QWORD *)this + 28);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  CAnimation::EndAnimation(this);
  if ( *((_BYTE *)this + 293) && *((_DWORD *)this + 26) )
  {
    v11 = 0;
    do
    {
      v12 = *(_QWORD *)(*((_QWORD *)this + 10) + 16LL * v11);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      ++v11;
    }
    while ( v11 < *((_DWORD *)this + 26) );
    *((_DWORD *)this + 26) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 80, 0x10u);
  }
  v6 = *((_QWORD *)this + 18);
  if ( v6 )
  {
    v7 = *(unsigned int *)(v6 + 96);
    v8 = 0LL;
    for ( i = *(_QWORD *)(v6 + 72); (unsigned int)v8 < (unsigned int)v7; v8 = (unsigned int)(v8 + 1) )
    {
      if ( this == *(CAnimation **)(i + 8 * v8) )
        break;
    }
    if ( (unsigned int)v8 < (unsigned int)v7 )
    {
      while ( (unsigned int)v8 < (int)v7 - 1 )
      {
        *(_QWORD *)(i + 8 * v8) = *(_QWORD *)(i + 8LL * (unsigned int)(v8 + 1));
        v8 = (unsigned int)(v8 + 1);
        v7 = *(unsigned int *)(v6 + 96);
      }
      *(_DWORD *)(v6 + 96) = v7 - 1;
    }
    v10 = *((_QWORD *)this + 18);
    if ( v10 )
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v10 + 16LL))(v10, v7, v6, i);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 152);
  CBaseAnimation::~CBaseAnimation(this);
}
