/*
 * XREFs of GreDecBitmapExclusiveRefCnt @ 0x140095C94
 * Callers:
 *     xxxRealDrawMenuItem @ 0x14003B17C (xxxRealDrawMenuItem.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x14009583C (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14001FD60 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 */

void __fastcall GreDecBitmapExclusiveRefCnt(__int64 a1, __int64 a2)
{
  OBJECT *v2; // rax
  OBJECT *v3; // rbx

  LOBYTE(a2) = 5;
  v2 = (OBJECT *)HmgLock(a1, a2);
  v3 = v2;
  if ( v2 )
  {
    OBJECT::InterlockedDecrementExclusiveLockCount(v2);
    OBJECT::InterlockedDecrementExclusiveLockCount(v3);
  }
}
