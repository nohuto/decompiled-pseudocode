/*
 * XREFs of ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x14000C568
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1400A2D78 (-zzzUpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x14000B4F4 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     ?CreateMonitorDpiInfo@@YAPEAU_REFCOUNTED_DPI_INFORMATION@@XZ @ 0x14000B584 (-CreateMonitorDpiInfo@@YAPEAU_REFCOUNTED_DPI_INFORMATION@@XZ.c)
 *     ??4?$SharedMixedObjectPointerFieldpMonitorPrimary@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x14000B680 (--4-$SharedMixedObjectPointerFieldpMonitorPrimary@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUta.c)
 *     ?GetMonitorDpiInfo@@YAXPEAUHDEV__@@HPEAUtagRECT@@PEAU_DPI_INFORMATION@@@Z @ 0x14000B6A8 (-GetMonitorDpiInfo@@YAXPEAUHDEV__@@HPEAUtagRECT@@PEAU_DPI_INFORMATION@@@Z.c)
 *     DrvIsUniformSpaceMapping @ 0x14000B9A0 (DrvIsUniformSpaceMapping.c)
 *     IntersectRect @ 0x14000C128 (IntersectRect.c)
 *     GreCreateDisplayDC @ 0x14000E640 (GreCreateDisplayDC.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     GreGetDeviceCaps @ 0x14001D350 (GreGetDeviceCaps.c)
 *     GrepDeleteDC @ 0x140034C20 (GrepDeleteDC.c)
 *     ?GetMonitorLogicalDPI@@YAGPEAUHDEV__@@@Z @ 0x140151DA0 (-GetMonitorLogicalDPI@@YAGPEAUHDEV__@@@Z.c)
 *     ?GetMonitorPhysicalDPI@@YAGPEAUHDEV__@@@Z @ 0x1401589BC (-GetMonitorPhysicalDPI@@YAGPEAUHDEV__@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

struct tagMONITOR *__fastcall SetMonitorData(struct tagMONITOR *Monitor, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 UserSessionState; // rax
  int v5; // ebp
  unsigned __int16 MonitorLogicalDPI; // si
  __int64 v7; // r13
  unsigned __int16 MonitorPhysicalDPI; // r12
  HDEV v9; // r15
  HDC DisplayDC; // rbx
  __int32 v11; // eax
  int v12; // r14d
  char v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _REFCOUNTED_DPI_INFORMATION *MonitorDpiInfo; // rbx
  __int64 v17; // r8
  HDEV v19; // rax
  __int64 v20; // rax
  int v21; // ecx
  __int64 v22; // rax
  int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rcx
  _DWORD *v26; // rax
  __int64 v27; // rax
  int v28; // ecx
  unsigned int v29; // ecx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  _DWORD *v34; // rcx
  _DWORD *v35; // rdx
  int v36; // [rsp+24h] [rbp-74h]
  __int64 v37; // [rsp+28h] [rbp-70h]
  __m128i v38; // [rsp+38h] [rbp-60h]

  v2 = a2;
  UserSessionState = W32GetUserSessionState();
  v5 = 1;
  MonitorLogicalDPI = 96;
  v7 = *(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 16LL) + 56 * v2;
  v37 = *(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 16LL);
  MonitorPhysicalDPI = 96;
  v9 = *(HDEV *)(v7 + 40);
  v38 = *(__m128i *)(((unsigned int)DrvIsUniformSpaceMapping(v37) != 0 ? 0x14 : 0) + v7 + 56);
  DisplayDC = (HDC)GreCreateDisplayDC(v9, 0);
  v11 = v38.m128i_i32[0];
  v12 = _mm_cvtsi128_si32(_mm_srli_si128(v38, 4));
  v36 = v12;
  if ( DisplayDC )
  {
    if ( (GreGetDeviceCaps(DisplayDC, 94) & 0x4000) != 0 )
    {
      v5 = 0;
    }
    else
    {
      MonitorLogicalDPI = GetMonitorLogicalDPI(v9);
      MonitorPhysicalDPI = GetMonitorPhysicalDPI(v9);
    }
    GrepDeleteDC(DisplayDC);
    if ( !v5 )
      goto LABEL_5;
    v11 = v38.m128i_i32[0];
  }
  if ( !v12 && !v11 )
  {
    v13 = 1;
    v32 = W32GetUserSessionState();
    MonitorDpiInfo = *(struct _REFCOUNTED_DPI_INFORMATION **)(v32 + 71472);
    *(_QWORD *)(v32 + 71472) = 0LL;
    goto LABEL_17;
  }
LABEL_5:
  v13 = 0;
  MonitorDpiInfo = CreateMonitorDpiInfo();
  if ( !MonitorDpiInfo )
    return 0LL;
LABEL_17:
  if ( !Monitor )
  {
    if ( v13 )
    {
      v33 = W32GetUserSessionState();
      Monitor = *(struct tagMONITOR **)(v33 + 71464);
      *(_QWORD *)(v33 + 71464) = 0LL;
    }
    else
    {
      Monitor = CreateMonitor(v15, v14, v17);
      if ( !Monitor )
      {
        GreDeleteFastMutex(MonitorDpiInfo);
        return 0LL;
      }
    }
  }
  *(_WORD *)(*((_QWORD *)Monitor + 5) + 64LL) = MonitorLogicalDPI;
  if ( (unsigned int)DrvIsUniformSpaceMapping(v37) )
    MonitorLogicalDPI = *(_WORD *)(v37 + 32);
  *(_WORD *)(*((_QWORD *)Monitor + 5) + 60LL) = MonitorLogicalDPI;
  v25 = *((_QWORD *)Monitor + 5);
  *((_WORD *)Monitor + 36) = MonitorPhysicalDPI;
  *(_WORD *)(v25 + 84) = *(_WORD *)(v7 + 92);
  v26 = (_DWORD *)*((_QWORD *)Monitor + 16);
  if ( v26 )
  {
    --*v26;
    v34 = (_DWORD *)*((_QWORD *)Monitor + 16);
    if ( !*v34 )
      GreDeleteFastMutex(v34);
    *((_QWORD *)Monitor + 16) = 0LL;
  }
  GetMonitorDpiInfo(
    v9,
    v13,
    (struct tagRECT *)(*((_QWORD *)Monitor + 5) + 28LL),
    (struct _REFCOUNTED_DPI_INFORMATION *)((char *)MonitorDpiInfo + 4));
  *(_DWORD *)MonitorDpiInfo = 1;
  *((_QWORD *)Monitor + 16) = MonitorDpiInfo;
  v27 = *((_QWORD *)Monitor + 5);
  v28 = *(_DWORD *)(v27 + 24);
  if ( v5 )
    v29 = v28 | 1;
  else
    v29 = v28 & 0xFFFFFFFE;
  *(_DWORD *)(v27 + 24) = v29;
  v30 = *((_QWORD *)Monitor + 5);
  v31 = *(_QWORD *)(v30 + 28) - v38.m128i_i64[0];
  if ( !v31 )
    v31 = *(_QWORD *)(v30 + 36) - v38.m128i_i64[1];
  if ( v31 )
  {
    *(_DWORD *)(v30 + 44) += v38.m128i_i32[0] - *(_DWORD *)(v30 + 28);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 48LL) += v36 - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 32LL);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 52LL) += v38.m128i_i32[2] - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 36LL);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 56LL) += v38.m128i_i32[3] - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 40LL);
  }
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 28LL) = v38.m128i_i32[0];
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 32LL) = v36;
  *(_QWORD *)(*((_QWORD *)Monitor + 5) + 36LL) = v38.m128i_i64[1];
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 68LL) = *(_DWORD *)(v7 + 56);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 72LL) = *(_DWORD *)(v7 + 60);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 76LL) = *(_DWORD *)(v7 + 64);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 80LL) = *(_DWORD *)(v7 + 68);
  if ( v5 )
    v19 = v9;
  else
    v19 = *(HDEV *)v37;
  *((_QWORD *)Monitor + 10) = v19;
  v20 = *((_QWORD *)Monitor + 5);
  *((_QWORD *)Monitor + 11) = v9;
  v21 = *(_DWORD *)(v20 + 44);
  if ( *(_DWORD *)(v20 + 52) < v21 )
    *(_DWORD *)(v20 + 52) = v21;
  v22 = *((_QWORD *)Monitor + 5);
  v23 = *(_DWORD *)(v22 + 48);
  if ( *(_DWORD *)(v22 + 56) < v23 )
    *(_DWORD *)(v22 + 56) = v23;
  if ( !(unsigned int)IntersectRect(
                        (_DWORD *)(*((_QWORD *)Monitor + 5) + 44LL),
                        (int *)(*((_QWORD *)Monitor + 5) + 44LL),
                        (int *)(*((_QWORD *)Monitor + 5) + 28LL)) )
  {
    v35 = (_DWORD *)*((_QWORD *)Monitor + 5);
    v35[11] = v35[7];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 48LL) = v35[8];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 52LL) = v35[9];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 56LL) = v35[10];
  }
  if ( v13 )
  {
    v24 = W32GetUserSessionState();
    tagKERNELDISPLAYINFO::SharedMixedObjectPointerFieldpMonitorPrimary<tagMONITOR>::operator=(
      (_QWORD *)(*(_QWORD *)(v24 + 57008) + 104LL),
      (__int64)Monitor);
  }
  return Monitor;
}
