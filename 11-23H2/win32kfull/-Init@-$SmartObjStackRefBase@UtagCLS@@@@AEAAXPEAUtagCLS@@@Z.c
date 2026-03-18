/*
 * XREFs of ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C0086D04
 * Callers:
 *     GetCPD @ 0x1C000ECE4 (GetCPD.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C0013354 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     xxxGetWindowSmIcon @ 0x1C003D2A4 (xxxGetWindowSmIcon.c)
 *     GetClassIcoCur @ 0x1C0087EBC (GetClassIcoCur.c)
 *     xxxSetClassLongPtr @ 0x1C008C5A8 (xxxSetClassLongPtr.c)
 *     DereferenceClass @ 0x1C0097DA0 (DereferenceClass.c)
 *     _HasCaptionIcon @ 0x1C00E62B8 (_HasCaptionIcon.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C013A370 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z @ 0x1C013A3A8 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z.c)
 *     _RegisterClassEx @ 0x1C013A408 (_RegisterClassEx.c)
 *     _SetClassWord @ 0x1C01BDAB0 (_SetClassWord.c)
 *     xxxRecreateSmallIcons @ 0x1C022D48C (xxxRecreateSmallIcons.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall SmartObjStackRefBase<tagCLS>::Init(_QWORD *a1, __int64 a2)
{
  __int64 ThreadWin32Thread; // rax
  _QWORD *v5; // r9
  __int64 v6; // r10
  __int64 result; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v5 = a1 + 1;
  v6 = ThreadWin32Thread;
  a1[1] = 0LL;
  *a1 = gSmartObjNullRef;
  if ( a2 )
  {
    *a1 = *(_QWORD *)(a2 + 128);
    ++*(_DWORD *)(*(_QWORD *)(a2 + 128) + 8LL);
  }
  result = *(_QWORD *)(ThreadWin32Thread + 1512);
  *v5 = result;
  *(_QWORD *)(v6 + 1512) = v5;
  return result;
}
