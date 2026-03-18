/*
 * XREFs of ?CreateCrossAdapterSharedHandle@CD2DBitmap@@UEAAJPEAPEAX@Z @ 0x1802D6350
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DBitmap::CreateCrossAdapterSharedHandle(CD2DBitmap *this, void **a2)
{
  unsigned int v3; // ebx
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  int v5; // eax
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 149) )
  {
    v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 2);
    v9 = 0LL;
    v5 = (**v4)(v4, &GUID_30961379_4609_4a41_998e_54fe567ee0c1, &v9);
    v3 = v5;
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, void **))(*(_QWORD *)v9 + 104LL))(
             v9,
             0LL,
             0x10000000LL,
             0LL,
             a2);
      v3 = v5;
      if ( v5 >= 0 )
      {
        v3 = 0;
        goto LABEL_9;
      }
      v6 = 377LL;
    }
    else
    {
      v6 = 376LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d2dbitmap.cpp",
      (const char *)(unsigned int)v5);
LABEL_9:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v9);
    return v3;
  }
  v3 = -2003292412;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x176,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d2dbitmap.cpp",
    (const char *)0x88982F04LL);
  return v3;
}
