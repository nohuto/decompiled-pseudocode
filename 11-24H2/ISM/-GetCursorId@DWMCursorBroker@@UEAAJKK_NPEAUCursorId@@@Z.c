/*
 * XREFs of ?GetCursorId@DWMCursorBroker@@UEAAJKK_NPEAUCursorId@@@Z @ 0x1800151B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180015E94 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DWMCursorBroker::GetCursorId(
        DWMCursorBroker *this,
        unsigned int a2,
        unsigned int a3,
        char a4,
        struct CursorId *a5)
{
  struct CursorId *v9; // r15
  __int64 (__fastcall *v10)(DWMCursorBroker *, _QWORD, _QWORD, __int64); // rbx
  __int64 v11; // r9
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF

  std::_Mutex_base::lock((std::_Mutex_base *)&DWMCursorBroker::s_lock);
  v9 = a5;
  *(_QWORD *)a5 = 0LL;
  v18 = 0LL;
  v10 = *(__int64 (__fastcall **)(DWMCursorBroker *, _QWORD, _QWORD, __int64))(*(_QWORD *)this + 56LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
  LOBYTE(v11) = a4;
  v12 = v10(this, a2, a3, v11);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x308,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)v12,
      (int)&v18);
    v16 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  else
  {
    *(_QWORD *)v9 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, struct CursorId **))(*(_QWORD *)v18 + 48LL))(
                                 v18,
                                 &a5);
    v14 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v13 = 0;
  }
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  return v13;
}
