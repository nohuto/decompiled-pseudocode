/*
 * XREFs of ?SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1400EC5D0
 * Callers:
 *     ?SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x140196240 (-SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x140080F58 (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 */

__int64 __fastcall DirectComposition::CBaseExpressionMarshaler::SetBufferProperty(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  __int64 v10; // rax
  _OWORD *v11; // rax

  v6 = 0;
  if ( a3 != 5 )
    return (unsigned int)-1073741811;
  if ( *((_QWORD *)this + 11) )
    return (unsigned int)-1073741790;
  if ( a5 == 12 )
  {
    if ( *a4 != 1 )
      return (unsigned int)-1073741811;
    v10 = Win32AllocPoolWithQuotaImpl((__int64)this, 0xCuLL, 0x6D654344u);
    if ( v10 )
    {
      *((_QWORD *)this + 11) = v10;
      *(_QWORD *)v10 = *(_QWORD *)a4;
      *(_DWORD *)(v10 + 8) = a4[2];
LABEL_14:
      *((_DWORD *)this + 4) &= ~0x40u;
      goto LABEL_7;
    }
    return (unsigned int)-1073741801;
  }
  if ( a5 == 16 )
  {
    if ( *a4 != 2 )
      return (unsigned int)-1073741811;
    v11 = (_OWORD *)Win32AllocPoolWithQuotaImpl((__int64)this, 0x10uLL, 0x6D654344u);
    if ( v11 )
    {
      *((_QWORD *)this + 11) = v11;
      *v11 = *(_OWORD *)a4;
      goto LABEL_14;
    }
    return (unsigned int)-1073741801;
  }
  if ( a5 )
    return (unsigned int)-1073741811;
  *((_DWORD *)this + 4) &= ~0x40u;
LABEL_7:
  *a6 = 1;
  return v6;
}
