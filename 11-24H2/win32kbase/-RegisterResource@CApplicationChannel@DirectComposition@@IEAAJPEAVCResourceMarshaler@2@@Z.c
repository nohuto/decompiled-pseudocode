/*
 * XREFs of ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x14004C390
 * Callers:
 *     ?CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHandle@@HI0@Z @ 0x14004BD88 (-CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHand.c)
 *     ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x14004C1C8 (-CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVR.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x14007C364 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x140080F58 (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::RegisterResource(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // r15
  unsigned __int64 i; // rax
  size_t v8; // r8
  __int64 j; // rax
  __int64 k; // rax
  __int64 v11; // rcx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rsi
  char *v15; // rax
  char *v16; // rbp
  unsigned __int64 v17; // kr00_8
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // kr10_8
  __int64 v20; // r8
  char *v21; // rcx
  struct DirectComposition::CResourceMarshaler *Src; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v4 = *((_QWORD *)this + 18);
  if ( *((_QWORD *)this + 20) >= v4 )
  {
    v13 = v4 + 1;
    v6 = v4;
    if ( v4 + 1 >= v4 )
    {
      v14 = *((_QWORD *)this + 17);
      if ( v13 <= v14 )
      {
LABEL_20:
        ++*((_QWORD *)this + 18);
        goto LABEL_6;
      }
      if ( !v14 )
        v14 = 64LL;
      while ( v14 < v13 )
      {
        if ( v14 >= 0x400 )
        {
          while ( v14 < v13 )
          {
            if ( v14 + 1024 < v14 )
              return (unsigned int)-1073741801;
            v14 += 1024LL;
          }
          break;
        }
        Src = 0LL;
        v17 = v14;
        v14 *= 2LL;
        if ( !is_mul_ok(v17, 2uLL) )
          return (unsigned int)-1073741801;
      }
      v19 = *((_QWORD *)this + 19);
      v18 = v14 * v19;
      Src = 0LL;
      if ( is_mul_ok(v14, v19) )
      {
        v15 = (char *)(*((_BYTE *)this + 128)
                     ? Win32AllocPoolWithQuotaImpl(v4, v18, 0x746C4344u)
                     : Win32AllocPoolImpl(0x100uLL, v18, 0x746C4344u));
        v16 = v15;
        if ( v15 )
        {
          v20 = *((_QWORD *)this + 18);
          if ( v20 )
            memmove(v15, *((const void **)this + 15), *((_QWORD *)this + 19) * v20);
          memset(
            &v16[*((_QWORD *)this + 18) * *((_QWORD *)this + 19)],
            0,
            *((_QWORD *)this + 19) * (v14 - *((_QWORD *)this + 18)));
          v21 = (char *)*((_QWORD *)this + 15);
          if ( v21 )
            GreDeleteFastMutex(v21);
          *((_QWORD *)this + 15) = v16;
          *((_QWORD *)this + 17) = v14;
          goto LABEL_20;
        }
      }
    }
    return (unsigned int)-1073741801;
  }
  v6 = *((_QWORD *)this + 21);
  for ( i = v6 * *((_QWORD *)this + 19); *(_QWORD *)(i + *((_QWORD *)this + 15)); i = v6 * *((_QWORD *)this + 19) )
    v6 = (v6 + 1) % v4;
  *((_QWORD *)this + 21) = (v6 + 1) % v4;
LABEL_6:
  v8 = *((_QWORD *)this + 19);
  Src = a2;
  memmove((void *)(*((_QWORD *)this + 15) + v6 * v8), &Src, v8);
  *((_DWORD *)a2 + 8) = v6 + 1;
  ++*((_QWORD *)this + 20);
  if ( *((int *)this + 6) <= 2 )
  {
    for ( j = *((unsigned int *)a2 + 9); (unsigned int)j < 0xC2; LODWORD(j) = dword_140270F80[j] )
    {
      if ( (_DWORD)j == 158 )
      {
        v11 = 448LL;
        goto LABEL_16;
      }
    }
    for ( k = *((unsigned int *)a2 + 9); ; LODWORD(k) = dword_140270F80[k] )
    {
      if ( (unsigned int)k >= 0xC2 )
      {
        v11 = 432LL;
        goto LABEL_16;
      }
      if ( (_DWORD)k == 28 )
        break;
    }
    v11 = 464LL;
LABEL_16:
    *((_QWORD *)a2 + 1) = *(_QWORD *)((char *)this + v11);
    *(_QWORD *)((char *)this + v11) = a2;
  }
  return v3;
}
