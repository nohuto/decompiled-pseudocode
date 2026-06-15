/*
 * XREFs of ?QueryInterface@?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002D100
 * Callers:
 *     <none>
 * Callees:
 *     ?InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z @ 0x14002D6DC (-InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComObjectCached<ATL::CComClassFactory>::QueryInterface(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // edi
  _QWORD *i; // rbx
  _DWORD *v8; // rcx
  int v9; // ebp
  __int64 (__fastcall *v11)(__int64, __int64, _QWORD *, _QWORD); // rax
  __int64 v12; // rbx
  int v13; // eax

  v6 = 0;
  if ( !a1 )
    return (unsigned int)-2147024809;
  if ( a3 )
  {
    *a3 = 0LL;
    if ( !(unsigned int)ATL::InlineIsEqualUnknown((const struct _GUID *)a2) )
    {
      for ( i = &unk_14009C3D8; ; i += 3 )
      {
        if ( !i[1] )
          return (unsigned int)-2147467262;
        v8 = (_DWORD *)*(i - 1);
        if ( v8 )
        {
          v9 = 0;
          if ( *v8 != *(_DWORD *)a2
            || v8[1] != *(_DWORD *)(a2 + 4)
            || v8[2] != *(_DWORD *)(a2 + 8)
            || v8[3] != *(_DWORD *)(a2 + 12) )
          {
            continue;
          }
        }
        else
        {
          v9 = 1;
        }
        v11 = (__int64 (__fastcall *)(__int64, __int64, _QWORD *, _QWORD))i[1];
        if ( v11 == (__int64 (__fastcall *)(__int64, __int64, _QWORD *, _QWORD))1 )
        {
          v12 = a1 + *i;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
          *a3 = v12;
          return v6;
        }
        v13 = v11(a1, a2, a3, *i);
        if ( !v13 || !v9 && v13 < 0 )
          return (unsigned int)v13;
      }
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    *a3 = a1;
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v6;
}
