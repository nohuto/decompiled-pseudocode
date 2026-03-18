/*
 * XREFs of ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z @ 0x14006DB54
 * Callers:
 *     ?RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z @ 0x14006DAC0 (-RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x14007C364 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x140080F58 (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall DirectComposition::CLinearObjectTableBase::InsertObject(
        DirectComposition::CLinearObjectTableBase *this,
        void *a2,
        unsigned int *a3)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rcx
  unsigned __int64 v8; // r14
  unsigned __int64 i; // rax
  size_t v10; // r8
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rsi
  char *v14; // rax
  char *v15; // rbp
  unsigned __int64 v16; // kr00_8
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // kr10_8
  __int64 v19; // r8
  void *Src; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v5 = *((_QWORD *)this + 3);
  if ( *((_QWORD *)this + 5) < v5 )
  {
    v8 = *((_QWORD *)this + 6);
    for ( i = v8 * *((_QWORD *)this + 4); *(_QWORD *)(i + *(_QWORD *)this); i = v8 * *((_QWORD *)this + 4) )
      v8 = (v8 + 1) % v5;
    *((_QWORD *)this + 6) = (v8 + 1) % v5;
    goto LABEL_6;
  }
  v12 = v5 + 1;
  v8 = v5;
  if ( v5 + 1 < v5 )
    return (unsigned int)-1073741801;
  v13 = *((_QWORD *)this + 2);
  if ( v12 > v13 )
  {
    if ( !v13 )
      v13 = 64LL;
    while ( v13 < v12 )
    {
      if ( v13 >= 0x400 )
      {
        while ( v13 < v12 )
        {
          if ( v13 + 1024 < v13 )
            return (unsigned int)-1073741801;
          v13 += 1024LL;
        }
        break;
      }
      Src = 0LL;
      v16 = v13;
      v13 *= 2LL;
      if ( !is_mul_ok(v16, 2uLL) )
        return (unsigned int)-1073741801;
    }
    v18 = *((_QWORD *)this + 4);
    v17 = v13 * v18;
    Src = 0LL;
    if ( is_mul_ok(v13, v18) )
    {
      v14 = (char *)(*((_BYTE *)this + 8)
                   ? Win32AllocPoolWithQuotaImpl(v5, v17, 0x746C4344u)
                   : Win32AllocPoolImpl(0x100uLL, v17, 0x746C4344u));
      v15 = v14;
      if ( v14 )
      {
        v19 = *((_QWORD *)this + 3);
        if ( v19 )
          memmove(v14, *(const void **)this, *((_QWORD *)this + 4) * v19);
        memset(
          &v15[*((_QWORD *)this + 3) * *((_QWORD *)this + 4)],
          0,
          *((_QWORD *)this + 4) * (v13 - *((_QWORD *)this + 3)));
        if ( *(_QWORD *)this )
          GreDeleteFastMutex(*(char **)this);
        *(_QWORD *)this = v15;
        *((_QWORD *)this + 2) = v13;
        goto LABEL_10;
      }
    }
    return (unsigned int)-1073741801;
  }
LABEL_10:
  ++*((_QWORD *)this + 3);
LABEL_6:
  v10 = *((_QWORD *)this + 4);
  Src = a2;
  memmove((void *)(*(_QWORD *)this + v8 * v10), &Src, v10);
  *a3 = v8 + 1;
  ++*((_QWORD *)this + 5);
  return v4;
}
