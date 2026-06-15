/*
 * XREFs of ?GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z @ 0x1800C8714
 * Callers:
 *     ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x1800C1AC0 (-GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _freea @ 0x18004D97C (_freea.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _alloca_probe @ 0x180167ED0 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioStream::GetChannelPeakValues(CAudioStream *this, unsigned int a2, float *a3)
{
  float *v3; // rsi
  __int64 v4; // r14
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 *v9; // r15
  size_t v10; // rcx
  __int64 v11; // rax
  void *v12; // rsp
  struct _RTL_CRITICAL_SECTION *v13; // rbx
  struct _RTL_CRITICAL_SECTION *v14; // rax
  int v15; // eax
  unsigned int v16; // edi
  signed __int64 v17; // rax
  __int64 v18; // rcx
  float v19; // xmm0_4
  __int64 v20; // [rsp+0h] [rbp-20h] BYREF
  struct _RTL_CRITICAL_SECTION *Memory[2]; // [rsp+20h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
  {
    v6 = -2147467261;
    v7 = 1013LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)v6);
    return v6;
  }
  if ( a2 != *((_DWORD *)this + 25) )
  {
    v6 = -2147024809;
    v7 = 1014LL;
    goto LABEL_3;
  }
  if ( a2 )
    memset_0(a3, 0, 4LL * a2);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  Memory[0] = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
  v9 = (__int64 *)((char *)this + 200);
  if ( !*((_QWORD *)this + 25) )
    goto LABEL_30;
  v10 = (4LL * *((unsigned int *)this + 25) + 16) & -(__int64)(4 * (unsigned __int64)*((unsigned int *)this + 25) < 4 * (unsigned __int64)*((unsigned int *)this + 25) + 16);
  if ( v10 )
  {
    if ( v10 > 0x400 )
    {
      v14 = (struct _RTL_CRITICAL_SECTION *)malloc(v10);
      v13 = v14;
      if ( !v14 )
        goto LABEL_19;
      LODWORD(v14->DebugInfo) = 56797;
      goto LABEL_17;
    }
    v11 = v10 + 15;
    if ( v10 + 15 < v10 )
      v11 = 0xFFFFFFFFFFFFFF0LL;
    v12 = alloca(v11 & 0xFFFFFFFFFFFFFFF0uLL);
    v13 = (struct _RTL_CRITICAL_SECTION *)Memory;
    if ( &v20 != (__int64 *)-32LL )
    {
      LODWORD(Memory[0]) = 52428;
LABEL_17:
      v13 = (struct _RTL_CRITICAL_SECTION *)((char *)v13 + 16);
    }
  }
  else
  {
    v13 = 0LL;
  }
LABEL_19:
  Memory[1] = v13;
  if ( !v13 )
  {
    v16 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x403,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_31;
  }
  memset_0(v13, 0, 4LL * *((unsigned int *)this + 25));
  v15 = (*(__int64 (__fastcall **)(__int64, struct _RTL_CRITICAL_SECTION *, _QWORD))(*(_QWORD *)*v9 + 24LL))(
          *v9,
          v13,
          *((unsigned int *)this + 25));
  v16 = v15;
  if ( v15 >= 0 )
  {
    if ( (_DWORD)v4 )
    {
      v17 = (char *)v13 - (char *)v3;
      v18 = v4;
      do
      {
        v19 = fminf(*(float *)((char *)v3 + v17), 1.0);
        if ( v19 <= 0.0 )
          v19 = 0.0;
        *v3++ = v19;
        --v18;
      }
      while ( v18 );
    }
    goto LABEL_29;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    1030LL,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)v15);
  if ( v16 == -2147417848 )
  {
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(v9);
LABEL_29:
    freea(v13);
LABEL_30:
    v16 = 0;
    goto LABEL_31;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x415,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)v16);
  freea(v13);
LABEL_31:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(Memory);
  return v16;
}
