/*
 * XREFs of RtlpHpLfhSubsegmentDelayFreeListBatch @ 0x1403C7970
 * Callers:
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x1403C7060 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 * Callees:
 *     RtlpHpLfhReportError @ 0x14049B388 (RtlpHpLfhReportError.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentDelayFreeListBatch(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        int a5)
{
  unsigned __int16 v7; // r12
  unsigned int v8; // edi
  unsigned int v9; // esi
  unsigned __int16 *v10; // r8
  unsigned int v11; // ebx
  __int64 v12; // rax
  unsigned __int64 *v13; // r12
  unsigned __int64 *v14; // rsi
  volatile signed __int64 *v15; // rdi
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rax
  __int64 v21; // [rsp+20h] [rbp-178h]
  size_t v24; // [rsp+40h] [rbp-158h]
  _QWORD v25[32]; // [rsp+50h] [rbp-148h] BYREF

  v24 = 8 * (unsigned int)*(unsigned __int8 *)(a2 + 24) - 64;
  memset_0(v25, 255, v24);
  v7 = a3;
  v8 = -1;
  if ( a3 )
  {
    do
    {
      v9 = v7 - 1;
      v10 = (unsigned __int16 *)(a4 + a5 * v9);
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
      v8 = v11;
      v25[(unsigned __int64)v9 >> 6] &= __ROL8__(-2LL, v9 & 0x3F);
    }
    while ( v7 );
    if ( v11 != -1 )
    {
      v12 = v11 >> 6;
      v13 = &v25[v24 >> 3];
      v14 = &v25[v12];
      if ( v14 < v13 )
      {
        v15 = (volatile signed __int64 *)(a2 + 64 + 8 * v12);
        do
        {
          v16 = *v14;
          if ( *v14 != -1LL )
          {
            v17 = *v15 | v16;
            if ( v17 != -1LL )
            {
              _RAX = ~v17;
              __asm { tzcnt   rcx, rax }
              v21 = ((unsigned int)(((__int64)v15 - 64 - a2) >> 3) << 6) + (unsigned int)_RCX;
              RtlpHpLfhReportError(17, a1, a4 + a5 * v21, a2, v21);
              NT_ASSERT("0");
            }
            _InterlockedAnd64(v15, v16);
          }
          ++v14;
          ++v15;
        }
        while ( v14 < v13 );
        return v11;
      }
    }
  }
  return v8;
}
