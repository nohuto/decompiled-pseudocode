/*
 * XREFs of ?GetVpoContext@CSaDeviceProxy@@UEAAJPEAPEAUIVpoContext@@@Z @ 0x1800F7740
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSaDeviceProxy::GetVpoContext(CSaDeviceProxy *this, struct IVpoContext **a2)
{
  HRESULT Instance; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  struct IVpoContext *v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IVpoContext *v10; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  Instance = CoCreateInstance(
               &GUID_d9aaaf82_03b1_4f9f_9fd5_07d2a42c8531,
               0LL,
               0x17u,
               &GUID_4f4f92b5_6ded_4e9b_a93f_013891b3a8b7,
               (LPVOID *)&v10);
  v5 = Instance;
  if ( Instance >= 0 )
  {
    Instance = (*(__int64 (__fastcall **)(struct IVpoContext *, _QWORD, _QWORD))(*(_QWORD *)v10 + 24LL))(
                 v10,
                 0LL,
                 *((_QWORD *)this + 12));
    v5 = Instance;
    if ( Instance >= 0 )
    {
      v7 = v10;
      v10 = 0LL;
      v5 = 0;
      *a2 = v7;
      goto LABEL_7;
    }
    v6 = 3020LL;
  }
  else
  {
    v6 = 3019LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)Instance);
LABEL_7:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v10);
  return v5;
}
