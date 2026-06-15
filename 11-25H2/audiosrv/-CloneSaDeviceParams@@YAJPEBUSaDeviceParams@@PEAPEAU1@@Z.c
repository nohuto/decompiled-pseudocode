/*
 * XREFs of ?CloneSaDeviceParams@@YAJPEBUSaDeviceParams@@PEAPEAU1@@Z @ 0x180027724
 * Callers:
 *     ?GetSaDeviceParams@CSaDeviceProxy@@UEAAJPEAPEAUSaDeviceParams@@@Z @ 0x180081220 (-GetSaDeviceParams@CSaDeviceProxy@@UEAAJPEAPEAUSaDeviceParams@@@Z.c)
 *     ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@W4_AUDCLNT_SHAREMODE@@KAEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEBU_GUID@@6@Z @ 0x1800F3468 (-RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAUEndpointCharacteristicsDesc.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x180027A08 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ?_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z @ 0x180027B44 (-_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CloneSaDeviceParams(const struct SaDeviceParams *a1, void ***a2)
{
  void **v4; // rax
  void **v5; // rdi
  const WCHAR *v6; // rbp
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  unsigned int v11; // edx
  char *v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  signed __int64 v16; // rbp
  unsigned __int64 v17; // r8
  char *v18; // r9
  __int16 v19; // ax
  char *v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rbx
  void *v25; // rax
  size_t v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  void *v29; // rax
  size_t v30; // rax
  unsigned __int64 v31; // r8
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  v4 = (void **)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
    memset_0(v4, 0, 0x70uLL);
  else
    v5 = 0LL;
  if ( !v5 )
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8EE,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)0x8007000ELL);
    return v9;
  }
  v6 = *(const WCHAR **)a1;
  v7 = -1LL;
  do
    ++v7;
  while ( v6[v7] );
  *v5 = 0LL;
  v8 = v7 + 1;
  if ( v7 + 1 < v7 || (*v5 = 0LL, !is_mul_ok(v8, 2uLL)) )
  {
    v9 = -2147024362;
LABEL_8:
    v10 = 2288LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)v9);
    SaDeviceParams::`scalar deleting destructor'((SaDeviceParams *)v5, v11);
    return v9;
  }
  v13 = (char *)CoTaskMemAlloc(2 * v8);
  *v5 = v13;
  if ( !v13 )
  {
    v9 = -2147024882;
    goto LABEL_8;
  }
  if ( v8 > 0x7FFFFFFF )
  {
LABEL_44:
    *(_WORD *)v13 = 0;
    goto LABEL_27;
  }
  if ( v7 >= 0x7FFFFFFF )
  {
    if ( v7 == -1LL )
      goto LABEL_27;
    goto LABEL_44;
  }
  if ( !v6 )
  {
    v6 = &LocaleName;
    v7 = 0LL;
  }
  if ( v8 )
  {
    v14 = 0LL;
    v15 = v7 - v8;
    v16 = (char *)v6 - v13;
    v17 = v8;
    v18 = v13;
    do
    {
      if ( !(v8 + v15) )
        break;
      v19 = *(_WORD *)&v13[v16];
      if ( !v19 )
        break;
      *(_WORD *)v13 = v19;
      v13 += 2;
      ++v14;
      --v8;
    }
    while ( v8 );
    v20 = v13 - 2;
    if ( v8 )
      v20 = v13;
    *(_WORD *)v20 = 0;
    v21 = v14 - 1;
    if ( v8 )
      v21 = v14;
    v22 = v17 - v21;
    if ( v8 && v22 > 1 )
    {
      v31 = 2 * v22;
      if ( v31 > 2 )
        memset_0(&v18[2 * v21 + 2], 0, v31 - 2);
    }
  }
LABEL_27:
  v23 = *((_QWORD *)a1 + 2);
  if ( v23 )
  {
    v24 = *(unsigned __int16 *)(v23 + 16);
    v25 = CoTaskMemAlloc(v24 + 18);
    v5[2] = v25;
    if ( !v25 )
    {
      v10 = 2294LL;
LABEL_36:
      v9 = -2147024882;
      goto LABEL_9;
    }
    v26 = CTCoAllocPolicy::_CoTaskMemSize(v25);
    memset_0(v5[2], 0, v26);
    memcpy_0(v5[2], *((const void **)a1 + 2), v24 + 18);
  }
  v27 = *((_QWORD *)a1 + 3);
  if ( v27 )
  {
    v28 = *(unsigned __int16 *)(v27 + 16);
    v29 = CoTaskMemAlloc(v28 + 18);
    v5[3] = v29;
    if ( v29 )
    {
      v30 = CTCoAllocPolicy::_CoTaskMemSize(v29);
      memset_0(v5[3], 0, v30);
      memcpy_0(v5[3], *((const void **)a1 + 3), v28 + 18);
      goto LABEL_33;
    }
    v10 = 2302LL;
    goto LABEL_36;
  }
LABEL_33:
  *((_OWORD *)v5 + 4) = *((_OWORD *)a1 + 4);
  *((_OWORD *)v5 + 3) = *((_OWORD *)a1 + 3);
  *((_DWORD *)v5 + 2) = *((_DWORD *)a1 + 2);
  v5[4] = (void *)*((_QWORD *)a1 + 4);
  v5[5] = (void *)*((_QWORD *)a1 + 5);
  *((_OWORD *)v5 + 5) = *((_OWORD *)a1 + 5);
  *a2 = v5;
  return 0LL;
}
