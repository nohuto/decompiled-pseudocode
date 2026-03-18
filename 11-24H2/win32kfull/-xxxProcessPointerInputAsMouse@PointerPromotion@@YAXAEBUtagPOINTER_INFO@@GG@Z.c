/*
 * XREFs of ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1400A7F68
 * Callers:
 *     EditionProcessPointerInputAsMouse @ 0x1400A7F50 (EditionProcessPointerInputAsMouse.c)
 * Callees:
 *     GetAppCompatFlags2QuadWord @ 0x140046CB0 (GetAppCompatFlags2QuadWord.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1400A7B88 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 *     ?PromoteToMouse@Pointer@InputTraceLogging@@SAXKGKG@Z @ 0x1400A8270 (-PromoteToMouse@Pointer@InputTraceLogging@@SAXKGKG@Z.c)
 *     ?CoalesceMousePromotionEntry@@YAHAEBUtagPOINTER_INFO@@G@Z @ 0x1400A82F8 (-CoalesceMousePromotionEntry@@YAHAEBUtagPOINTER_INFO@@G@Z.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1400A83D8 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     ?CreateMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagPOINTER_INFO@@GG@Z @ 0x1400A8640 (-CreateMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagPOINTER_INFO@@GG@Z.c)
 *     ?QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1400A8B3C (-QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z.c)
 *     ?ResetMousePromotionInfo@@YAXGG@Z @ 0x1400A9D7C (-ResetMousePromotionInfo@@YAXGG@Z.c)
 *     ?DetectPromotionType@@YAKPEBUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1402173C8 (-DetectPromotionType@@YAKPEBUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z @ 0x14026C894 (-HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z.c)
 *     ?CancelAutoPromotion@@YAXXZ @ 0x1402AE9D0 (-CancelAutoPromotion@@YAXXZ.c)
 */

void __fastcall PointerPromotion::xxxProcessPointerInputAsMouse(
        PointerPromotion *this,
        const struct tagPOINTER_INFO *a2,
        unsigned __int16 a3)
{
  unsigned __int16 v4; // r12
  __int128 v5; // xmm1
  struct tagMOUSE_PROMOTION_ENTRY *MousePromotionEntry; // rbx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int64 v10; // rdi
  unsigned __int16 v11; // si
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int16 v14; // ax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r15d
  __int64 v18; // r14
  unsigned int v19; // esi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // ebx
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned int v28; // r8d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned __int16 v35; // dx
  __int64 UserSessionState; // rax
  __int64 v37; // rax
  unsigned int v38; // eax
  unsigned __int16 v39[8]; // [rsp+38h] [rbp-19h] BYREF
  __int128 v40; // [rsp+48h] [rbp-9h]
  __int128 v41; // [rsp+58h] [rbp+7h]
  __int128 v42; // [rsp+68h] [rbp+17h]
  __int128 v43; // [rsp+78h] [rbp+27h]
  __int128 v44; // [rsp+88h] [rbp+37h]

  v4 = (unsigned __int16)a2;
  v5 = *((_OWORD *)this + 2);
  MousePromotionEntry = 0LL;
  *(_OWORD *)v39 = *(_OWORD *)this;
  v7 = *((_OWORD *)this + 1);
  v41 = v5;
  v8 = *((_OWORD *)this + 4);
  v40 = v7;
  v9 = *((_OWORD *)this + 3);
  v43 = v8;
  v42 = v9;
  v44 = *((_OWORD *)this + 5);
  v10 = W32GetUserSessionState(this, a2) + 16416;
  v11 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v39, 4));
  InputTraceLogging::Pointer::PromoteToMouse(_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v39, 8)), v11, 0, a3);
  v14 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v39, 12));
  if ( (v14 & 0x2000) == 0 )
  {
    if ( !(unsigned int)HandleLossOfPrimary((struct tagPOINTER_INFO *)v39) )
      goto LABEL_16;
    v14 = v39[6];
    v11 = v39[2];
  }
  if ( (v14 & 0x8000) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v13, v12);
    *(_DWORD *)(UserSessionState + 16680) &= ~8u;
  }
  if ( v11 != *(_WORD *)v10 || (a3 & 0x10) != 0 )
  {
    v32 = *(unsigned int *)(W32GetUserSessionState(v13, v12) + 16680);
    if ( (v32 & 2) != 0 )
      CancelAutoPromotion();
    v34 = W32GetUserSessionState(v33, v32);
    *(_DWORD *)(v34 + 16680) &= ~8u;
    ResetMousePromotionInfo(v11, v35);
  }
  v17 = CoalesceMousePromotionEntry((const struct tagPOINTER_INFO *)v39, a3);
  if ( !v17 )
  {
    MousePromotionEntry = CreateMousePromotionEntry((const struct tagPOINTER_INFO *)v39, v4, a3);
    if ( !MousePromotionEntry )
    {
      v18 = *((_QWORD *)&v40 + 1);
      v19 = *(_DWORD *)&v39[4];
LABEL_9:
      if ( !MousePromotionEntry )
        goto LABEL_16;
      goto LABEL_13;
    }
  }
  v18 = *((_QWORD *)&v40 + 1);
  v19 = *(_DWORD *)&v39[4];
  *(_QWORD *)(v10 + 248) = *((_QWORD *)&v40 + 1);
  *(_DWORD *)(v10 + 4) = v19;
  if ( MousePromotionEntry )
  {
    v23 = *(unsigned int *)(W32GetUserSessionState(v16, v15) + 16680);
    if ( (v23 & 2) != 0 )
    {
      if ( (*(_DWORD *)(v10 + 264) & 4) != 0 )
        *((_DWORD *)MousePromotionEntry + 11) &= ~1u;
      if ( (*(_DWORD *)(v10 + 264) & 0x10) != 0 )
        *((_DWORD *)MousePromotionEntry + 11) |= 0x40u;
      QueueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)(v10 + 128), MousePromotionEntry);
      if ( (*((_DWORD *)MousePromotionEntry + 5) & 0x40000) != 0 )
      {
        v31 = W32GetUserSessionState(v30, v29);
        *(_DWORD *)(v31 + 16680) &= 0xFFFFFFE9;
      }
      goto LABEL_16;
    }
    v24 = W32GetUserSessionState(v23, v22);
    QueueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)(v24 + 16432), MousePromotionEntry);
  }
  if ( !v17 )
    goto LABEL_9;
LABEL_13:
  v21 = *(unsigned int *)(W32GetUserSessionState(v16, v15) + 16680);
  if ( (v21 & 8) != 0 )
  {
    v37 = W32GetUserSessionState(v21, v20);
    v38 = DetectPromotionType(0LL, *(const struct tagMOUSE_PROMOTION_ENTRY **)(v37 + 16440));
    if ( v38 == 0x10000000 )
      goto LABEL_16;
    v28 = v38;
    goto LABEL_23;
  }
  if ( (*(_DWORD *)&v39[6] & 0x10000) != 0 )
  {
    v25 = 0x10000000;
  }
  else
  {
    if ( (*(_DWORD *)&v39[6] & 0x40004) != 0 )
      goto LABEL_16;
    v25 = 0;
  }
  v26 = ValidateHwnd(v18);
  if ( v26 && (GetAppCompatFlags2QuadWord(*(_QWORD *)(v26 + 16), v27) & 0x40000000000LL) != 0 )
  {
    v28 = v25;
LABEL_23:
    PointerPromotion::xxxPromotePointer((PointerPromotion *)v39[2], v19, v28);
  }
LABEL_16:
  xxxProcessMousePromotionQueue();
}
