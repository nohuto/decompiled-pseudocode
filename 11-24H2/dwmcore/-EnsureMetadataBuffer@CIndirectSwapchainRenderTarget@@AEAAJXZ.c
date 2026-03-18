/*
 * XREFs of ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800F4374
 * Callers:
 *     ?Present@CIndirectSwapchainRenderTarget@@MEAAJXZ @ 0x1800F4560 (-Present@CIndirectSwapchainRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18008FCF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x1800F3A90 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@E$0A@@@QEAAJPEFBEI@Z @ 0x1801A0C0C (-AddMultipleAndSet@-$DynArray@E$0A@@@QEAAJPEFBEI@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::EnsureMetadataBuffer(CIndirectSwapchainRenderTarget *this)
{
  char *v1; // rdi
  CComposition *v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-18h] BYREF

  v1 = (char *)this + 2768;
  *((_DWORD *)this + 698) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 2768, 1u);
  v3 = (CComposition *)*((_QWORD *)this + 3);
  v12 = 3;
  v13[0] = CComposition::GetFrameTargetTime(v3);
  v13[1] = g_qpcFrequency.QuadPart;
  v4 = DynArray<unsigned char,0>::AddMultipleAndSet(v1, &v12, 4LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x1ECu, 0LL);
  }
  else
  {
    v6 = DynArray<unsigned char,0>::AddMultipleAndSet(v1, v13, 16LL);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x1EDu, 0LL);
    }
    else if ( *((_BYTE *)this + 2728)
           && (v12 = 4, v10 = DynArray<unsigned char,0>::AddMultipleAndSet(v1, &v12, 4LL), v5 = v10, v10 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x1F3u, 0LL);
    }
    else if ( *((_BYTE *)this + 2803)
           || (v12 = 2, v9 = DynArray<unsigned char,0>::AddMultipleAndSet(v1, &v12, 4LL), v5 = v9, v9 >= 0) )
    {
      if ( *((_BYTE *)this + 2802)
        && (v12 = 1, v11 = DynArray<unsigned char,0>::AddMultipleAndSet(v1, &v12, 4LL), v5 = v11, v11 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x1FFu, 0LL);
      }
      else if ( *((_BYTE *)this + 2801) )
      {
        v12 = 0;
        v8 = DynArray<unsigned char,0>::AddMultipleAndSet(v1, &v12, 4LL);
        v5 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x205u, 0LL);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x1F9u, 0LL);
    }
  }
  return v5;
}
