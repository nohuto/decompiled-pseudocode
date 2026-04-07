/*
 * XREFs of ?ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ @ 0x180017BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x18000BC44 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAtlasedRectsVisual::ValidateVisualPostSubgraph(CAtlasedRectsVisual *this, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned int v7; // ecx
  int v8; // edx
  int v9; // eax
  unsigned int v10; // edi
  unsigned __int64 v12; // r8
  int v13; // r14d
  int v14; // r14d
  int v15; // ebp
  int v16; // ebp
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // edi
  unsigned int v20; // eax
  int v21; // eax
  unsigned int v22; // [rsp+20h] [rbp-28h]
  unsigned int v23; // [rsp+20h] [rbp-28h]
  unsigned int v24; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 v26; // [rsp+50h] [rbp+8h]
  __int64 v27; // [rsp+58h] [rbp+10h]

  if ( (*((_DWORD *)this + 22) & 0x100) != 0 )
  {
    LOBYTE(a3) = *((_DWORD *)this + 24) != 0;
    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                           + 16LL)
                                                             + 440LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL),
            a3);
    v19 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x3BBu, 0LL);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAA,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
        (const char *)v19,
        v23);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6D,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\atlasedrectsvisual.cpp",
        (const char *)v19,
        v24);
      return v19;
    }
    *((_DWORD *)this + 22) &= ~0x100u;
  }
  v4 = *((_DWORD *)this + 22);
  if ( (v4 & 0x1000) != 0 )
  {
    v5 = 0LL;
    if ( *((_DWORD *)this + 68) )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(*((_QWORD *)this + 31) + 8 * v5);
        v7 = *(_DWORD *)(v6 + 32);
        v8 = *(_DWORD *)(v6 + 40);
        if ( v7 != 0x7FFFFFFF
          || *(_DWORD *)(v6 + 36) != 0x7FFFFFFF
          || v8 != 0x7FFFFFFF
          || *(_DWORD *)(v6 + 44) != 0x7FFFFFFF )
        {
          break;
        }
LABEL_8:
        v5 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v5 >= *((_DWORD *)this + 68) )
          goto LABEL_9;
      }
      v26 = *(_QWORD *)(v6 + 24);
      v12 = HIDWORD(v26);
      if ( *(_DWORD *)(v6 + 36) == 0x7FFFFFFF )
      {
        v20 = 0;
        if ( v7 != 0x7FFFFFFF )
          v20 = *(_DWORD *)(v6 + 32);
        v7 = v20;
        LODWORD(v27) = v20;
      }
      else
      {
        v13 = *((_DWORD *)this + 32);
        if ( v7 != 0x7FFFFFFF )
        {
          v14 = v13 - *(_DWORD *)(v6 + 36) - v7;
          LODWORD(v27) = *(_DWORD *)(v6 + 32);
          LODWORD(v26) = v14;
          goto LABEL_17;
        }
        v7 = v13 - v26 - *(_DWORD *)(v6 + 36);
        LODWORD(v27) = v7;
      }
      v14 = *(_QWORD *)(v6 + 24);
LABEL_17:
      if ( *(_DWORD *)(v6 + 44) == 0x7FFFFFFF )
      {
        v21 = 0;
        if ( v8 != 0x7FFFFFFF )
          v21 = *(_DWORD *)(v6 + 40);
        HIDWORD(v27) = v21;
      }
      else
      {
        v15 = *((_DWORD *)this + 33);
        if ( v8 != 0x7FFFFFFF )
        {
          HIDWORD(v27) = *(_DWORD *)(v6 + 40);
          v16 = v15 - v8 - *(_DWORD *)(v6 + 44);
          HIDWORD(v26) = v16;
LABEL_20:
          if ( v14 <= 0 )
          {
            v14 = 0;
            LODWORD(v26) = 0;
          }
          if ( v16 <= 0 )
          {
            v16 = 0;
            HIDWORD(v26) = 0;
          }
          if ( __PAIR64__(HIDWORD(v27), v7) != *(_QWORD *)(v6 + 16) )
          {
            *(_QWORD *)(v6 + 16) = v27;
            CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v6, 1, 0x2000u);
          }
          if ( *(_DWORD *)(v6 + 24) != v14 || *(_DWORD *)(v6 + 28) != v16 )
          {
            *(_DWORD *)(v6 + 96) |= 1u;
            v17 = *(_QWORD *)(v6 + 80);
            *(_QWORD *)(v6 + 24) = v26;
            if ( v17 )
              (*(void (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)v17 + 24LL))(v17, 0x2000LL, v12);
          }
          goto LABEL_8;
        }
        HIDWORD(v27) = v15 - v12 - *(_DWORD *)(v6 + 44);
      }
      v16 = HIDWORD(*(_QWORD *)(v6 + 24));
      goto LABEL_20;
    }
LABEL_9:
    *((_DWORD *)this + 22) &= ~0x1000u;
    v4 = *((_DWORD *)this + 22);
  }
  if ( (v4 & 0x2000) == 0 )
    return 0LL;
  v9 = (*(__int64 (__fastcall **)(CAtlasedRectsVisual *))(*(_QWORD *)this + 208LL))(this);
  v10 = v9;
  if ( v9 >= 0 )
  {
    *((_DWORD *)this + 22) &= ~0x2000u;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x78,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\atlasedrectsvisual.cpp",
    (const char *)(unsigned int)v9,
    v22);
  return v10;
}
