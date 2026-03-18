/*
 * XREFs of ?xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind@@PEAUtagRECT@@@Z @ 0x140187530
 * Callers:
 *     ?xxxGetArrangeRectFromHitTarget@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x140269330 (-xxxGetArrangeRectFromHitTarget@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindow.c)
 * Callees:
 *     IntersectRect @ 0x140035778 (IntersectRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?TransformShellProvidedRectangle@@YAXPEBUtagWND@@AEBUtagPOINT@@1PEAUtagMONITOR@@W4FrameBoundsOverlapInfo@@PEAUtagRECT@@@Z @ 0x140186FEC (-TransformShellProvidedRectangle@@YAXPEBUtagWND@@AEBUtagPOINT@@1PEAUtagMONITOR@@W4FrameBoundsOve.c)
 *     ?ArrangementStyleFromOverlap@@YA?AW4ArrStyleFromOverlap@@W4FrameBoundsOverlapInfo@@@Z @ 0x140187104 (-ArrangementStyleFromOverlap@@YA-AW4ArrStyleFromOverlap@@W4FrameBoundsOverlapInfo@@@Z.c)
 *     ?SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z @ 0x14018716C (-SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?SetPreviewInsertAfter@DWM_ARRANGEMENT_DATA@@QEAAXPEAUHWND__@@PEBUMOVESIZEDATA@@@Z @ 0x140187278 (-SetPreviewInsertAfter@DWM_ARRANGEMENT_DATA@@QEAAXPEAUHWND__@@PEBUMOVESIZEDATA@@@Z.c)
 *     ?xxxArrangementInfoHandler@CallShell@@YA_NPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@PEAU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x140187A98 (-xxxArrangementInfoHandler@CallShell@@YA_NPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@PEAU_.c)
 *     ?SHData_StoreShellArrangeInfo@MOVESIZEDATA@@QEAAXAEBU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x140187C10 (-SHData_StoreShellArrangeInfo@MOVESIZEDATA@@QEAAXAEBU_WINDOW_ARRANGEMENT_INFO@@@Z.c)
 *     ?SetShrinkWidth@DWM_ARRANGEMENT_DATA@@QEAAXIPEBUMOVESIZEDATA@@@Z @ 0x140187EB4 (-SetShrinkWidth@DWM_ARRANGEMENT_DATA@@QEAAXIPEBUMOVESIZEDATA@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

bool __fastcall xxxGetArrangeRectFromShell(__int64 a1, __int64 a2, unsigned int a3, int *a4)
{
  __int64 v4; // rbp
  __int64 v6; // rdi
  __int64 v8; // rdx
  bool v9; // bl
  bool v10; // si
  __int64 v11; // rax
  int v12; // edx
  int v13; // r8d
  __int64 v14; // r9
  char v15; // si
  int v16; // ecx
  int v17; // ecx
  bool v18; // bl
  bool v19; // bp
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  __int64 v23; // rcx
  bool v24; // al
  int v25; // edi
  int v26; // ebp
  int v27; // ebx
  int v28; // esi
  __int64 UserSessionState; // rax
  int *v30; // r8
  __int64 v31; // rdx
  int *v32; // r8
  __int64 v33; // rcx
  int v34; // r9d
  int v35; // eax
  int v36; // ecx
  bool v37; // zf
  int v38; // r9d
  int v39; // edx
  int v40; // eax
  int v41; // edx
  int v42; // ecx
  int v43; // r10d
  __int64 v44; // rdx
  int v45; // r10d
  bool v46; // bp
  __int64 v47; // rax
  __int64 v48; // rdx
  char v49; // r12
  char v50; // r13
  int v51; // edi
  int v52; // ebp
  int v53; // ebx
  int v54; // esi
  __int64 v55; // rax
  __int64 v57; // [rsp+20h] [rbp-138h]
  char v58; // [rsp+20h] [rbp-138h]
  __int16 v59; // [rsp+30h] [rbp-128h]
  __int64 v60; // [rsp+40h] [rbp-118h]
  __int64 v61; // [rsp+48h] [rbp-110h]
  __int64 v62; // [rsp+50h] [rbp-108h]
  __int64 v63; // [rsp+58h] [rbp-100h]
  __int64 v64; // [rsp+60h] [rbp-F8h]
  __int64 v65; // [rsp+68h] [rbp-F0h]
  char v66; // [rsp+70h] [rbp-E8h]
  char v67; // [rsp+71h] [rbp-E7h]
  __int128 v69; // [rsp+80h] [rbp-D8h] BYREF
  _BYTE v70[16]; // [rsp+90h] [rbp-C8h] BYREF
  char v71[16]; // [rsp+A0h] [rbp-B8h] BYREF
  _DWORD v72[20]; // [rsp+B0h] [rbp-A8h]

  v4 = a2;
  *(_QWORD *)&v69 = a2;
  v6 = a1;
  memset_0(v70, 0, 0x68uLL);
  if ( (unsigned __int8)CallShell::xxxArrangementInfoHandler(v6, a3, v70) )
  {
    v15 = v72[0];
    v16 = v72[0];
    *(_OWORD *)a4 = *(_OWORD *)&v72[1];
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( !v17 )
      {
        v23 = *(_QWORD *)&WPP_GLOBAL_Control;
        v24 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
        v66 = v24;
        v67 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v24 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v25 = a4[3];
          v26 = a4[1];
          v27 = a4[2];
          v28 = *a4;
          LOBYTE(v23) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          UserSessionState = W32GetUserSessionState(v23, v8);
          WPP_RECORDER_AND_TRACE_SF_dddddd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v66,
            v67,
            *(_QWORD *)(UserSessionState + 69416),
            4u,
            1u,
            0x19u,
            (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
            v28,
            v26,
            v27,
            v25,
            v27 - v28,
            v25 - v26);
          v6 = a1;
          v4 = v69;
        }
        v30 = (int *)(*(_QWORD *)(v4 + 40) + 44LL);
        v69 = 0LL;
        if ( !(unsigned int)IntersectRect(&v69, a4, v30) )
          goto LABEL_65;
        v33 = v69 - *(_QWORD *)a4;
        if ( (_QWORD)v69 == *(_QWORD *)a4 )
          v33 = *((_QWORD *)&v69 + 1) - *((_QWORD *)a4 + 1);
        if ( v33 )
        {
LABEL_65:
          v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
            && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
          v46 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !v9 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_73;
          v47 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v31);
          v59 = 26;
        }
        else
        {
          if ( *v32 > *a4 )
            goto LABEL_44;
          v34 = a4[1];
          v35 = v32[1];
          if ( v35 > v34 )
            goto LABEL_44;
          v36 = (*v32 == *a4) | 2;
          v37 = v35 == v34;
          v38 = a4[2];
          if ( !v37 )
            v36 = *v32 == *a4;
          v39 = v32[2];
          if ( v39 < v38 )
            goto LABEL_44;
          v40 = v36 | 4;
          v37 = v39 == v38;
          v41 = a4[3];
          if ( !v37 )
            v40 = v36;
          v42 = v32[3];
          if ( v42 < v41 )
          {
LABEL_44:
            v43 = 0;
          }
          else
          {
            v43 = v40 | 8;
            if ( v42 != v41 )
              v43 = v40;
          }
          if ( (unsigned int)ArrangementStyleFromOverlap(v43) )
          {
            LODWORD(v57) = v45;
            TransformShellProvidedRectangle(*(_QWORD *)(v6 + 16), (int *)(v6 + 112), (int *)(v6 + 104), v4, v57, a4);
            *(_DWORD *)(v6 + 200) |= 0x10000000u;
            v49 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
               && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
               && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
            v50 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v49 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v51 = a4[3];
              v52 = a4[1];
              v53 = a4[2];
              v54 = *a4;
              v55 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v48);
              LODWORD(v65) = v51 - v52;
              LODWORD(v64) = v53 - v54;
              LODWORD(v63) = v51;
              LODWORD(v62) = v53;
              LODWORD(v61) = v52;
              LODWORD(v60) = v54;
              WPP_RECORDER_AND_TRACE_SF_dddddd(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v49,
                v50,
                *(_QWORD *)(v55 + 69416),
                4u,
                1u,
                0x1Cu,
                (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
                v60,
                v61,
                v62,
                v63,
                v64,
                v65);
              v6 = a1;
            }
            goto LABEL_62;
          }
          v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
            && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
          v46 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !v9 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_73;
          v47 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v44);
          v59 = 27;
        }
        v14 = *(_QWORD *)(v47 + 69416);
        LOBYTE(v13) = v46;
        v58 = 3;
        goto LABEL_72;
      }
      if ( v17 != 1 )
      {
        v18 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
        v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v18 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v20 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
          LOBYTE(v21) = v19;
          LOBYTE(v22) = v18;
          WPP_RECORDER_AND_TRACE_SF_d(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v22,
            v21,
            *(_QWORD *)(v20 + 69416),
            3,
            1,
            29,
            (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
            v15);
        }
        goto LABEL_73;
      }
    }
LABEL_62:
    MOVESIZEDATA::SHData_StoreShellArrangeInfo((MOVESIZEDATA *)v6, (const struct _WINDOW_ARRANGEMENT_INFO *)v71);
    return v72[0] == 1;
  }
  v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( !v9 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    goto LABEL_73;
  v11 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
  LOBYTE(v13) = v10;
  v14 = *(_QWORD *)(v11 + 69416);
  v59 = 24;
  v58 = 4;
LABEL_72:
  LOBYTE(v12) = v9;
  WPP_RECORDER_AND_TRACE_SF_(
    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
    v12,
    v13,
    v14,
    v58,
    1,
    v59,
    (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
LABEL_73:
  DWM_ARRANGEMENT_DATA::SetShrinkWidth((DWM_ARRANGEMENT_DATA *)(v6 + 400), 0, (const struct MOVESIZEDATA *)v6);
  DWM_ARRANGEMENT_DATA::SendShrinkWidthToDwm((DWM_ARRANGEMENT_DATA *)(v6 + 400), (const struct MOVESIZEDATA *)v6);
  DWM_ARRANGEMENT_DATA::SetPreviewInsertAfter((DWM_ARRANGEMENT_DATA *)(v6 + 400), 0LL, (const struct MOVESIZEDATA *)v6);
  return 0;
}
