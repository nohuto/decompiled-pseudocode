/*
 * XREFs of ?UpdateAnimateValues@CScalar@@UEAA_NXZ @ 0x1802AD090
 * Callers:
 *     ??1CScalar@@MEAA@XZ @ 0x1802ACF50 (--1CScalar@@MEAA@XZ.c)
 * Callees:
 *     ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x180207C4C (-UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CScalar::UpdateAnimateValues(CScalar *this)
{
  char v1; // di
  unsigned int v2; // esi
  unsigned int v4; // eax

  v1 = 0;
  v2 = 0;
  if ( *((_DWORD *)this + 8) )
  {
    v1 = 1;
    do
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, char *))(**(_QWORD **)(*((_QWORD *)this + 1) + 16LL * v2) + 96LL))(
        *(_QWORD *)(*((_QWORD *)this + 1) + 16LL * v2),
        *(unsigned int *)(*((_QWORD *)this + 1) + 16LL * v2 + 8),
        18LL,
        (char *)this + 48);
      v4 = *((_DWORD *)this + 8);
      ++v2;
    }
    while ( v2 < v4 );
    if ( v4 )
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this - 6) + 824LL) + 440LL) |= 2u;
  }
  CBaseAnimation::UnregisterAnimateResource((CComposition **)this - 9);
  return v1;
}
