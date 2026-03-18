/*
 * XREFs of ?VidMmTrimOfferCommitment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x140105F94
 * Callers:
 *     VidMmTrimOfferCommitment @ 0x140044230 (VidMmTrimOfferCommitment.c)
 * Callees:
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400BCAA4 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1401060E8 (-QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::VidMmTrimOfferCommitment(
        VIDMM_GLOBAL *this,
        struct _KPROCESS **a2,
        struct DXGDECOMMITITERATOR *a3,
        union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  bool v10; // r8
  unsigned __int64 v11; // rdx
  struct _KPROCESS *v12; // rcx
  unsigned __int64 v13; // [rsp+20h] [rbp-99h] BYREF
  __int64 v14; // [rsp+28h] [rbp-91h] BYREF
  _QWORD v15[12]; // [rsp+30h] [rbp-89h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-29h] BYREF

  if ( (*((_DWORD *)this + 1746) & 0x10) == 0 )
  {
    v13 = 0LL;
    memset(v15, 0, 0x58uLL);
    v10 = 1;
    LODWORD(v15[0]) = 124;
    v15[5] = a2;
    v15[6] = a3;
    LODWORD(v15[7]) = a4;
    if ( (*(_BYTE *)&a4.0 & 1) != 0 )
    {
      v14 = 0LL;
      v11 = 0LL;
      do
      {
        v15[8] = a5 - v11;
        v15[9] = &v14;
        VIDMM_GLOBAL::QueueLazySystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v15, v10);
        v11 = v14 + v13;
        v13 += v14;
      }
      while ( v14 && v11 < a5 );
    }
    else
    {
      v15[8] = a5;
      v15[9] = &v13;
      VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v15, 1);
      v11 = v13;
    }
    *a6 = v11;
    if ( v11 )
    {
      v12 = *a2;
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(v12, &ApcState);
      (*(void (__fastcall **)(struct _KPROCESS *))(*(_QWORD *)a2[3] + 128LL))(a2[3]);
      KeUnstackDetachProcess(&ApcState);
    }
  }
}
