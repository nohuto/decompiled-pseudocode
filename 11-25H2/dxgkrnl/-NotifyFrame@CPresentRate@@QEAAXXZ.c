/*
 * XREFs of ?NotifyFrame@CPresentRate@@QEAAXXZ @ 0x14000EFB4
 * Callers:
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x14000A1F8 (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z @ 0x14000E600 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPresentRate::NotifyFrame(CPresentRate *this)
{
  _DWORD *v2; // rdx
  unsigned __int64 v3; // r8
  __int64 i; // r9
  unsigned int *v5; // rcx
  unsigned int v6; // eax

  v2 = 0LL;
  v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
  {
    v5 = (unsigned int *)((char *)this + 8 * i);
    v6 = *v5;
    if ( *v5 && (unsigned int)v3 >= v6 && (unsigned int)v3 - v6 <= 0x3E8 )
    {
      if ( (unsigned int)v3 - v6 <= 0x1F4 )
      {
        ++v5[1];
        return;
      }
    }
    else
    {
      *v5 = 0;
      v5[1] = 0;
      if ( !v2 )
        v2 = (_DWORD *)((char *)this + 8 * i);
    }
  }
  if ( *v2 )
  {
    if ( (unsigned int)(v3 - *v2) <= 0x1F4 )
      ++v2[1];
  }
  else
  {
    *v2 = v3;
    v2[1] = 1;
  }
}
