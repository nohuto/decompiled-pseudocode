/*
 * XREFs of NVMeHwMSIInterrupt @ 0x140008FC0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeMaskInterrupt @ 0x1400069E0 (NVMeMaskInterrupt.c)
 *     RequestPendingCompletion @ 0x140009240 (RequestPendingCompletion.c)
 *     NVMeCompletionDpcRoutine @ 0x140012F10 (NVMeCompletionDpcRoutine.c)
 */

__int64 __fastcall NVMeHwMSIInterrupt(__int64 a1, unsigned __int16 a2)
{
  __int64 result; // rax
  unsigned __int8 v5; // bp
  char v6; // r14
  __int64 v7; // r8
  __int64 v8; // rcx
  unsigned int i; // esi
  __int64 v10; // r8
  __int64 v11; // r8
  _BOOL8 v12; // rbx
  __int64 v13; // r8
  signed __int32 v14[8]; // [rsp+0h] [rbp-48h] BYREF
  _BOOL8 v15; // [rsp+20h] [rbp-28h]
  int *v16; // [rsp+28h] [rbp-20h]
  int v17; // [rsp+58h] [rbp+10h] BYREF

  if ( *(_WORD *)(a1 + 272) == 1 )
    a2 = -1;
  result = RequestPendingCompletion(a1, a2);
  v5 = result;
  if ( (_BYTE)result )
  {
    if ( (*(_DWORD *)(a1 + 24) & 0x10) == 0 )
    {
      if ( *(_BYTE *)(a1 + 20) || (*(_DWORD *)(a1 + 108) & 1) != 0 )
      {
        v6 = 1;
        v12 = 0LL;
      }
      else
      {
        v6 = 0;
        v12 = (*(_DWORD *)(a1 + 56) & 0x4000) != 0;
      }
      if ( a2 == 0xFFFF || *(_WORD *)(a1 + 272) <= 1u )
      {
        if ( (*(_WORD *)(*(_QWORD *)(a1 + 544) + 16LL * *(unsigned __int16 *)(a1 + 714) + 14) & 1) != *(_WORD *)(a1 + 716) )
        {
          NVMeMaskInterrupt(a1, *(_WORD *)(a1 + 720));
          if ( v6 )
          {
            NVMeCompletionDpcRoutine(v13 + 24, a1, v13, 0LL);
          }
          else
          {
            v17 = 0;
            v16 = &v17;
            v15 = v12;
            StorPortNotification(4098LL, a1, v13 + 24);
          }
        }
        v8 = *(_QWORD *)(a1 + 944);
        for ( i = 0; v8; ++i )
        {
          if ( i >= *(unsigned __int16 *)(a1 + 332) )
            break;
          v10 = v8 + 392LL * i;
          if ( (*(_WORD *)(*(_QWORD *)v10 + 16LL * *(unsigned __int16 *)(v10 + 170) + 14) & 1) != *(_WORD *)(v10 + 172) )
          {
            NVMeMaskInterrupt(a1, *(_WORD *)(v10 + 176));
            if ( v6 )
            {
              NVMeCompletionDpcRoutine(v11 + 24, a1, v11, 0LL);
            }
            else
            {
              v17 = 0;
              v16 = &v17;
              v15 = v12;
              StorPortNotification(4098LL, a1, v11 + 24);
            }
          }
          v8 = *(_QWORD *)(a1 + 944);
        }
      }
      else
      {
        if ( a2 )
          v7 = 392LL * a2 + *(_QWORD *)(a1 + 944) - 392LL;
        else
          v7 = a1 + 544;
        if ( (*(_BYTE *)(a1 + 21) & 0x20) == 0 && (unsigned int)(*(_DWORD *)(a1 + 16) - 1) <= 1 )
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 176) + 12LL) = 1 << *(_WORD *)(v7 + 176);
          _InterlockedOr(v14, 0);
          *(_BYTE *)(a1 + 21) |= 0x20u;
        }
        if ( v6 )
        {
          NVMeCompletionDpcRoutine(v7 + 24, a1, v7, 0LL);
        }
        else
        {
          v17 = 0;
          v16 = &v17;
          v15 = v12;
          StorPortNotification(4098LL, a1, v7 + 24);
        }
      }
      return v5;
    }
  }
  else
  {
    ++*(_QWORD *)(a1 + 3792);
  }
  return result;
}
