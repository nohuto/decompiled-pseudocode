/*
 * XREFs of ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x180032F08
 * Callers:
 *     ?AddAndSet@?$DynArray@VCExpressionValue@@$00@@QEAAJIAEBVCExpressionValue@@@Z @ 0x180032BD0 (-AddAndSet@-$DynArray@VCExpressionValue@@$00@@QEAAJIAEBVCExpressionValue@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x1800345C0 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180035880 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z @ 0x180039AB0 (-InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x18003AEA8 (-QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x18003C798 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x180185B8C (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?AddAndSet@?$DynArray@PEAVCChannelContext@@$00@@QEAAJIAEBQEAVCChannelContext@@@Z @ 0x1801F45C4 (-AddAndSet@-$DynArray@PEAVCChannelContext@@$00@@QEAAJIAEBQEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x1801B0A50 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 */

__int64 __fastcall DynArrayImpl<1>::Grow(__int64 a1, unsigned int a2, int a3, __int64 a4, unsigned __int64 *a5)
{
  unsigned int v5; // eax
  unsigned int v8; // r9d
  unsigned int v9; // eax
  unsigned int v10; // ebx
  unsigned __int64 v11; // rdx
  int v12; // r8d
  unsigned int v13; // r14d
  unsigned int v14; // ecx
  unsigned int v15; // r14d
  unsigned __int64 v16; // rcx
  unsigned int v17; // ebx
  HANDLE ProcessHeap; // rax
  char *v19; // rbp
  int v20; // eax
  char *v22; // rax
  unsigned __int64 v23; // r8
  unsigned int v24; // [rsp+20h] [rbp-18h]

  v5 = *(_DWORD *)(a1 + 24);
  v8 = v5 + a3;
  if ( v5 + a3 < v5 )
  {
    v24 = 216;
    goto LABEL_20;
  }
  v9 = *(_DWORD *)(a1 + 20);
  v10 = 0;
  if ( v8 > v9 )
  {
    v11 = a2 * (unsigned __int64)v8;
    if ( v11 > 0xFFFFFFFF )
    {
      v24 = 225;
    }
    else
    {
      v12 = 16;
      v13 = v8 - v9;
      if ( v9 <= 0x10 || (v14 = 8092, v12 = v9, v9 < 0x1F9C) )
        v14 = v12;
      if ( v13 <= v14 )
        v13 = v14;
      v15 = v9 + v13;
      if ( v15 < v9 || (v16 = a2 * (unsigned __int64)v15, v16 > 0xFFFFFFFF) )
      {
        v15 = v8;
        LODWORD(v16) = v11;
      }
      if ( v15 <= 0xFFFFFFFF / a2 )
      {
        v17 = v16;
        if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) )
        {
          if ( (_DWORD)v16 )
          {
            ProcessHeap = GetProcessHeap();
            v19 = (char *)HeapAlloc(ProcessHeap, 0, v17);
            if ( v19 )
            {
              v20 = *(_DWORD *)(a1 + 24);
              v10 = 0;
              if ( v20 )
                memcpy_0(v19, *(const void **)a1, a2 * v20);
LABEL_17:
              memset_0(&v19[a2 * *(_DWORD *)(a1 + 20)], 0, a2 * (v15 - *(_DWORD *)(a1 + 20)));
              *(_DWORD *)(a1 + 20) = v15;
              *(_QWORD *)a1 = v19;
              return v10;
            }
            v10 = -2147024882;
          }
          else
          {
            v10 = -2147024809;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x102u, 0LL);
          return v10;
        }
        v22 = (char *)DefaultHeap::Realloc(*(void **)a1, (unsigned int)v16);
        v19 = v22;
        if ( !v22 )
        {
          v10 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x114u, 0LL);
          return v10;
        }
        v10 = 0;
        if ( v22 != *(char **)a1 )
        {
          if ( a5 )
          {
            v23 = *a5;
            if ( *a5 >= *(_QWORD *)a1 && v23 < *(_QWORD *)a1 + (unsigned __int64)(*(_DWORD *)(a1 + 20) * a2) )
              *a5 = (unsigned __int64)&v22[v23 - *(_QWORD *)a1];
          }
        }
        goto LABEL_17;
      }
      v24 = 251;
    }
LABEL_20:
    v10 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, v24, 0LL);
  }
  return v10;
}
