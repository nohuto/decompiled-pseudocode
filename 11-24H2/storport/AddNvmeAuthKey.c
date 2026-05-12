/*
 * XREFs of AddNvmeAuthKey @ 0x14006D86C
 * Callers:
 *     NvmeAdapterAddAuthenticationKey @ 0x140192B98 (NvmeAdapterAddAuthenticationKey.c)
 *     NvmeAdapterCreateAuthenticationKey @ 0x140194A68 (NvmeAdapterCreateAuthenticationKey.c)
 * Callees:
 *     FindNvmeAuthKey @ 0x14006DD84 (FindNvmeAuthKey.c)
 *     FindNvmeAuthKeyById @ 0x14006DE08 (FindNvmeAuthKeyById.c)
 *     NvmeSaveAuthKey @ 0x14006EFD0 (NvmeSaveAuthKey.c)
 *     TransformNvmeAuthKey @ 0x140070F4C (TransformNvmeAuthKey.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memmove @ 0x140143780 (memmove.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall AddNvmeAuthKey(char a1, _OWORD *a2, __int16 a3, unsigned __int16 a4, void *Src, _QWORD *a6)
{
  size_t v9; // rsi
  int v10; // ebx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  UCHAR *v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  PVOID inserted; // rax
  PVOID v22; // rdi
  _DWORD Buffer[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v25; // [rsp+38h] [rbp-C8h]
  __int16 v26; // [rsp+3Ah] [rbp-C6h]
  char v27; // [rsp+3Ch] [rbp-C4h]
  UCHAR pbInput[262]; // [rsp+3Eh] [rbp-C2h] BYREF
  _BYTE v29[256]; // [rsp+144h] [rbp+44h] BYREF
  UCHAR v30[268]; // [rsp+244h] [rbp+144h] BYREF

  v9 = a4;
  memset_0(Buffer, 0, 0x314uLL);
  if ( FindNvmeAuthKey((unsigned __int16)v9, Src) )
    return (unsigned int)-1073741771;
  v11 = 1;
  while ( FindNvmeAuthKeyById(v11) )
  {
    if ( ++v11 == -1 )
      return (unsigned int)-1073741670;
  }
  if ( !v11 )
    return (unsigned int)-1073741670;
  v12 = 2LL;
  Buffer[0] = 1314275659;
  Buffer[1] = v11;
  v13 = &pbInput[6];
  v25 = a3;
  v26 = v9;
  v27 = a1;
  do
  {
    v14 = a2[1];
    *(_OWORD *)v13 = *a2;
    v15 = a2[2];
    *((_OWORD *)v13 + 1) = v14;
    v16 = a2[3];
    *((_OWORD *)v13 + 2) = v15;
    v17 = a2[4];
    *((_OWORD *)v13 + 3) = v16;
    v18 = a2[5];
    *((_OWORD *)v13 + 4) = v17;
    v19 = a2[6];
    *((_OWORD *)v13 + 5) = v18;
    v20 = a2[7];
    a2 += 8;
    *((_OWORD *)v13 + 6) = v19;
    v13 += 128;
    *((_OWORD *)v13 - 1) = v20;
    --v12;
  }
  while ( v12 );
  memmove(v29, Src, v9);
  v10 = TransformNvmeAuthKey(&pbInput[6], (__int64)pbInput, v30);
  if ( v10 >= 0 )
  {
    inserted = RtlInsertElementGenericTable(&NvmeAuthKeyTable, Buffer, 0x314u, 0LL);
    v22 = inserted;
    if ( !inserted )
      return (unsigned int)-1073741670;
    v10 = NvmeSaveAuthKey(inserted);
    if ( v10 >= 0 )
      *a6 = v22;
    else
      RtlDeleteElementGenericTable(&NvmeAuthKeyTable, Buffer);
  }
  return (unsigned int)v10;
}
