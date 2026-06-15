/*
 * XREFs of ?GetPeakValue@CAudioStream@@QEAAJPEAM@Z @ 0x18004D710
 * Callers:
 *     ?GetPeakValue@CAudioSession@@UEAAJPEAM@Z @ 0x18004D5B0 (-GetPeakValue@CAudioSession@@UEAAJPEAM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _freea @ 0x18004D97C (_freea.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _alloca_probe @ 0x180167ED0 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioStream::GetPeakValue(CAudioStream *this, float *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  size_t v5; // rcx
  __int64 v6; // rax
  void *v7; // rsp
  _QWORD *v8; // rbx
  unsigned int v9; // ebx
  int v11; // eax
  unsigned int v12; // r15d
  float *v13; // rax
  __int64 v14; // rcx
  _DWORD *v15; // rax
  __int64 v16; // [rsp+0h] [rbp-20h] BYREF
  _QWORD Memory[2]; // [rsp+20h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]

  if ( !a2 )
  {
    v9 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C0,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80004003LL);
    return v9;
  }
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  Memory[0] = v4;
  *a2 = 0.0;
  if ( !*((_QWORD *)this + 25) )
    goto LABEL_19;
  v5 = (4LL * *((unsigned int *)this + 25) + 16) & -(__int64)(4 * (unsigned __int64)*((unsigned int *)this + 25) < 4 * (unsigned __int64)*((unsigned int *)this + 25) + 16);
  if ( v5 )
  {
    if ( v5 > 0x400 )
    {
      v15 = malloc(v5);
      v8 = v15;
      if ( v15 )
      {
        *v15 = 56797;
        goto LABEL_9;
      }
    }
    else
    {
      v6 = v5 + 15;
      if ( v5 + 15 < v5 )
        v6 = 0xFFFFFFFFFFFFFF0LL;
      v7 = alloca(v6 & 0xFFFFFFFFFFFFFFF0uLL);
      v8 = Memory;
      if ( &v16 != (__int64 *)-32LL )
      {
        LODWORD(Memory[0]) = 52428;
LABEL_9:
        v8 += 2;
      }
    }
  }
  else
  {
    v8 = 0LL;
  }
  Memory[1] = v8;
  if ( !v8 )
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C9,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x8007000ELL);
    if ( v4 )
      LeaveCriticalSection(v4);
    return v9;
  }
  memset_0(v8, 0, 4LL * *((unsigned int *)this + 25));
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD))(**((_QWORD **)this + 25) + 24LL))(
          *((_QWORD *)this + 25),
          v8,
          *((unsigned int *)this + 25));
  v12 = v11;
  if ( v11 >= 0 )
  {
    if ( *((_DWORD *)this + 25) )
    {
      v13 = (float *)v8;
      v14 = *((unsigned int *)this + 25);
      do
      {
        *a2 = fmaxf(*v13++, *a2);
        --v14;
      }
      while ( v14 );
    }
    goto LABEL_18;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x3CC,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)v11,
    Memory[0]);
  if ( v12 == -2147417848 )
  {
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)this + 25);
LABEL_18:
    freea(v8);
LABEL_19:
    if ( v4 )
      LeaveCriticalSection(v4);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3DC,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)v12);
  freea(v8);
  if ( v4 )
    LeaveCriticalSection(v4);
  return v12;
}
