/*
 * XREFs of ?Partition_SetCursor@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETCURSOR@@@Z @ 0x18019DF3C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800368D0 (-IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800370D0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800373C0 (-IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180180980 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18019E044 (-RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x18019E0EC (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?FailFastOnMalformedPacket@CComposition@@KAXW4MILCMD_CRASHID@@PEBX@Z @ 0x18019EA4C (-FailFastOnMalformedPacket@CComposition@@KAXW4MILCMD_CRASHID@@PEBX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::Partition_SetCursor(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_SETCURSOR *a4)
{
  __int64 v6; // r8
  int v7; // r10d
  __int64 v8; // rbx
  __int64 v9; // rcx
  bool (__fastcall *v10)(__int64, int); // rax
  bool v11; // al
  struct CVisual *v12; // rdx
  int v14; // eax

  if ( !HANDLE_TABLE::ValidEntry((struct CResourceTable *)((char *)a3 + 16), *((_DWORD *)a4 + 1))
    || (v8 = *(_QWORD *)(v6 + 40) + (unsigned int)(*(_DWORD *)(v6 + 24) * v7), (v9 = *(_QWORD *)(v8 + 8)) == 0)
    || ((v10 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v9 + 64LL), v10 == CKeyframeAnimation::IsOfType)
      ? (v11 = CKeyframeAnimation::IsOfType(v9, 184))
      : v10 != CVisual::IsOfType
      ? (v10 != CSharedSection::IsOfType
       ? (v11 = v10(v9, 184))
       : (v11 = CSharedSection::IsOfType(v9, 184)))
      : (v11 = CVisual::IsOfType(v9, 184)),
        !v11 || (v12 = *(struct CVisual **)(v8 + 8)) == 0LL) )
  {
    CComposition::FailFastOnMalformedPacket(4261279585LL, 0LL);
  }
  if ( *((_BYTE *)a4 + 8) )
  {
    v14 = CComposition::AddCursorVisual(this, v12);
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x49Du, 0LL);
  }
  else
  {
    CComposition::RemoveCursorVisual(this, v12);
  }
  return 0LL;
}
