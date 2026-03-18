/*
 * XREFs of ?EnsureIndependentFlipState@CDirectFlipInfo@@QEAAJXZ @ 0x1801C1984
 * Callers:
 *     ?Activate@CDirectFlipInfo@@QEAAJXZ @ 0x1801C1748 (-Activate@CDirectFlipInfo@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsIndependentFlip@CDirectFlipInfo@@QEBA_NXZ @ 0x1801C1A6C (-IsIndependentFlip@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?DisableIndependentFlip@CDirectFlipInfo@@QEAAJXZ @ 0x180287CAC (-DisableIndependentFlip@CDirectFlipInfo@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDirectFlipInfo::EnsureIndependentFlipState(__int64 **this)
{
  unsigned int v1; // ebx
  bool IsIndependentFlip; // al
  __int64 *v4; // rsi
  __int64 v5; // rbp
  __int64 v7; // rax
  unsigned int v8; // eax
  int v9; // eax
  int v10; // eax

  v1 = 0;
  if ( *((_BYTE *)this + 106) )
  {
    IsIndependentFlip = CDirectFlipInfo::IsIndependentFlip((CDirectFlipInfo *)this);
    v4 = this[2];
    v5 = *v4;
    if ( IsIndependentFlip )
    {
      if ( (*(unsigned int (__fastcall **)(__int64 *))(v5 + 368))(this[2]) == -1 )
      {
        v10 = CDirectFlipInfo::DisableIndependentFlip((CDirectFlipInfo *)this);
        v1 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x1ADu, 0LL);
      }
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(__int64 *))(**this + 280))(*this);
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 224LL))(v7);
      v9 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD, _QWORD))(v5 + 384))(v4, this[3], v8, 0LL);
      v1 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x1B5u, 0LL);
    }
  }
  return v1;
}
