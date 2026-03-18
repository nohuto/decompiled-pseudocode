/*
 * XREFs of ?SyncLockTargets@CSyncLockGroup@@UEAAX_K@Z @ 0x180272F60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSyncLockGroup::SyncLockTargets(CSyncLockGroup *this, __int64 a2)
{
  _QWORD *v2; // rbp
  _QWORD *v4; // rbx
  unsigned int v6; // edi
  unsigned int v7; // eax
  _QWORD *v8; // rbx
  _QWORD *v9; // rbp
  __int64 v10; // rsi
  unsigned int v11; // ecx

  v2 = (_QWORD *)*((_QWORD *)this + 3);
  v4 = (_QWORD *)*((_QWORD *)this + 2);
  if ( (unsigned __int64)(v2 - v4) >= 2 )
  {
    v6 = CCommonRegistryData::m_parallelModePolicy == 2;
    while ( v4 != v2 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v4 + 152LL))(*v4, a2);
      if ( v6 <= v7 )
        v6 = v7;
      ++v4;
    }
    v8 = (_QWORD *)*((_QWORD *)this + 2);
    v9 = (_QWORD *)*((_QWORD *)this + 3);
    while ( v8 != v9 )
    {
      v10 = *v8;
      v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v8 + 104LL))(*v8, a2, v6);
      if ( v11 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 112LL))(v10, v11);
      ++v8;
    }
  }
}
