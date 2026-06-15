/*
 * XREFs of wil::details::lambda_call__lambda_2f753bdbd1d6db63f3379684fbbc2729___::_lambda_call__lambda_2f753bdbd1d6db63f3379684fbbc2729___ @ 0x18012864C
 * Callers:
 *     _EffectPack::GetCustomDeviceFormatsSupportedOnEndpoint_::_1_::dtor$2 @ 0x180162FAF (_EffectPack--GetCustomDeviceFormatsSupportedOnEndpoint_--_1_--dtor$2.c)
 *     _EffectPack::GetCustomDeviceFormatsSupportedOnEndpoint_::_1_::dtor$3 @ 0x180162FC1 (_EffectPack--GetCustomDeviceFormatsSupportedOnEndpoint_--_1_--dtor$3.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_2f753bdbd1d6db63f3379684fbbc2729___::_lambda_call__lambda_2f753bdbd1d6db63f3379684fbbc2729___(
        __int64 a1)
{
  __int64 v1; // rbx

  v1 = 0LL;
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    if ( **(_DWORD **)a1 )
    {
      do
      {
        operator delete(*(void **)(**(_QWORD **)(a1 + 8) + 8 * v1));
        v1 = (unsigned int)(v1 + 1);
      }
      while ( (unsigned int)v1 < **(_DWORD **)a1 );
    }
    operator delete(**(void ***)(a1 + 8));
  }
}
