/*
 * XREFs of ?FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z @ 0x14003B118
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140010720 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140011698 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPipeInstance::FindConverter(
        CPipeInstance *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType *a3,
        int *a4,
        struct _GUID *a5)
{
  struct IAudioMediaTypeVtbl *lpVtbl; // rax
  HRESULT (__stdcall *GetUncompressedAudioFormat)(IAudioMediaType *, UNCOMPRESSEDAUDIOFORMAT *); // rax
  int v10; // edi
  int v11; // ecx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int128 v15; // [rsp+20h] [rbp-41h] BYREF
  __int128 v16; // [rsp+30h] [rbp-31h]
  int v17; // [rsp+40h] [rbp-21h]
  __int128 v18; // [rsp+48h] [rbp-19h] BYREF
  __int128 v19; // [rsp+58h] [rbp-9h]
  int v20; // [rsp+68h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+57h]

  v20 = 0;
  v17 = 0;
  *a4 = 1;
  lpVtbl = a3->lpVtbl;
  v18 = 0LL;
  GetUncompressedAudioFormat = lpVtbl->GetUncompressedAudioFormat;
  v19 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v10 = ((__int64 (__fastcall *)(struct IAudioMediaType *, __int128 *))GetUncompressedAudioFormat)(a3, &v18);
  if ( v10 < 0 )
  {
    v13 = 2239LL;
    goto LABEL_10;
  }
  v10 = ((__int64 (__fastcall *)(struct IAudioMediaType *, __int128 *))a2->lpVtbl->GetUncompressedAudioFormat)(a2, &v15);
  if ( v10 < 0 )
  {
    v13 = 2241LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  if ( *((float *)&v19 + 3) != *((float *)&v16 + 3) || (v11 = *((_DWORD *)this + 35), (v11 & 8) != 0) )
  {
    if ( (*((_BYTE *)this + 140) & 2) != 0 )
    {
      *a5 = GUID_27c98999_2895_4829_b080_5a8b65bd3db0;
      if ( (*((_BYTE *)this + 140) & 8) != 0 )
        *a4 = 0;
      *((_DWORD *)this + 35) &= 0xFFFFFFF5;
      return 0LL;
    }
    v14 = 2246LL;
  }
  else if ( (_DWORD)v19 == (_DWORD)v16 )
  {
    if ( (v11 & 1) != 0 )
    {
      *a5 = GUID_3fd7f233_a716_472e_8f2f_c25954f34e96;
      return 0LL;
    }
    v14 = 2275LL;
  }
  else
  {
    if ( (v11 & 4) != 0 )
    {
      *a5 = GUID_541987ee_0e02_411e_9a85_1fc6156e7f4b;
      *((_DWORD *)this + 35) &= ~4u;
      return 0LL;
    }
    v14 = 2267LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
    (const char *)0x887C0030LL);
  return 2289827888LL;
}
