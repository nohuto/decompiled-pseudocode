/*
 * XREFs of GetClassIcoCur @ 0x14007C184
 * Callers:
 *     NtUserGetClassIcoCur @ 0x140241800 (NtUserGetClassIcoCur.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x14007C214 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1400B4D30 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 */

__int64 __fastcall GetClassIcoCur(__int64 a1, int a2)
{
  __int64 v3; // rbx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v5, *(_QWORD *)(a1 + 136));
  switch ( a2 )
  {
    case -14:
      v3 = *(_QWORD *)(*(_QWORD *)v5[0] + 80LL);
      break;
    case -12:
      v3 = *(_QWORD *)(*(_QWORD *)v5[0] + 88LL);
      break;
    case -34:
      v3 = *(_QWORD *)(*(_QWORD *)v5[0] + 112LL);
      break;
    default:
      v3 = 0LL;
      break;
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v5);
  return v3;
}
