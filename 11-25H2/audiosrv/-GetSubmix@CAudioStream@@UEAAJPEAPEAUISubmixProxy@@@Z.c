/*
 * XREFs of ?GetSubmix@CAudioStream@@UEAAJPEAPEAUISubmixProxy@@@Z @ 0x1800C95D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$copy_to@UISubmixProxy@@@?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUISubmixProxy@@@Z @ 0x18008503C (--$copy_to@UISubmixProxy@@@-$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioStream::GetSubmix(CAudioStream *this, struct ISubmixProxy **a2)
{
  __int64 v2; // rsi
  __int64 (__fastcall *v4)(__int64, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 72);
  if ( !v2 )
    return wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::copy_to<ISubmixProxy>((__int64 *)this + 6, a2);
  v9 = 0LL;
  v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 88LL);
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v9);
  v5 = v4(v2, &v9);
  v6 = v5;
  if ( v5 >= 0 )
    v6 = wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::copy_to<ISubmixProxy>(&v9, a2);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x572,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v5);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v9);
  return v6;
}
