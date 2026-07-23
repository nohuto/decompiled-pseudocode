/*
 * XREFs of KiHeteroSelectIdleProcessorFromNode @ 0x1402A34F0
 * Callers:
 *     KiDeferredReadySingleThread @ 0x1402C78D0 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KeFindBiasedSetBitGroupMask @ 0x140407DFC (KeFindBiasedSetBitGroupMask.c)
 *     RtlNumberOfSetBitsEx @ 0x140407FA0 (RtlNumberOfSetBitsEx.c)
 *     KiHeteroSelectIdleProcessorFromSubNode @ 0x1404E0130 (KiHeteroSelectIdleProcessorFromSubNode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall KiHeteroSelectIdleProcessorFromNode(int a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // rdi
  int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned __int8 v12; // dl
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  unsigned __int8 v15; // cl
  __int64 v16; // rbx
  __int64 result; // rax
  _QWORD v19[2]; // [rsp+38h] [rbp-79h] BYREF
  _QWORD v20[3]; // [rsp+48h] [rbp-69h] BYREF
  __int128 v21; // [rsp+60h] [rbp-51h] BYREF
  __int128 v22; // [rsp+70h] [rbp-41h] BYREF
  __int128 v23; // [rsp+80h] [rbp-31h] BYREF
  _OWORD v24[2]; // [rsp+90h] [rbp-21h] BYREF

  v5 = *(_QWORD *)(a3 + 192);
  v23 = 0LL;
  memset(v24, 0, sizeof(v24));
  v9 = (a5 == -4 || ((*(_DWORD *)(a5 + 4) - 1) & 0xFFFFFFFA) != 0)
    && (KiVelocityFlags & 0x800000) != 0
    && (*(_BYTE *)(a2 + 10) & 8) != 0;
  v10 = 32LL * *(unsigned __int8 *)(a5 + 16);
  if ( (unsigned int)(*(_DWORD *)(a5 + 12) - 3) <= 1 )
    v11 = v10 + 568;
  else
    v11 = v10 + 312;
  RtlCopyVolatileMemory(v24, (const void *)(a2 + v11), 0x20uLL);
  while ( 2 )
  {
    v23 = *(_OWORD *)(a2 + 16);
LABEL_12:
    v19[0] = 32LL;
    v19[1] = &v23;
    if ( RtlNumberOfSetBitsEx(v19) )
    {
      v12 = 0;
      v13 = 0LL;
      v21 = 0LL;
      v22 = 0LL;
      v14 = 32LL;
      while ( 1 )
      {
        if ( _bittest64((const signed __int64 *)&v23, v13) )
        {
          v15 = *((_BYTE *)v24 + v13);
          if ( v15 == v12 )
            goto LABEL_18;
          if ( v15 > v12 )
            break;
        }
LABEL_19:
        ++v13;
        if ( !--v14 )
        {
          v21 = v22;
          while ( 1 )
          {
            v20[0] = 32LL;
            v20[1] = &v21;
            if ( !RtlNumberOfSetBitsEx(v20) )
              break;
            if ( *(_WORD *)(v5 + 138) == *(_WORD *)a2
              && _bittest64((const signed __int64 *)&v21, *(unsigned __int16 *)(v5 + 136)) )
            {
              v16 = v5;
            }
            else
            {
              v16 = *(_QWORD *)(a2
                              + 8LL * (unsigned __int16)KeFindBiasedSetBitGroupMask(&v21, *(unsigned int *)(a3 + 36))
                              + 32);
            }
            result = KiHeteroSelectIdleProcessorFromSubNode(a1, v16, a3, a4, a5, v9);
            if ( result )
              return result;
            _bittestandreset64((signed __int64 *)&v21, *(unsigned __int16 *)(v16 + 136));
            _bittestandreset64((signed __int64 *)&v23, *(unsigned __int16 *)(v16 + 136));
          }
          goto LABEL_12;
        }
      }
      v12 = *((_BYTE *)v24 + v13);
      v22 = 0LL;
LABEL_18:
      _bittestandset64((signed __int64 *)&v22, v13);
      goto LABEL_19;
    }
    if ( v9 > *(_DWORD *)(a5 + 20) )
    {
      --v9;
      continue;
    }
    return 0LL;
  }
}
