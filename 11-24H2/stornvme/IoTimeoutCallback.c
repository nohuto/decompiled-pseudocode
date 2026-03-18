/*
 * XREFs of IoTimeoutCallback @ 0x140011F50
 * Callers:
 *     <none>
 * Callees:
 *     ProcessPendingIoCommands @ 0x140014BB0 (ProcessPendingIoCommands.c)
 *     NVMeControllerAsyncReset @ 0x140016880 (NVMeControllerAsyncReset.c)
 *     NVMeControllerReset @ 0x14001D564 (NVMeControllerReset.c)
 *     IoResetCompletion @ 0x140026B50 (IoResetCompletion.c)
 */

__int64 __fastcall IoTimeoutCallback(__int64 a1)
{
  char v1; // r13
  char v2; // di
  unsigned __int16 v4; // r12
  __int64 result; // rax
  __int64 v6; // rbx
  _QWORD *v7; // r14
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  _QWORD *v12; // rdi
  __int64 v13; // r9
  _QWORD *v14; // rdi
  __int64 v15; // r9
  __int64 v16; // r8
  unsigned __int16 v17; // dx
  __int64 v18; // rcx
  int v19; // ecx
  __int64 v20; // rdx
  unsigned __int8 v21; // al
  _OWORD v22[4]; // [rsp+40h] [rbp-48h] BYREF

  v1 = 0;
  memset(v22, 0, 32);
  v2 = 0;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 4284));
  v4 = 0;
  result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 4280), 0);
  if ( *(_WORD *)(a1 + 330) )
  {
    do
    {
      v6 = *(_QWORD *)(a1 + 936) + 208LL * v4;
      if ( *(_QWORD *)(v6 + 160)
        || *(_QWORD *)(v6 + 144)
        || *(_QWORD *)(v6 + 176)
        || *(_QWORD *)(v6 + 192)
        || *(_QWORD *)(v6 + 200) )
      {
        StorPortExtendedFunction(93LL, a1, 1LL, v6 + 64);
        v7 = *(_QWORD **)(v6 + 192);
        *(_QWORD *)(v6 + 192) = 0LL;
        v8 = _InterlockedExchange64((volatile __int64 *)(v6 + 200), 0LL);
        v9 = *(_QWORD *)(v6 + 160);
        if ( v9 )
        {
          do
          {
            if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v9 + 3) + 1672) + 20LL) & 0x200) != 0 )
            {
              if ( *(_QWORD *)(v6 + 176) )
                *(_QWORD *)(*(_QWORD *)(v6 + 184) + 8LL) = v9;
              else
                *(_QWORD *)(v6 + 176) = v9;
              *(_QWORD *)(v6 + 184) = v9;
            }
            else
            {
              if ( *(_QWORD *)(v6 + 144) )
                *(_QWORD *)(*(_QWORD *)(v6 + 152) + 8LL) = v9;
              else
                *(_QWORD *)(v6 + 144) = v9;
              *(_QWORD *)(v6 + 152) = v9;
            }
            *(_QWORD *)(v6 + 160) = *(_QWORD *)(v9 + 8);
            *(_QWORD *)(v9 + 8) = 0LL;
            v9 = *(_QWORD *)(v6 + 160);
          }
          while ( v9 );
          *(_QWORD *)(v6 + 168) = 0LL;
        }
        if ( (*(_DWORD *)(a1 + 4064) & 0x80u) != 0 && *(_DWORD *)(a1 + 4296) != -1 )
        {
          v10 = *(_QWORD *)(v6 + 144);
          if ( v10 )
          {
            while ( *(_DWORD *)(a1 + 4284) - *(_DWORD *)(v10 + 16) < *(_DWORD *)(a1 + 4296) / 0x3E8u )
            {
              v10 = *(_QWORD *)(v10 + 8);
              if ( !v10 )
                goto LABEL_26;
            }
            v1 = 1;
          }
        }
LABEL_26:
        StorPortNotification(4100LL, a1, v22);
        while ( v7 )
        {
          v12 = v7;
          v7 = (_QWORD *)v7[3];
          StorPortExtendedFunction(1LL, a1, *v12, v11);
          StorPortExtendedFunction(1LL, a1, v12, v13);
        }
        while ( v8 )
        {
          v14 = (_QWORD *)v8;
          v8 = *(_QWORD *)(v8 + 24);
          StorPortExtendedFunction(1LL, a1, *v14, v11);
          StorPortExtendedFunction(1LL, a1, v14, v15);
        }
        ProcessPendingIoCommands(a1, v6, 0LL, 0LL, v22);
        v2 = 1;
      }
      result = *(unsigned int *)(a1 + 4064);
      if ( (result & 0x80u) == 0LL
        || (result = (unsigned int)(274877907 * *(_DWORD *)(a1 + 4300)),
            v16 = *(_DWORD *)(a1 + 4300) / 0x3E8u,
            !(_DWORD)v16) )
      {
        v16 = 10LL;
      }
      v17 = 0;
      if ( *(_WORD *)(a1 + 328) )
      {
        while ( 1 )
        {
          v18 = 32LL * v17;
          result = *(_DWORD *)(v18 + *(_QWORD *)(v6 + 32)) & 0x48;
          if ( (*(_BYTE *)(v18 + *(_QWORD *)(v6 + 32)) & 0x48) == 0x48 )
          {
            v2 = 1;
            result = (unsigned int)(*(_DWORD *)(a1 + 4284) - *(_DWORD *)(v18 + *(_QWORD *)(v6 + 32) + 4));
            if ( (unsigned int)result >= (unsigned int)v16 )
              break;
          }
          if ( ++v17 >= *(_WORD *)(a1 + 328) )
            goto LABEL_40;
        }
        v1 = 1;
      }
LABEL_40:
      ++v4;
    }
    while ( v4 < *(_WORD *)(a1 + 330) );
    if ( v1 )
    {
      result = *(unsigned int *)(a1 + 3748);
      if ( (result & 1) == 0 )
      {
        v19 = *(_DWORD *)(a1 + 4064);
        v20 = *(_DWORD *)(a1 + 4308) / 0xAu;
        if ( (v19 & 0x80u) != 0 && (v19 & 0x100) == 0 )
        {
          if ( (_DWORD)v20 )
          {
            v16 = *(unsigned int *)(a1 + 4288);
            if ( (_DWORD)v16 )
            {
              if ( *(_DWORD *)(a1 + 4284) - (int)v16 < (unsigned int)v20 )
                *(_DWORD *)(a1 + 4064) = v19 | 0x100;
            }
          }
        }
        StorPortQuerySystemTime(a1 + 4312, v20, v16);
        result = NVMeControllerAsyncReset(a1, 0LL, IoResetCompletion, 0LL);
        if ( !(_BYTE)result )
        {
          v21 = NVMeControllerReset(a1);
          result = IoResetCompletion(a1, v21, 0LL);
        }
      }
    }
    if ( v2 )
    {
      result = *(unsigned int *)(a1 + 4280);
      if ( !(_DWORD)result && !_InterlockedExchange((volatile __int32 *)(a1 + 4280), 1) )
        return StorPortExtendedFunction(33LL, a1, *(_QWORD *)(a1 + 4272), IoTimeoutCallback);
    }
  }
  return result;
}
