/*
 * XREFs of ?vLockShadow@PANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x140224EF0
 * Callers:
 *     ?PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x140263A70 (-PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 *     ??0PANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@PEAU_RECTL@@PEAHPEAU_CLIPOBJ@@@Z @ 0x140309198 (--0PANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@PEAU_RECTL@@PEAHPEAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     ?vUnLockShadowAndWait@PANSURFLOCK@@QEAAXXZ @ 0x14030B618 (-vUnLockShadowAndWait@PANSURFLOCK@@QEAAXXZ.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void __fastcall PANSURFLOCK::vLockShadow(PANSURFLOCK *this, __m128i *a2, struct _CLIPOBJ *a3, int a4)
{
  LONG left; // esi
  int top; // ebx
  LONG right; // ebp
  int bottom; // edi
  LONG v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // r9d
  unsigned int v15; // r8d
  __int64 v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rbp
  __int64 v22; // rdi
  __int64 j; // rbx
  HSEMAPHORE v24; // rcx
  int v25; // eax
  __int64 v26; // [rsp+20h] [rbp-48h]
  __int64 v27; // [rsp+70h] [rbp+8h]
  __int64 i; // [rsp+80h] [rbp+18h]

  if ( a3 && a3->iDComplexity )
  {
    left = a2->m128i_i32[0];
    top = a2->m128i_i32[1];
    right = a2->m128i_i32[2];
    if ( a3->rclBounds.left > a2->m128i_i32[0] )
      left = a3->rclBounds.left;
    bottom = a2->m128i_i32[3];
    if ( a3->rclBounds.top > top )
      top = a3->rclBounds.top;
    if ( a3->rclBounds.right < right )
      right = a3->rclBounds.right;
    if ( a3->rclBounds.bottom < bottom )
      bottom = a3->rclBounds.bottom;
  }
  else
  {
    right = a2->m128i_i32[2];
    left = _mm_cvtsi128_si32(*a2);
    bottom = _mm_cvtsi128_si32(_mm_srli_si128(*a2, 12));
    top = _mm_cvtsi128_si32(_mm_srli_si128(*a2, 4));
  }
  if ( left > right )
  {
    v10 = left;
    left = right;
    right = v10;
  }
  if ( top > bottom )
  {
    v11 = top;
    top = bottom;
    bottom = v11;
  }
  if ( left < 0 )
    left = 0;
  v12 = *(_QWORD *)(*((_QWORD *)this + 2) + 64LL);
  if ( top < 0 )
    top = 0;
  if ( *(_DWORD *)(v12 + 32) < right )
    right = *(_DWORD *)(v12 + 32);
  if ( *(_DWORD *)(v12 + 36) < bottom )
    bottom = *(_DWORD *)(v12 + 36);
  if ( right >= left )
  {
    if ( bottom < top )
      top = bottom;
  }
  else
  {
    left = right;
  }
  memset_0((char *)this + 24, 0, 0x51uLL);
  if ( top != bottom && left != right )
  {
    v13 = *((_QWORD *)this + 2);
    v14 = *(_DWORD *)(v13 + 768);
    v15 = *(_DWORD *)(v13 + 772);
    v26 = (int)(left / v14);
    v16 = (int)(top / v15);
    v17 = 9 * v16;
    v18 = (int)(bottom / v15 + 1);
    v19 = right % v14;
    v27 = v18;
    v20 = right / v14 + 1;
    v21 = v20;
    for ( i = v20; ; v21 = i )
    {
      GreAcquireFastMutex(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 784LL) + 32LL), v19);
      v22 = v16;
LABEL_33:
      if ( v22 >= v18 )
        break;
      for ( j = v26; ; ++j )
      {
        if ( j >= v21 )
        {
          v18 = v27;
          ++v22;
          v17 += 9LL;
          goto LABEL_33;
        }
        v24 = *(HSEMAPHORE *)(*((_QWORD *)this + 2) + 8 * (v17 + j) + 120);
        v25 = a4 ? EngAcquireSemaphoreSharedNoWait(v24) : EngAcquireSemaphoreNoWait(v24);
        if ( v25 != 1 )
          break;
        *((_BYTE *)this + v17 + j + 24) = 1;
        v21 = i;
      }
      PANSURFLOCK::vUnLockShadowAndWait(this);
      memset_0((char *)this + 24, 0, 0x51uLL);
      v18 = v27;
      v17 = 9 * v16;
    }
    GreReleaseFastMutex(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 784LL) + 32LL));
  }
}
