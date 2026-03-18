/*
 * XREFs of RtlUnwindEx @ 0x14027CD20
 * Callers:
 *     RtlUnwind @ 0x14027B9C0 (RtlUnwind.c)
 *     __C_specific_handler @ 0x1404FB740 (__C_specific_handler.c)
 *     KiSystemServiceHandler @ 0x1406BDCC0 (KiSystemServiceHandler.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x140259BD0 (KeQueryCurrentStackInformationEx.c)
 *     RtlpCopyContext @ 0x14027BAE0 (RtlpCopyContext.c)
 *     RtlGuardCheckExceptionHandler @ 0x14027BD18 (RtlGuardCheckExceptionHandler.c)
 *     RtlLookupFunctionEntry @ 0x14027D3A0 (RtlLookupFunctionEntry.c)
 *     RtlpxVirtualUnwind @ 0x14027F030 (RtlpxVirtualUnwind.c)
 *     RtlInitializeExtendedContext2 @ 0x14027FCB0 (RtlInitializeExtendedContext2.c)
 *     RtlpGetStackLimits @ 0x14027FEF0 (RtlpGetStackLimits.c)
 *     RtlGetExtendedContextLength2 @ 0x14027FF40 (RtlGetExtendedContextLength2.c)
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     RtlInitializeExtendedContext @ 0x1403E7270 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1403E72F0 (RtlGetExtendedContextLength.c)
 *     RtlpGetStackLimitsEx @ 0x140456330 (RtlpGetStackLimitsEx.c)
 *     RtlVirtualUnwind @ 0x140471220 (RtlVirtualUnwind.c)
 *     RtlCaptureContext2 @ 0x1404FCA00 (RtlCaptureContext2.c)
 *     RtlRestoreContext @ 0x1404FCBA0 (RtlRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1405F0BAC (RtlGuardCheckLongJumpTarget.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x1406A9290 (ZwRaiseException.c)
 *     KeGetCurrentStackPointer @ 0x1406AA390 (KeGetCurrentStackPointer.c)
 *     _alloca_probe @ 0x1406B3C80 (_alloca_probe.c)
 *     RtlpExecuteHandlerForUnwind @ 0x1406B4340 (RtlpExecuteHandlerForUnwind.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall RtlUnwindEx(ULONG_PTR a1, __int64 a2, int *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 CurrentStackPointer; // rax
  char v12; // bl
  ULONG_PTR v13; // r15
  char *v14; // r12
  int v15; // r13d
  int v16; // r9d
  int v17; // eax
  int v18; // edx
  ULONG_PTR v19; // r10
  int v20; // r14d
  __int64 v21; // rax
  int *v22; // rcx
  int v23; // eax
  int v24; // ecx
  int v25; // ecx
  __int64 *v26; // rax
  __int64 v27; // rsi
  int v28; // et0
  __int64 *v29; // r14
  char v30; // al
  __int64 v31; // rcx
  __int64 *v32; // rax
  int *v33; // r15
  int v34; // eax
  __int64 v36; // r14
  int v37; // r9d
  int v38; // r10d
  int v39; // r11d
  unsigned int v40; // esi
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rcx
  void *v43; // rsp
  void *v44; // rsp
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rcx
  void *v47; // rsp
  void *v48; // rsp
  __int64 *v49; // [rsp+60h] [rbp+0h] BYREF
  int v50; // [rsp+68h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp+10h] BYREF
  ULONG_PTR v52; // [rsp+78h] [rbp+18h] BYREF
  char *v53; // [rsp+80h] [rbp+20h] BYREF
  __int64 v54; // [rsp+88h] [rbp+28h] BYREF
  __int64 v55; // [rsp+90h] [rbp+30h] BYREF
  __int64 v56; // [rsp+98h] [rbp+38h] BYREF
  __int64 v57; // [rsp+A0h] [rbp+40h]
  __int64 v58; // [rsp+A8h] [rbp+48h]
  int *v59; // [rsp+B0h] [rbp+50h]
  __int64 v60; // [rsp+B8h] [rbp+58h] BYREF
  __int64 *v61; // [rsp+C0h] [rbp+60h]
  __int64 *v62; // [rsp+C8h] [rbp+68h]
  __int64 v63; // [rsp+D0h] [rbp+70h]
  __int64 v64; // [rsp+D8h] [rbp+78h]
  __int64 v65; // [rsp+E0h] [rbp+80h] BYREF
  __int64 v66; // [rsp+E8h] [rbp+88h]
  __int64 v67; // [rsp+F0h] [rbp+90h]
  ULONG_PTR v68; // [rsp+F8h] [rbp+98h]
  __int64 v69; // [rsp+100h] [rbp+A0h]
  __int64 v70; // [rsp+108h] [rbp+A8h]
  __int64 v71; // [rsp+110h] [rbp+B0h]
  __int64 v72; // [rsp+118h] [rbp+B8h]
  __int64 v73; // [rsp+120h] [rbp+C0h]
  int v74; // [rsp+128h] [rbp+C8h]
  __int128 v75; // [rsp+130h] [rbp+D0h] BYREF
  __int64 v76; // [rsp+140h] [rbp+E0h]
  int v77; // [rsp+150h] [rbp+F0h] BYREF
  __int64 v78; // [rsp+158h] [rbp+F8h]
  __int64 v79; // [rsp+160h] [rbp+100h]
  int v80; // [rsp+168h] [rbp+108h]

  v7 = (__int64 *)a5;
  v64 = a2;
  v59 = a3;
  v63 = a4;
  v61 = (__int64 *)a5;
  v57 = a6;
  memset_0(&v65, 0, 0x50uLL);
  memset_0(&v77, 0, 0x98uLL);
  v55 = 0LL;
  v56 = 0LL;
  v52 = 0LL;
  v54 = 0LL;
  LODWORD(v49) = 0;
  v53 = 0LL;
  v50 = 0;
  CurrentStackPointer = KeGetCurrentStackPointer(v10, v9);
  KeQueryCurrentStackInformationEx(CurrentStackPointer, &v50, &v53, &v52);
  v12 = v50 == 10;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v53, &v52) )
LABEL_2:
    RtlRaiseStatus(3221225512LL);
  v40 = 1048587;
  if ( (_BYTE)KiKernelCetEnabled )
  {
    v40 = 1048715;
    if ( (*(_DWORD *)(a5 + 48) & 0x100080) != 0x100080 )
    {
      RtlGetExtendedContextLength(1048715LL, &v49);
      v41 = (unsigned int)v49 + 15LL;
      if ( v41 <= (unsigned int)v49 )
        v41 = 0xFFFFFFFFFFFFFF0LL;
      v42 = v41 & 0xFFFFFFFFFFFFFFF0uLL;
      v43 = alloca(v42);
      v44 = alloca(v42);
      v7 = (__int64 *)&v49;
      v61 = (__int64 *)&v49;
      RtlInitializeExtendedContext(&v49, 1048715LL, &v60);
    }
  }
  RtlGetExtendedContextLength2(v40, &v49, 0LL);
  v45 = (unsigned int)v49 + 15LL;
  if ( v45 <= (unsigned int)v49 )
    v45 = 0xFFFFFFFFFFFFFF0LL;
  v46 = v45 & 0xFFFFFFFFFFFFFFF0uLL;
  v47 = alloca(v46);
  v48 = alloca(v46);
  v29 = (__int64 *)&v49;
  v62 = (__int64 *)&v49;
  RtlInitializeExtendedContext2(&v49, v40, &v60, 0LL);
  v49 = (__int64 *)&v49;
  v27 = (__int64)v7;
  RtlCaptureContext2(v7);
  v31 = v57;
  if ( v57 )
    *(_BYTE *)(v57 + 6) = 1;
  if ( !a3 )
  {
    v77 = -1073741785;
    v78 = 0LL;
    v79 = v7[31];
    v59 = &v77;
    v80 = 0;
  }
  v13 = v52;
  BugCheckParameter1 = 0LL;
  v14 = v53;
  v15 = 2;
  if ( !a1 )
    v15 = 6;
  while ( 1 )
  {
    v58 = *(_QWORD *)(v27 + 248);
    v60 = RtlLookupFunctionEntry(v58, &v54, v31);
    RtlpCopyContext((__int64)v29, v27);
    v76 = 0LL;
    v75 = 0LL;
    v17 = RtlpxVirtualUnwind(
            2,
            v54,
            v58,
            v16,
            (__int64)v29,
            0LL,
            (__int64)&v56,
            (__int64)&BugCheckParameter1,
            (__int64)&v55,
            (__int64)&v75);
    if ( v17 < 0 )
      RtlRaiseStatus((unsigned int)v17);
    v19 = BugCheckParameter1;
    if ( (BugCheckParameter1 & 7) != 0 || BugCheckParameter1 < (unsigned __int64)v14 || BugCheckParameter1 >= v13 )
    {
      if ( v12 != 1 )
        goto LABEL_2;
      v12 = 2;
      if ( !(unsigned __int8)RtlpGetStackLimitsEx(BugCheckParameter1, 0LL) )
        goto LABEL_2;
      v19 = BugCheckParameter1;
      v13 = v52;
      v14 = v53;
    }
    if ( a1 && !v12 && a1 < v19 )
      goto LABEL_2;
    if ( v55 )
    {
      v20 = 0;
      v69 = v64;
      while ( 1 )
      {
        if ( a1 == v19 )
          v15 |= 0x20u;
        v21 = v63;
        v22 = v59;
        v59[1] = v15;
        *(_QWORD *)(v27 + 120) = v21;
        v65 = v58;
        v66 = v54;
        v67 = v60;
        v71 = v55;
        v72 = v56;
        v73 = v57;
        v68 = BugCheckParameter1;
        v70 = v27;
        v74 = v20;
        if ( (*(_DWORD *)(v27 + 48) & 0x100040) == 0x100040 )
        {
          v24 = RtlpExecuteHandlerForUnwind(v22, BugCheckParameter1, v27, &v65);
        }
        else
        {
          v23 = RtlpExecuteHandlerForUnwind(v22, BugCheckParameter1, v27, &v65);
          v18 = *(_DWORD *)(v27 + 48);
          v24 = v23;
          if ( (v18 & 0x100040) == 0x100040 )
          {
            v18 &= ~0x40u;
            *(_DWORD *)(v27 + 48) = v18;
          }
        }
        v15 &= 0xFFFFFF9F;
        v25 = v24 - 1;
        if ( v25 )
        {
          if ( v25 != 2 )
            RtlRaiseStatus(3221225510LL);
          v36 = (__int64)v61;
          v58 = v65;
          v54 = v66;
          v60 = v67;
          RtlpCopyContext((__int64)v61, v70);
          v49 = v62;
          v27 = v36;
          RtlpCopyContext((__int64)v62, v36);
          v55 = RtlVirtualUnwind(2, v38, v39, v37, (__int64)v62, (__int64)&v56, (__int64)&BugCheckParameter1, 0LL);
          if ( v55 != v71 || (v19 = BugCheckParameter1, BugCheckParameter1 != v68) || v56 != v72 )
            __fastfail(0x27u);
          v15 |= 0x40u;
          v20 = v74;
          v57 = v73;
          if ( (BugCheckParameter1 & 7) == 0 && BugCheckParameter1 < v13 && BugCheckParameter1 >= (unsigned __int64)v14
            || v12 != 1 )
          {
            goto LABEL_24;
          }
          v12 = 2;
          RtlpGetStackLimitsEx(BugCheckParameter1, 0LL);
          v13 = v52;
          v14 = v53;
        }
        else
        {
          if ( BugCheckParameter1 != a1 )
          {
            v26 = (__int64 *)v27;
            v27 = (__int64)v49;
            v49 = v26;
          }
          v28 = _mm_getcsr();
          v50 = v28;
          *(_DWORD *)(v27 + 52) = v28;
          *(_DWORD *)(v27 + 280) = v28;
        }
        v19 = BugCheckParameter1;
LABEL_24:
        if ( (v15 & 0x40) == 0 )
        {
          v29 = v49;
          goto LABEL_26;
        }
      }
    }
    if ( v19 != a1 )
    {
      v32 = (__int64 *)v27;
      v27 = (__int64)v29;
      v29 = v32;
      v49 = v32;
    }
LABEL_26:
    v30 = 0;
    if ( v12 != 2 )
      v30 = v12;
    if ( (v19 & 7) != 0 || v19 >= v13 || v19 < (unsigned __int64)v14 )
      break;
    if ( v19 == a1 )
      goto LABEL_36;
    v31 = v57;
    v12 = v30;
  }
  if ( v19 == a1 )
  {
LABEL_36:
    v33 = v59;
    *(_QWORD *)(v27 + 120) = v63;
    v34 = *v33;
    if ( *v33 == -2147483607 || (*(_QWORD *)(v27 + 248) = v64, v34 = *v33, *v33 == -2147483610) )
    {
      if ( v34 == -2147483610 && !(_BYTE)KiKernelCetEnabled )
        RtlGuardCheckLongJumpTarget(*(_QWORD *)(*((_QWORD *)v33 + 4) + 80LL));
    }
    else
    {
      *v33 = -1073741785;
      if ( !(_BYTE)KiKernelCetEnabled )
        RtlGuardCheckExceptionHandler(*(_QWORD *)(v27 + 248), v18);
    }
    return RtlRestoreContext(v27, v33);
  }
  else
  {
    if ( v58 == *(_QWORD *)(v27 + 248) )
      RtlRaiseStatus(3221225727LL);
    return ZwRaiseException(v59, v27, 0LL);
  }
}
