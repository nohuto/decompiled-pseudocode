/*
 * XREFs of ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEBXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1802C8EDC
 * Callers:
 *     ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x1801712DC (-CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??$SetInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z @ 0x1801E5B44 (--$SetInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z.c)
 *     ??2CD2DSharedBuffer@@KAPEAX_K@Z @ 0x1801EFA3C (--2CD2DSharedBuffer@@KAPEAX_K@Z.c)
 *     ??$ReleaseInterface@VCD2DSharedBuffer@@@@YAXAEAPEAVCD2DSharedBuffer@@@Z @ 0x18021E930 (--$ReleaseInterface@VCD2DSharedBuffer@@@@YAXAEAPEAVCD2DSharedBuffer@@@Z.c)
 */

__int64 __fastcall CD2DSharedBuffer::CreateFromSharedSection(
        const void *a1,
        int a2,
        struct CSharedSection *a3,
        struct ID2D1PrivateCompositorBuffer **a4)
{
  unsigned int v8; // ebx
  _DWORD *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // rdi
  unsigned int v14; // [rsp+20h] [rbp-38h]
  __int64 v15[5]; // [rsp+30h] [rbp-28h] BYREF

  v8 = 0;
  v9 = CD2DSharedBuffer::operator new();
  v12 = v9;
  if ( v9 )
  {
    v9[2] = 0;
    *((_QWORD *)v9 + 2) = a1;
    *(_QWORD *)v9 = &CD2DSharedBuffer::`vftable';
    v9[6] = a2;
    SetInterface<CSharedSection,CSharedSection>((_QWORD *)v9 + 4, (__int64)a3, v10, v11, v14);
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v12 + 2));
    v15[0] = 0LL;
    *a4 = (struct ID2D1PrivateCompositorBuffer *)v12;
  }
  else
  {
    v15[0] = 0LL;
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x3Eu, 0LL);
  }
  ReleaseInterface<CD2DSharedBuffer>(v15);
  return v8;
}
