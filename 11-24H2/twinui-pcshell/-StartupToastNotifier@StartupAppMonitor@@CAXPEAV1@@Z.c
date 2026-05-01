/*
 * XREFs of ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x1800B9260
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180048A38 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x18005C8DC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?exists@filesystem@std@@YA_NAEBVpath@12@@Z @ 0x180063074 (-exists@filesystem@std@@YA_NAEBVpath@12@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1STARTUPAPPINFO@@QEAA@XZ @ 0x1800BAA38 (--1STARTUPAPPINFO@@QEAA@XZ.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x1800BAC24 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x1800BAC80 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ??$ExpandEnvironmentStringsW@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0BAA@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1800BAD58 (--$ExpandEnvironmentStringsW@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$0BAA.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800BADF8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetFileDescription@StartupNotification@@SA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x1800BAF60 (-GetFileDescription@StartupNotification@@SA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 *     ??$_Convert_stringoid_to_wide@U_Normal_conversion@filesystem@std@@@filesystem@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@V?$basic_string_view@GU?$char_traits@G@std@@@1@U_Normal_conversion@01@@Z @ 0x1800BB98C (--$_Convert_stringoid_to_wide@U_Normal_conversion@filesystem@std@@@filesystem@std@@YA-AV-$basic_.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F2248 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180125FF0 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18019541C (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ??$_Emplace_reallocate@PEAX@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAPEAPEAXQEAPEAX$$QEAPEAX@Z @ 0x1801F1830 (--$_Emplace_reallocate@PEAX@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAPEAPEAXQEAPEAX$$QEAPEA.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180296974 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802A3708 (--$_Freenode@V-$allocator@U-$_List_node@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 *     ??$_Emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@1@QEAU21@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1802B5E48 (--$_Emplace@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$list@V-$basic_st.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802CF544 (-_Xlen_string@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802DDD1C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802DF760 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18033BE5C (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??$_Eqrange@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@PEAU12@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18058351C (--$_Eqrange@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree@V-$_Tmap_trai.c)
 *     ?IsStartupAppEnabled@StartupAppMonitor@@CA_NPEAUHKEY__@@PEBG1@Z @ 0x1805842E0 (-IsStartupAppEnabled@StartupAppMonitor@@CA_NPEAUHKEY__@@PEBG1@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@@2@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x1805848F0 (-_Erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@US.c)
 *     ?ShowStartupAppNotification@StartupNotification@@SAXPEBG0_N@Z @ 0x180586360 (-ShowStartupAppNotification@StartupNotification@@SAXPEBG0_N@Z.c)
 *     memcpy_0 @ 0x1806CA2DC (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=22 #try_helpers=1
void __fastcall StartupAppMonitor::StartupToastNotifier(void **a1)
{
  HKEY *v2; // rax
  unsigned int v3; // eax
  HANDLE *v4; // r12
  HANDLE *v5; // rbx
  HANDLE *v6; // rbx
  __int64 v7; // rdi
  const char *v8; // r9
  bool v9; // cf
  HANDLE *v10; // rdi
  DWORD v11; // eax
  const char *v12; // r9
  _QWORD **v13; // rcx
  _QWORD *v14; // rbx
  unsigned __int64 v15; // r15
  _OWORD *v16; // r12
  _QWORD *v17; // r12
  unsigned __int64 v18; // r15
  _QWORD *v19; // r12
  unsigned __int64 v20; // r15
  _QWORD *v21; // r12
  unsigned __int64 v22; // r15
  _QWORD *v23; // r12
  unsigned __int64 v24; // r15
  _QWORD *v25; // r12
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // r15
  void **v28; // r12
  unsigned __int64 v29; // r15
  void **v30; // r12
  unsigned __int64 v31; // r15
  void **v32; // r12
  unsigned __int64 v33; // r15
  void **v34; // r12
  __int64 v35; // rax
  unsigned __int64 v36; // r15
  void **v37; // r12
  const WCHAR *v38; // rdx
  LSTATUS Value; // eax
  __int64 v40; // r8
  __int64 v41; // r9
  LPCWSTR *v42; // r8
  LPCWSTR *i; // rcx
  __int64 v44; // rax
  LPCWSTR *v45; // rdx
  LPCWSTR *v46; // rcx
  __int64 v47; // rdi
  const wchar_t *j; // rdx
  __int64 v49; // rcx
  const WCHAR *v50; // rdx
  unsigned int v51; // eax
  const WCHAR *v52; // rdx
  LSTATUS v53; // eax
  __int64 v54; // rcx
  _QWORD *n; // rax
  _QWORD *v56; // rdi
  _QWORD *v57; // rbx
  __int64 v58; // rcx
  __int64 v59; // rcx
  void *v60; // rdx
  HKEY v61; // rcx
  unsigned __int64 v62; // rdi
  size_t v63; // rcx
  void *v64; // rax
  unsigned __int64 v65; // rdi
  size_t size_of; // rax
  unsigned __int64 v67; // rdi
  size_t v68; // rax
  unsigned __int64 v69; // rdi
  size_t v70; // rax
  unsigned __int64 v71; // rdi
  size_t v72; // rax
  unsigned __int64 v73; // rdi
  size_t v74; // rax
  unsigned __int64 v75; // rdi
  size_t v76; // rcx
  WCHAR *v77; // rax
  unsigned __int64 v78; // rdi
  size_t v79; // rcx
  WCHAR *v80; // rax
  unsigned __int64 v81; // rdi
  size_t v82; // rcx
  WCHAR *v83; // rax
  unsigned __int64 v84; // rdi
  size_t v85; // rcx
  void *v86; // rax
  unsigned __int64 v87; // rdi
  size_t v88; // rcx
  void *v89; // rax
  unsigned __int64 v90; // r15
  __int64 v91; // rdi
  size_t v92; // rax
  BYTE *v93; // rdx
  BYTE *v94; // rdi
  unsigned __int64 m; // rcx
  BYTE *v96; // rax
  const WCHAR *v97; // rdx
  LPBYTE *v98; // rdx
  __int128 v99; // xmm3
  __m128i v100; // xmm2
  unsigned __int64 v101; // xmm2_8
  const struct std::nothrow_t *v102; // rdx
  void *v103; // rcx
  void *v104; // rdx
  LPBYTE v105; // rcx
  _QWORD *v106; // rdx
  void *v107; // rdx
  const struct std::nothrow_t *v108; // rcx
  __int128 *v109; // rax
  int v110; // r15d
  const struct std::filesystem::path *v111; // rdx
  LPBYTE *v112; // rdi
  unsigned __int64 k; // rcx
  _QWORD *v114; // rdi
  const WCHAR *v115; // rax
  unsigned int v116; // eax
  const unsigned __int16 *v117; // rax
  const unsigned __int16 *v118; // r8
  const unsigned __int16 *v119; // rax
  const unsigned __int16 *v120; // rdx
  bool v121; // r8
  const WCHAR *v122; // rax
  unsigned int v123; // eax
  const unsigned __int16 *v124; // rax
  const unsigned __int16 *v125; // r8
  const unsigned __int16 *v126; // rax
  const unsigned __int16 *v127; // rdx
  bool v128; // r8
  unsigned int phkResult; // [rsp+20h] [rbp-338h]
  unsigned int phkResulta; // [rsp+20h] [rbp-338h]
  unsigned int phkResultb; // [rsp+20h] [rbp-338h]
  unsigned int phkResultc; // [rsp+20h] [rbp-338h]
  BYTE Data[8]; // [rsp+50h] [rbp-308h] BYREF
  void *v134[2]; // [rsp+60h] [rbp-2F8h] BYREF
  HKEY v135; // [rsp+70h] [rbp-2E8h] BYREF
  void *v136[2]; // [rsp+78h] [rbp-2E0h] BYREF
  DWORD cbData; // [rsp+88h] [rbp-2D0h] BYREF
  int v138; // [rsp+8Ch] [rbp-2CCh]
  DWORD Type; // [rsp+90h] [rbp-2C8h] BYREF
  HKEY hKey; // [rsp+98h] [rbp-2C0h] BYREF
  HANDLE *lpHandles[2]; // [rsp+A0h] [rbp-2B8h] BYREF
  HANDLE *v142; // [rsp+B0h] [rbp-2A8h]
  HANDLE *v143; // [rsp+B8h] [rbp-2A0h]
  __int64 v144; // [rsp+C0h] [rbp-298h] BYREF
  _QWORD v145[3]; // [rsp+D0h] [rbp-288h] BYREF
  char v146[24]; // [rsp+E8h] [rbp-270h] BYREF
  HKEY v147; // [rsp+100h] [rbp-258h] BYREF
  LPCWSTR lpSubKey[2]; // [rsp+108h] [rbp-250h] BYREF
  unsigned __int64 v149; // [rsp+118h] [rbp-240h]
  unsigned __int64 v150; // [rsp+120h] [rbp-238h]
  LPCWSTR v151[2]; // [rsp+128h] [rbp-230h] BYREF
  unsigned __int64 v152; // [rsp+138h] [rbp-220h]
  unsigned __int64 v153; // [rsp+140h] [rbp-218h]
  LPCWSTR lpValueName[2]; // [rsp+148h] [rbp-210h] BYREF
  unsigned __int64 v155; // [rsp+158h] [rbp-200h]
  unsigned __int64 v156; // [rsp+160h] [rbp-1F8h]
  __int128 v157; // [rsp+168h] [rbp-1F0h] BYREF
  unsigned __int64 v158; // [rsp+178h] [rbp-1E0h]
  unsigned __int64 v159; // [rsp+180h] [rbp-1D8h]
  int v160; // [rsp+188h] [rbp-1D0h]
  __int64 v161; // [rsp+190h] [rbp-1C8h]
  __int128 v162; // [rsp+198h] [rbp-1C0h] BYREF
  unsigned __int64 v163; // [rsp+1A8h] [rbp-1B0h]
  __int64 v164; // [rsp+1B0h] [rbp-1A8h]
  LPBYTE lpData[2]; // [rsp+1C0h] [rbp-198h] BYREF
  __m128i v166; // [rsp+1D0h] [rbp-188h]
  void *v167[2]; // [rsp+1E0h] [rbp-178h]
  unsigned __int64 v168; // [rsp+1F0h] [rbp-168h]
  unsigned __int64 v169; // [rsp+1F8h] [rbp-160h]
  HKEY v170; // [rsp+200h] [rbp-158h] BYREF
  void *Src[2]; // [rsp+208h] [rbp-150h] BYREF
  unsigned __int64 v172; // [rsp+218h] [rbp-140h]
  unsigned __int64 v173; // [rsp+220h] [rbp-138h]
  void *v174[2]; // [rsp+228h] [rbp-130h] BYREF
  unsigned __int64 v175; // [rsp+238h] [rbp-120h]
  unsigned __int64 v176; // [rsp+240h] [rbp-118h]
  void *v177[2]; // [rsp+248h] [rbp-110h] BYREF
  unsigned __int64 v178; // [rsp+258h] [rbp-100h]
  unsigned __int64 v179; // [rsp+260h] [rbp-F8h]
  void *v180[2]; // [rsp+268h] [rbp-F0h] BYREF
  unsigned __int64 v181; // [rsp+278h] [rbp-E0h]
  unsigned __int64 v182; // [rsp+280h] [rbp-D8h]
  int v183; // [rsp+288h] [rbp-D0h]
  __int64 v184; // [rsp+290h] [rbp-C8h]
  void *v185[2]; // [rsp+298h] [rbp-C0h] BYREF
  unsigned __int64 v186; // [rsp+2A8h] [rbp-B0h]
  unsigned __int64 v187; // [rsp+2B0h] [rbp-A8h]
  void *v188[3]; // [rsp+2C0h] [rbp-98h] BYREF
  unsigned __int64 v189; // [rsp+2D8h] [rbp-80h]
  __int128 v190; // [rsp+2E0h] [rbp-78h] BYREF
  __m128i v191; // [rsp+2F0h] [rbp-68h]
  void *v192[4]; // [rsp+300h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+358h] [rbp+0h]

  v138 = 0;
  hKey = 0LL;
  v2 = (HKEY *)wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&hKey);
  v3 = RegOpenKeyExW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\RunNotification",
         0,
         0x2011Bu,
         v2);
  try
  {
    if ( v3 )
      wil::details::in1diag3::_Throw_Win32(
        retaddr,
        (void *)0xC3,
        (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
        (const char *)v3,
        phkResult);
    *(_OWORD *)lpHandles = 0LL;
    v142 = 0LL;
    v4 = a1 + 22;
    v143 = a1 + 22;
    v134[0] = a1[22];
    std::vector<void *>::_Emplace_reallocate<void *>(lpHandles, 0LL, v134);
    v134[0] = StartupAppMonitor::s_showNotificationMapUpdateEvent;
    v5 = lpHandles[1];
    if ( lpHandles[1] == v142 )
    {
      std::vector<void *>::_Emplace_reallocate<void *>(lpHandles, lpHandles[1], v134);
      v6 = lpHandles[1];
    }
    else
    {
      *lpHandles[1] = StartupAppMonitor::s_showNotificationMapUpdateEvent;
      v6 = v5 + 1;
      lpHandles[1] = v6;
    }
LABEL_5:
    std::_Mutex_base::lock((std::_Mutex_base *)&StartupAppMonitor::s_showNotificationMapMutex);
    v7 = qword_1808C9628;
    if ( !ResetEvent(StartupAppMonitor::s_showNotificationMapUpdateEvent) )
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x9D8,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
        v8);
    _Mtx_unlock((_Mtx_t)&StartupAppMonitor::s_showNotificationMapMutex);
    v9 = v7 == 0;
    v10 = lpHandles[0];
    if ( v9 && !WaitForMultipleObjects(v6 - lpHandles[0], lpHandles[0], 0, 0xFFFFFFFF) )
      goto LABEL_209;
    v11 = WaitForSingleObjectEx(*v4, 0x2710u, 0);
    if ( v11 != 258 )
    {
      if ( v11 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0xAE4,
          (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
          v12);
LABEL_209:
      if ( v10 )
        std::_Deallocate<16,0>(
          v10,
          (const struct std::nothrow_t *)(((char *)v142 - (char *)v10) & 0xFFFFFFFFFFFFFFF8uLL));
      if ( hKey )
        RegCloseKey(hKey);
      return;
    }
    std::chrono::steady_clock::now(&v144);
    v145[2] = &StartupAppMonitor::s_showNotificationMapMutex;
    std::_Mutex_base::lock((std::_Mutex_base *)&StartupAppMonitor::s_showNotificationMapMutex);
    v136[0] = 0LL;
    v136[1] = 0LL;
    v13 = (_QWORD **)std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
    *v13 = v13;
    v13[1] = v13;
    v136[0] = v13;
    v14 = *(_QWORD **)StartupAppMonitor::s_showNotificationMap;
    while ( 1 )
    {
      if ( *((_BYTE *)v14 + 25) )
      {
        v56 = *v13;
        v57 = v13;
        while ( v56 != v57 )
        {
          std::wstring::wstring(v192, v56 + 2);
          *(_OWORD *)v134 = *(_OWORD *)std::_Tree<std::_Tmap_traits<std::wstring,STARTUPAPPINFO,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,STARTUPAPPINFO>>,0>>::_Eqrange<std::wstring>(
                                         v58,
                                         v146,
                                         v192);
          std::_Tree<std::_Tmap_traits<std::wstring,STARTUPAPPINFO,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,STARTUPAPPINFO>>,0>>::_Erase(
            v59,
            v134);
          std::wstring::_Tidy_deallocate(v192);
          v56 = (_QWORD *)*v56;
          v13 = (_QWORD **)v136[0];
        }
        *v13[1] = 0LL;
        v106 = *v13;
        if ( *v13 )
        {
          do
          {
            v114 = (_QWORD *)*v106;
            std::_List_node<std::wstring,void *>::_Freenode<std::allocator<std::_List_node<std::wstring,void *>>>();
            v106 = v114;
          }
          while ( v114 );
        }
        operator delete(v136[0], (const struct std::nothrow_t *)0x30);
        _Mtx_unlock((_Mtx_t)&StartupAppMonitor::s_showNotificationMapMutex);
        v6 = lpHandles[1];
        v4 = v143;
        goto LABEL_5;
      }
      *(_OWORD *)v167 = 0LL;
      v168 = 0LL;
      v169 = 0LL;
      v15 = v14[6];
      v16 = v14 + 4;
      if ( v14[7] > 7uLL )
        v16 = (_OWORD *)v14[4];
      if ( v15 > 0x7FFFFFFFFFFFFFFELL )
        std::_Xlen_string();
      v169 = 7LL;
      if ( v15 <= 7 )
      {
        v168 = v15;
        *(_OWORD *)v167 = *v16;
        goto LABEL_15;
      }
      v62 = v15 | 7;
      if ( (v15 | 7) > 0x7FFFFFFFFFFFFFFELL )
      {
        v62 = 0x7FFFFFFFFFFFFFFELL;
        v63 = -2LL;
      }
      else
      {
        if ( v62 < 0xA )
          v62 = 10LL;
        if ( v62 + 1 > 0x7FFFFFFFFFFFFFFFLL )
          std::_Throw_bad_array_new_length();
        v63 = 2 * (v62 + 1);
        if ( v63 < 0x1000 )
        {
          if ( v63 )
            v64 = operator new(v63);
          else
            v64 = 0LL;
          goto LABEL_113;
        }
      }
      v64 = (void *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v63);
LABEL_113:
      v167[0] = v64;
      v168 = v15;
      v169 = v62;
      memcpy_0(v64, v16, 2 * v15 + 2);
LABEL_15:
      v134[0] = &v170;
      v170 = (HKEY)v14[8];
      v17 = v14 + 9;
      *(_OWORD *)Src = 0LL;
      v172 = 0LL;
      v173 = 0LL;
      v18 = v14[11];
      if ( v14[12] > 7uLL )
        v17 = (_QWORD *)*v17;
      if ( v18 > 0x7FFFFFFFFFFFFFFELL )
        std::_Xlen_string();
      v173 = 7LL;
      if ( v18 > 7 )
      {
        v65 = v18 | 7;
        if ( (v18 | 7) > 0x7FFFFFFFFFFFFFFELL )
        {
          v65 = 0x7FFFFFFFFFFFFFFELL;
        }
        else if ( v65 < 0xA )
        {
          v65 = 10LL;
        }
        size_of = std::_Get_size_of_n<2>(v65 + 1);
        Src[0] = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
        v172 = v18;
        v173 = v65;
        memcpy_0(Src[0], v17, 2 * v18 + 2);
      }
      else
      {
        v172 = v18;
        *(_OWORD *)Src = *(_OWORD *)v17;
      }
      v19 = v14 + 13;
      *(_OWORD *)v174 = 0LL;
      v175 = 0LL;
      v176 = 0LL;
      v20 = v14[15];
      if ( v14[16] > 7uLL )
        v19 = (_QWORD *)*v19;
      if ( v20 > 0x7FFFFFFFFFFFFFFELL )
        std::_Xlen_string();
      v176 = 7LL;
      if ( v20 > 7 )
      {
        v67 = v20 | 7;
        if ( (v20 | 7) > 0x7FFFFFFFFFFFFFFELL )
        {
          v67 = 0x7FFFFFFFFFFFFFFELL;
        }
        else if ( v67 < 0xA )
        {
          v67 = 10LL;
        }
        v68 = std::_Get_size_of_n<2>(v67 + 1);
        v174[0] = std::_Allocate<16,std::_Default_allocate_traits,0>(v68);
        v175 = v20;
        v176 = v67;
        memcpy_0(v174[0], v19, 2 * v20 + 2);
      }
      else
      {
        v175 = v20;
        *(_OWORD *)v174 = *(_OWORD *)v19;
      }
      v21 = v14 + 17;
      *(_OWORD *)v177 = 0LL;
      v178 = 0LL;
      v179 = 0LL;
      v22 = v14[19];
      if ( v14[20] > 7uLL )
        v21 = (_QWORD *)*v21;
      if ( v22 > 0x7FFFFFFFFFFFFFFELL )
        std::_Xlen_string();
      v179 = 7LL;
      if ( v22 > 7 )
      {
        v69 = v22 | 7;
        if ( (v22 | 7) > 0x7FFFFFFFFFFFFFFELL )
        {
          v69 = 0x7FFFFFFFFFFFFFFELL;
        }
        else if ( v69 < 0xA )
        {
          v69 = 10LL;
        }
        v70 = std::_Get_size_of_n<2>(v69 + 1);
        v177[0] = std::_Allocate<16,std::_Default_allocate_traits,0>(v70);
        v178 = v22;
        v179 = v69;
        memcpy_0(v177[0], v21, 2 * v22 + 2);
      }
      else
      {
        v178 = v22;
        *(_OWORD *)v177 = *(_OWORD *)v21;
      }
      v23 = v14 + 21;
      *(_OWORD *)v180 = 0LL;
      v181 = 0LL;
      v182 = 0LL;
      v24 = v14[23];
      if ( v14[24] > 7uLL )
        v23 = (_QWORD *)*v23;
      if ( v24 > 0x7FFFFFFFFFFFFFFELL )
        std::_Xlen_string();
      v182 = 7LL;
      if ( v24 > 7 )
      {
        v71 = v24 | 7;
        if ( (v24 | 7) > 0x7FFFFFFFFFFFFFFELL )
        {
          v71 = 0x7FFFFFFFFFFFFFFELL;
        }
        else if ( v71 < 0xA )
        {
          v71 = 10LL;
        }
        v72 = std::_Get_size_of_n<2>(v71 + 1);
        v180[0] = std::_Allocate<16,std::_Default_allocate_traits,0>(v72);
        v181 = v24;
        v182 = v71;
        memcpy_0(v180[0], v23, 2 * v24 + 2);
      }
      else
      {
        v181 = v24;
        *(_OWORD *)v180 = *(_OWORD *)v23;
      }
      v183 = *((_DWORD *)v14 + 50);
      v184 = v14[26];
      v25 = v14 + 27;
      *(_OWORD *)v185 = 0LL;
      v186 = 0LL;
      v187 = 0LL;
      v26 = v14[29];
      if ( v14[30] > 7uLL )
        v25 = (_QWORD *)*v25;
      if ( v26 > 0x7FFFFFFFFFFFFFFELL )
        std::_Xlen_string();
      v187 = 7LL;
      if ( v26 > 7 )
      {
        v73 = v26 | 7;
        if ( (v26 | 7) > 0x7FFFFFFFFFFFFFFELL )
        {
          v73 = 0x7FFFFFFFFFFFFFFELL;
        }
        else if ( v73 < 0xA )
        {
          v73 = 10LL;
        }
        v74 = std::_Get_size_of_n<2>(v73 + 1);
        v185[0] = std::_Allocate<16,std::_Default_allocate_traits,0>(v74);
        v186 = v26;
        v187 = v73;
        memcpy_0(v185[0], v25, 2 * v26 + 2);
      }
      else
      {
        v186 = v26;
        *(_OWORD *)v185 = *(_OWORD *)v25;
      }
      v147 = v170;
      *(_OWORD *)lpSubKey = 0LL;
      v149 = 0LL;
      v150 = 0LL;
      v27 = v172;
      v28 = Src;
      if ( v173 > 7 )
        v28 = (void **)Src[0];
      if ( v172 > 0x7FFFFFFFFFFFFFFELL )
        std::_Xlen_string();
      v150 = 7LL;
      if ( v172 <= 7 )
      {
        v149 = v172;
        *(_OWORD *)lpSubKey = *(_OWORD *)v28;
        goto LABEL_45;
      }
      v75 = v172 | 7;
      if ( (v172 | 7) > 0x7FFFFFFFFFFFFFFELL )
      {
        v75 = 0x7FFFFFFFFFFFFFFELL;
        v76 = -2LL;
      }
      else
      {
        if ( v75 < 0xA )
          v75 = 10LL;
        if ( v75 + 1 > 0x7FFFFFFFFFFFFFFFLL )
          std::_Throw_bad_array_new_length();
        v76 = 2 * (v75 + 1);
        if ( v76 < 0x1000 )
        {
          if ( v76 )
            v77 = (WCHAR *)operator new(v76);
          else
            v77 = 0LL;
          goto LABEL_141;
        }
      }
      v77 = (WCHAR *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v76);
LABEL_141:
      lpSubKey[0] = v77;
      v149 = v27;
      v150 = v75;
      memcpy_0(v77, v28, 2 * v27 + 2);
LABEL_45:
      *(_OWORD *)v151 = 0LL;
      v152 = 0LL;
      v153 = 0LL;
      v29 = v175;
      v30 = v174;
      if ( v176 > 7 )
        v30 = (void **)v174[0];
      if ( v175 > 0x7FFFFFFFFFFFFFFELL )
        std::_Xlen_string();
      v153 = 7LL;
      if ( v175 <= 7 )
      {
        v152 = v175;
        *(_OWORD *)v151 = *(_OWORD *)v30;
        goto LABEL_50;
      }
      v78 = v175 | 7;
      if ( (v175 | 7) > 0x7FFFFFFFFFFFFFFELL )
      {
        v78 = 0x7FFFFFFFFFFFFFFELL;
        v79 = -2LL;
      }
      else
      {
        if ( v78 < 0xA )
          v78 = 10LL;
        if ( v78 + 1 > 0x7FFFFFFFFFFFFFFFLL )
          std::_Throw_bad_array_new_length();
        v79 = 2 * (v78 + 1);
        if ( v79 < 0x1000 )
        {
          if ( v79 )
            v80 = (WCHAR *)operator new(v79);
          else
            v80 = 0LL;
          goto LABEL_149;
        }
      }
      v80 = (WCHAR *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v79);
LABEL_149:
      v151[0] = v80;
      v152 = v29;
      v153 = v78;
      memcpy_0(v80, v30, 2 * v29 + 2);
LABEL_50:
      *(_OWORD *)lpValueName = 0LL;
      v155 = 0LL;
      v156 = 0LL;
      v31 = v178;
      v32 = v177;
      if ( v179 > 7 )
        v32 = (void **)v177[0];
      if ( v178 > 0x7FFFFFFFFFFFFFFELL )
        std::_Xlen_string();
      v156 = 7LL;
      if ( v178 <= 7 )
      {
        v155 = v178;
        *(_OWORD *)lpValueName = *(_OWORD *)v32;
        goto LABEL_55;
      }
      v81 = v178 | 7;
      if ( (v178 | 7) > 0x7FFFFFFFFFFFFFFELL )
      {
        v81 = 0x7FFFFFFFFFFFFFFELL;
        v82 = -2LL;
      }
      else
      {
        if ( v81 < 0xA )
          v81 = 10LL;
        if ( v81 + 1 > 0x7FFFFFFFFFFFFFFFLL )
          std::_Throw_bad_array_new_length();
        v82 = 2 * (v81 + 1);
        if ( v82 < 0x1000 )
        {
          if ( v82 )
            v83 = (WCHAR *)operator new(v82);
          else
            v83 = 0LL;
          goto LABEL_157;
        }
      }
      v83 = (WCHAR *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v82);
LABEL_157:
      lpValueName[0] = v83;
      v155 = v31;
      v156 = v81;
      memcpy_0(v83, v32, 2 * v31 + 2);
LABEL_55:
      v157 = 0LL;
      v158 = 0LL;
      v159 = 0LL;
      v33 = v181;
      v34 = v180;
      if ( v182 > 7 )
        v34 = (void **)v180[0];
      if ( v181 > 0x7FFFFFFFFFFFFFFELL )
        std::_Xlen_string();
      v159 = 7LL;
      if ( v181 <= 7 )
      {
        v158 = v181;
        v157 = *(_OWORD *)v34;
        goto LABEL_60;
      }
      v84 = v181 | 7;
      if ( (v181 | 7) > 0x7FFFFFFFFFFFFFFELL )
      {
        v84 = 0x7FFFFFFFFFFFFFFELL;
        v85 = -2LL;
      }
      else
      {
        if ( v84 < 0xA )
          v84 = 10LL;
        if ( v84 + 1 > 0x7FFFFFFFFFFFFFFFLL )
          std::_Throw_bad_array_new_length();
        v85 = 2 * (v84 + 1);
        if ( v85 < 0x1000 )
        {
          if ( v85 )
            v86 = operator new(v85);
          else
            v86 = 0LL;
          goto LABEL_165;
        }
      }
      v86 = (void *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v85);
LABEL_165:
      *(_QWORD *)&v157 = v86;
      v158 = v33;
      v159 = v84;
      memcpy_0(v86, v34, 2 * v33 + 2);
LABEL_60:
      v160 = v183;
      v35 = v184;
      v161 = v184;
      v162 = 0LL;
      v163 = 0LL;
      v164 = 0LL;
      v36 = v186;
      v37 = v185;
      if ( v187 > 7 )
        v37 = (void **)v185[0];
      if ( v186 > 0x7FFFFFFFFFFFFFFELL )
        std::_Xlen_string();
      v164 = 7LL;
      if ( v186 <= 7 )
      {
        v163 = v186;
        v162 = *(_OWORD *)v37;
        goto LABEL_65;
      }
      v87 = v186 | 7;
      if ( (v186 | 7) > 0x7FFFFFFFFFFFFFFELL )
      {
        v87 = 0x7FFFFFFFFFFFFFFELL;
        v88 = -2LL;
      }
      else
      {
        if ( v87 < 0xA )
          v87 = 10LL;
        if ( v87 + 1 > 0x7FFFFFFFFFFFFFFFLL )
          std::_Throw_bad_array_new_length();
        v88 = 2 * (v87 + 1);
        if ( v88 < 0x1000 )
        {
          if ( v88 )
            v89 = operator new(v88);
          else
            v89 = 0LL;
          goto LABEL_173;
        }
      }
      v89 = (void *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v88);
LABEL_173:
      *(_QWORD *)&v162 = v89;
      v163 = v36;
      v164 = v87;
      memcpy_0(v89, v37, 2 * v36 + 2);
      v35 = v161;
LABEL_65:
      if ( v144 - v35 >= 10000000000LL )
      {
        v38 = (const WCHAR *)lpValueName;
        if ( v156 > 7 )
          v38 = lpValueName[0];
        Value = RegQueryValueExW(hKey, v38, 0LL, 0LL, 0LL, 0LL);
        if ( Value == 2 )
        {
          if ( (unsigned int)(v160 - 3) <= 1 )
          {
            v109 = &v157;
            if ( v159 > 7 )
              v109 = (__int128 *)v157;
            v145[0] = v109;
            v145[1] = v158;
            std::filesystem::_Convert_stringoid_to_wide<std::filesystem::_Normal_conversion>(v188, v145, v40, v41);
            v110 = v138 | 1;
            v138 |= 1u;
            if ( std::filesystem::exists((std::filesystem *)v188, v111) )
            {
              std::wstring::wstring(lpData, v188);
              v138 = v110 | 2;
              StartupNotification::GetFileDescription(&v190, lpData);
              std::wstring::_Tidy_deallocate((void **)lpData);
              if ( v191.m128i_i64[0] )
              {
                *(_DWORD *)Data = v160;
                v122 = (const WCHAR *)std::wstring::c_str(lpValueName);
                v123 = RegSetValueExW(hKey, v122, 0, 4u, Data, 4u);
                if ( v123 )
                  wil::details::in1diag3::_Throw_Win32(
                    retaddr,
                    (void *)0xFB,
                    (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
                    (const char *)v123,
                    phkResultc);
                std::list<std::wstring>::_Emplace<std::wstring const &>(v136, v136[0], v151);
                std::wstring::c_str(v151);
                v124 = (const unsigned __int16 *)std::wstring::c_str(&v162);
                if ( StartupAppMonitor::IsStartupAppEnabled(v147, v124, v125) )
                {
                  std::wstring::c_str(lpValueName);
                  v126 = (const unsigned __int16 *)std::wstring::c_str(&v190);
                  StartupNotification::ShowStartupAppNotification(v126, v127, v128);
                }
              }
              std::wstring::_Tidy_deallocate((void **)&v190);
            }
            else
            {
              std::list<std::wstring>::_Emplace<std::wstring const &>(v136, v136[0], v151);
            }
            std::wstring::_Tidy_deallocate(v188);
          }
          else
          {
            v135 = 0LL;
            v42 = lpSubKey;
            if ( v150 > 7 )
              v42 = (LPCWSTR *)lpSubKey[0];
            if ( v149 >= 0x39 )
            {
              for ( i = v42; ; i = (LPCWSTR *)((char *)v46 + 2) )
              {
                v44 = ((char *)v42 + 2 * v149 - 112 - (char *)i) >> 1;
                v45 = i;
                v46 = 0LL;
                if ( v44 )
                {
                  while ( *(_WORD *)v45 != 83 )
                  {
                    if ( v44 == 1 )
                      goto LABEL_77;
                    --v44;
                    v45 = (LPCWSTR *)((char *)v45 + 2);
                  }
                  v46 = v45;
                }
LABEL_77:
                if ( !v46 )
                  break;
                v47 = 57LL;
                for ( j = L"Software\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion\\Run"; ; ++j )
                {
                  if ( !v47 )
                  {
                    v49 = ((char *)v46 - (char *)v42) >> 1;
                    goto LABEL_83;
                  }
                  if ( *(const wchar_t *)((char *)j
                                        + (char *)v46
                                        - (char *)L"Software\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion\\Run") != *j )
                    break;
                  --v47;
                }
              }
            }
            v49 = -1LL;
LABEL_83:
            v135 = 0LL;
            v50 = (const WCHAR *)lpSubKey;
            if ( v150 > 7 )
              v50 = lpSubKey[0];
            v51 = RegCreateKeyExW(v147, v50, 0, 0LL, 0, v49 != 0 ? 281 : 537, 0LL, &v135, 0LL);
            if ( v51 )
              wil::details::in1diag3::_Throw_Win32(
                retaddr,
                (void *)0x10F,
                (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
                (const char *)v51,
                phkResulta);
            cbData = 0;
            v52 = (const WCHAR *)v151;
            if ( v153 > 7 )
              v52 = v151[0];
            v53 = RegQueryValueExW(v135, v52, 0LL, 0LL, 0LL, &cbData);
            if ( v53 )
            {
              if ( v53 == 2 )
                std::list<std::wstring>::_Emplace<std::wstring const &>(v136, v136[0], v151);
            }
            else
            {
              Type = 0;
              v90 = (unsigned __int64)cbData >> 1;
              *(_OWORD *)lpData = 0LL;
              v166.m128i_i64[0] = 0LL;
              v166.m128i_i64[1] = 7LL;
              if ( v90 <= 7 )
              {
                v166.m128i_i64[0] = (unsigned __int64)cbData >> 1;
                if ( v90 )
                {
                  v112 = lpData;
                  for ( k = (unsigned __int64)cbData >> 1; k; --k )
                  {
                    *(_WORD *)v112 = 0;
                    v112 = (LPBYTE *)((char *)v112 + 2);
                  }
                }
                *((_WORD *)lpData + v90) = 0;
              }
              else
              {
                v91 = v90 | 7;
                if ( (v90 | 7) < 0xA )
                  v91 = 10LL;
                v92 = std::_Get_size_of_n<2>(v91 + 1);
                v93 = (BYTE *)std::_Allocate<16,std::_Default_allocate_traits,0>(v92);
                lpData[0] = v93;
                v166.m128i_i64[0] = v90;
                v166.m128i_i64[1] = v91;
                v94 = v93;
                for ( m = v90; m; --m )
                {
                  *(_WORD *)v94 = 0;
                  v94 += 2;
                }
                *(_WORD *)&v93[2 * v90] = 0;
              }
              v96 = (BYTE *)lpData;
              if ( v166.m128i_i64[1] > 7uLL )
                v96 = lpData[0];
              v97 = (const WCHAR *)v151;
              if ( v153 > 7 )
                v97 = v151[0];
              if ( !RegQueryValueExW(v135, v97, 0LL, &Type, v96, &cbData) && Type - 1 <= 1 )
              {
                if ( Type == 2 )
                {
                  v98 = lpData;
                  if ( v166.m128i_i64[1] > 7uLL )
                    v98 = (LPBYTE *)lpData[0];
                  wil::ExpandEnvironmentStringsW<std::wstring,256>(&v190, v98);
                  v99 = *(_OWORD *)lpData;
                  v100 = v166;
                  *(_OWORD *)lpData = v190;
                  v166 = v191;
                  v190 = v99;
                  v191 = v100;
                  v101 = _mm_srli_si128(v100, 8).m128i_u64[0];
                  if ( v101 > 7 )
                  {
                    v102 = (const struct std::nothrow_t *)(2 * v101 + 2);
                    *(_QWORD *)Data = v102;
                    v103 = (void *)v99;
                    v134[0] = (void *)v99;
                    if ( (unsigned __int64)v102 >= 0x1000 )
                    {
                      std::_Adjust_manually_vector_aligned(v134, (unsigned __int64 *)Data);
                      v102 = *(const struct std::nothrow_t **)Data;
                      v103 = v134[0];
                    }
                    operator delete(v103, v102);
                  }
                }
                StartupNotification::GetFileDescription(v188, lpData);
                if ( v188[2] )
                {
                  *(_DWORD *)Data = v160;
                  v115 = (const WCHAR *)std::wstring::c_str(lpValueName);
                  v116 = RegSetValueExW(hKey, v115, 0, 4u, Data, 4u);
                  if ( v116 )
                    wil::details::in1diag3::_Throw_Win32(
                      retaddr,
                      (void *)0x129,
                      (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
                      (const char *)v116,
                      phkResultb);
                  std::list<std::wstring>::_Emplace<std::wstring const &>(v136, v136[0], v151);
                  std::wstring::c_str(v151);
                  v117 = (const unsigned __int16 *)std::wstring::c_str(&v162);
                  if ( StartupAppMonitor::IsStartupAppEnabled(v147, v117, v118) )
                  {
                    std::wstring::c_str(lpValueName);
                    v119 = (const unsigned __int16 *)std::wstring::c_str(v188);
                    StartupNotification::ShowStartupAppNotification(v119, v120, v121);
                  }
                }
                if ( v189 > 7 )
                {
                  v107 = (void *)(2 * v189 + 2);
                  v134[0] = v107;
                  v108 = (const struct std::nothrow_t *)v188[0];
                  *(void **)Data = v188[0];
                  if ( (unsigned __int64)v107 >= 0x1000 )
                  {
                    std::_Adjust_manually_vector_aligned((void **)Data, (unsigned __int64 *)v134);
                    v107 = v134[0];
                    v108 = *(const struct std::nothrow_t **)Data;
                  }
                  operator delete(v108, (const struct std::nothrow_t *)v107);
                }
              }
              if ( v166.m128i_i64[1] > 7uLL )
              {
                v104 = (void *)(2 * v166.m128i_i64[1] + 2);
                v134[0] = v104;
                v105 = lpData[0];
                *(LPBYTE *)Data = lpData[0];
                if ( (unsigned __int64)v104 >= 0x1000 )
                {
                  std::_Adjust_manually_vector_aligned((void **)Data, (unsigned __int64 *)v134);
                  v104 = v134[0];
                  v105 = *(LPBYTE *)Data;
                }
                operator delete(v105, (const struct std::nothrow_t *)v104);
              }
            }
            if ( v135 )
              RegCloseKey(v135);
          }
        }
        else if ( !Value )
        {
          std::list<std::wstring>::_Emplace<std::wstring const &>(v136, v136[0], v151);
        }
      }
      STARTUPAPPINFO::~STARTUPAPPINFO((STARTUPAPPINFO *)&v147);
      STARTUPAPPINFO::~STARTUPAPPINFO((STARTUPAPPINFO *)&v170);
      if ( v169 > 7 )
      {
        v60 = (void *)(2 * v169 + 2);
        v134[0] = v60;
        v61 = (HKEY)v167[0];
        v135 = (HKEY)v167[0];
        if ( (unsigned __int64)v60 >= 0x1000 )
        {
          std::_Adjust_manually_vector_aligned((void **)&v135, (unsigned __int64 *)v134);
          v60 = v134[0];
          v61 = v135;
        }
        operator delete(v61, (const struct std::nothrow_t *)v60);
      }
      v54 = v14[2];
      if ( *(_BYTE *)(v54 + 25) )
      {
        for ( n = (_QWORD *)v14[1]; !*((_BYTE *)n + 25) && v14 == (_QWORD *)n[2]; n = (_QWORD *)n[1] )
          v14 = n;
      }
      else
      {
        n = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>::_Min((_QWORD *)v54);
      }
      v14 = n;
      v13 = (_QWORD **)v136[0];
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x147,
      (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
      v12);
  }
}
