/*
 * XREFs of Generate_HTSC_WORD @ 0x1401AB100
 * Callers:
 *     CachedHalftonePattern @ 0x1401AAEDC (CachedHalftonePattern.c)
 * Callees:
 *     GenerateWORDPat @ 0x1401D533C (GenerateWORDPat.c)
 *     ExpandHTPatX @ 0x140268578 (ExpandHTPatX.c)
 *     RotateHTPat45 @ 0x1402F3534 (RotateHTPat45.c)
 *     RotateHTPatXY @ 0x1402F362C (RotateHTPatXY.c)
 */

__int64 __fastcall Generate_HTSC_WORD(__m128i *a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned int v4; // r14d
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int16 epi16; // di
  int v9; // r8d
  ULONG v10; // r8d
  __int64 v11; // rsi
  int v12; // r12d
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  PVOID v15; // r15
  unsigned int v16; // ebp
  int v17; // r8d
  __m128i v19; // [rsp+40h] [rbp-58h]
  __int64 v20; // [rsp+A0h] [rbp+8h]
  unsigned __int64 v21; // [rsp+B0h] [rbp+18h]

  v3 = *(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 112);
  if ( a1->m128i_i8[1] <= 0x11u )
  {
    EngAcquireSemaphore(*(HSEMAPHORE *)(v3 + 8));
    v4 = 0;
    v5 = *(_QWORD *)(v3 + 8LL * a1->m128i_u8[1] + 1112);
    a1[1].m128i_i64[0] = v5;
    if ( v5 )
    {
LABEL_16:
      EngReleaseSemaphore(*(HSEMAPHORE *)(v3 + 8));
      LOBYTE(v4) = a1[1].m128i_i64[0] != 0;
      return v4;
    }
    v6 = a1->m128i_u64[1];
    v7 = (unsigned __int8)HIBYTE(a1->m128i_u16[0]);
    v21 = v7;
    epi16 = _mm_extract_epi16(*a1, 4);
    v19 = *a1;
    v9 = v7 + 7;
    if ( (unsigned int)v7 <= 9 )
      v9 = v7;
    v20 = 16 * (v7 >> 1);
    v10 = (v9 << 24) + 808539208;
    v11 = *(_QWORD *)((char *)&DefStdHTPat + v20 + 8);
    v12 = v11;
    v13 = 6 * epi16 * (unsigned __int64)WORD1(v6);
    if ( v13 <= 0xFFFFFFFF )
    {
      v14 = HIDWORD(v6);
      if ( (unsigned int)v14 >= (unsigned int)v13 )
      {
        v15 = EngAllocMem(1u, v14, v10);
        if ( v15 )
        {
          if ( v19.m128i_i8[1] > 0xFu )
          {
            if ( v19.m128i_i8[1] == 16 )
            {
              v17 = v11;
            }
            else
            {
              v17 = v11 + 512;
              v12 = v11 + 256;
            }
            if ( !(unsigned int)GenerateWORDPat(v12, v11, v17, (_DWORD)v15, v19.m128i_u16[2], epi16, v19.m128i_u16[5]) )
            {
              EngFreeMem(v15);
              v15 = 0LL;
            }
          }
          else
          {
            v16 = v19.m128i_u16[2];
            RotateHTPat45(
              v11,
              (_DWORD)v15 + 2,
              v19.m128i_u16[2],
              v19.m128i_u16[5],
              *(unsigned __int16 *)((char *)&DefStdHTPat + v20 + 2),
              epi16);
            RotateHTPatXY(
              (_DWORD)v15 + 2,
              (_DWORD)v15 + 4,
              v16,
              v19.m128i_u16[5],
              epi16,
              (v19.m128i_i8[1] & 1) != 0 ? v16 >> 1 : 0,
              0);
            RotateHTPatXY(
              (_DWORD)v15 + 2,
              (_DWORD)v15,
              v16,
              v19.m128i_u16[5],
              epi16,
              (v19.m128i_i8[1] & 1) != 0 ? v16 >> 2 : 0,
              (v19.m128i_i8[1] & 1) != 0 ? v19.m128i_u16[5] >> 2 : 0);
            ExpandHTPatX(v15);
          }
        }
        *(_QWORD *)(v3 + 8 * v21 + 1112) = v15;
        a1[1].m128i_i64[0] = (__int64)v15;
        goto LABEL_16;
      }
    }
  }
  return 0LL;
}
