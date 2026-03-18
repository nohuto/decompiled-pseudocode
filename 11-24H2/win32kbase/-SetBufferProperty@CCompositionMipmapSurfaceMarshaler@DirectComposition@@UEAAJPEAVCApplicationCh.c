/*
 * XREFs of ?SetBufferProperty@CCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x140238D90
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x1400F1774 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 */

__int64 __fastcall DirectComposition::CCompositionMipmapSurfaceMarshaler::SetBufferProperty(
        DirectComposition::CCompositionMipmapSurfaceMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        unsigned int *a4,
        unsigned __int64 a5,
        bool *a6)
{
  bool *v6; // r15
  int v8; // ebx
  int v9; // r8d
  unsigned int v10; // r14d
  unsigned int v11; // esi
  unsigned int v12; // ebp
  unsigned int v13; // r12d
  unsigned int v14; // r13d
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v19; // rax

  v6 = a6;
  v8 = 0;
  *a6 = 0;
  v9 = a3 - 1;
  if ( !v9 )
  {
    if ( a5 == 16 )
    {
      v19 = *((unsigned int *)this + 16);
      if ( (unsigned int)v19 < *((_DWORD *)this + 19) )
      {
        *((_DWORD *)this + 4) |= 0x40u;
        *(_OWORD *)(*((_QWORD *)this + 7) + 24 * v19 + 8) = *(_OWORD *)a4;
        *v6 = 1;
        *((_DWORD *)this + 22) |= 1 << *((_BYTE *)this + 64);
        return (unsigned int)v8;
      }
    }
    return (unsigned int)-1073741811;
  }
  if ( v9 != 1 )
    return (unsigned int)-1073741811;
  if ( a5 != 20 )
    return (unsigned int)-1073741811;
  v10 = *a4;
  v11 = a4[1];
  v12 = a4[2];
  v13 = a4[3];
  v14 = a4[4];
  if ( !*a4 || !v11 || v12 - 1 > 0xE )
    return (unsigned int)-1073741811;
  v15 = *a4;
  if ( v10 <= v11 )
    v15 = a4[1];
  if ( v15 < 1 << (v12 - 1) )
    return (unsigned int)-1073741811;
  if ( *((_DWORD *)this + 17)
    || *((_DWORD *)this + 18)
    || *((_DWORD *)this + 19)
    || *((_DWORD *)this + 21)
    || *((_DWORD *)this + 20)
    || *((_QWORD *)this + 7) )
  {
    return 3221225485LL;
  }
  a6 = 0LL;
  v8 = RtlULongLongMult(v12, 0x18uLL, (unsigned __int64 *)&a6);
  if ( v8 >= 0 )
  {
    v17 = Win32AllocPoolWithQuotaZInitImpl(v16, (unsigned __int64)a6, 0x6D6D4344u);
    if ( v17 )
    {
      *((_DWORD *)this + 22) = 0;
      *((_DWORD *)this + 17) = v10;
      *((_DWORD *)this + 18) = v11;
      *((_DWORD *)this + 19) = v12;
      *((_DWORD *)this + 21) = v14;
      *((_DWORD *)this + 20) = v13;
      *((_QWORD *)this + 7) = v17;
      *v6 = 1;
      *((_DWORD *)this + 4) |= 0x20u;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v8;
}
