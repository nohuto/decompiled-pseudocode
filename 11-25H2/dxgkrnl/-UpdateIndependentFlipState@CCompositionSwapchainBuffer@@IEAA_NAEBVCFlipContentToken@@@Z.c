/*
 * XREFs of ?UpdateIndependentFlipState@CCompositionSwapchainBuffer@@IEAA_NAEBVCFlipContentToken@@@Z @ 0x140032198
 * Callers:
 *     ?NotifyFlipContentTokenInFrame@CCompositionSwapchainBuffer@@IEAAJPEBVCFlipContentToken@@PEA_N@Z @ 0x140031C7C (-NotifyFlipContentTokenInFrame@CCompositionSwapchainBuffer@@IEAAJPEBVCFlipContentToken@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

char __fastcall CCompositionSwapchainBuffer::UpdateIndependentFlipState(
        CCompositionSwapchainBuffer *this,
        const struct CFlipContentToken *a2)
{
  int v2; // eax
  char v3; // bl

  v2 = *((_DWORD *)this + 100);
  v3 = 0;
  switch ( v2 )
  {
    case 4:
      goto LABEL_2;
    case -1:
      return 1;
    case 1:
      if ( *((_BYTE *)a2 + 234) )
      {
        *((_DWORD *)this + 100) = -1;
      }
      else
      {
        if ( !*((_BYTE *)a2 + 233) || *((_QWORD *)a2 + 32) != *((_QWORD *)this + 69) )
          return v3;
        *((_DWORD *)this + 100) = 2;
      }
      return 1;
  }
  if ( v2 != 3 )
    return v3;
LABEL_2:
  if ( !(*(unsigned __int8 (__fastcall **)(const struct CFlipContentToken *))(*(_QWORD *)a2 + 144LL))(a2) )
  {
    *((_DWORD *)this + 100) = -1;
    return 1;
  }
  *((_DWORD *)this + 100) = 4;
  if ( !(*(unsigned __int8 (__fastcall **)(const struct CFlipContentToken *))(*(_QWORD *)a2 + 144LL))(a2)
    || *((_BYTE *)a2 + 235)
    || (*(unsigned __int8 (__fastcall **)(CCompositionSwapchainBuffer *))(*(_QWORD *)this + 200LL))(this) )
  {
    return 1;
  }
  return v3;
}
