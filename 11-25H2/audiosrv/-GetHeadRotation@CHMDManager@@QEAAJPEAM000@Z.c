/*
 * XREFs of ?GetHeadRotation@CHMDManager@@QEAAJPEAM000@Z @ 0x1800FA0D8
 * Callers:
 *     s_GetHeadRotation @ 0x1800FA640 (s_GetHeadRotation.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CHMDManager::GetHeadRotation(__int64 **this, float *a2, float *a3, float *a4, float *a5)
{
  unsigned int v9; // ebx
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v21; // [rsp+30h] [rbp-40h] BYREF
  __int64 v22; // [rsp+38h] [rbp-38h] BYREF
  __int64 v23; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-28h] BYREF
  __int128 v25; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v24 = 0LL;
  GetSystemTimePreciseAsFileTime(&v24);
  if ( (v24 & 0x8000000000000000uLL) == 0LL )
  {
    v23 = 0LL;
    v10 = *this;
    v11 = **this;
    v23 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, __int64 *))(v11 + 48))(
            v10,
            (unsigned int)v24 | (HIDWORD(v24) << 32),
            &v23);
    v9 = v12;
    if ( v12 >= 0 )
    {
      v21 = 0LL;
      v13 = this[2];
      v14 = *v13;
      v21 = 0LL;
      v15 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v14 + 88))(v13, v23, &v21);
      v9 = v15;
      if ( v15 >= 0 )
      {
        v22 = 0LL;
        v16 = this[1];
        v17 = *v16;
        v22 = 0LL;
        v18 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64 *))(v17 + 88))(v16, v23, v21, &v22);
        v9 = v18;
        if ( v18 >= 0 )
        {
          v25 = 0LL;
          v18 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v22 + 56LL))(v22, &v25);
          v9 = v18;
          if ( v18 >= 0 )
          {
            *(_DWORD *)a2 = v25;
            *a3 = *((float *)&v25 + 1);
            *a4 = *((float *)&v25 + 2);
            *a5 = *((float *)&v25 + 3);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v22);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v21);
            v9 = 0;
            goto LABEL_14;
          }
          v19 = 73LL;
        }
        else
        {
          v19 = 70LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\hmdmanager.cpp",
          (const char *)(unsigned int)v18);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v22);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x43,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\hmdmanager.cpp",
          (const char *)(unsigned int)v15);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v21);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3E,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\hmdmanager.cpp",
        (const char *)(unsigned int)v12);
    }
LABEL_14:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
    return v9;
  }
  v9 = -2147483637;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\hmdmanager.cpp",
    (const char *)0x8000000BLL);
  return v9;
}
