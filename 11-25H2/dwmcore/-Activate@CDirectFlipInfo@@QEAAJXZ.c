/*
 * XREFs of ?Activate@CDirectFlipInfo@@QEAAJXZ @ 0x1801C1748
 * Callers:
 *     ?ApplyConfiguration@COverlayContext@@QEAAX_NPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x1800C9F20 (-ApplyConfiguration@COverlayContext@@QEAAX_NPEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180109DB8 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?CalcEarlyWakeup@CDirectFlipInfo@@IEAAXXZ @ 0x1801C1918 (-CalcEarlyWakeup@CDirectFlipInfo@@IEAAXXZ.c)
 *     ?EnsureIndependentFlipState@CDirectFlipInfo@@QEAAJXZ @ 0x1801C1984 (-EnsureIndependentFlipState@CDirectFlipInfo@@QEAAJXZ.c)
 *     ?IsIndependentFlip@CDirectFlipInfo@@QEBA_NXZ @ 0x1801C1A6C (-IsIndependentFlip@CDirectFlipInfo@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?CalcIndependentFlipSupport@CDirectFlipInfo@@IEAAXXZ @ 0x180287C44 (-CalcIndependentFlipSupport@CDirectFlipInfo@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDirectFlipInfo::Activate(CDirectFlipInfo *this)
{
  int v1; // ebx
  unsigned int v2; // ebp
  char v3; // di
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  void (__fastcall *v8)(__int64, __int64, __int64, void *, _DWORD, __int64); // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // eax
  unsigned int v13; // ebx
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, _QWORD, __int64, __int64); // rbx
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // eax
  _BYTE v20[16]; // [rsp+40h] [rbp-38h] BYREF

  v1 = *((_DWORD *)this + 12);
  v2 = 0;
  v3 = *((_BYTE *)this + 108);
  if ( v1 != 3 )
    CDirectFlipInfo::CalcIndependentFlipSupport(this);
  CDirectFlipInfo::CalcEarlyWakeup(this);
  if ( v1 != 3 || v3 != *((_BYTE *)this + 108) )
  {
    v15 = *((_QWORD *)this + 2);
    v16 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v15 + 248LL);
    v17 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 280LL))(*(_QWORD *)this);
    LOBYTE(v18) = *((_BYTE *)this + 108);
    v19 = v16(v15, *((_QWORD *)this + 3), v18, v17);
    v2 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0xE9u, 0LL);
      return v2;
    }
    *((_DWORD *)this + 12) = 3;
  }
  CDirectFlipInfo::EnsureIndependentFlipState(this);
  if ( CDirectFlipInfo::IsIndependentFlip(this) )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)this + 8LL) + 32LL))(*(_QWORD *)this + 8LL);
    v6 = *((_QWORD *)this + 2);
    v7 = v5;
    v8 = *(void (__fastcall **)(__int64, __int64, __int64, void *, _DWORD, __int64))(*(_QWORD *)v6 + 224LL);
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 280LL))(*(_QWORD *)this);
    v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v9 + 8) + 24LL))(v9 + 8, v20);
    v11 = *(unsigned int *)(v10 + 8);
    LOBYTE(v11) = 1;
    v8(v6, v11, 1LL, &CMILMatrix::Identity, *(_DWORD *)(v10 + 8), v7);
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 376LL))(
            *((_QWORD *)this + 2),
            *(_QWORD *)this);
    v13 = v12;
    if ( v12 != *((_DWORD *)this + 14) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 2) + 400LL))(
        *((_QWORD *)this + 2),
        *((_QWORD *)this + 3),
        v12);
      *((_DWORD *)this + 14) = v13;
    }
  }
  *((_BYTE *)this + 105) |= CDirectFlipInfo::RenderingRealizationChanged(this);
  return v2;
}
