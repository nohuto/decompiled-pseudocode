/*
 * XREFs of ?FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z @ 0x14010A30C
 * Callers:
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140093DB0 (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140031B80 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140031D70 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     VidSchIsDeviceBusy @ 0x140033918 (VidSchIsDeviceBusy.c)
 *     VidSchFlushDevice @ 0x1400B5320 (VidSchFlushDevice.c)
 */

void __fastcall VIDMM_GLOBAL::FlushPendingAllocationAccess(
        VIDMM_GLOBAL *this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        struct VIDMM_ALLOC *a3,
        char a4)
{
  DXGFASTMUTEX *v5; // rdi
  _QWORD **v7; // rsi
  _QWORD *v8; // r10
  __int64 v9; // rbx
  _QWORD *v10; // r9
  _QWORD *i; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD v15[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = (struct VIDMM_GLOBAL_ALLOC *)((char *)a2 + 136);
  v7 = (_QWORD **)((char *)a2 + 112);
  while ( 1 )
  {
    DXGFASTMUTEX::Acquire(v5);
    v8 = *v7;
    v9 = 0LL;
LABEL_3:
    if ( v8 != v7 )
    {
      v10 = v8 - 2;
      for ( i = (_QWORD *)*(v8 - 2); ; i = (_QWORD *)*i )
      {
        if ( i == v10 )
        {
          v8 = (_QWORD *)*v8;
          goto LABEL_3;
        }
        if ( i - 5 != (_QWORD *)a3 )
        {
          v12 = *(i - 4);
          if ( !a4 || (v13 = *(_QWORD *)(v12 + 24)) != 0 && (*(_DWORD *)(*(_QWORD *)(v13 + 40) + 408LL) & 4) == 0 )
          {
            if ( VidSchIsDeviceBusy(*(_QWORD *)(v12 + 32)) )
              break;
          }
        }
      }
      v9 = v14;
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)v5);
    if ( !v9 )
      break;
    v15[1] = 0LL;
    v15[0] = 5LL;
    VidSchFlushDevice(v9, (int *)v15, 0xFFFFFFFD, 0LL);
  }
}
