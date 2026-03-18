/*
 * XREFs of ?NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N_K@Z @ 0x14009D920
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z @ 0x14002C100 (-UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z.c)
 *     ?NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z @ 0x140031D68 (-NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z.c)
 *     ?GetRealizationAt@CCompositionBuffer@@IEBAPEAVCBufferRealization@@I@Z @ 0x140032128 (-GetRealizationAt@CCompositionBuffer@@IEBAPEAVCBufferRealization@@I@Z.c)
 *     ?UpdateIndependentFlipState@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z @ 0x140036590 (-UpdateIndependentFlipState@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z.c)
 *     ?FromToken@CFlipToken@@SAPEBV1@PEBVCToken@@@Z @ 0x14003907C (-FromToken@CFlipToken@@SAPEBV1@PEBVCToken@@@Z.c)
 *     Feature_FullscreenStats__private_IsEnabledDeviceUsageNoInline @ 0x14009D174 (Feature_FullscreenStats__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipExBuffer::NotifyTokenInFrame(
        CFlipExBuffer *this,
        const struct CToken *a2,
        bool *a3,
        __int64 a4)
{
  const struct CFlipToken *v8; // rdi
  int v9; // esi
  unsigned int v10; // ebp
  struct CBufferRealization *RealizationAt; // rax
  int v12; // ecx
  unsigned int v13; // eax

  *a3 = 0;
  v8 = CFlipToken::FromToken(a2);
  v9 = 0;
  if ( !v8 )
    v9 = -1073741811;
  if ( v9 >= 0 )
  {
    v10 = *((_DWORD *)v8 + 30);
    if ( v10 >= *((_DWORD *)this + 72) )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      *((_DWORD *)this + 73) = (*(__int64 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)v8 + 112LL))(v8);
      if ( *((_DWORD *)this + 99) != v10 )
      {
        *((_DWORD *)this + 99) = v10;
        *a3 = 1;
        if ( (*(unsigned __int8 (__fastcall **)(const struct CToken *))(*(_QWORD *)a2 + 144LL))(a2) )
          *((_BYTE *)this + 642) = 0;
      }
      if ( CFlipExBuffer::UpdateAttributes(this, v8) )
        *a3 = 1;
      if ( CFlipExBuffer::UpdateIndependentFlipState(this, v8) )
        *a3 = 1;
      RealizationAt = CCompositionBuffer::GetRealizationAt(this, v10);
      v12 = *((_DWORD *)v8 + 143);
      if ( v12 != *((_DWORD *)RealizationAt + 20) )
      {
        *((_DWORD *)RealizationAt + 20) = v12;
        *a3 = 1;
      }
      if ( (unsigned int)Feature_FullscreenStats__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( a4 )
        {
          v13 = *((_DWORD *)this + 73);
          if ( v13 > *((_DWORD *)this + 66) )
          {
            *((_QWORD *)this + 32) = a4;
            *((_DWORD *)this + 66) = v13;
          }
        }
      }
      CCompositionBuffer::NotifyDirty(
        this,
        *((const struct IRegion **)v8 + 12),
        (const struct CFlipToken *)((char *)v8 + 68));
    }
  }
  return (unsigned int)v9;
}
