/*
 * XREFs of PopFxRegisterDeviceWorker @ 0x14074CF20
 * Callers:
 *     PoFxRegisterCoreDevice @ 0x14074B900 (PoFxRegisterCoreDevice.c)
 *     PopFxRegisterDevice @ 0x14074CC80 (PopFxRegisterDevice.c)
 * Callees:
 *     IoAllocateIrp @ 0x14025AD60 (IoAllocateIrp.c)
 *     PopFxActivateComponent @ 0x1402AE4EC (PopFxActivateComponent.c)
 *     PopFxBugCheck @ 0x1403A9948 (PopFxBugCheck.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     PopPlRegisterComponent @ 0x14049AD70 (PopPlRegisterComponent.c)
 *     PopPlRegisterDevice @ 0x1404A880C (PopPlRegisterDevice.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x1404B59F0 (PopFxFindAcpiDeviceByUniqueId.c)
 *     IoInitializeRemoveLockEx @ 0x1404B8620 (IoInitializeRemoveLockEx.c)
 *     PopFxRegisterDeviceWithPep @ 0x1404BEBF8 (PopFxRegisterDeviceWithPep.c)
 *     PopFxCreateDeviceCommon @ 0x1405CE344 (PopFxCreateDeviceCommon.c)
 *     PopFxReleaseAcpiRefDevice @ 0x1405CF414 (PopFxReleaseAcpiRefDevice.c)
 *     PopFxVerifyDependencies @ 0x14074D8E4 (PopFxVerifyDependencies.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxRegisterDeviceWorker(
        ULONG_PTR a1,
        const UNICODE_STRING *a2,
        __int128 *a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        char a7,
        __int64 a8,
        _QWORD *a9)
{
  __int64 v9; // r14
  int v10; // ebx
  __int64 *v13; // rsi
  int v14; // ebx
  __int64 Pool2; // rax
  unsigned int v16; // r9d
  _DWORD *v17; // r15
  unsigned int v18; // r10d
  unsigned int v19; // r11d
  unsigned int i; // r8d
  __int64 v21; // rdx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // r11
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r13
  ULONG_PTR v31; // rsi
  int AcpiDeviceByUniqueId; // eax
  __int64 v33; // rdx
  __int64 v34; // r8
  char *v35; // rdi
  int DeviceCommon; // eax
  char *v37; // r15
  __int64 v38; // rax
  _QWORD *v39; // rsi
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int64 v42; // r9
  char *v43; // r9
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  _OWORD *v47; // rbx
  __int64 v48; // r8
  unsigned int v49; // edx
  __int128 *v50; // r12
  __int128 v51; // xmm0
  char *v52; // r9
  unsigned int v53; // r11d
  int v54; // eax
  int v55; // eax
  char *v56; // r8
  unsigned int v57; // edx
  __int64 v58; // rcx
  _DWORD *v59; // r10
  char *v60; // r8
  __int64 v61; // r8
  __int64 v62; // rax
  unsigned __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // r10
  char *v66; // rcx
  _QWORD *v67; // rcx
  unsigned int v68; // ebx
  __int64 v69; // r12
  unsigned int v70; // r9d
  __int64 v71; // r10
  __int64 v72; // r8
  __int64 v73; // rcx
  PIRP Irp; // rax
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // rbx
  _DWORD *v78; // rdi
  int v80; // [rsp+38h] [rbp-99h]
  unsigned int v81; // [rsp+38h] [rbp-99h]
  PVOID P; // [rsp+40h] [rbp-91h] BYREF
  _QWORD *v83; // [rsp+48h] [rbp-89h]
  __int64 v84; // [rsp+50h] [rbp-81h]
  volatile signed __int32 *v85; // [rsp+58h] [rbp-79h] BYREF
  char *v86; // [rsp+60h] [rbp-71h]
  _DWORD *v87; // [rsp+68h] [rbp-69h]
  __int64 v88; // [rsp+70h] [rbp-61h]
  int v89; // [rsp+78h] [rbp-59h]
  char *v90; // [rsp+80h] [rbp-51h]
  char *v91; // [rsp+88h] [rbp-49h]
  ULONG_PTR v92; // [rsp+90h] [rbp-41h]
  __int64 v93; // [rsp+98h] [rbp-39h]
  __int64 v94; // [rsp+A0h] [rbp-31h]
  _OWORD *v95; // [rsp+A8h] [rbp-29h]
  __int64 v96; // [rsp+B0h] [rbp-21h]
  __int64 v97; // [rsp+B8h] [rbp-19h]
  __int64 v98; // [rsp+C0h] [rbp-11h]
  __int64 v99; // [rsp+C8h] [rbp-9h]
  unsigned int v103; // [rsp+138h] [rbp+67h]

  v9 = a5;
  v85 = 0LL;
  P = 0LL;
  v10 = -1;
  v80 = -1;
  v13 = 0LL;
  if ( !a5 || (a8 & 0x18) == 0x18 )
    return (unsigned int)-1073741811;
  Pool2 = ExAllocatePool2(0x100uLL, 12LL * a5, 0x4D584650u);
  v16 = 0;
  v87 = (_DWORD *)Pool2;
  v17 = (_DWORD *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v18 = 0;
  v103 = 0;
  v19 = 0;
  for ( i = 0; i < (unsigned int)v9; ++i )
  {
    v21 = a4 + 56LL * i;
    v22 = *(_DWORD *)(v21 + 28);
    if ( !v22
      || v22 > 1 && (!*(_QWORD *)a3 || !*((_QWORD *)a3 + 1) || !*((_QWORD *)a3 + 2) || *(_DWORD *)(v21 + 24) >= v22)
      || (v23 = v22 + v18, v22 + v18 < v18) )
    {
LABEL_27:
      v14 = -1073741811;
      goto LABEL_94;
    }
    v24 = *(_DWORD *)(v21 + 40);
    v18 = v23;
    if ( v24 )
    {
      if ( v24 >= (unsigned int)v9 )
        goto LABEL_27;
      v25 = v24 + v19;
      if ( v24 + v19 < v19 )
        goto LABEL_27;
      v103 = v24 + v19;
      while ( v16 < *(_DWORD *)(v21 + 40) )
      {
        v26 = *(unsigned int *)(*(_QWORD *)(v21 + 48) + 4LL * v16);
        if ( (unsigned int)v26 >= (unsigned int)v9 )
          goto LABEL_27;
        ++v17[3 * v26 + 2];
        ++v16;
      }
      v19 = v25;
      v16 = 0;
    }
    if ( (*(_BYTE *)(v21 + 16) & 4) != 0 )
    {
      if ( v10 != -1 )
        goto LABEL_27;
      v10 = i;
      v80 = i;
    }
  }
  v90 = 0LL;
  v96 = 8 * v9;
  v27 = 480 * v9;
  v88 = 480 * v9;
  v84 = 0LL;
  v91 = 0LL;
  v83 = 0LL;
  v28 = 24LL * v18;
  v29 = v28 + 480 * v9;
  v30 = v29 + 312;
  if ( a7 <= 0 )
  {
    v30 = v28 + 480 * v9;
    v29 = 0LL;
  }
  v99 = v29;
  if ( v19 )
  {
    v84 = v30;
    v83 = (_QWORD *)(8LL * v19 + v30);
    v30 += 16LL * v19;
  }
  v89 = PopFxRuntimeLogNumberEntries * v9;
  v92 = v30 + 24LL * (unsigned int)(PopFxRuntimeLogNumberEntries * v9);
  v97 = 8 * (int)v9 + 16LL;
  v93 = v97 + 40 * v9;
  v31 = v28 + v93;
  v94 = v28 + v93;
  AcpiDeviceByUniqueId = PopFxFindAcpiDeviceByUniqueId(a2, (__int64 **)&v85);
  if ( AcpiDeviceByUniqueId >= 0 )
  {
    P = (PVOID)v85;
    _InterlockedOr(v85 + 58, 1u);
    v35 = (char *)P;
    goto LABEL_39;
  }
  if ( AcpiDeviceByUniqueId == -1073741738 )
  {
    v14 = -1073741661;
  }
  else
  {
    DeviceCommon = PopFxCreateDeviceCommon((__int64)a2, v33, v34, 0, (__int64 *)&P);
    v35 = (char *)P;
    v14 = DeviceCommon;
    if ( P )
    {
      v27 = v88;
LABEL_39:
      IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(v35 + 240), 0x4D584650u, 0, 0, 0x20u);
      v37 = (char *)ExAllocatePool2(0x40uLL, v92, 0x4D584650u);
      if ( v37 && (v38 = ExAllocatePool2(0x40uLL, v31, 0x4D584650u), (v39 = (_QWORD *)v38) != 0LL) )
      {
        v40 = *a3;
        v41 = a3[1];
        v42 = v96;
        *((_DWORD *)v35 + 217) = v9;
        v43 = &v37[v42];
        *((_QWORD *)v35 + 109) = v37;
        *((_OWORD *)v35 + 7) = v40;
        v95 = v43;
        v44 = a3[2];
        *((_OWORD *)v35 + 8) = v41;
        v45 = a3[3];
        *((_OWORD *)v35 + 9) = v44;
        v46 = a3[4];
        *((_OWORD *)v35 + 10) = v45;
        *((_OWORD *)v35 + 11) = v46;
        *((_QWORD *)v35 + 24) = a6;
        *((_DWORD *)v35 + 238) = v80;
        *((_QWORD *)v35 + 80) = 0LL;
        *(_QWORD *)(v35 + 652) = 5LL;
        *((_QWORD *)v35 + 164) = v35 + 1304;
        *((_QWORD *)v35 + 163) = v35 + 1304;
        *(_QWORD *)v38 = a8;
        v86 = &v37[v27];
        *(_DWORD *)(v38 + 8) = v9;
        if ( v103 )
        {
          v90 = &v37[v84];
          v91 = (char *)v83 + (_QWORD)v37;
        }
        v47 = v43 + 48;
        v88 = v38 + v97;
        v48 = -48LL - (_QWORD)v37;
        v98 = -48LL - (_QWORD)v37;
        v83 = (_QWORD *)(v38 + v93);
        v84 = -16 - v38;
        v49 = 0;
        while ( 1 )
        {
          v81 = v49;
          if ( v49 >= (unsigned int)v9 )
            break;
          *(_QWORD *)(*((_QWORD *)v35 + 109) + 8LL * v49) = v43;
          v50 = (__int128 *)(a4 + 56LL * v49);
          if ( (unsigned __int64)v47 + v48 > v92 - 472 )
            goto LABEL_60;
          v51 = *v50;
          *((_DWORD *)v47 - 8) = v49;
          *((_QWORD *)v47 + 4) = v35;
          *(_OWORD *)v43 = v51;
          *((_QWORD *)v47 - 1) = PopFxComponentWork;
          *(_QWORD *)v47 = v43;
          *((_QWORD *)v47 - 3) = 0LL;
          KeInitializeEvent((PRKEVENT)((char *)v47 + 56), NotificationEvent, 1u);
          v52 = v86;
          v53 = 0;
          *((_QWORD *)v47 + 10) = 0LL;
          *((_DWORD *)v47 + 27) = *((_DWORD *)v50 + 7);
          *((_QWORD *)v47 + 14) = v52;
          v54 = *((_DWORD *)v50 + 6);
          *((_DWORD *)v47 + 41) = -1;
          *((_DWORD *)v47 + 30) = v54;
          *((_QWORD *)v47 + 19) = 0LL;
          *((_DWORD *)v47 + 42) = 0;
          *((_QWORD *)v47 + 52) = (char *)v47 + 408;
          *((_QWORD *)v47 + 51) = (char *)v47 + 408;
          *((_QWORD *)v47 + 50) = (char *)v47 + 392;
          *((_QWORD *)v47 + 49) = (char *)v47 + 392;
          v55 = *((_DWORD *)v50 + 10);
          if ( v55 )
          {
            v56 = v90;
            v57 = 0;
            *((_QWORD *)v47 + 16) = v90;
            *((_DWORD *)v47 + 31) = v55;
            do
            {
              v58 = v57++;
              *(_DWORD *)v56 = *(_DWORD *)(*((_QWORD *)v50 + 6) + 4 * v58);
              v56 += 8;
            }
            while ( v57 < *((_DWORD *)v47 + 31) );
            v90 = v56;
          }
          v59 = v87;
          if ( v87[3 * v81 + 2] )
          {
            v60 = v91;
            *((_QWORD *)v47 + 18) = v91;
            v91 = &v60[8 * v59[3 * v81 + 2]];
          }
          v61 = v88;
          v62 = v94;
          v63 = v88 + v84 + 16;
          v39[v81 + 2] = v88;
          if ( v63 > v62 - 40 )
            goto LABEL_60;
          *(_OWORD *)v61 = *v50;
          *(_QWORD *)(v61 + 16) = *((_QWORD *)v50 + 2);
          *(_DWORD *)(v61 + 28) = *((_DWORD *)v50 + 7);
          *(_QWORD *)(v61 + 32) = v83;
          *(_DWORD *)(v61 + 24) = *((_DWORD *)v50 + 6);
          v64 = -16LL - (_QWORD)v37;
          v93 = -16LL - (_QWORD)v37;
          v84 = -16LL - (_QWORD)v39;
          while ( v53 < *((_DWORD *)v47 + 27) )
          {
            if ( (unsigned __int64)&v52[v64 + 16] > v92 - 24 )
              goto LABEL_60;
            v65 = *((_QWORD *)v50 + 4);
            v66 = v86;
            *((_DWORD *)v86 + 4) = *(_DWORD *)(v65 + 24LL * v53 + 16);
            *(_QWORD *)v66 = *(_QWORD *)(v65 + 24LL * v53);
            *((_QWORD *)v66 + 1) = *(_QWORD *)(v65 + 24LL * v53 + 8);
            v86 = v66 + 24;
            if ( (unsigned __int64)v83 + v84 + 16 > v94 - 24 )
              goto LABEL_60;
            v67 = v83;
            *((_DWORD *)v83 + 4) = *(_DWORD *)(v65 + 24LL * v53 + 16);
            *v67 = *(_QWORD *)(v65 + 24LL * v53);
            v52 = v86;
            v67[1] = *(_QWORD *)(v65 + 24LL * v53 + 8);
            v64 = v93;
            ++v53;
            v83 = v67 + 3;
          }
          v43 = (char *)v95 + 472;
          v88 = v61 + 40;
          v48 = v98;
          v47 = (_OWORD *)((char *)v47 + 472);
          v49 = v81 + 1;
          v95 = (_OWORD *)((char *)v95 + 472);
        }
        *((_DWORD *)v35 + 220) = v89;
        *((_QWORD *)v35 + 111) = &v37[v30];
        if ( !v103 || (v14 = PopFxVerifyDependencies(v87, v35, (unsigned int)v9), v14 >= 0) )
        {
          v68 = 0;
          if ( (_DWORD)v9 )
          {
            v69 = 0LL;
            do
            {
              v70 = 0;
              v71 = *(_QWORD *)(v69 + *((_QWORD *)v35 + 109));
              if ( *(_DWORD *)(v71 + 172) )
              {
                do
                {
                  v72 = *(_QWORD *)(*((_QWORD *)v35 + 109) + 8LL * *(unsigned int *)(*(_QWORD *)(v71 + 176) + 8LL * v70));
                  v73 = *(unsigned int *)(v72 + 188);
                  *(_DWORD *)(*(_QWORD *)(v72 + 192) + 8 * v73) = v68;
                  *(_DWORD *)(*(_QWORD *)(v72 + 192) + 8 * v73 + 4) = v70++;
                  ++*(_DWORD *)(v72 + 188);
                }
                while ( v70 < *(_DWORD *)(v71 + 172) );
              }
              PopFxActivateComponent((__int64)v35, v71, 0LL, 1);
              ++v68;
              v69 += 8LL;
            }
            while ( v68 < (unsigned int)v9 );
          }
          if ( a7 > 0 )
          {
            *((_QWORD *)v35 + 3) = &v37[v99];
            Irp = IoAllocateIrp(a7 + 2, 0);
            *((_QWORD *)v35 + 2) = Irp;
            if ( !Irp )
            {
LABEL_60:
              v14 = -1073741670;
              goto LABEL_87;
            }
          }
          if ( !(unsigned __int8)PopFxRegisterDeviceWithPep(a1, (int)a2, (__int64)v35, (int)v39) )
            PopFxBugCheck(0x601uLL, (ULONG_PTR)v35, (ULONG_PTR)v39, 0LL);
          PopPlRegisterDevice((__int64)v35, v75, v76);
          if ( (*v39 & 0x10) == 0 && ((*v39 & 8) != 0 || PopPoFxSystemIrpWaitForReportDevicePoweredReg) )
          {
            _InterlockedOr((volatile signed __int32 *)v35 + 216, 0x80u);
            v35 = (char *)P;
          }
          if ( (*(_BYTE *)v39 & 0x20) != 0 )
          {
            _InterlockedOr((volatile signed __int32 *)v35 + 216, 0x1000u);
            v35 = (char *)P;
          }
          if ( (*(_BYTE *)v39 & 0x40) != 0 )
          {
            _InterlockedOr((volatile signed __int32 *)v35 + 216, 1u);
            v35 = (char *)P;
          }
          v77 = (__int64)&v37[v96];
          if ( (_DWORD)v9 )
          {
            v78 = (_DWORD *)((char *)v39 + v97 + 28);
            do
            {
              if ( (*(_BYTE *)(v78 - 3) & 2) != 0 )
                *(_DWORD *)(v77 + 92) |= 2u;
              *(_DWORD *)(v77 + 156) = *v78;
              PopPlRegisterComponent(v77);
              v77 += 472LL;
              v78 += 10;
              --v9;
            }
            while ( v9 );
            v35 = (char *)P;
          }
          v37 = 0LL;
          v14 = 0;
          *a9 = v35;
          v35 = 0LL;
        }
LABEL_87:
        ExFreePoolWithTag(v39, 0x4D584650u);
      }
      else
      {
        v14 = -1073741670;
      }
      v13 = (__int64 *)v85;
      if ( v35 && !v85 )
        ExFreePoolWithTag(v35, 0x4D584650u);
      if ( v37 )
        ExFreePoolWithTag(v37, 0x4D584650u);
      v17 = v87;
      goto LABEL_94;
    }
  }
  v13 = (__int64 *)v85;
LABEL_94:
  ExFreePoolWithTag(v17, 0x4D584650u);
  if ( v13 )
    PopFxReleaseAcpiRefDevice((__int64)v13, (void *)0x66466F50);
  return (unsigned int)v14;
}
