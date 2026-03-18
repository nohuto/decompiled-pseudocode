/*
 * XREFs of ?CollectDbgInfo@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z @ 0x14018DB00
 * Callers:
 *     ?DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z @ 0x1401AB294 (-DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DXGADAPTER::CollectDbgInfo(
        PERESOURCE *this,
        struct _TDR_RECOVERY_CONTEXT *a2,
        void **a3,
        unsigned int *a4)
{
  char *v8; // r9
  _OWORD *v9; // rcx
  __int64 v10; // rdx
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  PERESOURCE v13; // r10
  __int64 i; // r11
  __int64 v15; // rdx
  __int64 v16; // r8
  PERESOURCE v17; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10492;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"IsCoreResourceExclusiveOwner()",
      10492LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *a4 < 0x438 )
    return 2147483653LL;
  v8 = (char *)*a3;
  v9 = this + 300;
  v10 = 4LL;
  *(_DWORD *)v8 = 1885430849;
  v11 = v8 + 8;
  do
  {
    *v11 = *v9;
    v11[1] = v9[1];
    v11[2] = v9[2];
    v11[3] = v9[3];
    v11[4] = v9[4];
    v11[5] = v9[5];
    v11[6] = v9[6];
    v11 += 8;
    v12 = v9[7];
    v9 += 8;
    *(v11 - 1) = v12;
    --v10;
  }
  while ( v10 );
  *v11 = *v9;
  v11[1] = v9[1];
  v11[2] = v9[2];
  v11[3] = v9[3];
  v11[4] = v9[4];
  v13 = this[390];
  if ( v13 )
  {
    for ( i = 0LL;
          (unsigned int)i < LODWORD(v13->SpinLock);
          *(_OWORD *)&v8[8 * v16 + 824] = *(_OWORD *)(*(_QWORD *)&v13[1].ActiveCount + v15 + 628) )
    {
      v15 = 4024LL * (unsigned int)i;
      v16 = 2LL * (unsigned int)i;
      *(_QWORD *)&v8[8 * i + 600] = *(_QWORD *)(*(_QWORD *)&v13[1].ActiveCount + v15 + 728);
      *(_DWORD *)&v8[4 * i + 728] = *(_DWORD *)(*(_QWORD *)&v13[1].ActiveCount + v15 + 736);
      i = (unsigned int)(i + 1);
    }
  }
  v17 = this[391];
  if ( v17 )
  {
    *(_OWORD *)(v8 + 792) = *(_OWORD *)&v17[7].SpinLock;
    *(_OWORD *)(v8 + 808) = *(_OWORD *)&v17[8].SystemResourcesList.Blink;
  }
  *a3 = (char *)*a3 + 1080;
  *a4 -= 1080;
  return 0LL;
}
