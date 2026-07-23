/*
 * XREFs of KeCopyXfdMaskToTeb @ 0x140496918
 * Callers:
 *     KxEnableOptionalXStateFeatures @ 0x1405B6354 (KxEnableOptionalXStateFeatures.c)
 *     KeInitThread @ 0x140B6A948 (KeInitThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall KeCopyXfdMaskToTeb(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  char v7; // dl
  char v8; // al
  __int64 v9; // rcx
  _OWORD v10[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v10, 0, sizeof(v10));
  if ( _bittest64(&KeFeatureBits, 0x37u) )
  {
    v5 = a1[30];
    if ( v5 )
    {
      v6 = a1[68];
      v7 = 0;
      if ( (_KPROCESS *)v6 == KeGetCurrentThread()->ApcState.Process )
      {
        v8 = 1;
      }
      else
      {
        KiStackAttachProcess((_KPROCESS *)v6, 0, (__int64)v10);
        v8 = 1;
        v7 = 1;
      }
      v9 = 0LL;
      if ( *(_QWORD *)(v6 + 784) )
      {
        a3 = *(unsigned __int16 *)(v6 + 1772);
        a4 = 332LL;
        if ( (_WORD)a3 != 332 )
        {
          a4 = 452LL;
          if ( (_WORD)a3 != 452 )
            v8 = 0;
        }
        if ( v8 )
          v9 = v5 + 0x2000;
      }
      *(_QWORD *)(v5 + 6216) = a1[133];
      if ( v9 )
        *(_QWORD *)(v9 + 4112) = a1[133];
      if ( v7 )
        KiUnstackDetachProcess((__int64)v10, 0, a3, a4);
    }
  }
}
