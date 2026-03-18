/*
 * XREFs of MiInitializeMdlOneNodeBatchPages @ 0x1404168F8
 * Callers:
 *     MiInitializeMdlBatchPages @ 0x140416570 (MiInitializeMdlBatchPages.c)
 * Callees:
 *     MI_NODE_FROM_PFN @ 0x14021CB00 (MI_NODE_FROM_PFN.c)
 *     MiPfnZeroingNeeded @ 0x140224750 (MiPfnZeroingNeeded.c)
 *     MiDereferencePageChains @ 0x1402259E4 (MiDereferencePageChains.c)
 *     MiInsertMdlPageNeedsZero @ 0x14038C62C (MiInsertMdlPageNeedsZero.c)
 *     MiCreatePageChains @ 0x14038D9F0 (MiCreatePageChains.c)
 *     MiZeroAndConvertPage @ 0x1403F8AEC (MiZeroAndConvertPage.c)
 *     MiUpdateCacheAttributeListsForPage @ 0x140416EAC (MiUpdateCacheAttributeListsForPage.c)
 *     MiChangePageAttributeAndZeroBatch @ 0x140417430 (MiChangePageAttributeAndZeroBatch.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall MiInitializeMdlOneNodeBatchPages(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v3; // r9d
  volatile signed __int32 *v4; // rdi
  unsigned int v5; // esi
  _QWORD *v6; // r12
  unsigned int v7; // ebp
  __m128i si128; // xmm0
  __int64 v9; // rdx
  unsigned int v10; // r13d
  unsigned int v11; // esi
  __int64 v12; // rbx
  int v13; // r14d
  __int64 v14; // r15
  int v15; // r8d
  unsigned int v16; // eax
  __int64 PageChains; // rax
  char v18; // [rsp+30h] [rbp-88h]
  _QWORD *v19; // [rsp+38h] [rbp-80h]
  __int64 v20; // [rsp+40h] [rbp-78h]
  __int64 v22; // [rsp+50h] [rbp-68h]
  _OWORD v23[2]; // [rsp+58h] [rbp-60h] BYREF

  v3 = *(_DWORD *)(a1 + 56);
  v4 = 0LL;
  v5 = *(_DWORD *)(a1 + 148);
  v6 = a2;
  v7 = *(_DWORD *)(a1 + 144);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v19 = a2;
  v9 = *(_QWORD *)(a1 + 48);
  v20 = a3;
  v18 = v3;
  v22 = v9;
  v10 = ((v3 & 8 | 2u) >> 1) | 8;
  v23[0] = si128;
  if ( (v5 & 4) == 0 )
    v10 = (v3 & 8 | 2u) >> 1;
  v23[1] = si128;
  if ( !a3 )
    goto LABEL_12;
  v11 = (v5 >> 1) & 2;
  do
  {
    v12 = 48LL * *v6 - 0x220000000000LL;
    if ( !v9 )
      goto LABEL_11;
    v13 = v3 & 1;
    v14 = v9;
    do
    {
      v11 &= ~1u;
      if ( v13 || !MiPfnZeroingNeeded(v12, v7) )
      {
        if ( (unsigned __int8)BYTE2(*(_DWORD *)(v12 + 32)) >> 6 == v7 )
          goto LABEL_9;
        goto LABEL_17;
      }
      if ( v4 )
        goto LABEL_16;
      v16 = MI_NODE_FROM_PFN(v12);
      PageChains = MiCreatePageChains(*(_QWORD *)a1, v16, v7, 0LL);
      v4 = (volatile signed __int32 *)PageChains;
      if ( PageChains )
      {
        *(_DWORD *)(PageChains + 16) = v10;
LABEL_16:
        MiInsertMdlPageNeedsZero(v4, v12, 1LL);
        v11 |= v15;
LABEL_17:
        MiUpdateCacheAttributeListsForPage(v23, v12, v7, v11);
        goto LABEL_9;
      }
      MiZeroAndConvertPage(0LL, v12, 3u, v7, v10);
LABEL_9:
      v12 += 48LL;
      --v14;
    }
    while ( v14 );
    v6 = v19;
    a3 = v20;
    v9 = v22;
    LOBYTE(v3) = v18;
LABEL_11:
    ++v6;
    --a3;
    v19 = v6;
    v20 = a3;
  }
  while ( a3 );
LABEL_12:
  MiChangePageAttributeAndZeroBatch(v23, v4, v7, 0LL);
  if ( v4 )
    MiDereferencePageChains(v4);
}
