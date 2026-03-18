/*
 * XREFs of ?Initialize@MOCKDRIVERSTATE@@QEAAJPEAVDXGADAPTER@@@Z @ 0x140065E5C
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018D7A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x140033640 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall MOCKDRIVERSTATE::Initialize(MOCKDRIVERSTATE *this, struct DXGADAPTER *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  char *v6; // rax
  __int64 v7; // r9
  char *v8; // rsi
  void *v9; // rax
  __int64 v10; // r9
  void *v11; // rsi
  void *v12; // rax
  void *v13; // rsi
  _QWORD *v14; // rcx
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx

  v4 = 0;
  *((_QWORD *)this + 3) = a2;
  if ( *((_BYTE *)this + 32) )
  {
    v6 = (char *)operator new(0xAA8uLL, 0x4B677844u, 64LL, a4);
    v8 = v6;
    if ( v6 )
    {
      memset(v6, 0, 0xAA8uLL);
      `vector constructor iterator'(
        v8 + 56,
        16LL,
        160LL,
        (void (__fastcall *)(char *))_MOCKDRIVERSTATE_PER_PLANE::_MOCKDRIVERSTATE_PER_PLANE);
    }
    else
    {
      v8 = 0LL;
    }
    *(_QWORD *)this = v8;
    v9 = (void *)operator new(0x68uLL, 0x4B677844u, 64LL, v7);
    v11 = v9;
    if ( v9 )
      memset(v9, 0, 0x68uLL);
    else
      v11 = 0LL;
    *((_QWORD *)this + 1) = v11;
    v12 = (void *)operator new(0xC48uLL, 0x4B677844u, 64LL, v10);
    v13 = v12;
    if ( v12 )
      memset(v12, 0, 0xC48uLL);
    else
      v13 = 0LL;
    v14 = *(_QWORD **)this;
    *((_QWORD *)this + 2) = v13;
    if ( v14 && *((_QWORD *)this + 1) && v13 )
    {
      *v14 = *((_QWORD *)this + 3);
      v14[5] = MockDriverStateCreatePlaneLiveDump;
      v14[6] = v14;
      v14[3] = 0LL;
      v15 = (_QWORD *)*((_QWORD *)this + 1);
      *v15 = *((_QWORD *)this + 3);
      v15[5] = MockDriverStateCreateFbrLiveDump;
      v15[6] = v15;
      v15[3] = 0LL;
      v16 = (_QWORD *)*((_QWORD *)this + 2);
      *v16 = *((_QWORD *)this + 3);
      v16[5] = MockDriverStateCreateDurationLiveDump;
      v16[6] = v16;
      v16[3] = 0LL;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v4;
}
