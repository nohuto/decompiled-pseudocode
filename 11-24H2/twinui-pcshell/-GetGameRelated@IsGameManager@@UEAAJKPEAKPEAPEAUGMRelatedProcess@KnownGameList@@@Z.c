/*
 * XREFs of ?GetGameRelated@IsGameManager@@UEAAJKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@Z @ 0x1800A7830
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStringFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@W4GameProperty_t@ExecutionModel@@PEAVString@Internal@Windows@@@Z @ 0x1800A8DE4 (-GetStringFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@W4GameProperty_t@ExecutionModel@@PEAVS.c)
 *     ?GetGlobalStringFromGameConfigStore@IsGameManager@@AEAAJW4GlobalProperty_t@ExecutionModel@@PEAVString@Internal@Windows@@@Z @ 0x1800A9774 (-GetGlobalStringFromGameConfigStore@IsGameManager@@AEAAJW4GlobalProperty_t@ExecutionModel@@PEAVS.c)
 *     memcpy_s_0 @ 0x1800D2E90 (memcpy_s_0.c)
 *     ??$make_unique_cotaskmem_nothrow@$$BY0A@UGMRelatedProcess@KnownGameList@@@wil@@YA?AV?$unique_ptr@$$BY0A@UGMRelatedProcess@KnownGameList@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@_K@Z @ 0x1802970D0 (--$make_unique_cotaskmem_nothrow@$$BY0A@UGMRelatedProcess@KnownGameList@@@wil@@YA-AV-$unique_ptr.c)
 *     ??1?$out_param_ptr_t@PEAPEAUGMRelatedProcess@KnownGameList@@V?$unique_ptr@$$BY0A@UGMRelatedProcess@KnownGameList@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1802CF0DC (--1-$out_param_ptr_t@PEAPEAUGMRelatedProcess@KnownGameList@@V-$unique_ptr@$$BY0A@UGMRelatedProce.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?GetGameRelatedFromGcsData@AutoGameProfile@@YAJPEBGKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@Z @ 0x18067B2F8 (-GetGameRelatedFromGcsData@AutoGameProfile@@YAJPEBGKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall IsGameManager::GetGameRelated(
        IsGameManager *this,
        unsigned int a2,
        unsigned int *a3,
        struct KnownGameList::GMRelatedProcess **a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 *v11; // rcx
  unsigned int v12; // r12d
  __int64 v13; // rax
  unsigned int v14; // r15d
  int StringFromGameConfigStore; // eax
  __int64 v16; // rdx
  HSTRING v17; // rdi
  int GlobalStringFromGameConfigStore; // eax
  HSTRING v19; // rbx
  unsigned int v20; // esi
  HSTRING v21; // rbx
  void *v22; // rcx
  void *v23; // rcx
  UINT32 StringLen; // ebx
  AutoGameProfile *StringRawBuffer; // rax
  int GameRelatedFromGcsData; // eax
  UINT32 v27; // esi
  AutoGameProfile *v28; // rax
  int v29; // eax
  char *v30; // r14
  void *v31; // rcx
  _QWORD *v32; // rax
  void *v33; // rcx
  struct KnownGameList::GMRelatedProcess **v34; // [rsp+20h] [rbp-E0h]
  HSTRING string; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID v36; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v38; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v39; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v40; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v41[4]; // [rsp+60h] [rbp-A0h] BYREF
  char v42; // [rsp+70h] [rbp-90h]
  struct KnownGameList::GMRelatedProcess **v43; // [rsp+80h] [rbp-80h]
  _BYTE v44[2]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 v45; // [rsp+92h] [rbp-6Eh]
  _BYTE Source[620]; // [rsp+94h] [rbp-6Ch] BYREF
  __int128 v47; // [rsp+300h] [rbp+200h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+368h] [rbp+268h]

  v43 = a4;
  memset_0(v44, 0, 0x270uLL);
  v38 = 624;
  *a3 = 0;
  *a4 = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, _BYTE *, unsigned int *))(**((_QWORD **)this + 2) + 80LL))(
         *((_QWORD *)this + 2),
         4LL,
         v44,
         &v38);
  if ( (v8 & 0x80000000) != 0 )
  {
    v9 = 542LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)v8);
    return v8;
  }
  if ( v38 > 0x270 )
  {
    v8 = -2147418113;
    v9 = 544LL;
    goto LABEL_3;
  }
  v11 = (__int64 *)*((_QWORD *)this + 2);
  pv = 0LL;
  v47 = xmmword_180780478;
  v36 = 0LL;
  v12 = 0;
  v13 = *v11;
  v14 = 0;
  v39 = 0;
  v40 = 0;
  if ( (*(int (__fastcall **)(__int64 *, _QWORD, __int128 *))(v13 + 32))(v11, a2, &v47) >= 0 )
  {
    *(_OWORD *)v41 = v47;
    string = 0LL;
    StringFromGameConfigStore = IsGameManager::GetStringFromGameConfigStore(this, v41, 22LL, &string);
    v17 = string;
    if ( StringFromGameConfigStore >= 0 && WindowsGetStringLen(string) )
    {
      *(_QWORD *)&v41[2] = 0LL;
      *(_QWORD *)v41 = &pv;
      v42 = 1;
      StringLen = WindowsGetStringLen(v17);
      StringRawBuffer = (AutoGameProfile *)WindowsGetStringRawBuffer(v17, 0LL);
      GameRelatedFromGcsData = AutoGameProfile::GetGameRelatedFromGcsData(
                                 StringRawBuffer,
                                 (const unsigned __int16 *)StringLen,
                                 (unsigned int)&v39,
                                 &v41[2],
                                 v34);
      if ( GameRelatedFromGcsData < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x232,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)GameRelatedFromGcsData);
      wil::details::out_param_ptr_t<KnownGameList::GMRelatedProcess * *,wistd::unique_ptr<KnownGameList::GMRelatedProcess [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_ptr_t<KnownGameList::GMRelatedProcess * *,wistd::unique_ptr<KnownGameList::GMRelatedProcess [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(v41);
      v12 = v39;
    }
    string = 0LL;
    GlobalStringFromGameConfigStore = IsGameManager::GetGlobalStringFromGameConfigStore(this, v16, &string);
    v19 = string;
    if ( GlobalStringFromGameConfigStore >= 0 && WindowsGetStringLen(string) )
    {
      *(_QWORD *)&v41[2] = 0LL;
      *(_QWORD *)v41 = &v36;
      v42 = 1;
      v27 = WindowsGetStringLen(v19);
      v28 = (AutoGameProfile *)WindowsGetStringRawBuffer(v19, 0LL);
      v29 = AutoGameProfile::GetGameRelatedFromGcsData(
              v28,
              (const unsigned __int16 *)v27,
              (unsigned int)&v40,
              &v41[2],
              v34);
      if ( v29 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x23D,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)v29);
      wil::details::out_param_ptr_t<KnownGameList::GMRelatedProcess * *,wistd::unique_ptr<KnownGameList::GMRelatedProcess [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_ptr_t<KnownGameList::GMRelatedProcess * *,wistd::unique_ptr<KnownGameList::GMRelatedProcess [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(v41);
      v14 = v40;
    }
    if ( v19 )
      WindowsDeleteString(v19);
    if ( v17 )
      WindowsDeleteString(v17);
  }
  v20 = v12 + v14 + v45;
  wil::make_unique_cotaskmem_nothrow<KnownGameList::GMRelatedProcess [0]>(&string, v20);
  v21 = string;
  if ( !string )
  {
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x244,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)0x8007000ELL);
    v22 = v36;
    v36 = 0LL;
    if ( v22 )
      CoTaskMemFree(v22);
    v23 = pv;
    pv = 0LL;
    if ( v23 )
      CoTaskMemFree(v23);
    return v8;
  }
  memcpy_s_0(string, 62LL * v45, Source, 62LL * v45);
  v30 = (char *)v21 + 62 * v45;
  if ( v12 )
  {
    memcpy_s_0((char *)v21 + 62 * v45, 62LL * v12, pv, 62LL * v12);
    v30 += 62 * v12;
  }
  if ( v14 )
    memcpy_s_0(v30, 62LL * v14, v36, 62LL * v14);
  v31 = v36;
  v32 = v43;
  v36 = 0LL;
  *a3 = v20;
  *v32 = v21;
  if ( v31 )
    CoTaskMemFree(v31);
  v33 = pv;
  pv = 0LL;
  if ( v33 )
    CoTaskMemFree(v33);
  return 0LL;
}
