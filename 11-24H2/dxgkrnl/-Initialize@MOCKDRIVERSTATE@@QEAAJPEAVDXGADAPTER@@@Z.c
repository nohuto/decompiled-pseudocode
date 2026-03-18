/*
 * XREFs of ?Initialize@MOCKDRIVERSTATE@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1400659DC
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018FAF8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x140033510 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall MOCKDRIVERSTATE::Initialize(MOCKDRIVERSTATE *this, struct DXGADAPTER *a2)
{
  unsigned int v2; // ebx
  char *v4; // rax
  char *v5; // rsi
  void *v6; // rax
  void *v7; // rsi
  void *v8; // rax
  void *v9; // rsi
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx

  v2 = 0;
  *((_QWORD *)this + 3) = a2;
  if ( *((_BYTE *)this + 32) )
  {
    v4 = (char *)operator new(0xAA8uLL, 0x4B677844u, 64LL);
    v5 = v4;
    if ( v4 )
    {
      memset(v4, 0, 0xAA8uLL);
      `vector constructor iterator'(
        v5 + 56,
        16LL,
        160LL,
        (void (__fastcall *)(char *))_MOCKDRIVERSTATE_PER_PLANE::_MOCKDRIVERSTATE_PER_PLANE);
    }
    else
    {
      v5 = 0LL;
    }
    *(_QWORD *)this = v5;
    v6 = (void *)operator new(0x68uLL, 0x4B677844u, 64LL);
    v7 = v6;
    if ( v6 )
      memset(v6, 0, 0x68uLL);
    else
      v7 = 0LL;
    *((_QWORD *)this + 1) = v7;
    v8 = (void *)operator new(0xC48uLL, 0x4B677844u, 64LL);
    v9 = v8;
    if ( v8 )
      memset(v8, 0, 0xC48uLL);
    else
      v9 = 0LL;
    v10 = *(_QWORD **)this;
    *((_QWORD *)this + 2) = v9;
    if ( v10 && *((_QWORD *)this + 1) && v9 )
    {
      *v10 = *((_QWORD *)this + 3);
      v10[5] = MockDriverStateCreatePlaneLiveDump;
      v10[6] = v10;
      v10[3] = 0LL;
      v11 = (_QWORD *)*((_QWORD *)this + 1);
      *v11 = *((_QWORD *)this + 3);
      v11[5] = MockDriverStateCreateFbrLiveDump;
      v11[6] = v11;
      v11[3] = 0LL;
      v12 = (_QWORD *)*((_QWORD *)this + 2);
      *v12 = *((_QWORD *)this + 3);
      v12[5] = MockDriverStateCreateDurationLiveDump;
      v12[6] = v12;
      v12[3] = 0LL;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v2;
}
