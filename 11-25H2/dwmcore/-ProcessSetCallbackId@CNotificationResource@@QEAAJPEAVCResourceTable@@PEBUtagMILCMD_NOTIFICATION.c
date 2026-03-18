/*
 * XREFs of ?ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID@@@Z @ 0x18014CF70
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18014BED0 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CNotificationResource::ProcessSetCallbackId(
        CNotificationResource *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID *a3)
{
  __int64 v3; // rax
  __int64 v5; // rbx
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rcx
  _DWORD *v9; // rsi
  unsigned int v10; // ebp
  __int64 v11; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  _QWORD **v15; // r9
  __int64 (__fastcall *v16)(CMessageConversationHost *__hidden, unsigned int, unsigned int); // rax
  unsigned int v17; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *((unsigned int *)a2 + 12);
  v5 = *((_QWORD *)this + 3);
  if ( (unsigned int)v3 < 0x10000 && (unsigned int)v3 < *(_DWORD *)(v5 + 864) )
  {
    v7 = *(volatile signed __int32 **)(*(_QWORD *)(v5 + 840) + 8 * v3);
    if ( v7 )
    {
      if ( _InterlockedAdd(v7 + 2, 1u) <= 0 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x18,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v17);
      v8 = *((_QWORD *)this + 7);
      if ( !v8 || !*(_DWORD *)(v8 + 108) )
        goto LABEL_7;
      if ( v7 != (volatile signed __int32 *)v8 )
      {
        v10 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x5Bu, 0LL);
        goto LABEL_9;
      }
      if ( *(_DWORD *)(v8 + 108) && (v9 = (_DWORD *)((char *)this + 72), *((_DWORD *)this + 18)) )
      {
        v10 = 0;
        v13 = *(unsigned int *)(v8 + 108);
        v14 = (unsigned int)*v9;
        v15 = *(_QWORD ***)(*((_QWORD *)this + 3) + 6416LL);
        v16 = (__int64 (__fastcall *)(CMessageConversationHost *__hidden, unsigned int, unsigned int))(*v15)[11];
        if ( v16 == CMessageConversationHost::FlushCallbackId )
          (*(void (__fastcall **)(_QWORD *, __int64, __int64, _QWORD))(*v15[3] + 80LL))(v15[3], v13, v14, 0LL);
        else
          v16(*(CMessageConversationHost **)(*((_QWORD *)this + 3) + 6416LL), v13, v14);
      }
      else
      {
LABEL_7:
        v9 = (_DWORD *)((char *)this + 72);
        v10 = 0;
      }
      *v9 = *((_DWORD *)a3 + 2);
      v11 = *(_QWORD *)this;
      *((_QWORD *)this + 7) = v7;
      (*(void (__fastcall **)(CNotificationResource *))(v11 + 184))(this);
LABEL_9:
      CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release((CDrawListCache *)v7);
      return v10;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x6AFu, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x53u, 0LL);
  return 2147942487LL;
}
