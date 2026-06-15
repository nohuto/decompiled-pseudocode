/*
 * XREFs of ?GetBlob@CUnsupportedConnectorFormats@@QEAAJPEAPEAEPEAK@Z @ 0x1800770D0
 * Callers:
 *     ?CacheUnsupportedConnectorFormats@CEndpointCharacteristics@@AEAAXPEAVCUnsupportedConnectorFormats@@@Z @ 0x180077024 (-CacheUnsupportedConnectorFormats@CEndpointCharacteristics@@AEAAXPEAVCUnsupportedConnectorFormat.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z @ 0x180027B44 (-_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CUnsupportedConnectorFormats::GetBlob(
        CUnsupportedConnectorFormats *this,
        unsigned __int8 **a2,
        unsigned int *a3)
{
  unsigned int v6; // ebp
  _WORD *v7; // rax
  _WORD *v8; // rbx
  unsigned int v9; // edi
  size_t v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // ecx
  _DWORD *v13; // r9
  int v14; // edx
  _DWORD *v15; // r8
  unsigned int v16; // ecx
  _WORD *v17; // r9
  int v18; // edx
  _WORD *v19; // r8
  unsigned int v20; // ecx
  _WORD *v21; // r9
  int v22; // edx
  _WORD *v23; // r8
  unsigned int v24; // ecx
  _DWORD *v25; // r9
  int v26; // edx
  _DWORD *v27; // r8
  unsigned __int8 *v28; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = *((_DWORD *)this + 1083)
     + 10
     + 2
     * (*((__int16 *)this + 116) + *((__int16 *)this + 115) + 2 * (*((__int16 *)this + 117) + *((__int16 *)this + 114)));
  v7 = CoTaskMemAlloc(v6);
  v8 = v7;
  v9 = 0;
  if ( !v7 )
  {
    v9 = -2147024882;
    goto LABEL_37;
  }
  v10 = CTCoAllocPolicy::_CoTaskMemSize(v7);
  memset_0(v8, 0, v10);
  if ( v6 < 2 )
  {
    v11 = 5899LL;
LABEL_32:
    v9 = -2147024774;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007007ALL);
    goto LABEL_37;
  }
  *v8 = 10;
  if ( v6 - 2 < 2 )
  {
    v11 = 5902LL;
    goto LABEL_32;
  }
  v8[1] = *((_WORD *)this + 114);
  v12 = v6 - 4;
  v13 = v8 + 2;
  v14 = 0;
  v15 = (_DWORD *)((char *)this + 4);
  while ( v14 < *((__int16 *)this + 114) )
  {
    if ( v12 < 4 )
    {
      v11 = 5905LL;
      goto LABEL_32;
    }
    *v13 = *v15;
    v12 -= 4;
    ++v13;
    ++v14;
    ++v15;
  }
  if ( v12 < 2 )
  {
    v11 = 5908LL;
    goto LABEL_32;
  }
  *(_WORD *)v13 = *((_WORD *)this + 115);
  v16 = v12 - 2;
  v17 = (_WORD *)v13 + 1;
  v18 = 0;
  v19 = (_WORD *)((char *)this + 68);
  while ( v18 < *((__int16 *)this + 115) )
  {
    if ( v16 < 2 )
    {
      v11 = 5911LL;
      goto LABEL_32;
    }
    *v17 = *v19;
    v16 -= 2;
    ++v17;
    ++v18;
    v19 += 2;
  }
  if ( v16 < 2 )
  {
    v11 = 5914LL;
    goto LABEL_32;
  }
  *v17 = *((_WORD *)this + 116);
  v20 = v16 - 2;
  v21 = v17 + 1;
  v22 = 0;
  v23 = (_WORD *)((char *)this + 100);
  while ( v22 < *((__int16 *)this + 116) )
  {
    if ( v20 < 2 )
    {
      v11 = 5917LL;
      goto LABEL_32;
    }
    *v21 = *v23;
    v20 -= 2;
    ++v21;
    ++v22;
    v23 += 2;
  }
  if ( v20 < 2 )
  {
    v11 = 5920LL;
    goto LABEL_32;
  }
  *v21 = *((_WORD *)this + 117);
  v24 = v20 - 2;
  v25 = v21 + 1;
  v26 = 0;
  v27 = (_DWORD *)((char *)this + 164);
  while ( v26 < *((__int16 *)this + 117) )
  {
    if ( v24 < 4 )
    {
      v11 = 5923LL;
      goto LABEL_32;
    }
    *v25 = *v27;
    v24 -= 4;
    ++v25;
    ++v26;
    ++v27;
  }
  if ( v24 >= *((_DWORD *)this + 1083) )
  {
    memcpy_0(v25, (char *)this + 236, *((unsigned int *)this + 1083));
    *a3 = v6;
    v28 = (unsigned __int8 *)v8;
    v8 = 0LL;
    *a2 = v28;
  }
  else
  {
    v9 = -2147024774;
  }
LABEL_37:
  CoTaskMemFree(v8);
  return v9;
}
