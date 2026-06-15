/*
 * XREFs of ?_InternalQueryInterface@CStreamInstance@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002D2B0
 * Callers:
 *     ?QueryInterface@?$CComAggObject@VCStreamInstance@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14005D7C0 (-QueryInterface@-$CComAggObject@VCStreamInstance@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z @ 0x14002D3DC (-InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CStreamInstance::_InternalQueryInterface(CStreamInstance *this, const struct _GUID *a2, char **a3)
{
  unsigned int v6; // edi
  _QWORD *i; // rbx
  _DWORD *v8; // rcx
  int v9; // ebp
  __int64 (__fastcall *v11)(CStreamInstance *, const struct _GUID *, char **, _QWORD); // rax
  char *v12; // rbx
  int v13; // eax

  v6 = 0;
  if ( !this )
    return (unsigned int)-2147024809;
  if ( a3 )
  {
    *a3 = 0LL;
    if ( !(unsigned int)ATL::InlineIsEqualUnknown(a2) )
    {
      for ( i = &unk_14009C408; ; i += 3 )
      {
        if ( !i[1] )
          return (unsigned int)-2147467262;
        v8 = (_DWORD *)*(i - 1);
        if ( v8 )
        {
          v9 = 0;
          if ( *v8 != a2->Data1
            || v8[1] != *(_DWORD *)&a2->Data2
            || v8[2] != *(_DWORD *)a2->Data4
            || v8[3] != *(_DWORD *)&a2->Data4[4] )
          {
            continue;
          }
        }
        else
        {
          v9 = 1;
        }
        v11 = (__int64 (__fastcall *)(CStreamInstance *, const struct _GUID *, char **, _QWORD))i[1];
        if ( v11 == (__int64 (__fastcall *)(CStreamInstance *, const struct _GUID *, char **, _QWORD))1 )
        {
          v12 = (char *)this + *i;
          (*(void (__fastcall **)(char *))(*(_QWORD *)v12 + 8LL))(v12);
          *a3 = v12;
          return v6;
        }
        v13 = v11(this, a2, a3, *i);
        if ( !v13 || !v9 && v13 < 0 )
          return (unsigned int)v13;
      }
    }
    (*(void (__fastcall **)(CStreamInstance *))(*(_QWORD *)this + 8LL))(this);
    *a3 = (char *)this;
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v6;
}
