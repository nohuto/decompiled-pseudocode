/*
 * XREFs of ?_CreateDefaultMonitorProfileForWDDMv1_0@MonitorModes@DxgMonitor@@AEAAJXZ @ 0x1403EEF50
 * Callers:
 *     ?CreateDefaultMonitorProfile@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x140272ECC (-CreateDefaultMonitorProfile@MonitorModes@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z @ 0x14003D948 (-GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z.c)
 *     ?ConvertVideoSignalInfo@@YAJPEBU_VideoModeDescriptor@@PEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1400649EC (-ConvertVideoSignalInfo@@YAJPEBU_VideoModeDescriptor@@PEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_CreateDefaultMonitorProfileForWDDMv1_0(DxgMonitor::MonitorModes *this)
{
  int v2; // esi
  _QWORD *v3; // rbp
  __int64 v4; // r14
  __int64 i; // r15
  ULONG v6; // r8d
  unsigned __int16 v7; // dx
  unsigned __int16 v8; // cx
  int VideoModeDescriptor; // eax
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdi
  int v13; // edx
  _QWORD *v14; // rdi
  _QWORD *v15; // rax
  __int128 v17; // [rsp+30h] [rbp-88h]
  _VideoModeDescriptor v18; // [rsp+40h] [rbp-78h] BYREF

  v2 = 0;
  WdLogSingleEntry1(7LL, this);
  WdLogGlobalForLineNumber = 632;
  if ( *((_DWORD *)this + 30) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 639;
  }
  v3 = (_QWORD *)((char *)this + 128);
  if ( (_QWORD *)*v3 != v3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 640;
  }
  v4 = 0LL;
  *(_QWORD *)&v17 = 0x800000008LL;
  *((_QWORD *)&v17 + 1) = 8LL;
LABEL_6:
  if ( (unsigned int)v4 >= 0x10 )
  {
    if ( *((DxgMonitor::MonitorModes **)this + 22) != (DxgMonitor::MonitorModes *)((char *)this + 176) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 745;
    }
    *((_DWORD *)this + 28) = 3;
  }
  else
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= 5 )
      {
        v4 = (unsigned int)(v4 + 1);
        goto LABEL_6;
      }
      v6 = (unsigned __int16)word_14012D610[i];
      v7 = word_14012D5D2[2 * v4];
      v8 = word_14012D5D0[2 * v4];
      memset(&v18, 0, sizeof(v18));
      VideoModeDescriptor = GTF_GetVideoModeDescriptor(v8, v7, v6, 1u, 0, &v18);
      v2 = VideoModeDescriptor;
      if ( VideoModeDescriptor < 0 )
        break;
      v11 = operator new(0x78uLL, 0x4D677844u, 256LL, v10);
      v12 = v11;
      if ( !v11 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 702;
        v2 = -1073741801;
        goto LABEL_22;
      }
      v13 = *((_DWORD *)this + 31);
      *((_DWORD *)this + 31) = v13 + 1;
      *(_DWORD *)v11 = v13;
      v2 = ConvertVideoSignalInfo(&v18, (struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v11 + 8));
      if ( v2 < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 719;
      }
      *(_DWORD *)(v12 + 84) = 1;
      *(_DWORD *)(v12 + 64) = 2;
      *(_DWORD *)(v12 + 88) = 2;
      *(_OWORD *)(v12 + 68) = v17;
      *(_DWORD *)(v12 + 112) = 5;
      v14 = (_QWORD *)(v12 + 96);
      v15 = (_QWORD *)*((_QWORD *)this + 17);
      if ( (_QWORD *)*v15 != v3 )
        __fastfail(3u);
      *v14 = v3;
      v14[1] = v15;
      *v15 = v14;
      *((_QWORD *)this + 17) = v14;
      ++*((_DWORD *)this + 30);
    }
    WdLogSingleEntry4(
      2LL,
      (unsigned __int16)word_14012D5D0[2 * v4],
      (unsigned __int16)word_14012D5D2[2 * v4],
      (unsigned __int16)word_14012D610[i],
      VideoModeDescriptor);
    WdLogGlobalForLineNumber = 688;
  }
LABEL_22:
  *((_BYTE *)this + 116) = v2 >= 0;
  return (unsigned int)v2;
}
