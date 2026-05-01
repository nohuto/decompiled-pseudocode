/*
 * XREFs of ?IgnoreRelativeToCaretShowRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NIAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x18013CDFC
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180255CA0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x18013CF88 (-IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ.c)
 */

bool __fastcall KeyboardHosting::TabTipAdapterPolicy::IgnoreRelativeToCaretShowRequest(
        RTL_SRWLOCK *this,
        int a2,
        const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *a3)
{
  RTL_SRWLOCK *v3; // rbx
  __int64 v7; // r8
  unsigned __int64 i; // r9
  __int64 v9; // rax
  _QWORD *Ptr; // rdx
  __int64 v11; // rcx
  char *v12; // r8
  __int64 v13; // rcx
  char *v14; // rax
  char *v15; // rdx
  __m128i v16; // xmm2
  bool v18; // di
  int v19; // [rsp+88h] [rbp+10h]

  v19 = a2;
  v3 = this + 100;
  AcquireSRWLockShared(this + 100);
  v7 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v9 = *((unsigned __int8 *)&v19 + i);
    v7 = 0x100000001B3LL * (v9 ^ v7);
  }
  Ptr = this[95].Ptr;
  v11 = v7 & (__int64)this[98].Ptr;
  v12 = (char *)this[93].Ptr;
  v13 = 2 * v11;
  v14 = (char *)Ptr[v13 + 1];
  if ( v14 == v12 )
  {
LABEL_8:
    v14 = 0LL;
  }
  else
  {
    v15 = (char *)Ptr[v13];
    while ( a2 != *((_DWORD *)v14 + 4) )
    {
      if ( v14 == v15 )
        goto LABEL_8;
      v14 = (char *)*((_QWORD *)v14 + 1);
    }
  }
  if ( !v14 )
    v14 = (char *)this[93].Ptr;
  if ( v14 != v12
    && (v16 = *(__m128i *)(v14 + 20), (unsigned __int8)_mm_cvtsi128_si32(v16))
    && *(_DWORD *)a3 == 2
    && *(_QWORD *)((char *)a3 + 4) == __PAIR64__(
                                        _mm_srli_si128(v16, 8).m128i_u32[1],
                                        _mm_cvtsi128_si32(_mm_srli_si128(v16, 8)))
    && *((float *)a3 + 16) == (float)(int)COERCE_FLOAT(HIDWORD(*(_QWORD *)(v14 + 84)))
    && *((float *)a3 + 17) == (float)(int)*((float *)v14 + 23) )
  {
    v18 = !KeyboardHosting::TabTipAdapterPolicy::IsCursorPositionValid((KeyboardHosting::TabTipAdapterPolicy *)this);
    if ( v3 )
      ReleaseSRWLockShared(v3);
    return v18;
  }
  else
  {
    if ( v3 )
      ReleaseSRWLockShared(v3);
    return 0;
  }
}
