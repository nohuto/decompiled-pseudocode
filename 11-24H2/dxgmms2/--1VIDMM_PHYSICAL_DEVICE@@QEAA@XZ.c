/*
 * XREFs of ??1VIDMM_PHYSICAL_DEVICE@@QEAA@XZ @ 0x1400BB5B8
 * Callers:
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1400BABD8 (--1VIDMM_DEVICE@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_PHYSICAL_DEVICE::~VIDMM_PHYSICAL_DEVICE(VIDMM_PHYSICAL_DEVICE *this)
{
  char *v1; // rdx
  unsigned __int16 i; // bx
  __int64 v4; // rdi
  char *v5; // rax

  v1 = (char *)*((_QWORD *)this + 2);
  if ( v1 )
  {
    for ( i = 0; ; ++i )
    {
      if ( (unsigned int)i >= *(_DWORD *)(*(_QWORD *)this + 64LL) )
      {
        operator delete(v1);
        return;
      }
      v4 = 56LL * i;
      v5 = &v1[v4 + 32];
      if ( *(char **)v5 != v5 && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)v5 - 56LL) + 24LL) & 0x10000000) != 0 )
      {
        WdLogSingleEntry5(
          0LL,
          275LL,
          43LL,
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
          *(_QWORD *)(**((_QWORD **)this + 1) + 24LL),
          0LL);
        WdLogGlobalForLineNumber = 2763;
      }
      v1 = (char *)*((_QWORD *)this + 2);
      if ( *(char **)&v1[v4 + 32] == &v1[v4 + 32] || !g_IsInternalRelease )
      {
        if ( !*(_DWORD *)&v1[56 * i] )
          goto LABEL_7;
      }
      else
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
        WdLogGlobalForLineNumber = 195;
      }
      if ( !g_IsInternalRelease )
      {
LABEL_7:
        if ( !*(_QWORD *)&v1[v4 + 8] )
          goto LABEL_8;
        goto LABEL_19;
      }
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 195;
LABEL_19:
      if ( g_IsInternalRelease )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
        WdLogGlobalForLineNumber = 195;
        goto LABEL_21;
      }
LABEL_8:
      if ( !*(_QWORD *)&v1[56 * i + 16] )
        goto LABEL_9;
LABEL_21:
      if ( !g_IsInternalRelease )
      {
LABEL_9:
        if ( !*(_QWORD *)&v1[56 * i + 24] )
          continue;
        goto LABEL_23;
      }
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 195;
LABEL_23:
      if ( g_IsInternalRelease )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
        WdLogGlobalForLineNumber = 195;
        JUMPOUT(0x1400BB83CLL);
      }
    }
  }
}
