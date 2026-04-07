/*
 * XREFs of ?UpdateLayout@CVisual@@UEAAJ_N@Z @ 0x180017FA0
 * Callers:
 *     ?UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z @ 0x180017DD0 (-UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CButton@@UEAAJ_N@Z @ 0x180017E30 (-UpdateLayout@CButton@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z @ 0x180017F20 (-UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::UpdateLayout(CVisual *this, char a2)
{
  __int64 v2; // rax
  unsigned int v5; // r14d
  int v6; // edx
  int v7; // ecx
  int v9; // ebp
  unsigned __int64 v10; // r9
  int v11; // edi
  bool v12; // zf
  int v13; // ebp
  unsigned int v14; // ebp
  __int64 v15; // r8
  int v16; // edi
  int v17; // eax
  int v18; // eax
  unsigned int v19; // edi
  char v20; // si
  __int64 v21; // rcx
  unsigned __int64 v22; // [rsp+60h] [rbp+8h] BYREF
  __int64 v23; // [rsp+70h] [rbp+18h]

  v2 = *((_QWORD *)this + 3);
  v5 = 0;
  if ( !v2 )
    goto LABEL_6;
  v6 = *((_DWORD *)this + 34);
  v7 = *((_DWORD *)this + 36);
  if ( v6 == 0x7FFFFFFF
    && *((_DWORD *)this + 35) == 0x7FFFFFFF
    && v7 == 0x7FFFFFFF
    && *((_DWORD *)this + 37) == 0x7FFFFFFF )
  {
    goto LABEL_6;
  }
  v9 = 0;
  v22 = *((_QWORD *)this + 16);
  v10 = HIDWORD(v22);
  v11 = 0;
  v12 = *((_DWORD *)this + 35) == 0x7FFFFFFF;
  v23 = 0LL;
  if ( v12 )
  {
    if ( v6 != 0x7FFFFFFF )
    {
      v9 = v6;
      LODWORD(v23) = v6;
    }
  }
  else
  {
    v13 = *(_DWORD *)(v2 + 128);
    if ( v6 != 0x7FFFFFFF )
    {
      v14 = v13 - *((_DWORD *)this + 35) - v6;
      LODWORD(v23) = v6;
      v15 = v14;
      v9 = v6;
      goto LABEL_11;
    }
    v9 = v13 - v22 - *((_DWORD *)this + 35);
    LODWORD(v23) = v9;
  }
  v15 = (unsigned int)v22;
LABEL_11:
  if ( *((_DWORD *)this + 37) == 0x7FFFFFFF )
  {
    if ( v7 != 0x7FFFFFFF )
    {
      v11 = v7;
      HIDWORD(v23) = v7;
    }
    goto LABEL_24;
  }
  v16 = *(_DWORD *)(v2 + 132);
  if ( v7 == 0x7FFFFFFF )
  {
    v11 = v16 - HIDWORD(v22) - *((_DWORD *)this + 37);
    HIDWORD(v23) = v11;
LABEL_24:
    v17 = HIDWORD(v22);
    goto LABEL_14;
  }
  HIDWORD(v23) = v7;
  v17 = v16 - v7 - *((_DWORD *)this + 37);
  v11 = v7;
LABEL_14:
  if ( (int)v15 <= 0 )
    v15 = 0LL;
  LODWORD(v22) = v15;
  if ( v17 <= 0 )
    v17 = 0;
  HIDWORD(v22) = v17;
  v18 = (*(__int64 (__fastcall **)(CVisual *, unsigned __int64 *, __int64, unsigned __int64))(*(_QWORD *)this + 104LL))(
          this,
          &v22,
          v15,
          v10);
  v5 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x116u, 0LL);
    return v5;
  }
  if ( v9 != *((_DWORD *)this + 30) || v11 != *((_DWORD *)this + 31) )
  {
    *((_QWORD *)this + 15) = v23;
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 8LL);
  }
LABEL_6:
  if ( a2 )
  {
    v19 = -1;
    v20 = 0;
    while ( 1 )
    {
      if ( v20 )
      {
        ++v19;
      }
      else
      {
        v20 = 1;
        v19 = 0;
      }
      if ( v19 >= *((_DWORD *)this + 18) )
        break;
      v21 = *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * v19);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 24LL))(v21, 2LL);
    }
  }
  return v5;
}
