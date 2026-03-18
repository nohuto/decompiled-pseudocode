/*
 * XREFs of ?ProcessPropertiesUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_PROPERTIESUPDATE@@PEBXI@Z @ 0x1801A9ED0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@E$0A@@@QEAAJPEFBEI@Z @ 0x1801AAB90 (-AddMultipleAndSet@-$DynArray@E$0A@@@QEAAJPEFBEI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGenericInk::ProcessPropertiesUpdate(
        CGenericInk *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GENERICINK_PROPERTIESUPDATE *a3,
        const void *a4,
        unsigned int a5)
{
  _QWORD *v5; // r14
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rsi
  __int64 i; // rbp
  __int64 v11; // rcx
  int v12; // eax

  v5 = (_QWORD *)((char *)this + 208);
  *((_DWORD *)this + 58) = 0;
  v7 = DynArray<unsigned char,0>::AddMultipleAndSet((char *)this + 208, a4, a5);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x16u, 0LL);
  }
  else
  {
    v9 = (__int64)(*((_QWORD *)this + 22) - *((_QWORD *)this + 21)) >> 3;
    for ( i = 0LL; (unsigned int)i < (unsigned int)v9; i = (unsigned int)(i + 1) )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 21) + 8 * i) + 72LL);
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 40LL))(
              v11,
              *v5,
              *((unsigned int *)this + 58));
      v8 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x1Du, 0LL);
        return v8;
      }
    }
    (*(void (__fastcall **)(CGenericInk *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
  }
  return v8;
}
