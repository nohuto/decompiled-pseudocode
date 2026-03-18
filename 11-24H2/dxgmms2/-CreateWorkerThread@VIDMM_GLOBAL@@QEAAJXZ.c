/*
 * XREFs of ?CreateWorkerThread@VIDMM_GLOBAL@@QEAAJXZ @ 0x140098BCC
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z @ 0x140093FBC (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14001C724 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0VIDMM_WORKER_THREAD@@QEAA@PEAVVIDMM_GLOBAL@@@Z @ 0x140098AC0 (--0VIDMM_WORKER_THREAD@@QEAA@PEAVVIDMM_GLOBAL@@@Z.c)
 *     VidMmInitializeWorkerThread @ 0x140098EC4 (VidMmInitializeWorkerThread.c)
 *     ??0VIDMM_WORKER_THREAD2@@QEAA@PEAVVIDMM_GLOBAL@@@Z @ 0x1400A0DFC (--0VIDMM_WORKER_THREAD2@@QEAA@PEAVVIDMM_GLOBAL@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreateWorkerThread(VIDMM_GLOBAL *this)
{
  VIDMM_WORKER_THREAD2 *v2; // rax
  VIDMM_WORKER_THREAD2 *v3; // rbx
  VIDMM_WORKER_THREAD *v4; // rax

  if ( (*((_BYTE *)this + 40937) & 0x10) != 0 )
  {
    v2 = (VIDMM_WORKER_THREAD2 *)operator new(5984LL, 0x37346956u, 256LL);
    if ( v2 )
    {
      v3 = VIDMM_WORKER_THREAD2::VIDMM_WORKER_THREAD2(v2, this);
      goto LABEL_7;
    }
  }
  else
  {
    v4 = (VIDMM_WORKER_THREAD *)operator new(5384LL, 0x37346956u, 256LL);
    v3 = v4;
    if ( v4 )
    {
      VIDMM_WORKER_THREAD::VIDMM_WORKER_THREAD(v4, this);
      goto LABEL_7;
    }
  }
  v3 = 0LL;
LABEL_7:
  *(_QWORD *)this = v3;
  if ( v3 )
    return VidMmInitializeWorkerThread(v3);
  else
    return 3221225495LL;
}
