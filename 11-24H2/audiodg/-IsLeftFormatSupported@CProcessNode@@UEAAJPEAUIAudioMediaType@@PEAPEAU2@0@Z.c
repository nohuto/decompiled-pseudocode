/*
 * XREFs of ?IsLeftFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x140036350
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyTo@?$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAJPEAPEAUIAudioMediaType@@@Z @ 0x1400364A4 (-CopyTo@-$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x1400659FC (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065CDC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProcessNode::IsLeftFormatSupported(
        CProcessNode *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType **a3,
        struct IAudioMediaType *a4)
{
  char *v4; // rsi
  __int64 v5; // rcx
  int v8; // ebx
  __int64 v9; // rax
  __int128 v11; // [rsp+20h] [rbp-60h] BYREF
  __int128 v12; // [rsp+30h] [rbp-50h]
  int v13; // [rsp+40h] [rbp-40h]
  __int128 v14; // [rsp+48h] [rbp-38h] BYREF
  __int128 v15; // [rsp+58h] [rbp-28h]
  int v16; // [rsp+68h] [rbp-18h]

  v4 = (char *)this + 8;
  v5 = *((_QWORD *)this + 1);
  v13 = 0;
  v16 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( !v5 )
    return 0;
  v8 = (*(__int64 (__fastcall **)(__int64, __int128 *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v5 + 48LL))(
         v5,
         &v14,
         a3,
         a4);
  if ( v8 < 0
    || (v8 = ((__int64 (__fastcall *)(struct IAudioMediaType *, __int128 *))a2->lpVtbl->GetUncompressedAudioFormat)(
               a2,
               &v11),
        v8 < 0) )
  {
LABEL_14:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_c1831df7ab483f3d860eb31c248acfa4_Traceguids);
    }
    AudDGTraceLoggingErrorHelper("CProcessNode::IsLeftFormatSupported", 0xD9u, v8);
    return (unsigned int)v8;
  }
  v9 = v11 - v14;
  if ( (_QWORD)v11 == (_QWORD)v14 )
    v9 = *((_QWORD *)&v11 + 1) - *((_QWORD *)&v14 + 1);
  if ( v9
    || (_DWORD)v12 != (_DWORD)v15
    || *(_QWORD *)((char *)&v12 + 4) != *(_QWORD *)((char *)&v15 + 4)
    || *((float *)&v12 + 3) != *((float *)&v15 + 3) )
  {
    v8 = ATL::CComPtrBase<IAudioMediaType>::CopyTo(v4, a3);
    if ( v8 >= 0 )
      return 1;
    goto LABEL_14;
  }
  return (unsigned int)v8;
}
