/*
 * XREFs of ProcessCompletionQueues @ 0x140006790
 * Callers:
 *     NVMeHwInterrupt @ 0x1400080A0 (NVMeHwInterrupt.c)
 * Callees:
 *     NVMeMaskInterrupt @ 0x1400069E0 (NVMeMaskInterrupt.c)
 *     NVMeCompletionDpcRoutine @ 0x140012F10 (NVMeCompletionDpcRoutine.c)
 */

__int64 __fastcall ProcessCompletionQueues(__int64 a1, unsigned __int16 a2, char a3)
{
  __int64 result; // rax
  char v5; // si
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned int i; // ebp
  __int64 v9; // r8
  __int64 v10; // r8
  _BOOL8 v11; // rbx
  __int64 v12; // r8
  signed __int32 v13[8]; // [rsp+0h] [rbp-38h] BYREF
  _BOOL8 v14; // [rsp+20h] [rbp-18h]
  int *v15; // [rsp+28h] [rbp-10h]
  int v16; // [rsp+40h] [rbp+8h] BYREF

  result = *(unsigned int *)(a1 + 24);
  if ( (result & 0x10) == 0 )
  {
    if ( *(_BYTE *)(a1 + 20) || a3 || (*(_DWORD *)(a1 + 108) & 1) != 0 )
    {
      v5 = 1;
      v11 = 0LL;
    }
    else
    {
      v5 = 0;
      v11 = (*(_DWORD *)(a1 + 56) & 0x4000) != 0;
    }
    if ( a2 == 0xFFFF || *(_WORD *)(a1 + 272) <= 1u )
    {
      result = *(_QWORD *)(a1 + 544);
      if ( (*(_WORD *)(result + 16LL * *(unsigned __int16 *)(a1 + 714) + 14) & 1) != *(_WORD *)(a1 + 716) )
      {
        NVMeMaskInterrupt(a1, *(unsigned __int16 *)(a1 + 720));
        if ( v5 )
        {
          result = NVMeCompletionDpcRoutine(v12 + 24, a1, v12, 0LL);
        }
        else
        {
          v16 = 0;
          v15 = &v16;
          v14 = v11;
          result = StorPortNotification(4098LL, a1, v12 + 24);
        }
      }
      v7 = *(_QWORD *)(a1 + 944);
      for ( i = 0; v7; ++i )
      {
        result = *(unsigned __int16 *)(a1 + 332);
        if ( i >= (unsigned int)result )
          break;
        v9 = v7 + 392LL * i;
        result = *(_QWORD *)v9;
        if ( (*(_WORD *)(*(_QWORD *)v9 + 16LL * *(unsigned __int16 *)(v9 + 170) + 14) & 1) != *(_WORD *)(v9 + 172) )
        {
          NVMeMaskInterrupt(a1, *(unsigned __int16 *)(v9 + 176));
          if ( v5 )
          {
            result = NVMeCompletionDpcRoutine(v10 + 24, a1, v10, 0LL);
          }
          else
          {
            v16 = 0;
            v15 = &v16;
            v14 = v11;
            result = StorPortNotification(4098LL, a1, v10 + 24);
          }
        }
        v7 = *(_QWORD *)(a1 + 944);
      }
    }
    else
    {
      if ( a2 )
        v6 = 392LL * a2 + *(_QWORD *)(a1 + 944) - 392LL;
      else
        v6 = a1 + 544;
      if ( (*(_BYTE *)(a1 + 21) & 0x20) == 0 && (unsigned int)(*(_DWORD *)(a1 + 16) - 1) <= 1 )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 176) + 12LL) = 1 << *(_WORD *)(v6 + 176);
        _InterlockedOr(v13, 0);
        *(_BYTE *)(a1 + 21) |= 0x20u;
      }
      if ( v5 )
      {
        return NVMeCompletionDpcRoutine(v6 + 24, a1, v6, 0LL);
      }
      else
      {
        v16 = 0;
        v15 = &v16;
        v14 = v11;
        return StorPortNotification(4098LL, a1, v6 + 24);
      }
    }
  }
  return result;
}
