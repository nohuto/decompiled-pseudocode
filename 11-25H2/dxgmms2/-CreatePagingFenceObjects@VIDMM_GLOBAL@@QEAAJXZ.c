/*
 * XREFs of ?CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ @ 0x1400911C8
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1400D773C (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     memset @ 0x140056780 (memset.c)
 *     ?DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ @ 0x140091130 (-DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     VidSchCreateSyncObject @ 0x1400F9A30 (VidSchCreateSyncObject.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreatePagingFenceObjects(VIDMM_GLOBAL *this)
{
  __int64 i; // rbx
  __int64 v3; // rax
  int SyncObject; // esi
  _QWORD v6[10]; // [rsp+50h] [rbp-58h] BYREF

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1736); i = (unsigned int)(i + 1) )
  {
    memset(v6, 0, sizeof(v6));
    LODWORD(v6[0]) = 5;
    v3 = (unsigned int)(-101 - 100 * i);
    *((_QWORD *)this + i + 612) = v3;
    *((_QWORD *)this + i + 676) = v3;
    v6[1] = v3;
    SyncObject = VidSchCreateSyncObject(
                   *(_QWORD *)(*((_QWORD *)this + 2) + 744LL),
                   0,
                   (unsigned int)v6,
                   9,
                   0LL,
                   0LL,
                   (__int64)this + 8 * (unsigned int)i + 5920,
                   0LL,
                   0LL,
                   0LL);
    if ( SyncObject < 0 )
    {
      VIDMM_GLOBAL::DestroyPagingFenceObjects((struct VIDMM_PROCESS **)this);
      return (unsigned int)SyncObject;
    }
  }
  return 0LL;
}
