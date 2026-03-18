/*
 * XREFs of ?VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z @ 0x140038B10
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x14002D920 (VidSchiExecuteMmIoFlip.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiBindFlipPhysicalAddress(
        struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *a1,
        unsigned int a2,
        unsigned int a3)
{
  int v3; // r10d
  __int64 v4; // rbx
  __int64 v5; // rdi
  char *v6; // r8
  unsigned __int64 v7; // r11
  __int64 v8; // rdx

  v3 = *((_DWORD *)a1 + 1);
  v4 = a3;
  v5 = a2;
  v6 = (char *)a1 + v3 * ((8 * *((_DWORD *)a1 + 2) + 231) & 0xFFFFFFF8);
  v7 = (unsigned __int64)(a2 + (_DWORD)v4 * v3) << 6;
  v8 = *(_QWORD *)&v6[v7 + 48];
  *(_QWORD *)&v6[v7 + 40] = *(_QWORD *)(*(_QWORD *)(v8 + 96) + 40LL);
  *(_WORD *)&v6[v7 + 32] = *(_WORD *)(*(_QWORD *)(v8 + 96) + 10LL);
  if ( *(int *)(*(_QWORD *)(v8 + 96) + 16LL) <= 0 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 0x4000LL, v5, v4, 0LL);
    WdLogGlobalForLineNumber = 906;
    JUMPOUT(0x140038BBALL);
  }
}
