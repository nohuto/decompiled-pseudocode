/*
 * XREFs of ?ContentAdded@CHolographicFrameProcessor@@UEAAJPEAUIFlipPropertySet@@PEAPEAUIFlipContentCallback@@@Z @ 0x1802D5E80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHolographicFrameProcessor::ContentAdded(
        CHolographicFrameProcessor *this,
        struct IFlipPropertySet *a2,
        struct IFlipContentCallback **a3)
{
  unsigned __int64 v3; // r9
  void (__fastcall ***v4)(_QWORD); // rcx

  v3 = (unsigned __int64)this + 8;
  v4 = (void (__fastcall ***)(_QWORD))((char *)this - 24);
  *a3 = (struct IFlipContentCallback *)(v3 & ((unsigned __int128)-(__int128)(unsigned __int64)v4 >> 64));
  (**v4)(v4);
  return 0LL;
}
