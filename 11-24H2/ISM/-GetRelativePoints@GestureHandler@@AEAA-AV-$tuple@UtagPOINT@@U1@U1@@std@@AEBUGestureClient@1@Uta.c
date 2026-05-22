/*
 * XREFs of ?GetRelativePoints@GestureHandler@@AEAA?AV?$tuple@UtagPOINT@@U1@U1@@std@@AEBUGestureClient@1@UtagPOINTF@@@Z @ 0x1800903E0
 * Callers:
 *     ?ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@System@Windows@@W4GestureOperationState@@@Z @ 0x180058544 (-ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@Syste.c)
 *     ?CancelOperation@GestureHandler@@QEAAXXZ @ 0x180146790 (-CancelOperation@GestureHandler@@QEAAXXZ.c)
 * Callees:
 *     ?GetRelativePoint@InputSite@@QEAA?AV?$tuple@UPoint@Foundation@Windows@@_N@std@@AEBUtagPOINT@@@Z @ 0x1800904D0 (-GetRelativePoint@InputSite@@QEAA-AV-$tuple@UPoint@Foundation@Windows@@_N@std@@AEBUtagPOINT@@@Z.c)
 */

_QWORD *__fastcall GestureHandler::GetRelativePoints(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 RelativePoint; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rax
  _QWORD *result; // rax
  _BYTE v16[16]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v17; // [rsp+60h] [rbp+30h] BYREF
  __int64 v18; // [rsp+68h] [rbp+38h]

  v18 = a4;
  v5 = *(_QWORD *)(a3 + 16);
  LODWORD(v17) = (int)*(float *)&a4;
  HIDWORD(v17) = (int)*((float *)&a4 + 1);
  if ( v5 )
  {
    RelativePoint = InputSite::GetRelativePoint(v5, v16, &v17);
    LODWORD(v18) = (int)*(float *)(RelativePoint + 4);
    HIDWORD(v18) = (int)*(float *)(RelativePoint + 8);
    v9 = v18;
  }
  else
  {
    v9 = v17;
  }
  v10 = *(_QWORD *)(a3 + 24);
  if ( v10 )
  {
    v11 = InputSite::GetRelativePoint(v10, v16, &v17);
    LODWORD(v18) = (int)*(float *)(v11 + 4);
    HIDWORD(v18) = (int)*(float *)(v11 + 8);
  }
  else
  {
    v18 = 0LL;
  }
  v12 = *(_QWORD *)(a1 + 144);
  v13 = v18;
  if ( v12 )
  {
    v14 = InputSite::GetRelativePoint(v12, v16, &v17);
    LODWORD(v17) = (int)*(float *)(v14 + 4);
    HIDWORD(v17) = (int)*(float *)(v14 + 8);
  }
  else
  {
    v17 = 0LL;
  }
  *a2 = v17;
  result = a2;
  a2[1] = v13;
  a2[2] = v9;
  return result;
}
