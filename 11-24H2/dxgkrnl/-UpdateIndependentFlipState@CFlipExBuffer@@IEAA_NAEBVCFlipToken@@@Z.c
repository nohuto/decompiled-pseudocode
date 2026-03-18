/*
 * XREFs of ?UpdateIndependentFlipState@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z @ 0x140036590
 * Callers:
 *     ?NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N_K@Z @ 0x14009D920 (-NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

char __fastcall CFlipExBuffer::UpdateIndependentFlipState(CFlipExBuffer *this, const struct CFlipToken *a2)
{
  int v2; // eax
  char v3; // bl
  char v6; // al

  v2 = *((_DWORD *)this + 100);
  v3 = 0;
  if ( v2 != 4 )
  {
    if ( v2 != -1 )
    {
      if ( v2 != 1 )
      {
        if ( v2 != 3 )
          return v3;
        goto LABEL_2;
      }
      if ( (*(unsigned __int8 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)a2 + 176LL))(a2) )
      {
        *((_DWORD *)this + 100) = -1;
      }
      else
      {
        if ( !*((_BYTE *)a2 + 580) || *((_QWORD *)a2 + 75) != *((_QWORD *)this + 69) )
          return v3;
        *((_DWORD *)this + 100) = 2;
      }
    }
    return 1;
  }
LABEL_2:
  v6 = (*(__int64 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)a2 + 144LL))(a2);
  if ( v6 )
    v3 = *((_BYTE *)this + 641);
  else
    v3 = 1;
  *((_DWORD *)this + 100) = v6 != 0 ? 4 : -1;
  return v3;
}
