/*
 * XREFs of NtUserCreateWindowEx @ 0x1C006D320
 * Callers:
 *     <none>
 * Callees:
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C007A800 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00E4A98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C0109704 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E808 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0139FF4 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C013A068 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUHMENU__@@@Z @ 0x1C013B72C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUHMENU__@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 */

__int64 __fastcall NtUserCreateWindowEx(
        int a1,
        ULONG64 a2,
        __m128i *a3,
        __m128i *a4,
        unsigned int a5,
        __int32 a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11,
        void *a12,
        __int64 a13,
        unsigned int a14,
        unsigned __int16 a15,
        int a16,
        __int64 a17)
{
  __int64 v18; // rbx
  int v19; // esi
  struct tagWND *v20; // r15
  __int64 v21; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 *v28; // rax
  int v29; // eax
  size_t *v30; // rsi
  __m128i **v31; // rcx
  __m128i *v32; // rax
  __m128i v33; // xmm0
  unsigned __int64 v34; // xmm0_8
  ULONG64 v35; // r8
  __int64 v36; // rsi
  __int64 v37; // r14
  __int64 *v38; // rax
  __m128i *v39; // r14
  __m128i *v40; // rax
  unsigned __int64 v41; // xmm0_8
  unsigned __int64 v42; // r8
  __m128i *v43; // rdi
  __m128i *v44; // rax
  unsigned __int64 v45; // xmm0_8
  unsigned __int64 v46; // r8
  unsigned __int64 v47; // r8
  ULONG64 v48; // r8
  unsigned __int64 v49; // r8
  __int64 *Window; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v64; // rax
  __int64 v65; // rcx
  int v66; // [rsp+90h] [rbp-108h]
  size_t Size[2]; // [rsp+98h] [rbp-100h] BYREF
  int v68; // [rsp+A8h] [rbp-F0h]
  _QWORD v69[2]; // [rsp+B0h] [rbp-E8h] BYREF
  __int64 v70; // [rsp+C0h] [rbp-D8h]
  __m128i v71; // [rsp+D0h] [rbp-C8h] BYREF
  __m128i v72; // [rsp+E0h] [rbp-B8h] BYREF
  __int128 v73; // [rsp+F0h] [rbp-A8h] BYREF
  void (*v74)(void *); // [rsp+100h] [rbp-98h]
  __int128 v75; // [rsp+110h] [rbp-88h] BYREF
  __int64 v76; // [rsp+120h] [rbp-78h]
  __int128 v77; // [rsp+128h] [rbp-70h] BYREF
  __int64 v78; // [rsp+138h] [rbp-60h]
  _BYTE v79[80]; // [rsp+148h] [rbp-50h] BYREF

  *(_OWORD *)Size = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v18 = 0LL;
  v19 = 0;
  v66 = 0;
  v73 = 0LL;
  v74 = 0LL;
  v68 = 0;
  EnterCrit(0LL, 0LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v69);
  if ( a10 == -3 )
  {
    v20 = 0LL;
    if ( !IS_USERCRIT_OWNED_AT_ALL() )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
    v21 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v21 = *ThreadWin32Thread;
    if ( v21 )
    {
      v23 = *(_QWORD *)(v21 + 456);
      if ( v23 )
        v20 = *(struct tagWND **)(v23 + 104);
    }
    v24 = a16;
    if ( (a16 & 1) != 0 )
      goto LABEL_105;
  }
  else
  {
    if ( a10 )
    {
      v20 = (struct tagWND *)ValidateHwnd(a10);
      if ( !v20 )
        goto LABEL_95;
    }
    else
    {
      v20 = 0LL;
    }
    v24 = a16;
  }
  if ( (v24 & 0xFFFFFFF8) == 0 )
  {
    if ( (a5 & 0xC0000000) == 0x40000000 || !a11 )
    {
      v25 = SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v79, a11);
      v70 = *(_QWORD *)(v25 + 16);
      v26 = **(_QWORD **)v25;
      if ( v26 != *(_QWORD *)v69[0] )
      {
        SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v69);
        if ( v26 )
        {
          v69[0] = *(_QWORD *)(v26 + 152);
          ++*(_DWORD *)(v69[0] + 8LL);
        }
        else
        {
          v69[0] = gSmartObjNullRef;
        }
      }
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v79);
LABEL_15:
      v27 = 0LL;
      v28 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v28 )
        v27 = *v28;
      if ( *(_DWORD *)(v27 + 632) <= 0x400u )
        v29 = *(_DWORD *)(v27 + 648);
      else
        LOWORD(v29) = 0;
      if ( (v29 & 0x800) != 0 )
        a1 &= 0x800777FF;
      if ( (a1 & 0x8A7F77FF) != a1 )
        a1 &= 0x8A7F77FF;
      v30 = (size_t *)a2;
      v31 = (__m128i **)MmUserProbeAddress;
      if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        v32 = (__m128i *)MmUserProbeAddress;
        if ( a2 < MmUserProbeAddress )
          v32 = (__m128i *)a2;
        v33 = *v32;
        Size[0] = v32->m128i_i64[0];
        v34 = _mm_srli_si128(v33, 8).m128i_u64[0];
        Size[1] = v34;
        if ( v34 )
        {
          if ( LODWORD(Size[0]) > (HIDWORD(Size[0]) & 0x7FFFFFFFu) )
            ExRaiseAccessViolation();
          if ( (Size[0] & 0x8000000000000000uLL) != 0LL )
          {
            v48 = v34 + LODWORD(Size[0]) + 1LL;
            if ( v48 < v34 || v48 > MmUserProbeAddress )
              ExRaiseAccessViolation();
          }
          else
          {
            if ( (v34 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v35 = v34 + LODWORD(Size[0]) + 2LL;
            if ( v35 < v34 || v35 > MmUserProbeAddress )
              ExRaiseAccessViolation();
          }
          v36 = Win32AllocPoolWithQuotaZInit(LODWORD(Size[0]) + 2LL, 2020897621LL);
          Size[1] = v36;
          if ( !v36 )
            ExRaiseStatus(-1073741801);
          v68 = 1;
          v37 = 0LL;
          v38 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( v38 )
            v37 = *v38;
          *(_QWORD *)&v73 = *(_QWORD *)(v37 + 16);
          *(_QWORD *)(v37 + 16) = &v73;
          *((_QWORD *)&v73 + 1) = v36;
          v74 = Win32FreePool;
          memmove((void *)Size[1], (const void *)v34, LODWORD(Size[0]));
          *(_WORD *)(Size[1] + 2 * ((unsigned __int64)LODWORD(Size[0]) >> 1)) = 0;
          HIDWORD(Size[0]) ^= (HIDWORD(Size[0]) ^ (LODWORD(Size[0]) + 2)) & 0x7FFFFFFF;
          v31 = (__m128i **)MmUserProbeAddress;
        }
        else
        {
          LODWORD(Size[0]) = 0;
        }
        v30 = Size;
      }
      v39 = a3;
      if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        v40 = *v31;
        if ( a3 < *v31 )
          v40 = a3;
        v71 = *v40;
        v41 = _mm_srli_si128(v71, 8).m128i_u64[0];
        if ( v41 )
        {
          if ( v71.m128i_i32[0] > (v71.m128i_i32[1] & 0x7FFFFFFFu) )
            ExRaiseAccessViolation();
          if ( v71.m128i_i32[1] < 0 )
          {
            v49 = v41 + v71.m128i_u32[0] + 1LL;
            if ( v49 < v41 || v49 > (unsigned __int64)*v31 )
              ExRaiseAccessViolation();
          }
          else
          {
            if ( (v71.m128i_i8[8] & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v42 = v41 + v71.m128i_u32[0] + 2LL;
            if ( v42 < v41 || v42 > (unsigned __int64)*v31 )
              ExRaiseAccessViolation();
          }
        }
        else
        {
          v71.m128i_i32[0] = 0;
        }
        v39 = &v71;
      }
      v43 = a4;
      if ( a4 )
      {
        v44 = *v31;
        if ( a4 < *v31 )
          v44 = a4;
        v72 = *v44;
        v45 = _mm_srli_si128(v72, 8).m128i_u64[0];
        if ( v45 )
        {
          if ( v72.m128i_i32[0] > (v72.m128i_i32[1] & 0x7FFFFFFFu) )
            ExRaiseAccessViolation();
          if ( v72.m128i_i32[1] < 0 )
          {
            v47 = v45 + v72.m128i_u32[0] + 1LL;
            if ( v47 < v45 || v47 > (unsigned __int64)*v31 )
              ExRaiseAccessViolation();
          }
          else
          {
            if ( (v72.m128i_i8[8] & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v46 = v45 + v72.m128i_u32[0] + 2LL;
            if ( v46 < v45 || v46 > (unsigned __int64)*v31 )
              ExRaiseAccessViolation();
          }
        }
        else
        {
          v72.m128i_i32[0] = 0;
        }
        v43 = &v72;
      }
      *(_QWORD *)&v77 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v77;
      *((_QWORD *)&v77 + 1) = v20;
      if ( v20 )
        HMLockObject(v20);
      Window = (__int64 *)xxxCreateWindowEx(
                            a1,
                            (__int64)v30,
                            (__int64)v39,
                            v43,
                            a5,
                            a6,
                            a7,
                            a8,
                            a9,
                            v20,
                            (__int64)v69,
                            a12,
                            a13,
                            a14,
                            a15,
                            a16,
                            a17);
      if ( Window )
        v54 = *Window;
      else
        v54 = 0LL;
      ThreadUnlock1(v52, v51, v53);
      v19 = v66;
      goto LABEL_84;
    }
    v64 = ValidateHmenu(a11);
    v70 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v69, v64);
    if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v69) )
    {
      v65 = v70;
      if ( !v70 )
        v65 = *(_QWORD *)v69[0];
      *(_QWORD *)&v75 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v75;
      *((_QWORD *)&v75 + 1) = v65;
      HMLockObject(v65);
      v66 = 1;
      goto LABEL_15;
    }
LABEL_95:
    v54 = 0LL;
    goto LABEL_90;
  }
LABEL_105:
  v54 = 0LL;
  UserSetLastError(87LL);
LABEL_84:
  if ( v68 )
  {
    v58 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v58 )
      v18 = *v58;
    *(_QWORD *)(v18 + 16) = v73;
    ((void (__fastcall *)(_QWORD))v74)(*((_QWORD *)&v73 + 1));
  }
  if ( v19 )
    ThreadUnlock1(v56, v55, v57);
LABEL_90:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v69);
  UserSessionSwitchLeaveCrit(v60, v59, v61, v62);
  return v54;
}
