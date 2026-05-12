/*
 * XREFs of StorUnmapSenseInfo @ 0x140025620
 * Callers:
 *     RaidUnitCompleteRequest @ 0x14001F490 (RaidUnitCompleteRequest.c)
 *     RaUnitAsyncError @ 0x140029460 (RaUnitAsyncError.c)
 *     RaidUnitProcessBusyRequest @ 0x140031200 (RaidUnitProcessBusyRequest.c)
 *     RaidUnitCompleteResetRequest @ 0x14003C670 (RaidUnitCompleteResetRequest.c)
 *     RaUnitStartIo @ 0x14004E6F0 (RaUnitStartIo.c)
 *     RaUnitStartResetIo @ 0x14009942C (RaUnitStartResetIo.c)
 * Callees:
 *     RaidLogAllocationFailure @ 0x14008D748 (RaidLogAllocationFailure.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

void __fastcall StorUnmapSenseInfo(__int64 a1, __int64 a2)
{
  const void *v2; // rbx
  unsigned __int8 v3; // r8
  __int64 v6; // rbp
  const void **v7; // r14
  unsigned __int8 *v8; // r15
  __int64 v9; // rsi
  int v10; // eax
  unsigned int v11; // r11d
  unsigned int v12; // r13d
  unsigned int *v13; // r10
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  int v16; // ecx
  char v17; // cl
  int v18; // ecx
  unsigned __int8 v19; // bp
  void *Pool2; // rax
  const void *v21; // r13
  size_t Size; // [rsp+70h] [rbp+18h]

  v2 = 0LL;
  v3 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( (*(_BYTE *)(a1 + 16) & 0x20) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 168);
    if ( v9 )
    {
      if ( *(_BYTE *)(v9 + 2) != 40 )
      {
        v10 = *(_DWORD *)(v9 + 12);
        v7 = (const void **)(v9 + 32);
        v8 = (unsigned __int8 *)(v9 + 11);
        goto LABEL_21;
      }
      v6 = *(_QWORD *)(a1 + 168);
      v10 = *(_DWORD *)(v9 + 24);
      if ( !*(_DWORD *)(v9 + 20) )
      {
        v11 = *(_DWORD *)(v9 + 56);
        v12 = 0;
        if ( v11 )
        {
          v13 = (unsigned int *)(v9 + 120);
          while ( 1 )
          {
            v14 = *v13;
            if ( (unsigned int)v14 >= 0x80 )
            {
              v15 = *(unsigned int *)(v9 + 16);
              if ( (unsigned int)v14 <= (unsigned int)v15 )
              {
                v16 = *(_DWORD *)(v14 + v9);
                if ( v16 == 64 )
                {
                  if ( v14 + 40 <= v15 )
                    goto LABEL_11;
                }
                else
                {
                  v18 = v16 - 65;
                  if ( v18 )
                  {
                    if ( v18 == 1 && v14 + 40 <= v15 )
                    {
                      v7 = (const void **)(v14 + v9 + 24);
                      v8 = (unsigned __int8 *)(v14 + v9 + 9);
                      v10 = *(_DWORD *)(v9 + 24);
LABEL_21:
                      v3 = *v8;
                      v2 = *v7;
                      break;
                    }
                  }
                  else if ( v14 + 56 <= v15 )
                  {
LABEL_11:
                    v7 = (const void **)(v14 + v9 + 16);
                    v8 = (unsigned __int8 *)(v14 + v9 + 9);
                    v2 = *v7;
                    v3 = *v8;
LABEL_12:
                    v10 = *(_DWORD *)(v9 + 24);
                    break;
                  }
                }
              }
            }
            ++v12;
            ++v13;
            if ( v12 >= v11 )
              goto LABEL_12;
          }
        }
      }
      v17 = *(_BYTE *)(v9 + 3);
      if ( v17 < 0 )
      {
        if ( (v10 & 0x200000) != 0 && v3 )
        {
          Size = v3;
          Pool2 = (void *)ExAllocatePool2(64LL, v3, 1230201170LL);
          v21 = Pool2;
          if ( Pool2 )
          {
            memmove(Pool2, v2, Size);
            *v7 = v21;
            if ( *(_BYTE *)(v9 + 2) == 40 )
              *(_DWORD *)(v6 + 24) |= 0x400u;
            else
              *(_DWORD *)(v9 + 12) |= 0x400u;
          }
          else
          {
            if ( a2 )
              RaidLogAllocationFailure(a2, 64, Size, 1230201170, 0x80000000);
            *v7 = *(const void **)(a1 + 200);
            *v8 = *(_BYTE *)(a1 + 208);
            *(_BYTE *)(v9 + 3) &= ~0x80u;
          }
        }
        else
        {
          v19 = v3;
          if ( v3 >= *(_BYTE *)(a1 + 208) )
            v19 = *(_BYTE *)(a1 + 208);
          if ( v19 )
            memmove(*(void **)(a1 + 200), v2, v19);
          else
            *(_BYTE *)(v9 + 3) = v17 & 0x7F;
          *v7 = *(const void **)(a1 + 200);
          *v8 = v19;
        }
      }
      else
      {
        *v7 = *(const void **)(a1 + 200);
        *v8 = *(_BYTE *)(a1 + 208);
      }
    }
  }
}
