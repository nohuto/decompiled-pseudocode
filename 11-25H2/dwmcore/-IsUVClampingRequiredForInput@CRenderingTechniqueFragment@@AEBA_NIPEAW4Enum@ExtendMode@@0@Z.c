/*
 * XREFs of ?IsUVClampingRequiredForInput@CRenderingTechniqueFragment@@AEBA_NIPEAW4Enum@ExtendMode@@0@Z @ 0x18006E32C
 * Callers:
 *     ?ClearConsumerUVClampingRequirement@CRenderingTechniqueFragment@@QEAAXXZ @ 0x18025A5EC (-ClearConsumerUVClampingRequirement@CRenderingTechniqueFragment@@QEAAXXZ.c)
 * Callees:
 *     ?IsUVClampingRequired@CPassthroughEffect@@UEBA_NIIPEAW4SampleEdgeMode@Composition@UI@Windows@@0@Z @ 0x18006E550 (-IsUVClampingRequired@CPassthroughEffect@@UEBA_NIIPEAW4SampleEdgeMode@Composition@UI@Windows@@0@.c)
 *     ?IsUVClampingRequired@CCustomKernelEffect@@UEBA_NIIPEAW4SampleEdgeMode@Composition@UI@Windows@@0@Z @ 0x18006E570 (-IsUVClampingRequired@CCustomKernelEffect@@UEBA_NIIPEAW4SampleEdgeMode@Composition@UI@Windows@@0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CRenderingTechniqueFragment::IsUVClampingRequiredForInput(
        CRenderingTechniqueFragment *this,
        unsigned int a2,
        enum ExtendMode::Enum *a3,
        enum ExtendMode::Enum *a4)
{
  char v4; // bl
  char v5; // r10
  char v6; // al
  __int64 v8; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  CPassthroughEffect *v14; // rcx
  bool (__fastcall *v15)(CPassthroughEffect *__hidden, unsigned int, unsigned int, enum Windows::UI::Composition::SampleEdgeMode *, enum Windows::UI::Composition::SampleEdgeMode *); // rax
  bool IsUVClampingRequired; // al
  char v18; // [rsp+50h] [rbp+8h] BYREF
  char v19; // [rsp+60h] [rbp+18h] BYREF

  v4 = *((_BYTE *)this + 112);
  v5 = 0;
  v6 = 0;
  v18 = 0;
  v19 = 0;
  v8 = *(_QWORD *)this;
  if ( v8 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 64LL))(v8);
    v13 = *((unsigned int *)this + 4);
    v14 = (CPassthroughEffect *)v12;
    v15 = *(bool (__fastcall **)(CPassthroughEffect *__hidden, unsigned int, unsigned int, enum Windows::UI::Composition::SampleEdgeMode *, enum Windows::UI::Composition::SampleEdgeMode *))(*(_QWORD *)v12 + 56LL);
    if ( v15 == CPassthroughEffect::IsUVClampingRequired )
    {
      IsUVClampingRequired = CPassthroughEffect::IsUVClampingRequired(
                               v14,
                               v13,
                               a2,
                               (enum Windows::UI::Composition::SampleEdgeMode *)&v18,
                               (enum Windows::UI::Composition::SampleEdgeMode *)&v19);
    }
    else if ( v15 == CCustomKernelEffect::IsUVClampingRequired )
    {
      IsUVClampingRequired = CCustomKernelEffect::IsUVClampingRequired(
                               v14,
                               v13,
                               a2,
                               (enum Windows::UI::Composition::SampleEdgeMode *)&v18,
                               (enum Windows::UI::Composition::SampleEdgeMode *)&v19);
    }
    else
    {
      IsUVClampingRequired = v15(
                               v14,
                               v13,
                               a2,
                               (enum Windows::UI::Composition::SampleEdgeMode *)&v18,
                               (enum Windows::UI::Composition::SampleEdgeMode *)&v19);
    }
    v5 = v18;
    v4 |= IsUVClampingRequired;
    v6 = v19;
  }
  if ( a3 )
    *(_BYTE *)a3 = v5;
  if ( a4 )
    *(_BYTE *)a4 = v6;
  return v4;
}
