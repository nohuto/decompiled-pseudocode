/*
 * XREFs of ?IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x1400361F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyTo@?$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAJPEAPEAUIAudioMediaType@@@Z @ 0x1400364A4 (-CopyTo@-$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x1400659FC (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065CDC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProcessNode::IsRightFormatSupported(
        CProcessNode *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType **a3,
        struct IAudioMediaType *a4)
{
  char *v6; // rsi
  int v7; // ebx
  __int64 v8; // rax
  __int128 v10; // [rsp+20h] [rbp-60h] BYREF
  __int128 v11; // [rsp+30h] [rbp-50h]
  int v12; // [rsp+40h] [rbp-40h]
  __int128 v13; // [rsp+48h] [rbp-38h] BYREF
  __int128 v14; // [rsp+58h] [rbp-28h]
  int v15; // [rsp+68h] [rbp-18h]

  v12 = 0;
  v15 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( !a2 )
    return 0;
  v6 = (char *)this + 16;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, struct IAudioMediaType **, struct IAudioMediaType *))(**((_QWORD **)this + 2) + 48LL))(
         *((_QWORD *)this + 2),
         &v13,
         a3,
         a4);
  if ( v7 < 0
    || (v7 = ((__int64 (__fastcall *)(struct IAudioMediaType *, __int128 *))a2->lpVtbl->GetUncompressedAudioFormat)(
               a2,
               &v10),
        v7 < 0) )
  {
LABEL_15:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_c1831df7ab483f3d860eb31c248acfa4_Traceguids);
    }
    AudDGTraceLoggingErrorHelper("CProcessNode::IsRightFormatSupported", 0x120u, v7);
    return (unsigned int)v7;
  }
  v8 = v10 - v13;
  if ( (_QWORD)v10 == (_QWORD)v13 )
    v8 = *((_QWORD *)&v10 + 1) - *((_QWORD *)&v13 + 1);
  if ( v8
    || (_DWORD)v11 != (_DWORD)v14
    || *(_QWORD *)((char *)&v11 + 4) != *(_QWORD *)((char *)&v14 + 4)
    || *((float *)&v11 + 3) != *((float *)&v14 + 3) )
  {
    v7 = ATL::CComPtrBase<IAudioMediaType>::CopyTo(v6, a3);
    if ( v7 >= 0 )
      return 1;
    goto LABEL_15;
  }
  return (unsigned int)v7;
}
