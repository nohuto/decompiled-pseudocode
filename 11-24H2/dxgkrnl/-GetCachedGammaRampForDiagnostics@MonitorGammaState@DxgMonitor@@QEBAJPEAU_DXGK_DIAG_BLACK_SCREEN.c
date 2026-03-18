/*
 * XREFs of ?GetCachedGammaRampForDiagnostics@MonitorGammaState@DxgMonitor@@QEBAJPEAU_DXGK_DIAG_BLACK_SCREEN_DXGKRNL_SAMPLED_GAMMA@@@Z @ 0x140279A54
 * Callers:
 *     ?Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1401C0E00 (-Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?MonitorGetColorPipelineState2@@YAJPEAUHDXGMONITOR__@@PEAU_DISPLAYCONFIG_COLOR_PIPELINE_STATE_2@@@Z @ 0x14026E064 (-MonitorGetColorPipelineState2@@YAJPEAUHDXGMONITOR__@@PEAU_DISPLAYCONFIG_COLOR_PIPELINE_STATE_2@.c)
 *     ?MonitorGetColorPipelineState@@YAJPEAUHDXGMONITOR__@@PEAU_DISPLAYCONFIG_COLOR_PIPELINE_STATE@@@Z @ 0x14026E220 (-MonitorGetColorPipelineState@@YAJPEAUHDXGMONITOR__@@PEAU_DISPLAYCONFIG_COLOR_PIPELINE_STATE@@@Z.c)
 * Callees:
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x14002FE7C (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x140034CD4 (--1MUTEX_LOCK@@QEAA@XZ.c)
 */

__int64 __fastcall DxgMonitor::MonitorGammaState::GetCachedGammaRampForDiagnostics(
        DxgMonitor::MonitorGammaState *this,
        struct _DXGK_DIAG_BLACK_SCREEN_DXGKRNL_SAMPLED_GAMMA *a2)
{
  __int64 v4; // rdx
  unsigned int v5; // esi
  _DWORD *v6; // r10
  unsigned int v7; // r9d
  __int64 v8; // rax
  char *v9; // r9
  __int64 v10; // r8
  __int64 v11; // r10
  __int64 v12; // rdx
  __int64 v13; // r11
  float *v14; // r9
  unsigned int v15; // r8d
  unsigned int v16; // eax
  char v18; // [rsp+30h] [rbp+8h] BYREF

  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v18, (DxgMonitor::MonitorGammaState *)((char *)this + 96));
  v4 = *((_QWORD *)this + 18);
  v5 = 0;
  if ( v4 )
  {
    switch ( *(_DWORD *)(v4 + 16) )
    {
      case 1:
        *((_DWORD *)a2 + 57) = 0;
        break;
      case 2:
        v14 = (float *)((char *)a2 + 132);
        v15 = 1;
        *(float *)a2 = (float)**(unsigned __int16 **)(v4 + 32);
        *((float *)a2 + 16) = (float)*(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 18) + 32LL) + 512LL);
        *((float *)a2 + 32) = (float)*(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 18) + 32LL) + 1024LL);
        do
        {
          v16 = 16 * v15;
          if ( 16 * v15 >= 0xFF )
            break;
          ++v15;
          *(v14 - 32) = (float)*(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 18) + 32LL) + 2LL * v16);
          *(v14 - 16) = (float)*(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 18) + 32LL) + 2LL * v16 + 512);
          *v14++ = (float)*(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 18) + 32LL) + 2LL * v16 + 1024);
        }
        while ( v15 < 0xF );
        *((float *)a2 + 15) = (float)*(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 18) + 32LL) + 510LL);
        *((float *)a2 + 31) = (float)*(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 18) + 32LL) + 1022LL);
        *((float *)a2 + 47) = (float)*(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 18) + 32LL) + 1534LL);
        *((_DWORD *)a2 + 57) = 3;
        break;
      case 4:
        v6 = (_DWORD *)((char *)a2 + 132);
        v7 = 1;
        *(_DWORD *)a2 = *(_DWORD *)(*(_QWORD *)(v4 + 32) + 52LL);
        *((_DWORD *)a2 + 16) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 32LL) + 56LL);
        *((_DWORD *)a2 + 32) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 32LL) + 60LL);
        do
        {
          v8 = v7 << 8;
          if ( (unsigned int)v8 >= 0xFFF )
            break;
          ++v7;
          *(v6 - 32) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 32LL) + 12 * v8 + 52);
          *(v6 - 16) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 32LL) + 12 * v8 + 56);
          *v6++ = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 32LL) + 12LL * (unsigned int)v8 + 60);
        }
        while ( v7 < 0xF );
        v9 = (char *)a2 + 192;
        v10 = 0LL;
        v11 = 3LL;
        *((_DWORD *)a2 + 15) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 32LL) + 49192LL);
        *((_DWORD *)a2 + 31) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 32LL) + 49196LL);
        *((_DWORD *)a2 + 47) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 32LL) + 49200LL);
        do
        {
          v12 = v10;
          v13 = 3LL;
          do
          {
            *(_DWORD *)&v9[v12] = *(_DWORD *)(v12 + *(_QWORD *)(*((_QWORD *)this + 18) + 32LL));
            v12 += 4LL;
            --v13;
          }
          while ( v13 );
          v10 += 16LL;
          v9 -= 4;
          --v11;
        }
        while ( v11 );
        *((_DWORD *)a2 + 57) = 4;
        break;
      default:
        *((_DWORD *)a2 + 57) = 2;
        v5 = -1073741811;
        break;
    }
  }
  else
  {
    *((_DWORD *)a2 + 57) = 1;
  }
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v18);
  return v5;
}
