/*
 * XREFs of AccelpSiovInternalOperationHandler @ 0x140402CBC
 * Callers:
 *     AccelpInternalOperationHandler @ 0x140402C8C (AccelpInternalOperationHandler.c)
 * Callees:
 *     AccelpSiovDsaOperationHandler @ 0x140402E10 (AccelpSiovDsaOperationHandler.c)
 *     AccelpSiovWaitForCompletionUMWait @ 0x140403218 (AccelpSiovWaitForCompletionUMWait.c)
 *     AccelpWaitForCompletionBusySpin @ 0x1404F7434 (AccelpWaitForCompletionBusySpin.c)
 *     AccelpSiovIaaOperationHandler @ 0x140664C80 (AccelpSiovIaaOperationHandler.c)
 *     AccelpSiovUpdateStatsOnSubmitWork @ 0x140665260 (AccelpSiovUpdateStatsOnSubmitWork.c)
 */

__int64 __fastcall AccelpSiovInternalOperationHandler(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  __int64 v5; // r9
  int v6; // ecx
  int v7; // eax
  unsigned int v9; // ebx
  bool v10; // zf
  char v12; // al
  char v15; // dl
  __int64 v16; // rcx
  __int64 v17; // rdx

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0;
  v5 = 0LL;
  if ( v2 )
    v5 = *(_QWORD *)(v2 + 16);
  v6 = *(_DWORD *)a1 - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      v15 = AccelUMWaitSupported;
      if ( AccelUMWaitSupported == -1 )
      {
        _RAX = 7LL;
        __asm { cpuid }
        if ( (_RCX & 0x20) != 0 )
        {
          v15 = 1;
          AccelUMWaitSupported = 1;
        }
        else
        {
          AccelUMWaitSupported = 0;
          v15 = 0;
        }
      }
      v10 = v15 == 0;
      v16 = *(unsigned int *)(v5 + 188);
      v17 = *(_QWORD *)(a1 + 32);
      if ( v10 )
        return (unsigned int)AccelpWaitForCompletionBusySpin(v16, v17);
      else
        return (unsigned int)AccelpSiovWaitForCompletionUMWait(v16, v17);
    }
    else
    {
      v7 = *(_DWORD *)(v5 + 188);
      if ( v7 == 1 )
      {
        return (unsigned int)AccelpSiovDsaOperationHandler(a1, a2);
      }
      else
      {
        if ( v7 != 2 )
          return (unsigned int)-1073741637;
        return (unsigned int)AccelpSiovIaaOperationHandler(a1, a2);
      }
    }
  }
  else if ( (*(_DWORD *)(v5 + 188) == 1 || (v10 = *(_DWORD *)(v5 + 188) == 2))
         && (v12 = **(_BYTE **)(a1 + 32) & 0x3F, v10 = v12 == 0, v12) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    _R10 = *(_QWORD *)(a1 + 24);
    v9 = 0;
    _R11 = *(_QWORD *)(a1 + 48);
    while ( 1 )
    {
      __asm { enqcmds r11, zmmword ptr [r10] }
      if ( !v10 )
        break;
      v10 = ++v9 == 3;
      if ( v9 >= 3 )
        return (unsigned int)-1058078719;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v5 + 16) + 152LL) & 1) != 0 )
      AccelpSiovUpdateStatsOnSubmitWork(*(_QWORD *)(a1 + 8), _R10);
  }
  return v3;
}
