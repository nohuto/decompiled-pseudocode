/*
 * XREFs of ?_AddPrimitive@CAnimationResource@@IEAAJAEBUDwmAnimationPrimitive@@@Z @ 0x180078880
 * Callers:
 *     ?End@CAnimationResource@@UEAAJNM@Z @ 0x18004A070 (-End@CAnimationResource@@UEAAJNM@Z.c)
 *     ?AddCubic@CAnimationResource@@UEAAJNMMMM@Z @ 0x1800787C0 (-AddCubic@CAnimationResource@@UEAAJNMMMM@Z.c)
 *     ?AddRepeat@CAnimationResource@@UEAAJNN@Z @ 0x1800A7E90 (-AddRepeat@CAnimationResource@@UEAAJNN@Z.c)
 *     ?AddSinusoidal@CAnimationResource@@UEAAJNMMMM@Z @ 0x1800A7F50 (-AddSinusoidal@CAnimationResource@@UEAAJNMMMM@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAnimationResource::_AddPrimitive(CAnimationResource *this, const struct DwmAnimationPrimitive *a2)
{
  int v2; // r15d
  unsigned int v3; // ebx
  char v6; // r12
  _DWORD *v8; // rsi
  _QWORD *v9; // r9
  char *v10; // r11
  char *v11; // r14
  _QWORD *v12; // r10
  unsigned int v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // ebp
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int128 v19; // xmm1
  __int64 v20; // rax
  __int64 v21; // rcx

  v2 = *((_DWORD *)this + 12);
  v3 = 0;
  v6 = 0;
  if ( *((_BYTE *)this + 64) )
    return (unsigned int)-2147024809;
  v8 = (_DWORD *)((char *)this + 24);
  v9 = (_QWORD *)((char *)a2 + 8);
  if ( v2 )
  {
    if ( *v9 < *(_QWORD *)(32LL * (unsigned int)(*((_DWORD *)this + 12) - 1) + *((_QWORD *)this + 3) + 8) )
      return (unsigned int)-2147024809;
  }
  if ( *(_DWORD *)a2 == 3 )
  {
    if ( !v2 || *v9 == *(_QWORD *)(*(_QWORD *)v8 + 8LL) )
      return (unsigned int)-2147024809;
    v11 = (char *)this + 24;
    v10 = (char *)a2 + 8;
  }
  else
  {
    v10 = (char *)a2 + 8;
    v11 = (char *)this + 24;
    v12 = (_QWORD *)((char *)a2 + 8);
    if ( !v2 )
      goto LABEL_10;
  }
  v12 = v10;
  if ( *(_QWORD *)(32LL * (unsigned int)(*((_DWORD *)this + 12) - 1) + *((_QWORD *)this + 3) + 8) == *v9 )
  {
    v6 = 1;
    v8 = v11;
  }
LABEL_10:
  if ( *(_DWORD *)a2 != 1 && *(_DWORD *)a2 != 2 )
  {
    if ( *(_DWORD *)a2 == 3 )
    {
      if ( *((_QWORD *)a2 + 2) <= *v12 - *(_QWORD *)(*(_QWORD *)v8 + 8LL) )
        goto LABEL_16;
    }
    else
    {
      if ( *(_DWORD *)a2 != 4 )
        return (unsigned int)-2147467259;
      if ( _finite(*((float *)a2 + 4)) )
      {
        *((_BYTE *)this + 64) = 1;
        goto LABEL_16;
      }
    }
    return (unsigned int)-2147024809;
  }
  if ( !_finite(*((float *)a2 + 4))
    || !_finite(*((float *)a2 + 5))
    || !_finite(*((float *)a2 + 6))
    || !_finite(*((float *)a2 + 7)) )
  {
    return (unsigned int)-2147024809;
  }
LABEL_16:
  if ( v6 )
  {
    v17 = *(_QWORD *)v8;
    v18 = 32LL * (unsigned int)(v2 - 1);
    v19 = *((_OWORD *)a2 + 1);
    *(_OWORD *)(v18 + v17) = *(_OWORD *)a2;
    *(_OWORD *)(v18 + v17 + 16) = v19;
  }
  else
  {
    v13 = v8[6];
    v14 = v13 + 1;
    if ( v13 + 1 < v13 )
    {
      v15 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB3u, 0LL);
    }
    else
    {
      v15 = 0;
      if ( v14 <= v8[5] )
      {
        v20 = *(_QWORD *)v8;
        v21 = 32LL * (unsigned int)v8[6];
        *(_OWORD *)(v21 + v20) = *(_OWORD *)a2;
        *(_OWORD *)(v21 + v20 + 16) = *((_OWORD *)a2 + 1);
        v8[6] = v14;
      }
      else
      {
        v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v8, 32, 1, a2);
        v15 = v16;
        if ( v16 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0xBEu, 0LL);
      }
    }
    return v15;
  }
  return v3;
}
