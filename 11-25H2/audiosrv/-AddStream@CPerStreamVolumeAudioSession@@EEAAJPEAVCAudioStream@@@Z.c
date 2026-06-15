/*
 * XREFs of ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x18000D100
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_tlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x18000E9B0 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 *     ?SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z @ 0x18000F678 (-SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     _freea @ 0x18005C47C (_freea.c)
 *     ?RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z @ 0x18005D740 (-RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z.c)
 *     ?reset@?$unique_ptr@MU?$function_deleter@P6AXPEAX@Z$1?_freea@@YAX0@Z@wil@@@wistd@@QEAAXPEAM@Z @ 0x180070774 (-reset@-$unique_ptr@MU-$function_deleter@P6AXPEAX@Z$1-_freea@@YAX0@Z@wil@@@wistd@@QEAAXPEAM@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18007BAA0 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 *     _alloca_probe @ 0x18015E810 (_alloca_probe.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::AddStream(CPerStreamVolumeAudioSession *this, struct CAudioStream *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  int v5; // xmm6_4
  bool v6; // r15
  __int64 v7; // r8
  int v8; // eax
  unsigned int v9; // ebx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  size_t v12; // rcx
  __int64 v13; // rax
  void *v14; // rsp
  void **p_Memory; // rbx
  unsigned int v16; // esi
  unsigned int *v17; // r12
  __int64 v18; // r15
  unsigned int v19; // edx
  unsigned int v20; // eax
  _QWORD *j; // r8
  unsigned int v22; // edx
  int v23; // eax
  unsigned int v24; // r14d
  int v25; // eax
  __int64 result; // rax
  unsigned __int64 v27; // rax
  void *v28; // rax
  void *v29; // rcx
  unsigned int i; // r8d
  _DWORD *v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rdx
  size_t v35; // rcx
  void **v36; // rax
  __int64 v37; // rax
  void *v38; // rsp
  float v39; // xmm1_4
  float *v40; // rax
  __int64 v41; // rcx
  unsigned int k; // edx
  _BYTE v43[32]; // [rsp+0h] [rbp-30h] BYREF
  int v44[2]; // [rsp+20h] [rbp-10h]
  int v45; // [rsp+28h] [rbp-8h]
  void **Memory; // [rsp+30h] [rbp+0h] BYREF
  __int64 v47; // [rsp+38h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v48; // [rsp+40h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+58h]

  *((_QWORD *)a2 + 8) = this;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 736);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  v5 = *((_DWORD *)this + 194);
  v6 = *((_DWORD *)this + 195) != 0;
  if ( v4 )
    LeaveCriticalSection(v4);
  LODWORD(Memory) = 1065353216;
  v47 = 0LL;
  v7 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  v45 = 0;
  *(_QWORD *)v44 = &v47;
  GetPolicyVolumeForAudioStream(
    g_PolicyManager,
    ((unsigned __int64)a2 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
    v7,
    &Memory);
  v8 = CAudioStream::SetPolicyVolume(a2, *(float *)&Memory, v47, 0);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9F3,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v8,
      v44[0]);
    result = v9;
    goto LABEL_45;
  }
  *((_BYTE *)a2 + 552) = v6;
  EnterCriticalSection(v4);
  v48 = v4;
  v10 = 4LL * *((unsigned int *)this + 222);
  v11 = v10 + 16;
  v12 = (v10 + 16) & -(__int64)(v10 < v10 + 16);
  if ( !v12 )
    goto LABEL_12;
  if ( v11 <= 0x400 || v11 <= v10 )
  {
    v13 = v12 + 15;
    if ( v12 + 15 < v12 )
      v13 = 0xFFFFFFFFFFFFFF0LL;
    v14 = alloca(v13 & 0xFFFFFFFFFFFFFFF0uLL);
    p_Memory = (void **)&Memory;
    if ( v43 != (_BYTE *)-48LL )
    {
      LODWORD(Memory) = 52428;
LABEL_10:
      p_Memory += 2;
    }
  }
  else
  {
    v31 = malloc(v12);
    p_Memory = (void **)v31;
    if ( v31 )
    {
      *v31 = 56797;
      goto LABEL_10;
    }
  }
  Memory = p_Memory;
  if ( !p_Memory )
  {
LABEL_12:
    v16 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9FF,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x8007000ELL,
      v44[0]);
    if ( v4 )
      LeaveCriticalSection(v4);
    goto LABEL_44;
  }
  memcpy_0(p_Memory, *((const void **)this + 112), 4LL * *((unsigned int *)this + 222));
  v17 = (unsigned int *)((char *)a2 + 96);
  if ( *((_QWORD *)this + 112) && *((_DWORD *)this + 222) >= *v17 )
    goto LABEL_16;
  v27 = 4LL * *v17;
  if ( !is_mul_ok(*v17, 4uLL) )
    v27 = -1LL;
  v28 = operator new[](v27, (const struct std::nothrow_t *)&std::nothrow);
  v29 = (void *)*((_QWORD *)this + 112);
  *((_QWORD *)this + 112) = v28;
  if ( v29 )
    operator delete(v29);
  if ( !*((_QWORD *)this + 112) )
  {
    v16 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA0D,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x8007000ELL,
      v44[0]);
    if ( v4 )
      LeaveCriticalSection(v4);
LABEL_43:
    freea(p_Memory);
LABEL_44:
    result = v16;
LABEL_45:
    *((_QWORD *)a2 + 8) = 0LL;
    return result;
  }
  for ( i = 0; i < *((_DWORD *)this + 222); ++i )
    *(_DWORD *)(*((_QWORD *)this + 112) + 4LL * i) = *((_DWORD *)p_Memory + i);
  while ( 1 )
  {
    v32 = *v17;
    if ( i >= (unsigned int)v32 )
      break;
    *(_DWORD *)(*((_QWORD *)this + 112) + 4LL * i++) = 1065353216;
  }
  *((_DWORD *)this + 222) = v32;
  v33 = 4 * v32;
  v34 = v33 + 16;
  v35 = (v33 + 16) & -(__int64)(v33 < v33 + 16);
  if ( !v35 )
  {
    v36 = 0LL;
    goto LABEL_64;
  }
  if ( v34 <= v33 || v34 <= 0x400 )
  {
    v37 = v35 + 15;
    if ( v35 + 15 < v35 )
      v37 = 0xFFFFFFFFFFFFFF0LL;
    v38 = alloca(v37 & 0xFFFFFFFFFFFFFFF0uLL);
    v36 = (void **)&Memory;
    if ( v43 == (_BYTE *)-48LL )
      goto LABEL_64;
    LODWORD(Memory) = 52428;
    goto LABEL_58;
  }
  v36 = (void **)malloc(v35);
  if ( v36 )
  {
    *(_DWORD *)v36 = 56797;
LABEL_58:
    v36 += 2;
  }
LABEL_64:
  wistd::unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>::reset(&Memory, v36);
  p_Memory = Memory;
  if ( !Memory )
  {
    v16 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA23,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x8007000ELL,
      v44[0]);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v48);
    wistd::unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>::reset(&Memory, 0LL);
    goto LABEL_44;
  }
  memcpy_0(Memory, *((const void **)this + 112), 4LL * *((unsigned int *)this + 222));
LABEL_16:
  v18 = *((unsigned int *)this + 222);
  if ( v4 )
    LeaveCriticalSection(v4);
  v19 = 0;
  v20 = *v17;
  for ( j = (_QWORD *)((char *)a2 + 536); v19 < *v17; v20 = *v17 )
    *(_DWORD *)(*j + 4LL * v19++) = v5;
  if ( (unsigned int)v18 < v20 )
  {
    v39 = 0.0;
    if ( (_DWORD)v18 )
    {
      v40 = (float *)p_Memory;
      v41 = v18;
      do
      {
        v39 = fmaxf(*v40++, v39);
        --v41;
      }
      while ( v41 );
    }
    for ( k = 0; k < *((_DWORD *)a2 + 24); ++k )
      *(float *)(*((_QWORD *)a2 + 67) + 4LL * k) = v39 * *(float *)(*((_QWORD *)a2 + 67) + 4LL * k);
  }
  else
  {
    v22 = 0;
    if ( v20 )
    {
      do
      {
        *(float *)(*j + 4LL * v22) = *((float *)p_Memory + v22) * *(float *)(*j + 4LL * v22);
        ++v22;
      }
      while ( v22 < *((_DWORD *)a2 + 24) );
    }
  }
  *((_QWORD *)a2 + 68) = 0LL;
  v23 = CAudioStream::RecalculateVolume(a2, 0, 0LL);
  v24 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5E6,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v23,
      v44[0]);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA30,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)v24,
      v44[0]);
    if ( p_Memory )
      freea(p_Memory);
    result = v24;
    goto LABEL_45;
  }
  v25 = CAudioSession::AddStream(this, a2);
  v16 = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA32,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v25,
      v44[0]);
    if ( !p_Memory )
      goto LABEL_44;
    goto LABEL_43;
  }
  if ( p_Memory && *((_DWORD *)p_Memory - 4) == 56797 )
    free(p_Memory - 2);
  return 0LL;
}
