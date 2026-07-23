/*
 * XREFs of RtlpHpLfhSubsegmentDelayFreeListBatch @ 0x1403D9244
 * Callers:
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x1403D8A60 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 * Callees:
 *     RtlpHpLfhReportError @ 0x140496164 (RtlpHpLfhReportError.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentDelayFreeListBatch(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        int a5)
{
  __int64 v6; // rsi
  unsigned __int16 v7; // r13
  unsigned int v8; // ebx
  unsigned int v9; // ebp
  unsigned __int16 *v10; // r12
  unsigned int v11; // edi
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 *v15; // r12
  unsigned __int64 *v16; // rsi
  volatile signed __int64 *v17; // rbx
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rax
  __int64 v23; // [rsp+20h] [rbp-178h]
  size_t v27; // [rsp+48h] [rbp-150h]
  _QWORD v28[32]; // [rsp+50h] [rbp-148h] BYREF

  v6 = a4;
  v27 = 8 * (unsigned int)*(unsigned __int8 *)(a2 + 24) - 64;
  memset_0(v28, 255, v27);
  v7 = a3;
  v8 = -1;
  if ( a3 )
  {
    do
    {
      v9 = v7 - 1;
      v10 = (unsigned __int16 *)(v6 + a5 * v9);
      v7 = *v10;
      if ( *((_DWORD *)v10 + 2) != ((unsigned int)v10 ^ HIDWORD(*(_QWORD *)(a1 + 80)) ^ __ROL4__(
                                                                                          *(_DWORD *)v10 ^ *(_QWORD *)(a1 + 80),
                                                                                          *v10)) )
      {
        RtlpHpLfhReportError(23, a1, (_DWORD)v10, a2, v9);
        NT_ASSERT("0");
      }
      v11 = v9;
      if ( v8 < v9 )
        v11 = v8;
      v12 = __ROL8__(-2LL, v9 & 0x3F);
      v13 = v28[(unsigned __int64)v9 >> 6];
      v28[(unsigned __int64)v9 >> 6] = v12 & v13;
      if ( (~v12 & v13) == 0 )
      {
        RtlpHpLfhReportError(17, a1, (_DWORD)v10, a2, v9);
        NT_ASSERT("0");
      }
      v6 = a4;
      v8 = v11;
    }
    while ( v7 );
    if ( v11 != -1 )
    {
      v14 = v11 >> 6;
      v15 = &v28[v27 >> 3];
      v16 = &v28[v14];
      if ( v16 < v15 )
      {
        v17 = (volatile signed __int64 *)(a2 + 64 + 8 * v14);
        do
        {
          v18 = *v16;
          if ( *v16 != -1LL )
          {
            v19 = *v17 | v18;
            if ( v19 != -1LL )
            {
              _RAX = ~v19;
              __asm { tzcnt   rcx, rax }
              v23 = ((unsigned int)(((__int64)v17 - 64 - a2) >> 3) << 6) + (unsigned int)_RCX;
              RtlpHpLfhReportError(17, a1, a4 + a5 * v23, a2, v23);
              NT_ASSERT("0");
            }
            _InterlockedAnd64(v17, v18);
          }
          ++v16;
          ++v17;
        }
        while ( v16 < v15 );
        return v11;
      }
    }
  }
  return v8;
}
