/*
 * XREFs of ??1CCompiledEffectTemplate@@MEAA@XZ @ 0x1802062FC
 * Callers:
 *     ??_GCCompiledEffectTemplate@@MEAAPEAXI@Z @ 0x1802062B0 (--_GCCompiledEffectTemplate@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCompiledEffectTemplate::~CCompiledEffectTemplate(CCompiledEffectTemplate *this)
{
  __int64 v1; // r9
  unsigned int v3; // ecx
  __int64 v4; // r8
  __int64 i; // r10
  __int64 v6; // rcx
  __int64 v7; // rcx

  v1 = *((_QWORD *)this + 10);
  *(_QWORD *)this = &CCompiledEffectTemplate::`vftable';
  if ( v1 )
  {
    v3 = *(_DWORD *)(v1 + 48);
    v4 = 0LL;
    for ( i = *(_QWORD *)(v1 + 24); (unsigned int)v4 < v3; v4 = (unsigned int)(v4 + 1) )
    {
      if ( this == *(CCompiledEffectTemplate **)(i + 8 * v4) )
        break;
    }
    if ( (unsigned int)v4 < v3 )
    {
      for ( ; (unsigned int)v4 < v3 - 1; v3 = *(_DWORD *)(v1 + 48) )
      {
        v7 = (unsigned int)v4;
        LODWORD(v4) = v4 + 1;
        *(_QWORD *)(i + 8 * v7) = *(_QWORD *)(i + 8LL * (unsigned int)v4);
      }
      *(_DWORD *)(v1 + 48) = v3 - 1;
    }
  }
  v6 = *((_QWORD *)this + 10);
  if ( v6 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  CResource::~CResource(this);
}
