/*
 * XREFs of SymCryptModExpWindowed @ 0x140531D78
 * Callers:
 *     SymCryptModExpGeneric @ 0x140531BE0 (SymCryptModExpGeneric.c)
 * Callees:
 *     MiWriteCloneFlags @ 0x14047A758 (MiWriteCloneFlags.c)
 *     SymCryptIntBitsizeOfObject @ 0x1405210CC (SymCryptIntBitsizeOfObject.c)
 *     SymCryptIntGetBits @ 0x140521228 (SymCryptIntGetBits.c)
 *     SymCryptModElementCopy @ 0x1405214D8 (SymCryptModElementCopy.c)
 *     SymCryptModElementCreate @ 0x1405214F0 (SymCryptModElementCreate.c)
 *     SymCryptModElementSetValueUint32 @ 0x140521630 (SymCryptModElementSetValueUint32.c)
 *     SymCryptModMul @ 0x140521798 (SymCryptModMul.c)
 *     SymCryptModSquare @ 0x140521874 (SymCryptModSquare.c)
 *     SymCryptSizeofModElementFromModulus @ 0x14052192C (SymCryptSizeofModElementFromModulus.c)
 *     SymCryptScsTableInit @ 0x140536B48 (SymCryptScsTableInit.c)
 *     SymCryptScsTableLoad @ 0x140536B8C (SymCryptScsTableLoad.c)
 *     SymCryptScsTableStore @ 0x140536F88 (SymCryptScsTableStore.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptModExpWindowed(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v7; // r14d
  unsigned int v9; // eax
  __int64 v10; // rbp
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // r12
  __int64 v18; // rbp
  __int64 v19; // r12
  unsigned int v20; // edi
  unsigned int v21; // ebx
  unsigned int v22; // esi
  __int64 v23; // rdi
  unsigned int v24; // ebx
  unsigned int Bits; // eax
  unsigned int v26; // r14d
  __int64 v27; // rdi
  __int64 v28; // rdi
  unsigned int v29; // eax
  __int64 v31; // [rsp+20h] [rbp-B8h]
  __int64 v32; // [rsp+20h] [rbp-B8h]
  __int64 v33; // [rsp+28h] [rbp-B0h]
  __int64 v34; // [rsp+28h] [rbp-B0h]
  unsigned int v35; // [rsp+30h] [rbp-A8h]
  unsigned int v36; // [rsp+38h] [rbp-A0h]
  unsigned int v37; // [rsp+3Ch] [rbp-9Ch]
  __int64 v38; // [rsp+40h] [rbp-98h]
  __int64 v39; // [rsp+48h] [rbp-90h]
  _OWORD v40[2]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v41; // [rsp+110h] [rbp+38h]

  v7 = a4;
  memset(v40, 0, sizeof(v40));
  v37 = a4;
  v9 = SymCryptSizeofModElementFromModulus((__int64)a1);
  v10 = v9;
  v35 = v9;
  if ( v7 >= (unsigned int)SymCryptIntBitsizeOfObject() )
  {
    v7 = SymCryptIntBitsizeOfObject();
    v37 = v7;
  }
  v11 = 4;
  v12 = 0LL;
  do
  {
    if ( *((_DWORD *)&qword_140020780 + v12) >= v7 )
      break;
    ++v11;
    v12 = (unsigned int)(v12 + 1);
  }
  while ( !(_DWORD)v12 );
  v36 = v11;
  v13 = (unsigned int)SymCryptScsTableInit(v40, (unsigned int)(1 << v11), (unsigned int)v10);
  MiWriteCloneFlags((__int64)v40, a6);
  v14 = v13 + a6;
  v15 = (unsigned int)v13;
  v16 = v10;
  v17 = v10 + v14;
  v18 = SymCryptModElementCreate();
  v39 = SymCryptModElementCreate();
  v19 = v16 + v17;
  v41 = -2 * v16 - v15 + a7;
  SymCryptModElementSetValueUint32(1, a1, v18, v19, v41);
  v20 = v16;
  SymCryptScsTableStore(v40, 0LL, v18, (unsigned int)v16);
  SymCryptModElementCopy();
  SymCryptScsTableStore(v40, 1LL, v18, (unsigned int)v16);
  v21 = 2;
  if ( (unsigned int)(1 << v11) > 2 )
  {
    v22 = 1 << v11;
    do
    {
      v33 = v41;
      v31 = v19;
      SymCryptModMul(a1, v18);
      SymCryptScsTableStore(v40, v21++, v18, v20);
    }
    while ( v21 < v22 );
    v11 = v36;
    v7 = v37;
  }
  v23 = (v7 - 1) / v11;
  v24 = v11 * ((v7 - 1) / v11);
  Bits = SymCryptIntGetBits();
  v26 = v35;
  SymCryptScsTableLoad(v40, Bits, v18, v35, v31, v33);
  if ( (_DWORD)v23 )
  {
    v38 = v23;
    v27 = v39;
    do
    {
      if ( v11 )
      {
        v28 = v11;
        do
        {
          v32 = v41;
          SymCryptModSquare(a1);
          --v28;
        }
        while ( v28 );
        v26 = v35;
        v27 = v39;
      }
      v24 -= v11;
      v29 = SymCryptIntGetBits();
      SymCryptScsTableLoad(v40, v29, v27, v26, v32, v34);
      v34 = v41;
      v32 = v19;
      SymCryptModMul(a1, v18);
      --v38;
    }
    while ( v38 );
  }
  return SymCryptModElementCopy();
}
