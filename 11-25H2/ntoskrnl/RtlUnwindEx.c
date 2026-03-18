/*
 * XREFs of RtlUnwindEx @ 0x14025C330
 * Callers:
 *     RtlUnwind @ 0x14025DB00 (RtlUnwind.c)
 *     __C_specific_handler @ 0x1404F9030 (__C_specific_handler.c)
 *     KiSystemServiceHandler @ 0x1406B29C0 (KiSystemServiceHandler.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x1402571F0 (KeQueryCurrentStackInformationEx.c)
 *     RtlInitializeExtendedContext2 @ 0x140258C20 (RtlInitializeExtendedContext2.c)
 *     RtlpGetStackLimits @ 0x140258FB0 (RtlpGetStackLimits.c)
 *     RtlpxVirtualUnwind @ 0x140259250 (RtlpxVirtualUnwind.c)
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     RtlLookupFunctionEntry @ 0x14025C9D0 (RtlLookupFunctionEntry.c)
 *     RtlGuardCheckExceptionHandler @ 0x14025D464 (RtlGuardCheckExceptionHandler.c)
 *     RtlpCopyContext @ 0x14025D610 (RtlpCopyContext.c)
 *     RtlGetExtendedContextLength @ 0x140261030 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x140262930 (RtlInitializeExtendedContext.c)
 *     RtlpGetStackLimitsEx @ 0x140456190 (RtlpGetStackLimitsEx.c)
 *     RtlVirtualUnwind @ 0x140472BC0 (RtlVirtualUnwind.c)
 *     RtlCaptureContext2 @ 0x1404FA280 (RtlCaptureContext2.c)
 *     RtlRestoreContext @ 0x1404FA420 (RtlRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1405E4858 (RtlGuardCheckLongJumpTarget.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x14069DFC0 (ZwRaiseException.c)
 *     KeGetCurrentStackPointer @ 0x14069F0C0 (KeGetCurrentStackPointer.c)
 *     _alloca_probe @ 0x1406A89B0 (_alloca_probe.c)
 *     RtlpExecuteHandlerForUnwind @ 0x1406A9070 (RtlpExecuteHandlerForUnwind.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall RtlUnwindEx(ULONG_PTR a1, __int64 a2, int *a3, __int64 a4, int *a5, __int64 a6)
{
  int *v7; // r15
  unsigned int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 CurrentStackPointer; // rax
  char v13; // bl
  ULONG_PTR v14; // r12
  int v15; // eax
  char *v16; // r13
  __int64 v17; // r8
  unsigned int *v18; // r9
  __int64 v19; // r10
  int v20; // eax
  ULONG_PTR v21; // r10
  int v22; // esi
  bool v23; // zf
  int v24; // r10d
  __int64 v25; // rax
  int *v26; // rcx
  int v27; // ecx
  __int64 v28; // r8
  int v29; // ecx
  int *v30; // rax
  int *v31; // r14
  int v32; // et0
  char v33; // al
  char v34; // al
  __int64 v35; // rcx
  int *v36; // rax
  int *v37; // r12
  int v38; // eax
  __int64 v40; // rsi
  __int64 v41; // r8
  __int64 v42; // r9
  int v43; // r9d
  int v44; // r10d
  int v45; // r11d
  int v46; // r14d
  int v47; // esi
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rcx
  void *v50; // rsp
  void *v51; // rsp
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rcx
  void *v54; // rsp
  void *v55; // rsp
  int v56; // [rsp+60h] [rbp+0h] BYREF
  unsigned int v57; // [rsp+64h] [rbp+4h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp+8h] BYREF
  ULONG_PTR v59; // [rsp+70h] [rbp+10h] BYREF
  char *v60; // [rsp+78h] [rbp+18h] BYREF
  int *v61; // [rsp+80h] [rbp+20h]
  __int64 v62; // [rsp+88h] [rbp+28h] BYREF
  __int64 v63; // [rsp+90h] [rbp+30h] BYREF
  __int64 v64; // [rsp+98h] [rbp+38h] BYREF
  __int64 v65; // [rsp+A0h] [rbp+40h]
  unsigned __int64 v66; // [rsp+A8h] [rbp+48h]
  int *v67; // [rsp+B0h] [rbp+50h]
  __int64 v68; // [rsp+B8h] [rbp+58h] BYREF
  __int64 v69; // [rsp+C0h] [rbp+60h]
  __int64 v70; // [rsp+C8h] [rbp+68h]
  unsigned __int64 v71; // [rsp+D0h] [rbp+70h] BYREF
  __int64 v72; // [rsp+D8h] [rbp+78h]
  __int64 v73; // [rsp+E0h] [rbp+80h]
  ULONG_PTR v74; // [rsp+E8h] [rbp+88h]
  __int64 v75; // [rsp+F0h] [rbp+90h]
  int *v76; // [rsp+F8h] [rbp+98h]
  __int64 v77; // [rsp+100h] [rbp+A0h]
  __int64 v78; // [rsp+108h] [rbp+A8h]
  __int64 v79; // [rsp+110h] [rbp+B0h]
  int v80; // [rsp+118h] [rbp+B8h]
  int *v81; // [rsp+120h] [rbp+C0h]
  __int128 v82; // [rsp+128h] [rbp+C8h] BYREF
  __int64 v83; // [rsp+138h] [rbp+D8h]
  int v84; // [rsp+140h] [rbp+E0h] BYREF
  __int64 v85; // [rsp+148h] [rbp+E8h]
  __int64 v86; // [rsp+150h] [rbp+F0h]
  int v87; // [rsp+158h] [rbp+F8h]

  v7 = a5;
  v70 = a2;
  v67 = a3;
  v69 = a4;
  v65 = a6;
  memset_0(&v71, 0, 0x50uLL);
  memset_0(&v84, 0, 0x98uLL);
  v63 = 0LL;
  v9 = 0;
  v64 = 0LL;
  v59 = 0LL;
  v62 = 0LL;
  v57 = 0;
  v60 = 0LL;
  v56 = 0;
  CurrentStackPointer = KeGetCurrentStackPointer(v11, v10);
  KeQueryCurrentStackInformationEx(CurrentStackPointer, &v56, &v60, &v59);
  v13 = v56 == 10;
  if ( !RtlpGetStackLimits(&v60, &v59) )
LABEL_2:
    RtlRaiseStatus(-1073741784);
  v46 = 1048587;
  if ( (_BYTE)KiKernelCetEnabled )
  {
    v46 = 1048715;
    if ( (a5[12] & 0x100080) != 0x100080 )
    {
      RtlGetExtendedContextLength(1048715LL, &v57);
      v9 = v57;
      v52 = v57 + 15LL;
      if ( v52 <= v57 )
        v52 = 0xFFFFFFFFFFFFFF0LL;
      v53 = v52 & 0xFFFFFFFFFFFFFFF0uLL;
      v54 = alloca(v53);
      v55 = alloca(v53);
      v7 = &v56;
      RtlInitializeExtendedContext(&v56, 1048715LL, &v68);
    }
    if ( !(_BYTE)KiKernelCetEnabled )
      goto LABEL_58;
    v47 = 1296;
  }
  else
  {
    v47 = 1264;
  }
  v9 = v47 + 15;
LABEL_58:
  v48 = v9 + 15LL;
  if ( v48 <= v9 )
    v48 = 0xFFFFFFFFFFFFFF0LL;
  v49 = v48 & 0xFFFFFFFFFFFFFFF0uLL;
  v50 = alloca(v49);
  v51 = alloca(v49);
  v81 = &v56;
  RtlInitializeExtendedContext2((__int64)&v56, v46, &v68, 0LL);
  v61 = &v56;
  v31 = v7;
  RtlCaptureContext2(v7);
  v35 = v65;
  if ( v65 )
    *(_BYTE *)(v65 + 6) = 1;
  if ( !a3 )
  {
    v84 = -1073741785;
    v85 = 0LL;
    v86 = *((_QWORD *)v7 + 31);
    v67 = &v84;
    v87 = 0;
  }
  v14 = v59;
  v15 = 2;
  BugCheckParameter1 = 0LL;
  v16 = v60;
  if ( !a1 )
    v15 = 6;
  v56 = v15;
  while ( 1 )
  {
    v66 = *((_QWORD *)v31 + 31);
    v68 = RtlLookupFunctionEntry(v66, &v62, v35);
    RtlpCopyContext(v61, v31, v17, v68);
    v83 = 0LL;
    v82 = 0LL;
    v20 = RtlpxVirtualUnwind(2, v62, v66, v18, v19, 0LL, &v64, &BugCheckParameter1, &v63, (__int64)&v82);
    if ( v20 < 0 )
      RtlRaiseStatus(v20);
    v21 = BugCheckParameter1;
    if ( (BugCheckParameter1 & 7) != 0 || BugCheckParameter1 < (unsigned __int64)v16 || BugCheckParameter1 >= v14 )
    {
      if ( v13 != 1 )
        goto LABEL_2;
      v13 = 2;
      if ( !(unsigned __int8)RtlpGetStackLimitsEx(BugCheckParameter1, 0LL) )
        goto LABEL_2;
      v21 = BugCheckParameter1;
      v14 = v59;
      v16 = v60;
    }
    if ( a1 && !v13 && a1 < v21 )
      goto LABEL_2;
    if ( v63 )
    {
      v22 = 0;
      v75 = v70;
      while ( 1 )
      {
        v23 = a1 == v21;
        v24 = v56;
        if ( v23 )
        {
          v24 = v56 | 0x20;
          v56 |= 0x20u;
        }
        v25 = v69;
        v26 = v67;
        v67[1] = v24;
        *((_QWORD *)v31 + 15) = v25;
        v71 = v66;
        v72 = v62;
        v73 = v68;
        v77 = v63;
        v78 = v64;
        v79 = v65;
        v74 = BugCheckParameter1;
        v76 = v31;
        v80 = v22;
        if ( (v31[12] & 0x100040) == 0x100040 )
        {
          v27 = RtlpExecuteHandlerForUnwind(v26, BugCheckParameter1, v31, &v71);
        }
        else
        {
          v27 = RtlpExecuteHandlerForUnwind(v26, BugCheckParameter1, v31, &v71);
          if ( (v31[12] & 0x100040) == 0x100040 )
            v31[12] &= ~0x40u;
        }
        v56 &= 0xFFFFFF9F;
        v29 = v27 - 1;
        if ( v29 )
        {
          if ( v29 != 2 )
            RtlRaiseStatus(-1073741786);
          v66 = v71;
          v62 = v72;
          v68 = v73;
          RtlpCopyContext(v7, v76, v28, v73);
          v40 = (__int64)v81;
          v61 = v81;
          v31 = v7;
          RtlpCopyContext(v81, v7, v41, v42);
          v63 = RtlVirtualUnwind(2, v44, v45, v43, v40, (__int64)&v64, (__int64)&BugCheckParameter1, 0LL);
          if ( v63 != v77 || (v21 = BugCheckParameter1, BugCheckParameter1 != v74) || v64 != v78 )
            __fastfail(0x27u);
          v22 = v80;
          v65 = v79;
          v33 = v56 | 0x40;
          v56 |= 0x40u;
          if ( (BugCheckParameter1 & 7) == 0 && BugCheckParameter1 < v14 && BugCheckParameter1 >= (unsigned __int64)v16
            || v13 != 1 )
          {
            goto LABEL_25;
          }
          v13 = 2;
          RtlpGetStackLimitsEx(BugCheckParameter1, 0LL);
          v14 = v59;
          v16 = v60;
        }
        else
        {
          if ( BugCheckParameter1 != a1 )
          {
            v30 = v31;
            v31 = v61;
            v61 = v30;
          }
          v32 = _mm_getcsr();
          v57 = v32;
          v31[13] = v32;
          v31[70] = v32;
        }
        v33 = v56;
        v21 = BugCheckParameter1;
LABEL_25:
        if ( (v33 & 0x40) == 0 )
          goto LABEL_26;
      }
    }
    if ( v21 != a1 )
    {
      v36 = v31;
      v31 = v61;
      v61 = v36;
    }
LABEL_26:
    v34 = 0;
    if ( v13 != 2 )
      v34 = v13;
    if ( (v21 & 7) != 0 || v21 >= v14 || v21 < (unsigned __int64)v16 )
      break;
    if ( v21 == a1 )
      goto LABEL_36;
    v35 = v65;
    v13 = v34;
  }
  if ( v21 == a1 )
  {
LABEL_36:
    v37 = v67;
    *((_QWORD *)v31 + 15) = v69;
    v38 = *v37;
    if ( *v37 == -2147483607 || (*((_QWORD *)v31 + 31) = v70, v38 = *v37, *v37 == -2147483610) )
    {
      if ( v38 == -2147483610 && !(_BYTE)KiKernelCetEnabled )
        RtlGuardCheckLongJumpTarget(*(_QWORD *)(*((_QWORD *)v37 + 4) + 80LL));
    }
    else
    {
      *v37 = -1073741785;
      if ( !(_BYTE)KiKernelCetEnabled )
        RtlGuardCheckExceptionHandler(*((_QWORD *)v31 + 31));
    }
    return RtlRestoreContext(v31, v37);
  }
  else
  {
    if ( v66 == *((_QWORD *)v31 + 31) )
      RtlRaiseStatus(-1073741569);
    return ZwRaiseException(v67, v31, 0LL);
  }
}
