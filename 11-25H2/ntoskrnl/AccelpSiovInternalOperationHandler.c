/*
 * XREFs of AccelpSiovInternalOperationHandler @ 0x14065ABC4
 * Callers:
 *     AccelpInternalOperationHandler @ 0x140659FB0 (AccelpInternalOperationHandler.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140278EE0 (KeStallExecutionProcessor.c)
 *     AccelpSiovDsaOperationHandler @ 0x14065A240 (AccelpSiovDsaOperationHandler.c)
 *     AccelpSiovGetOperationType @ 0x14065A630 (AccelpSiovGetOperationType.c)
 *     AccelpSiovIaaOperationHandler @ 0x14065A6E0 (AccelpSiovIaaOperationHandler.c)
 *     AccelpSiovWaitForCompletionUMWait @ 0x14065AEA0 (AccelpSiovWaitForCompletionUMWait.c)
 */

__int64 __fastcall AccelpSiovInternalOperationHandler(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  __int64 v5; // r9
  int v6; // ecx
  int v7; // eax
  char v9; // bl
  _BYTE *v15; // r14
  unsigned int v16; // esi
  bool v17; // zf
  char v18; // al
  unsigned int v20; // edx
  __int64 v22; // rcx
  __int64 v23; // r10
  __int64 v24; // r11
  __int64 v25; // rdx
  int v27; // [rsp+60h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0;
  v5 = 0LL;
  if ( v2 )
    v5 = *(_QWORD *)(v2 + 16);
  v6 = *(_DWORD *)a1 - 1;
  if ( v6 )
  {
    if ( v6 != 1 )
    {
      v7 = *(_DWORD *)(v5 + 188);
      if ( v7 == 1 )
      {
        return (unsigned int)AccelpSiovDsaOperationHandler((int *)a1, a2);
      }
      else
      {
        if ( v7 != 2 )
          return (unsigned int)-1073741637;
        return (unsigned int)AccelpSiovIaaOperationHandler(a1, a2, a1);
      }
    }
    v9 = AccelUMWaitSupported;
    if ( AccelUMWaitSupported == -1 )
    {
      _RAX = 7LL;
      __asm { cpuid }
      if ( (_RCX & 0x20) != 0 )
      {
        v9 = 1;
        AccelUMWaitSupported = 1;
      }
      else
      {
        AccelUMWaitSupported = 0;
        v9 = 0;
      }
    }
    v15 = *(_BYTE **)(a1 + 32);
    v16 = *(_DWORD *)(v5 + 188);
    if ( v9 )
      return (unsigned int)AccelpSiovWaitForCompletionUMWait(v16, *(_QWORD *)(a1 + 32));
    while ( v16 != 1 && v16 != 2 || (*v15 & 0x3F) == 0 )
      KeStallExecutionProcessor(0x14u);
  }
  else if ( (*(_DWORD *)(v5 + 188) == 1 || (v17 = *(_DWORD *)(v5 + 188) == 2))
         && (v18 = **(_BYTE **)(a1 + 32) & 0x3F, v17 = v18 == 0, v18) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    _R10 = *(_QWORD *)(a1 + 24);
    v20 = 0;
    _R11 = *(_QWORD *)(a1 + 48);
    while ( 1 )
    {
      __asm { enqcmds r11, zmmword ptr [r10] }
      if ( !v17 )
        break;
      v17 = ++v20 == 3;
      if ( v20 >= 3 )
        return (unsigned int)-1058078719;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v5 + 16) + 152LL) & 1) != 0 )
    {
      v22 = *(_QWORD *)(a1 + 8);
      if ( *(_DWORD *)(*(_QWORD *)(v22 + 16) + 188LL) == 1 )
      {
        v27 = 8;
        if ( (int)AccelpSiovGetOperationType(v22, _R10, &v27) >= 0 && v27 != 8 )
        {
          v25 = 3LL * v27;
          if ( v27 == 1 || v27 == 2 )
          {
            _InterlockedAdd((volatile signed __int32 *)(v23 + 24LL * v27 + 568), 1u);
          }
          else if ( v27 == 3 || (unsigned int)(v27 - 4) <= 1 )
          {
            _InterlockedAdd((volatile signed __int32 *)(v23 + 24LL * v27 + 568), 1u);
            _InterlockedAdd64((volatile signed __int64 *)(v23 + 8 * v25 + 576), *(unsigned int *)(v24 + 32));
          }
        }
      }
    }
  }
  return v3;
}
