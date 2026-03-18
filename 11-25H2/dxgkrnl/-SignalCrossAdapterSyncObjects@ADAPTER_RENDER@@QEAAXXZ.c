/*
 * XREFs of ?SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ @ 0x1403F10D0
 * Callers:
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1401D0AFC (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002B770 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CONTEXT@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KE@Z @ 0x14002CF20 (-VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CON.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002D6D0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140043808 (-AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::SignalCrossAdapterSyncObjects(ADAPTER_RENDER *this)
{
  struct DXGGLOBAL *Global; // rax
  __int64 *i; // rbx
  struct _VIDSCH_SYNC_OBJECT *v4; // rax
  VIDSCH_EXPORT *v5; // rcx
  _BYTE v6[16]; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int64 v7; // [rsp+70h] [rbp+8h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v8; // [rsp+78h] [rbp+10h] BYREF

  if ( !*(_BYTE *)(*((_QWORD *)this + 2) + 209LL) )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v6, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireExclusive((DXGSYNCOBJECTLOCK *)v6);
    for ( i = (__int64 *)*((_QWORD *)this + 30); i != (__int64 *)((char *)this + 240) && i; i = (__int64 *)*i )
    {
      if ( *((_BYTE *)i + 26) )
      {
        v4 = (struct _VIDSCH_SYNC_OBJECT *)i[4];
        v7 = -1LL;
        v5 = (VIDSCH_EXPORT *)*((_QWORD *)this + 92);
        v8 = v4;
        VIDSCH_EXPORT::VidSchSignalSyncObjectsFromGpu(v5, 0, 0LL, 0, 0LL, 1u, &v8, 0, &v7, 0);
      }
    }
    if ( v6[8] )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v6);
  }
}
