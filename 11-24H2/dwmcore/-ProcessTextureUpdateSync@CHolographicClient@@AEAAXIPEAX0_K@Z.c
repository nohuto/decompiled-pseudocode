/*
 * XREFs of ?ProcessTextureUpdateSync@CHolographicClient@@AEAAXIPEAX0_K@Z @ 0x1802D5A90
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1802D5008 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

void __fastcall CHolographicClient::ProcessTextureUpdateSync(
        CHolographicClient *this,
        unsigned int a2,
        void *a3,
        void *a4,
        unsigned __int64 a5)
{
  char *v5; // r10
  unsigned int v6; // eax
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __int128 v12; // [rsp+40h] [rbp-18h]

  *(_QWORD *)&v11 = a2;
  v5 = (char *)this + 224;
  *((_QWORD *)&v12 + 1) = a5;
  v6 = *((_DWORD *)this + 62);
  *((_QWORD *)&v11 + 1) = a3;
  *(_QWORD *)&v12 = a4;
  v7 = v6 + 1;
  if ( v6 + 1 < v6 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else if ( v7 > *((_DWORD *)this + 61) )
  {
    v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 224, 32, 1, &v11);
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xC0u, 0LL);
  }
  else
  {
    v8 = v6;
    v9 = *(_QWORD *)v5;
    v8 *= 32LL;
    *(_OWORD *)(v8 + v9) = v11;
    *(_OWORD *)(v8 + v9 + 16) = v12;
    *((_DWORD *)v5 + 6) = v7;
  }
}
