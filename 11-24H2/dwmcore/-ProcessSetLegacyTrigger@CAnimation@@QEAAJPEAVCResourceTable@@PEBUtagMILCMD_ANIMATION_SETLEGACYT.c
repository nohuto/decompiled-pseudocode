/*
 * XREFs of ?ProcessSetLegacyTrigger@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETLEGACYTRIGGER@@@Z @ 0x1802930EC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180036D70 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAnimation::ProcessSetLegacyTrigger(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_SETLEGACYTRIGGER *a3)
{
  __int64 Resource; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  unsigned int v7; // edx
  int v8; // ebx
  unsigned int v9; // eax
  int v10; // r9d
  __int64 v11; // rax
  CAnimation *v13; // [rsp+40h] [rbp+8h] BYREF

  Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x5Eu);
  *((_QWORD *)this + 18) = Resource;
  v5 = Resource;
  if ( Resource )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Resource + 8LL))(Resource);
  v6 = *(unsigned int *)(v5 + 96);
  v13 = this;
  v7 = v6 + 1;
  if ( (int)v6 + 1 < (unsigned int)v6 )
  {
    v8 = -2147024362;
    v9 = 181;
    v10 = -2147024362;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v9, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0xD9u, 0LL);
    return (unsigned int)v8;
  }
  v8 = 0;
  if ( v7 > *(_DWORD *)(v5 + 92) )
  {
    v8 = DynArrayImpl<0>::AddMultipleAndSet(v5 + 72, 8, 1, &v13);
    v10 = v8;
    if ( v8 < 0 )
    {
      v9 = 192;
      goto LABEL_11;
    }
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(v5 + 72) + 8 * v6) = this;
    *(_DWORD *)(v5 + 96) = v7;
  }
  v11 = *(_QWORD *)(v5 + 104);
  if ( v11 )
  {
    *((_QWORD *)this + 17) = v11;
    *((_QWORD *)this + 25) = v11;
  }
  return (unsigned int)v8;
}
