/*
 * XREFs of ?QueryInterface@?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002C7D0
 * Callers:
 *     ?QueryInterface@?$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14005D6F0 (-QueryInterface@-$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCAPOWrapperSrv@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14005D8B0 (-QueryInterface@-$CComObject@VCAPOWrapperSrv@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14005D8C0 (-QueryInterface@-$CComObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14005D8D0 (-QueryInterface@-$CComObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComObject<CAPOWrapperSrv>::QueryInterface(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v6; // edi
  _QWORD *i; // rsi
  _DWORD *v8; // rcx
  int v9; // ebp
  __int64 (__fastcall *v11)(__int64, _DWORD *, _QWORD *, _QWORD); // rax
  __int64 v12; // rbx
  int v13; // eax

  v6 = 0;
  if ( !a1 )
    return (unsigned int)-2147024809;
  if ( !a3 )
    return (unsigned int)-2147467261;
  *a3 = 0LL;
  if ( *a2 || a2[1] || a2[2] != 192 || a2[3] != 1174405120 )
  {
    for ( i = &unk_14009C1A8; ; i += 3 )
    {
      if ( !i[1] )
        return (unsigned int)-2147467262;
      v8 = (_DWORD *)*(i - 1);
      if ( v8 )
      {
        v9 = 0;
        if ( *v8 != *a2 || v8[1] != a2[1] || v8[2] != a2[2] || v8[3] != a2[3] )
          continue;
      }
      else
      {
        v9 = 1;
      }
      v11 = (__int64 (__fastcall *)(__int64, _DWORD *, _QWORD *, _QWORD))i[1];
      if ( v11 == (__int64 (__fastcall *)(__int64, _DWORD *, _QWORD *, _QWORD))1 )
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
  return v6;
}
